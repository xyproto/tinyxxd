![tinyxxd](img/tinyxxd.png)


[![Build and benchmark](https://github.com/xyproto/tinyxxd/actions/workflows/build_and_bench.yml/badge.svg)](https://github.com/xyproto/tinyxxd/actions/workflows/build_and_bench.yml)

`xxd` is a utility that comes with ViM. It can be used to view binary or text files as hex codes. It is often installed on UNIX-like systems. It can dump files to hex, and also do the same thing in reverse: recreate files from hex codes.

`tinyxxd` is a standalone fork of `xxd`, a slight modernization of the C code, a slight performance increase and a drop-in replacement for `xxd`. It contains the same logic and supports the exact same flags.

`tinyxxd` can be useful in connection with building and packaging software, since it's a smaller dependency than `ViM`, only requires a C11 compiler and is slightly faster.

## Platforms

* `tinyxxd` only has the goal of supporting Linux, but it should also build and run on other UNIX-like platforms.
* It has been manually tested on Arch Linux and macOS.
* The CI system builds and tests `tinyxxd` on Arch Linux, macOS and builds `tinyxxd` using Mingw on Windows.

## Requirements

* For building, a C-compiler that supports C11 is needed.
* For running the benchmark script, `gcc`, `gnuplot` and `python` are needed.
* For fuzzing, `afl-gcc` and `afl-fuzz` are needed.

## Packaging status

[![Packaging status](https://repology.org/badge/vertical-allrepos/tinyxxd.svg)](https://repology.org/project/tinyxxd/versions)

## Source code

The source code for the program is a single `main.c` source file, written in C11.

Some of the code has been neatly refactored into separate functions, and two enums have been introduced.

## Testing

Tested on Arch Linux and macOS, where it builds, runs and all tests passes.

`make test` can be used to run simple tests, and `python bench.py` can run additional tests while benchmarking.

`tinyxxd` also builds for Windows, but has not been tested on Windows yet.

## Benchmarking

`tinyxxd` can be benchmarked by running `python bench.py` (or `python3 bench.py`).

The performance is mostly IO bound, which is reflected in the [benchmark graphs](benchmark_results.md).

## Fuzzing

`make fuzz` can be used to build `tinyxxd` with `afl-gcc` and then start fuzzing the executable with various input.

## Performance

`tinyxxd` is just a tiny bit faster than `xxd`. The larger the input, the larger the performance advantage seems to be.

### General info

* License: GPL2
* Version: 1.2.0
