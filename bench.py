import subprocess
import time
import sys
import os

def run_command(command):
    start = time.perf_counter()
    subprocess.run(command, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, shell=True)
    end = time.perf_counter()
    return end - start

def benchmark_command(command, tool, flag, total_runs=5):
    times = []
    for i in range(total_runs):
        duration = run_command(command)
        times.append(duration)
        print_progress_bar(i + 1, total_runs, prefix=f'Benchmarking {tool} {flag}', suffix='Complete', length=40)
    return {
        'avg': sum(times) / len(times),
        'min': min(times),
        'max': max(times)
    }

def print_progress_bar(iteration, total, prefix='', suffix='', length=50, fill='█'):
    percent = "{0:.1f}".format(100 * (iteration / float(total)))
    filled_length = int(length * iteration // total)
    bar = fill * filled_length + '-' * (length - filled_length)
    print(f'\r{prefix} |{bar}| {percent}% {suffix}', end="\r")
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

def main():
    total_runs = 10
    sample_file = 'sample.bin'
    with open(sample_file, 'wb') as f:
        f.write(os.urandom(2 * 1024 * 1024))

    flags = [''] + ['-c 8', '-p', '-i', '-e', '-b', '-u', '-E']
    findings = {}

    for flag in flags:
        for tool, command in [('xxd', f'xxd {flag} {sample_file}'), ('tinyxxd', f'./tinyxxd {flag} {sample_file}')]:
            output_file = f'output_{tool}_{flag.replace(" ", "_") if flag else "default"}.txt'
            command += f' > {output_file}'
            findings.setdefault(flag if flag else "default", {})[tool] = benchmark_command(command, tool, flag, total_runs)

    summarize_findings(findings)
    run_command("algernon -m results.md")

if __name__ == '__main__':
    main()
