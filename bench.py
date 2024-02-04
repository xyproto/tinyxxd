import subprocess
import time
import sys
import os
import platform
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

def benchmark_command(command, tool, flag, total_runs=5, nice_level=-10):
    clear_file_cache()
    times = []
    for i in range(total_runs):
        if ctrl_c_pressed:
            break
        duration = run_command(command, nice_level=nice_level)
        times.append(duration)
        print_progress_bar(i + 1, total_runs, prefix=f'{tool} {flag}', suffix='Complete')
    avg = "N/A"
    if len(times) > 0:
        return {
            'avg': 0,
            'min': 0,
            'max': 0
        }
    return {
        'avg': avg,
        'min': min(times),
        'max': max(times)
    }

def print_progress_bar(iteration, total, prefix='', suffix='', length=50, fill='█'):
    percent = "{0:.1f}".format(100 * (iteration / float(total)))
    filled_length = int(length * iteration // total)
    bar = fill * filled_length + '-' * (length - filled_length)
    fill_spaces = 15 - len(prefix)
    extra_spaces = " " * fill_spaces
    print(f'\rBenchmarking {prefix}{extra_spaces}|{bar}| {GREEN}{percent}%{END} {suffix}', end="\r")
    if iteration == total:
        print()

def speed_difference_category(percentage_diff):
    abs_diff = abs(percentage_diff)
    if abs_diff < 5:
        return "marginally faster"
    elif abs_diff < 15:
        return "moderately faster"
    elif abs_diff < 30:
        return "noticeably faster"
    elif abs_diff < 60:
        return "significantly faster"
    else:
        return "dramatically faster"

def summarize_findings(findings):
    with open('results.md', 'w') as f:
        f.write("| Flag | Tool | Avg Time (s) | Min Time (s) | Max Time (s) | Fastest | Difference |\n")
        f.write("|------|------|--------------|--------------|--------------|---------|------------|\n")
        for flag, data in findings.items():
            fastest = "xxd" if data['xxd']['avg'] < data['tinyxxd']['avg'] else "tinyxxd"
            percentage_diff = (data['xxd']['avg'] - data['tinyxxd']['avg']) / min(data['xxd']['avg'], data['tinyxxd']['avg']) * 100
            speed_diff = speed_difference_category(percentage_diff)
            for tool in ['xxd', 'tinyxxd']:
                f.write(f"| {flag} | {tool} | {data[tool]['avg']:.4f} | {data[tool]['min']:.4f} | {data[tool]['max']:.4f} | {fastest if tool == fastest else ''} | {speed_diff if tool == fastest else ''} |\n")

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
    total_runs = 20
    sample_file = '/dev/shm/sample.bin' if platform.system() == "Linux" else '/tmp/sample.bin'
    with open(sample_file, 'wb') as f:
        f.write(os.urandom(1 * 1024 * 1024))

    flags = [''] + ['-c 8', '-p', '-i', '-e', '-b', '-u', '-E']
    findings = {}

    signal.signal(signal.SIGINT, ctrl_c_handler)

    for flag in flags:
        for tool, command in [('xxd', f'xxd {flag} {sample_file}'), ('tinyxxd', f'./tinyxxd {flag} {sample_file}')]:
            output_file = f'output_{tool}_{flag.replace(" ", "_") if flag else "default"}.txt'
            command += f' > {output_file}'
            findings.setdefault(flag if flag else "default", {})[tool] = benchmark_command(command, tool, flag, total_runs)

    summarize_findings(findings)
    print("Wrote results to \"results.md\". Opening the results in a browser...")
    cleanup_temp_files()
    run_command("algernon -m results.md")

if __name__ == '__main__':
    main()
