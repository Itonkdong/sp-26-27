# Structural Programming — 2026/2027

Course materials and C++ exercises for Structural Programming.

## Start an exercise

1. Open the course folder in CLion and find the session you want to work on under `aud/`.
2. Copy its `starters` folder next to the original and give your copy any name you like. You can also create a folder and copy just the exercise files you need.
3. Select your working folder in CMake as described below.
4. Read the task statement in an exercise file, implement the TODO, select the matching target, and run it.

The `solved` files are completed during class; they initially contain the same unfinished scaffolds as `starters`.

## Choose where to work with CMake

At the top of `CMakeLists.txt`, change these two settings to match the folder you are working in:

```cmake
set(ACTIVE_AUD "<session>")
set(ACTIVE_FOLDER "<folder>")
```

Replace `<session>` with the exact session folder name under `aud/` and `<folder>` with the name of the subfolder you want to work in. This can be `starters`, `solved`, or any folder you create. Together, these settings select `aud/<session>/<folder>/`, which must exist and contain your exercise files.

Reload CMake in CLion after changing either setting. Only `.cpp` files directly inside the selected folder appear as executable targets. Switch these settings whenever you move to another session or folder.

Each exercise file is a separate program. Compile and run one file at a time. To run a file directly from the terminal, replace `path/to/exercise.cpp` with its path from the course root:

```sh
c++ -std=c++20 path/to/exercise.cpp -o /tmp/sp-exercise
/tmp/sp-exercise
```

## Organization

```text
aud/
├── <session>/
│   ├── starters/          Task statements and unfinished exercises
│   ├── solved/            Code developed during class
│   └── <your-folder>/     Your working copies; choose any name
└── presentations/         Task statements and worked examples
```

Exercise files are numbered in presentation order. Refer to the corresponding presentation for the session's material. Some earlier materials may retain their original layout.

## Credits

Organized and maintained by **Viktor Kostadinoski (itonkdong)** for the **Structural Programming** course at **FSCE (ФИНКИ)**, 2026/2027. The original course statements and examples remain available in the presentations.
