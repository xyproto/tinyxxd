![tinyxxd](img/tinyxxd.png)

[![Build](https://github.com/xyproto/tinyxxd/actions/workflows/build.yml/badge.svg)](https://github.com/xyproto/tinyxxd/actions/workflows/build.yml)

`xxd` is a utility that comes with ViM. This is a standalone fork of `xxd`, a slight modernization of the C code, a slight performance increase and a drop-in replacement for `xxd`.

`xxd` can be used to view binary or text files as hex codes. It is often installed on UNIX-like systems. It can dump files to hex, and also do the same thing in reverse: recreate files from hex codes.

It is sometimes used when building or packaging software.

`tinyxxd` is a drop-in replacement for `xxd` and contains the exact same logic and flags.

## Platforms

`tinyxxd` only targets Linux, but it should also build and run on other UNIX-like platforms.

It has been manually tested on Arch Linux and macOS.

The CI system builds and tests `tinyxxd` on Arch Linux, macOS and Windows.

## Requirements

* A C-compiler that supports C11.
* For running the benchmark script, `gcc`, `gnuplot` and `python` are needed.
* For fuzzing, `afl-gcc` and `afl-fuzz` are needed.

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

`tinyxxd` is just a tiny bit faster than `xxd`. The larger the input, the larger the difference in performance appears to be.

### General info

* License: GPL2
* Version: 1.2.0
