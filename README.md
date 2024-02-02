![tinyxxd](img/tinyxxd.png)

[![Build](https://github.com/xyproto/tinyxxd/actions/workflows/ci.yml/badge.svg)](https://github.com/xyproto/tinyxxd/actions/workflows/ci.yml)

`xxd` is a utility that comes with ViM. This is a standalone fork of `xxd`, a slight modernization of the C code, a slight performance increase and a drop-in replacement for `xxd`. The target platform is Linux. A C-compiler that supports C11 or later is required.

The source code for the program is a single `main.c` source file with less than 860 lines of code.

Tested on both Arch Linux and macOS, where it builds, runs and all tests passes.

### What is it, and what can it do?

`xxd` or `tinyxxd` can be used to view binary or text files as hex codes. It is often installed on UNIX-like systems. It can dump files to hex, and also do the same thing in reverse: create files from hex codes.

It is sometimes used when building or packaging software.

`tinyxxd` is a drop-in replacement for `xxd` and contains the exact same logic and flags.

### General info

* License: GPL2
* Version: 1.2.0
