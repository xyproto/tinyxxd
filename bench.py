#!/usr/bin/env python
# -*- coding: utf8 -*-

import subprocess
import time
import filecmp

def run_command(command):
    start = time.time()
    subprocess.run(command, shell=True, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    end = time.time()
    return end - start

def main():
    # Ensure the sample file exists
    with open('sample.bin', 'wb') as f:
        f.write(bytearray(10 * 1024 * 1024))  # Create a 10MB file for more realistic testing

    # Initialize lists to store execution times
    tinyxxd_times = []
    xxd_times = []

    total_runs = 50  # Number of total runs
    for i in range(1, total_runs + 1):
        print(f"Run #{i} / {total_runs} - Converting and Verifying")

        # Convert sample.bin to hex using tinyxxd and measure time
        tinyxxd_times.append(run_command('./tinyxxd sample.bin > sample.hex'))

        # Convert the hex back to binary using tinyxxd and measure time
        tinyxxd_times.append(run_command('./tinyxxd -r sample.hex > sample_tinyxxd.bin'))

        # Verify if the binary files match after conversion
        if not filecmp.cmp('sample_tinyxxd.bin', 'sample.bin', shallow=False):
            print("Error: Converted binary files do not match (tinyxxd).")

        # Remove the temporary files
        subprocess.run('rm sample.hex sample_tinyxxd.bin', shell=True)

        # Convert sample.bin to hex using xxd and measure time
        xxd_times.append(run_command('xxd -p sample.bin > sample.hex'))

        # Convert the hex back to binary using xxd and measure time
        xxd_times.append(run_command('xxd -p -r sample.hex > sample_xxd.bin'))

        # Verify if the binary files match after conversion
        if not filecmp.cmp('sample_xxd.bin', 'sample.bin', shallow=False):
            print("Error: Converted binary files do not match (xxd).")

        # Remove the temporary files
        subprocess.run('rm sample.hex sample_xxd.bin', shell=True)

    # Calculate the average execution time for each command
    avg_tinyxxd_time = sum(tinyxxd_times) / len(tinyxxd_times)
    avg_xxd_time = sum(xxd_times) / len(xxd_times)

    # Print the result message based on which one is faster
    if avg_xxd_time < avg_tinyxxd_time:
        print(f'On average, xxd is {((avg_tinyxxd_time - avg_xxd_time) / avg_xxd_time * 100):.2f}% faster than tinyxxd over {total_runs} runs.')
    else:
        print(f'On average, tinyxxd is {((avg_xxd_time - avg_tinyxxd_time) / avg_tinyxxd_time * 100):.2f}% faster than xxd over {total_runs} runs.')

if __name__ == '__main__':
    main()
