![tinyxxd](img/tinyxxd.png)


[![Build and benchmark](https://github.com/xyproto/tinyxxd/actions/workflows/build_and_bench.yml/badge.svg)](https://github.com/xyproto/tinyxxd/actions/workflows/build_and_bench.yml)

`xxd` is a utility that comes with ViM. It can be used to view binary or text files as hex codes. It is often installed on UNIX-like systems. It can dump files to hex, and also do the same thing in reverse: recreate files from hex codes.

`tinyxxd` is a standalone fork of `xxd`, a slight modernization of the C code, a slight performance increase and a drop-in replacement for `xxd`. It contains the same logic and supports the exact same flags.

`tinyxxd` can be useful in connection with building and packaging software, since it's a smaller dependency than `ViM`, only requires a C11 compiler and is slightly faster.

## Platforms

* `tinyxxd` only has the goal of supporting Linux, but it should also build and run on other UNIX-like platforms.
* It has been manually tested on Arch Linux and macOS.
* The CI system builds and tests `tinyxxd` on Arch Linux, macOS and builds `tinyxxd` using Mingw on Windows.

## Performance

`tinyxxd` can be profiled by running `make profile` or benchmarked by running `make bench`.

`tinyxxd` is a bit faster than `xxd`. As the size of the input data grows, the performance advantage appears to be increasing too.

![performance graph](img/graph_by_size.svg)

The performance is mostly I/O bound, which is reflected in the [benchmark graphs](benchmark_results.md).

## Requirements

* A C-compiler that supports C11.
* For profiling: `valgrind` and `kcachegrind`.
* For benchmarking: `gcc`, `gnuplot` and `python3`.
* For fuzzing: `afl-gcc` and `afl-fuzz`.

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


## Fuzzing

`make fuzz` can be used to build `tinyxxd` with `afl-gcc` and then start fuzzing the executable with varied input design to find edge cases in the program.

### General info

* License: GPL2
* Version: 1.3.1
