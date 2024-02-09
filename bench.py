#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os
import subprocess
import time
import urllib.request

xxd_url = "https://raw.githubusercontent.com/vim/vim/master/src/xxd/xxd.c"
compilation_command = "gcc -std=c11 -O2 -pipe -fPIC -fno-plt -fstack-protector-strong -D_GNU_SOURCE -z norelro -Wall -Wextra -Wpedantic -Wfatal-errors"


def run_command(command, capture_output=False):
    """Executes a shell command, optionally capturing output."""
    start_time = time.time()
    result = subprocess.run(command, shell=True, check=True, stdout=subprocess.PIPE if capture_output else None,
                            stderr=subprocess.PIPE if capture_output else None)
    duration = time.time() - start_time
    return duration, result.stdout if capture_output else None


def download_file(url, filename):
    """Downloads a file if it does not exist."""
    if not os.path.exists(filename):
        urllib.request.urlretrieve(url, filename)


def compile_programs():
    """Compiles main.c and xxd.c."""
    if not os.path.exists("og_xxd.c"):
        download_file(xxd_url, "og_xxd.c")
    print("Compiling the original xxd program...")
    compile_xxd1_cmd = compilation_command + " -o og_xxd og_xxd.c"
    run_command(compile_xxd1_cmd)
    print("Compiling TinyXXD...")
    compile_xxd2_cmd = compilation_command + " -o tinyxxd main.c"
    run_command(compile_xxd2_cmd)


def create_sample_files():
    """Creates sample files of various sizes."""
    sizes = [1, 10, 64]  # Sizes in MB
    for size in sizes:
        with open(f"sample{size}.bin", "wb") as f:
            f.write(os.urandom(size * 1024 * 1024))


def benchmark_conversion(program, flags, input_file, output_file):
    """Measures the conversion time of a program, capturing output directly."""
    cmd = f"./{program} {flags} {input_file}"
    start_time = time.time()
    with subprocess.Popen(cmd, shell=True, stdout=subprocess.PIPE) as proc:
        output = proc.stdout.read()
    duration = time.time() - start_time
    with open(output_file, 'wb') as f:
        f.write(output)
    return duration


def verify_files(file1, file2):
    """Compares two files to check if they are identical, using binary comparison for accuracy."""
    with open(file1, 'rb') as f1, open(file2, 'rb') as f2:
        return f1.read() == f2.read()


def perform_benchmarks():
    """Performs the benchmarks and outputs the results, with error handling."""
    create_sample_files()
    sizes = [1, 2, 5, 10, 32, 64]
    programs = ['og_xxd', 'tinyxxd']
    flags_sets = ['', '-p', '-i', '-e', '-b', '-u', '-E']

    # convert from binary to .hex and back
    for size in sizes:
        for program in programs:
            input_file = f'sample{size}.bin'
            output_file = f'sample{size}.hex'
            recon_file = f'sample_recreated{size}.bin'
            conversion_time = benchmark_conversion(program, "", input_file, output_file)
            print(f"Time for {program}: {conversion_time:.2f} seconds")
            reconversion_time = benchmark_conversion(program, f"-r", output_file, recon_file)
            if not verify_files(input_file, recon_file):
                print(
                    f"Verification failed for {recon_file}. There may be an issue with the flags used or the program's handling of these files.")
                exit(1)
            else:
                print(f"Verification successful for {recon_file}.")
                print(f"Time for {program} -r: {reconversion_time:.2f} seconds")

    # benchmark all flags in flags_sets
    for flags in flags_sets:
        for size in sizes:
            for program in programs:
                input_file = f'sample{size}.bin'
                output_file = f'sample{size}.hex'
                conversion_time = benchmark_conversion(program, f"{flags}", input_file, output_file)
                print(f"Time for {program} {flags}: {conversion_time:.2f} seconds")


def main():
    compile_programs()
    perform_benchmarks()


if __name__ == "__main__":
    main()
