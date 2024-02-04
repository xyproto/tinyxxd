import filecmp
import subprocess
import time
import sys
import os
import platform
import random
import signal

GREEN = '\033[92m'
END = '\033[0m'

ctrl_c_pressed = False


def run_command(command, nice_level=None):
    global ctrl_c_pressed
    if platform.system() == "Linux":
        nice_cmd = f"sudo nice -n {nice_level}" if nice_level else ""
    else:
        nice_cmd = f"nice -n {nice_level}" if nice_level else ""
    full_command = f"{nice_cmd} {command}"
    start = time.perf_counter()
    process = subprocess.Popen(full_command, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, shell=True)
    try:
        process.wait()
        end = time.perf_counter()
    except KeyboardInterrupt:
        ctrl_c_pressed = True
        process.terminate()
        process.wait()
        end = time.perf_counter()
    return end - start


def clear_file_cache():
    if platform.system() == "Linux":
        subprocess.run("sudo sh -c 'sync; echo 3 > /proc/sys/vm/drop_caches'", shell=True)


def benchmark_reverse_command(tool, N=5, nice_level=-10):
    clear_file_cache()
    runtimes = []
    for i in range(N):
        input_file = 'input_file.bin'
        output_file = 'output_file.bin'

        # Generate random input data
        with open(input_file, 'wb') as f:
            f.write(os.urandom(7 * 1024 * 1024))
        print(f"Generated input file: {os.path.abspath(input_file)}")

        # Encode the input file with the specified tool
        encode_command = f"{tool} {input_file} {output_file}"
        print(f"Encoding command: {encode_command}")
        run_command(encode_command, nice_level=nice_level)

        if not os.path.exists(output_file):
            print(f"Error: Output file not created by encode command: {os.path.abspath(output_file)}")
            continue

        # Reverse the encoded file with the specified tool
        reverse_command = f"{tool} -r {output_file} {input_file}"
        print(f"Reversing command: {reverse_command}")
        duration = run_command(reverse_command, nice_level=nice_level)

        if not os.path.exists(input_file):
            print(f"Error: Input file not recreated by reverse command: {os.path.abspath(input_file)}")
            continue

        # Check if the reversed file matches the original file
        files_match = filecmp.cmp(input_file, output_file)

        if files_match:
            runtimes.append(duration)
        else:
            print(f"Files do not match: {input_file} and {output_file}")

        print_progress_bar(i + 1, N, prefix=f'{tool}, {i+1}/{N}', suffix='Complete')

    if runtimes:
        avg_runtime = sum(runtimes) / len(runtimes)
        min_runtime = min(runtimes)
        max_runtime = max(runtimes)
        return {'avg': avg_runtime, 'min': min_runtime, 'max': max_runtime}
    else:
        print("No successful runs to calculate runtime metrics.")
        return {'avg': 0, 'min': 0, 'max': 0}


def benchmark_command(command, N=5, nice_level=-10):
    clear_file_cache()
    runtimes = []
    for i in range(N):
        output_file = 'output.txt'
        full_command = f"{command} {output_file}"
        duration = run_command(full_command, nice_level=nice_level)

        # Check if the output file is empty
        is_empty = os.path.getsize(output_file) == 0

        if not is_empty:
            runtimes.append(duration)

        description = ""
        for i, word in enumerate(command.split(" ")):
            if i == 0:
                description = word
            elif word.startswith("-"):
                description += " " + word
        print_progress_bar(i + 1, N, prefix=f'{description}, {i+1}/{N}', suffix='Complete')

    avg_runtime = sum(runtimes) / N
    min_runtime = min(runtimes)
    max_runtime = max(runtimes)
    return {'avg': avg_runtime, 'min': min_runtime, 'max': max_runtime}


