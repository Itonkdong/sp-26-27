#!/usr/bin/env python3
"""Run classroom exercises against input and expected-output files."""

import argparse
from decimal import Decimal, InvalidOperation
import os
from pathlib import Path
import re
import shlex
import subprocess
import tempfile


TESTS = Path(__file__).resolve().parent
ROOT = TESTS.parent
RUN_TIMEOUT = 2

AUD8_PROMPTS = re.compile(
    r"^(?:Size (?:fo|of) the (?:first|second) array:"
    r"|Elements of the (?:first|second) array:|[ab]\[\d+\] =)[ \t]*\n",
    re.MULTILINE,
)

AUD8_RESULTS = {
    "ex1": {
        "arrays are equal": "equal",
        "arrays are not equal": "not equal",
        "unequal": "not equal",
    },
    "ex4": {
        "nizata e rastechka": "increasing",
        "nizata e opagjachka": "decreasing",
        "nizata ne e nitu rastechka nitu opagjachka": "neither",
        "strictly increasing": "increasing",
        "strictly decreasing": "decreasing",
    },
}


def aud8_output(exercise, output, input_text):
    """Accept plain results and the known formats from the presentation."""
    if exercise == "ex1":
        output = AUD8_PROMPTS.sub("", output)
    if exercise in AUD8_RESULTS:
        result = " ".join(output.split()).lower().rstrip(".!")
        return AUD8_RESULTS[exercise].get(result, result)

    if exercise == "ex2":
        match = re.fullmatch(
            r"\s*Sum even:\s*(\S+)\s+Sum odd:\s*(\S+)\s+Rel:\s*(\S+)\s*",
            output,
        )
        if match:
            output = " ".join(match.groups())
        parts = output.split()
        if len(parts) == 3:
            try:
                ratio = Decimal(parts[2])
            except InvalidOperation:
                pass
            else:
                if ratio.is_finite():
                    return parts[0], parts[1], ratio
    elif exercise == "ex3":
        output = output.lstrip().removeprefix("The scalar product is:")
    elif exercise in ("ex5", "ex6"):
        prompt = "Golemina na niza: "
        if output.startswith(prompt):
            output = output.removeprefix(prompt)
            if exercise == "ex6" and output.startswith("Broj na rotiranja: "):
                output = output.removeprefix("Broj na rotiranja: ")
                first_line, newline, result = output.partition("\n")
                if newline and first_line.split() == input_text.split()[2:]:
                    output = result
    elif exercise == "ex8":
        rows = output.strip().splitlines()
        if len(rows) == 10:
            counts = []
            for digit, row in enumerate(rows):
                match = re.fullmatch(rf"\s*{digit}\s*->\s*(\d+)\s*", row)
                if not match:
                    break
                counts.append(match[1])
            else:
                return counts

    return output.split()


def show_output(label, output):
    if not output:
        print(f"  {label} <empty>")
        return
    print(f"  {label}")
    for line in output[:2000].splitlines():
        print(f"    {line}")
    if len(output) > 2000:
        print("    ...")


def run_case(executable, exercise, input_path, build_dir):
    input_text = input_path.read_text(encoding="utf-8")
    expected = input_path.with_suffix(".out").read_text(encoding="utf-8")
    name = f"{exercise}/{input_path.stem}"
    try:
        result = subprocess.run(
            [str(executable)], input=input_text, capture_output=True,
            text=True, encoding="utf-8", errors="replace",
            timeout=RUN_TIMEOUT, cwd=build_dir,
        )
    except subprocess.TimeoutExpired:
        print(f"FAIL {name} (timed out after {RUN_TIMEOUT} seconds)")
        return False
    except OSError as error:
        print(f"FAIL {name} ({error})")
        return False

    if result.returncode != 0:
        print(f"FAIL {name} (exit status {result.returncode})")
        if result.stderr:
            show_output("stderr", result.stderr)
        return False
    actual_value = aud8_output(exercise, result.stdout, input_text)
    expected_value = aud8_output(exercise, expected, input_text)
    if actual_value != expected_value:
        print(f"FAIL {name}")
        show_output("Expected", expected)
        show_output("Actual", result.stdout)
        return False
    print(f"PASS {name}")
    return True


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("session", choices=["aud8"])
    parser.add_argument("folder", help="folder inside the session, such as solved or prep")
    parser.add_argument("exercise", nargs="?", help="run one exercise, such as ex6")
    args = parser.parse_args()

    session_dir = (ROOT / "aud" / args.session).resolve()
    folder = (session_dir / args.folder).resolve()
    if Path(args.folder).is_absolute() or session_dir not in folder.parents or not folder.is_dir():
        parser.error(f"choose an existing folder inside {args.session}")
    fixture_dir = TESTS / args.session
    exercises = [p for p in sorted(fixture_dir.iterdir()) if p.is_dir()]
    if args.exercise:
        exercises = [p for p in exercises if p.name == args.exercise]
    if not exercises:
        parser.error("no exercises matched")

    compiler = shlex.split(os.environ.get("CXX", "c++"))
    if not compiler:
        parser.error("CXX must name a compiler")
    passed = total = 0
    with tempfile.TemporaryDirectory(prefix="sp-tests-") as temp:
        build_dir = Path(temp)
        for cases in exercises:
            exercise = cases.name
            inputs = sorted(cases.glob("*.in"))
            if not inputs or {p.stem for p in inputs} != {p.stem for p in cases.glob("*.out")}:
                parser.error(f"{exercise} needs matching .in and .out files")
            total += len(inputs)
            source = folder / f"{exercise}.cpp"
            if not source.is_file():
                print(f"FAIL {exercise} (source missing, {len(inputs)} cases skipped)")
                continue
            executable = build_dir / exercise
            try:
                build = subprocess.run(
                    [*compiler, "-std=c++20", str(source), "-o", str(executable)],
                    capture_output=True, text=True, timeout=30,
                )
            except (OSError, subprocess.TimeoutExpired) as error:
                print(f"FAIL {exercise} (build failed, {len(inputs)} cases skipped)")
                print(error)
                continue
            if build.returncode != 0:
                print(f"FAIL {exercise} (build failed, {len(inputs)} cases skipped)")
                show_output("Compiler output", build.stderr)
                continue
            for input_path in inputs:
                passed += run_case(executable, exercise, input_path, build_dir)

    print(f"\n{passed}/{total} cases passed.")
    return 0 if passed == total else 1


if __name__ == "__main__":
    raise SystemExit(main())
