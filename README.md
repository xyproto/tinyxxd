## TinyXXD <img src="img/tinyxxd.svg" width="128" align="right">

[![Build & Benchmark](https://github.com/xyproto/tinyxxd/actions/workflows/build_and_bench.yml/badge.svg)](https://github.com/xyproto/tinyxxd/actions/workflows/build_and_bench.yml)

`xxd` is a utility that comes with ViM. It can be used to view binary or text files as hex codes. It is often installed on UNIX-like systems. It can dump files to hex, and also do the same thing in reverse: recreate files from hex codes.

`tinyxxd` is a standalone fork of `xxd`, a slight modernization of the C code, a slight performance increase and a drop-in replacement for `xxd`. It contains the same logic and supports the exact same flags. It is also only licensed under MIT/GPL2, and not under the VIM license.

`tinyxxd` can be useful in connection with building and packaging software, since it's a smaller dependency than `ViM`, only requires a C11 compiler and is slightly faster.

`tinyxxd` only has the goal of supporting Linux, but it should also build and run on other UNIX-like platforms.

## Performance

The performance is mostly IO bound.

`tinyxxd` can be profiled by running `make profile` or benchmarked by running `make bench`.

`tinyxxd` is faster than `xxd`, and as the size of the input data grows, the performance advantage increases.

Note that this may be benchmarked as part of the CI test, which affects the benchmark results, especially for small amounts of test data:

![performance graph](img/graph_by_size.svg)

For more details, take a look at the latest [benchmark results](benchmark_results.md), which are added by the CI benchmark.

## Requirements

* A C-compiler that supports C11.
* For profiling: `valgrind` and `kcachegrind`.
* For benchmarking: `gcc`, `gnuplot` and `python3`.
* For fuzzing: `afl-gcc` and `afl-fuzz`.

## Packaging status

[![Packaging status](https://repology.org/badge/vertical-allrepos/tinyxxd.svg)](https://repology.org/project/tinyxxd/versions)

## Source code

The source code for the program is a single `main.c` source file, written in C11.

Some of the code has been neatly refactored into separate functions, and a couple of enums have been introduced.

## Testing

Tested on Arch Linux, where it builds, runs and all tests passes.

`make test` can be used to run simple tests, and `python bench.py` can run additional tests while benchmarking.

## Platforms

`tinyxxd` also builds for macOS and Windows (using Mingw), but it has not been tested properly on those platforms yet, and there might be variations on how it behaves compared to Linux.

## Benchmarking

`tinyxxd` can be benchmarked by running `python bench.py` (or `python3 bench.py`).

The performance is mostly IO bound, which is reflected in the [benchmark graphs](benchmark_results.md).

## Fuzzing

`make fuzz` can be used to build `tinyxxd` with `afl-gcc` and then start fuzzing the executable with varied input designed to find edge cases in the program.

## Packaging

In connection with packaging, letting this utility provide and replace `xxd`, possibly by providing a `/usr/bin/xxd` symlink that points to `/usr/bin/tinyxxd`, is recommended.

### General info

* License: `GPL-2.0-only` and/or `MIT`. See the [`LICENSE`](LICENSE) file for more information.
* Version: 1.3.9