def print_progress_bar(iteration, total, prefix='', suffix='', length=50, fill='█'):
    percent = "{0:.1f}".format(100 * (iteration / float(total)))
    filled_length = int(length * iteration // total)
    bar = fill * filled_length + '-' * (length - filled_length)
    fill_spaces = 15 - len(prefix)
    extra_spaces = " " * fill_spaces
    sys.stdout.write(f'\rBenchmarking {prefix}{extra_spaces}|{bar}| {GREEN}{percent}%{END} {suffix}')
    if iteration == total:
        sys.stdout.write('\n')
    sys.stdout.flush()


def summarize_findings(findings):
    with open('results.md', 'w') as f:
        f.write("| Flag | Tool | Avg Time (s) | Min Time (s) | Max Time (s) | Fastest | Difference |\n")
        f.write("|------|------|--------------|--------------|--------------|---------|------------|\n")
        for flag, tools_data in findings.items():
            # Calculate average, min, and max for each tool
            for tool in tools_data:
                if tools_data[tool]:  # Ensure there is data
                    avg_time = sum(tools_data[tool]) / len(tools_data[tool])
                    min_time = min(tools_data[tool])
                    max_time = max(tools_data[tool])
                    tools_data[tool] = {'avg': avg_time, 'min': min_time, 'max': max_time}
                else:
                    tools_data[tool] = {'avg': 0, 'min': 0, 'max': 0}

            # Determine the fastest tool and calculate percentage differences
            xxd_data = tools_data['xxd']
            tinyxxd_data = tools_data['tinyxxd']
            if xxd_data['avg'] > 0 and tinyxxd_data['avg'] > 0:
                if xxd_data['avg'] < tinyxxd_data['avg']:
                    percentage_diff = ((tinyxxd_data['avg'] - xxd_data['avg']) / xxd_data['avg']) * 100
                    fastest = "xxd"
                else:
                    percentage_diff = ((xxd_data['avg'] - tinyxxd_data['avg']) / tinyxxd_data['avg']) * 100
                    fastest = "tinyxxd"
                speed_diff = f"{percentage_diff:.2f}% faster"
            else:
                fastest = "N/A"
                speed_diff = "N/A"

            # Write findings to the file
            for tool in ['xxd', 'tinyxxd']:
                tool_data = tools_data[tool]
                is_fastest = "*" if tool == fastest else ""
                display_diff = speed_diff if tool == fastest else ""
                f.write(
                    f"| {flag} | {tool} | {tool_data['avg']:.4f} | {tool_data['min']:.4f} | {tool_data['max']:.4f} | {is_fastest} | {display_diff} |\n")


def cleanup_temp_files():
    files_to_delete = ['sample.bin']
    for flag in ['-c 8', '-p', '-i', '-e', '-b', '-u', '-E']:
        files_to_delete.append(f'output_xxd_{flag.replace(" ", "_") if flag else "default"}.txt')
        files_to_delete.append(f'output_tinyxxd_{flag.replace(" ", "_") if flag else "default"}.txt')
    for file in files_to_delete:
        try:
            os.remove(file)
        except OSError:
            pass


def ctrl_c_handler(signum, frame):
    global ctrl_c_pressed
    ctrl_c_pressed = True


def main():
    total_runs = 3  # runs per flag
    sample_file = '/dev/shm/sample.bin' if platform.system() == "Linux" else '/tmp/sample.bin'
    with open(sample_file, 'wb') as f:
        f.write(os.urandom(7 * 1024 * 1024))

    flags = [''] + ['-c 8', '-p', '-i', '-e', '-b', '-u', '-E', '-r']
    findings = {}

    signal.signal(signal.SIGINT, ctrl_c_handler)

    for flag in flags:
        findings[flag] = {}
        for _ in range(total_runs):
            # Randomize the order of tool execution
            tools_order = ['xxd', 'tinyxxd']
            random.shuffle(tools_order)
            for tool in tools_order:
                command = f"{tool} {flag} {sample_file}" if flag else f"{tool} {sample_file}"
                hex_file = ''  # Initialize variable for optional hex file generation
                if flag == '-r':
                    # For reverse operation, generate the hex file first (not covered in the randomization step)
                    hex_file = f'output_{tool}_hex.txt'
                    run_command(f'{tool} {sample_file} {hex_file}')
                    command = f"{tool} -r {hex_file} /dev/null"
                else:
                    output_file = f'output_{tool}_{flag.replace(" ", "_") if flag else "default"}.txt'
                    command += f" {output_file}"

                # Benchmark the command, adjusting the function call as needed
                if flag not in findings:
                    findings[flag] = {tool: []}
                elif tool not in findings[flag]:
                    findings[flag][tool] = []

                if flag == '-r':
                    results = benchmark_reverse_command(command)
                else:
                    results = benchmark_command(command)

                duration = results['avg']
                findings[flag][tool].append(duration)

    summarize_findings(findings)
    cleanup_temp_files()
    print("Wrote results to \"results.md\". Opening the results in a browser...")
    run_command("algernon -m results.md")


if __name__ == '__main__':
    main()
