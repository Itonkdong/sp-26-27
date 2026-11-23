# Exercise tests

The pilot covers the eight exercises in `aud8`. Run it from the course folder with Python 3.9 or newer and a C++20 compiler:

```sh
python3 tests/run.py aud8 solved
python3 tests/run.py aud8 my-folder ex6
```

The second argument is the name of any working folder inside `aud/aud8/`. The optional third argument selects one exercise. The runner compiles each selected `.cpp` file separately with `c++` (or `CXX`, if set). It runs each case in a temporary directory, so the same source files still run normally in the IDE. An unfinished `main` compiles and then fails the output checks.

## Add a case

Add two files with the same name inside the exercise's folder under `tests/aud8/`. Put the keyboard input in `.in` and the expected result in `.out`. For example, `ex6/rotate_twice.in` contains the array size, the number of rotations, and the array elements:

```text
5 2
1 2 3 4 5
```

Its matching `.out` contains the rotated array:

```text
4 5 1 2 3
```

## Output conventions

These cases compare values in order and allow whitespace differences between values. The runner also accepts the known prompts and labels from the aud8 presentation. Use these plain forms when writing new expected results:

| Exercise | Expected result |
| --- | --- |
| 1 | `equal` or `not equal` |
| 2 | Even sum, odd sum, then the ratio of counts |
| 3 | Scalar product |
| 4 | `increasing`, `decreasing`, or `neither` |
| 5–7 | The resulting array |
| 8 | Ten counts in digit order from 0 to 9 |

The cases avoid unspecified behavior, such as a ratio with zero odd elements or whether a one-element array counts as strictly increasing or decreasing. A case fails if the program exits with an error, exceeds two seconds, or produces a different result.
