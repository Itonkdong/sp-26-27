# Structural Programming — 2026/2027

Classroom exercises in C++. Each exercise file contains the task statement, the required include and namespace declaration, and an empty `main` with a TODO for your implementation.

## Start an exercise

1. Open the course folder in CLion and find the session's `starters` folder, for example `aud/aud2/starters/`.
2. Copy that folder next to the original and name your copy `practice`. You can also create a `practice` folder and copy just the exercise file you want to work on.
3. Open an exercise such as `ex1.cpp`, read the task at the top, and write your solution inside `main`.
4. Reload CMake if prompted, select your file's target (for example `aud_aud2_practice_ex1`), and run it.

No package declarations or extra supporting files are needed. The `solved` files begin with the same empty scaffold and are completed during class.

You can also compile and run your working copy from the course root:

```sh
c++ -std=c++20 aud/aud2/practice/ex1.cpp -o /tmp/sp-aud2-ex1
/tmp/sp-aud2-ex1
```

Compile each file separately: every `exN.cpp` is its own program. The starter programs compile but do not read input or print output until you add your solution.

## Organization

```text
aud/
├── aud1/                  Earlier classroom examples
├── aud2/
│   ├── starters/
│   │   ├── ex1.cpp
│   │   ├── ex2.cpp
│   │   └── ...            Exercises 1–12 in presentation order
│   └── solved/
│       ├── ex1.cpp
│       ├── ex2.cpp
│       └── ...            Code developed during class
└── presentations/         Original task statements and worked examples
```

Each organized session has a `starters` folder and a `solved` folder, with one `exN.cpp` file per exercise. The tasks for `aud2` come from the [Exercises section of presentation 2](aud/presentations/2.html#exercises).

## Credits

Organized and maintained by **Viktor Kostadinoski (itonkdong)** for the **Structural Programming** course at **FSCE (ФИНКИ)**, 2026/2027. The original course statements and examples remain available in the presentations.
