#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import atexit
import glob
import os
import pickle
import platform
import random
import subprocess
import sys
import tempfile
import time

from collections import defaultdict
from datetime import datetime
from urllib.request import urlretrieve

results = []
previous_results = []
compilation_command = "make xxd tinyxxd"
bench_flags = ["", "-p", "-i", "-e", "-b", "-u", "-E"]
base_path = tempfile.gettempdir() #if platform.system() != "Linux" else "/dev/shm"

if len(sys.argv) > 1 and sys.argv[1] == "-q":
    sample_sizes = [3, 2, 1]  # in MiB
elif len(sys.argv) > 1 and sys.argv[1] == "-s":
    sample_sizes = [64, 32, 16, 8, 4, 2, 1]  # in MiB
else:
    sample_sizes = [128, 64, 32, 16, 8, 4, 2, 1]  # in MiB


def run_command(command, capture_output=False):
    """Executes a shell command, optionally capturing output, with enhanced error handling."""
    try:
        start_time = time.time()
        result = subprocess.run(
            command,
            shell=True,
            check=True,
            stdout=subprocess.PIPE if capture_output else None,
            stderr=subprocess.PIPE if capture_output else None,
        )
        duration = time.time() - start_time
        return duration, result.stdout if capture_output else None
    except subprocess.CalledProcessError as e:
        print_colored(
            f"Command failed with error: {e.stderr.decode()}", 91
        )  # Red text for errors
        exit(1)


def compile_programs():
    """Compiles main.c and xxd.c, and downloads xxd.c with curl if needed."""
    run_command(compilation_command)


def create_sample_files():
    """Creates sample files of various sizes in /dev/shm if on Linux."""
    global base_path
    print("Generating sample files...")
    for size in sample_sizes:
        print(f"Creating {size}mb.bin ({size} MiB)")
        filename = os.path.join(base_path, f"{size}mb.bin")
        with open(filename, "wb") as f:
            f.write(os.urandom(size * 1024 * 1024))
    print("Sample file generation complete.")


def write_results_to_file():
    global results
    with open("results.pkl", "wb") as output_file:  # Note the 'wb' mode
        pickle.dump(results, output_file)


def read_previous_results():
    global previous_results
    try:
        with open("results.pkl", "rb") as input_file:  # Note the 'rb' mode
            previous_results = pickle.load(input_file)
    except (FileNotFoundError, EOFError):
        previous_results = []


def benchmark_conversion(program, flags, input_file, output_file, current, total):
    """Measures the conversion time of a program, capturing output directly, and updates the progress bar with command info."""
    cmd_prefix = ""
    if platform.system() == "Linux" and os.path.exists("/usr/bin/tinyionice"):
        cmd_prefix = "sudo tinyionice -c1 -n0 nice -n -20"
    cmd = f"{cmd_prefix} ./{program} {flags} {input_file} > {output_file}"
    command_message = f"{program} {flags} // {input_file}"
    # Update progress bar with command being run
    progress_bar(current, total, message=command_message)
    start_time = time.time()
    result = subprocess.run(
        cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE
    )
    duration = time.time() - start_time
    if result.returncode != 0:
        print_colored(f"Command failed: {cmd}", 91)
        exit(1)
    return duration


def verify_files(file1, file2, chunk_size=1024 * 1024):
    """Compares two files using binary comparison in chunks to reduce memory usage."""
    with open(file1, "rb") as f1, open(file2, "rb") as f2:
        while True:
            chunk1 = f1.read(chunk_size)
            chunk2 = f2.read(chunk_size)
            if chunk1 != chunk2:
                return False
            if not chunk1:  # End of file
                return True


def progress_bar(current, total, message="", length=50):
    """Prints a simple progress bar with percentage completion and an additional message."""
    fraction = current / total
    percent = int(fraction * 100)
    percent = min(percent, 100)
    arrow = int(fraction * length) * "="
    padding = (length - len(arrow)) * " "

    messageTrimmed = message.strip().replace("  ", " ")
    first_word = messageTrimmed
    the_rest = ""
    if " // " in messageTrimmed:
        words = messageTrimmed.split(" // ")
        first_word = words[0]
        the_rest = words[1]
        if the_rest:
            the_rest = " " + the_rest

    print(
        f"\033[2K\033[90mBenchmarking \033[94m{first_word}\033[33m{the_rest} \033[0m\033[96m[{arrow}{padding}] \033[93m{percent}% \033[37m({current}/{total})\033[0m",
        end="\r",
    )


def print_colored(message, color_code):
    """Prints a message in a specified ANSI color."""
    print(f"\033[{color_code}m{message}\033[0m")


def print_formatted_columns(row):
    """Prints a single row of data in columns, dynamically adjusting the width."""
    widths = [10, 10, 20, 10]  # Adjust column widths as needed
    formatted_row = " ".join(
        f"{str(item):<{width}}" for item, width in zip(row, widths)
    )
    print(formatted_row)


def cleanup_files_for_size(size):
    """Removes sample and output files for a specific size."""
    global base_path
    file_patterns = [
        f"{size}mb.bin",
        f"{size}mb_recreated.bin",
        *[f"{size}mb{flag}_xxd.hex" for flag in bench_flags],
        *[f"{size}mb{flag}_tinyxxd.hex" for flag in bench_flags],
    ]
    for pattern in file_patterns:
        file_path = os.path.join(base_path, pattern)
        try:
            os.remove(file_path)
        except OSError:
            pass  # File does not exist or cannot be deleted, move on


def perform_benchmarks():
    global results
    create_sample_files()
    programs = ["xxd", "tinyxxd"]
    total_benchmarks = len(sample_sizes) * len(programs) * (len(bench_flags) + 1)
    current_benchmark = 0

    random.seed()

    for size in sample_sizes:
        random.shuffle(programs)
        for program in programs:
            input_file = os.path.join(base_path, f"{size}mb.bin")
            output_file = os.path.join(base_path, f"{size}mb_{program}.hex")
            recon_file = os.path.join(base_path, f"{size}mb_recreated.bin")

            # Conversion from binary to hex
            current_benchmark += 1
            conversion_time = benchmark_conversion(
                program,
                "",
                input_file,
                output_file,
                current_benchmark,
                total_benchmarks,
            )
            results.append(
                {
                    "program": program,
                    "size": size,
                    "conversion_time": conversion_time,
                    "flags": "",
                }
            )
            # Conversion back from hex to binary
            reconversion_time = benchmark_conversion(
                program,
                "-r",
                output_file,
                recon_file,
                current_benchmark,
                total_benchmarks,
            )
            if not verify_files(input_file, recon_file):
                print_colored(
                    f"Verification failed for {recon_file}. Exiting...", 91
                )  # Red text
                exit(1)
            results.append(
                {
                    "program": program,
                    "size": size,
                    "conversion_time": reconversion_time,
                    "flags": "-r",
                }
            )

            # Conversion from binary to hex
            current_benchmark += 1
            conversion_time = benchmark_conversion(
                program,
                "-b",
                input_file,
                output_file,
                current_benchmark,
                total_benchmarks,
            )
            results.append(
                {
                    "program": program,
                    "size": size,
                    "conversion_time": conversion_time,
                    "flags": "",
                }
            )
            # Conversion back from hex to binary
            reconversion_time = benchmark_conversion(
                program,
                "-r -b",
                output_file,
                recon_file,
                current_benchmark,
                total_benchmarks,
            )
            if not verify_files(input_file, recon_file):
                print_colored(
                    f"Verification failed for {recon_file}. Exiting...", 91
                )  # Red text
                exit(1)
            results.append(
                {
                    "program": program,
                    "size": size,
                    "conversion_time": reconversion_time,
                    "flags": "-r",
                }
            )

            for flags in bench_flags:
                current_benchmark += 1
                output_file = f"{size}mb{flags}_{program}.hex"
                conversion_time = benchmark_conversion(
                    program,
                    flags,
                    input_file,
                    output_file,
                    current_benchmark,
                    total_benchmarks,
                )
                results.append(
                    {
                        "program": program,
                        "size": size,
                        "conversion_time": conversion_time,
                        "flags": flags,
                    }
                )
                if os.path.exists(f"{size}mb{flags}_xxd.hex") and os.path.exists(
                    f"{size}mb{flags}_tinyxxd.hex"
                ):
                    if not verify_files(
                        f"{size}mb{flags}_xxd.hex", f"{size}mb{flags}_tinyxxd.hex"
                    ):
                        print_colored(
                            f'Output verification failed: these files differ: "{size}mb{flags}_xxd.hex" and "{size}mb{flags}_tinyxxd.hex".',
                            91,
                        )
                        exit(1)

            progress_bar(
                current_benchmark,
                total_benchmarks,
                message=f"Completed: {program} // {size}MiB",
            )

        cleanup_files_for_size(size)

    progress_bar(total_benchmarks, total_benchmarks, message="complete!", length=50)
    print()


def print_final_comparison():
    largest_size = max(
        sample_sizes
    )  # Ensure this matches how you determine the largest sample size in your benchmark setup
    xxd_times = [
        d["conversion_time"]
        for d in results
        if d["program"] == "xxd" and d["size"] == largest_size
    ]
    tinyxxd_times = [
        d["conversion_time"]
        for d in results
        if d["program"] == "tinyxxd" and d["size"] == largest_size
    ]

    # Calculate average times if multiple runs per program
    avg_xxd_time = sum(xxd_times) / len(xxd_times) if xxd_times else 0
    avg_tinyxxd_time = sum(tinyxxd_times) / len(tinyxxd_times) if tinyxxd_times else 0

    if avg_xxd_time and avg_tinyxxd_time:  # Check if both times are non-zero
        if avg_xxd_time < avg_tinyxxd_time:
            percent_faster = ((avg_tinyxxd_time - avg_xxd_time) / avg_xxd_time) * 100
            message = f"For {largest_size}MiB files, xxd was {percent_faster:.2f}% faster than tinyxxd."
        else:
            percent_faster = (
                (avg_xxd_time - avg_tinyxxd_time) / avg_tinyxxd_time
            ) * 100
            message = f"For {largest_size}MiB files, tinyxxd was {percent_faster:.2f}% faster than xxd."
        print(message)
    else:
        print("No valid comparison data available.")


def analyze_performance(threshold=0.05):
    """Analyzes and summarizes performance differences between xxd and tinyxxd for each flag and file size.

    Args:
        results (list): The list of benchmark results.
        threshold (float): The minimum relative difference to consider significant (as a fraction).

    Returns:
        list: A list of summary strings describing performance comparisons.
    """
    global results
    summaries = []

    # Group results by flags and size for comparison
    grouped = defaultdict(lambda: defaultdict(list))
    for result in results:
        grouped[(result["flags"], result["size"])][result["program"]].append(
            result["conversion_time"]
        )

    # Compare performances
    for (flags, size), times in grouped.items():
        if "xxd" not in times or "tinyxxd" not in times:
            continue  # Skip if either program's data is missing
        avg_xxd = sum(times["xxd"]) / len(times["xxd"])
        avg_tinyxxd = sum(times["tinyxxd"]) / len(times["tinyxxd"])
        diff = abs(avg_xxd - avg_tinyxxd) / max(avg_xxd, avg_tinyxxd)

        # Only consider differences above the threshold
        if diff > threshold:
            better_program = "xxd" if avg_xxd < avg_tinyxxd else "tinyxxd"
            percent_faster = (
                diff / (1 - diff)
            ) * 100  # Calculate percentage faster relative to the slower program
            summary = f"With flags '{flags}' and size {size}MiB, {better_program} was {percent_faster:.2f}% faster."
            summaries.append(summary)

    return summaries


def summarize_performance_by_size(threshold=0.05):
    """Summarizes performance differences per sample size."""
    global results
    summary_data = defaultdict(lambda: defaultdict(list))
    # Collect data
    for result in results:
        summary_data[result["size"]][result["program"]].append(
            result["conversion_time"]
        )

    # Analyze and prepare summaries
    performance_summaries_by_size = []
    for size, data in summary_data.items():
        if "xxd" not in data or "tinyxxd" not in data:
            continue  # Skip if data for either program is missing

        avg_xxd = sum(data["xxd"]) / len(data["xxd"])
        avg_tinyxxd = sum(data["tinyxxd"]) / len(data["tinyxxd"])

        if avg_xxd < avg_tinyxxd:
            percent_faster = ((avg_tinyxxd - avg_xxd) / avg_xxd) * 100
            if percent_faster > threshold:
                summary = f"For {size}MiB files, xxd was {percent_faster:.2f}% faster than tinyxxd."
                performance_summaries_by_size.append(summary)
        else:
            percent_faster = ((avg_xxd - avg_tinyxxd) / avg_tinyxxd) * 100
            if percent_faster > threshold:
                summary = f"For {size}MiB files, tinyxxd was {percent_faster:.2f}% faster than xxd."
                performance_summaries_by_size.append(summary)

    return performance_summaries_by_size


def summarize_performance_by_flag(threshold=0.05):
    global results
    summary_data = defaultdict(lambda: defaultdict(list))

    # Collect data
    for result in results:
        summary_data[result["flags"]][result["program"]].append(
            result["conversion_time"]
        )

    # Analyze and prepare summaries
    performance_summaries_by_flag = []
    for flag, data in summary_data.items():
        if "xxd" not in data or "tinyxxd" not in data:
            # Skip if data for either program is missing
            continue

        avg_xxd = sum(data["xxd"]) / len(data["xxd"])
        avg_tinyxxd = sum(data["tinyxxd"]) / len(data["tinyxxd"])

        # Calculate the percentage faster relative to the slower program
        if avg_xxd != avg_tinyxxd:  # Check to ensure division by zero doesn't occur
            diff = abs(avg_xxd - avg_tinyxxd) / max(avg_xxd, avg_tinyxxd)
            if diff > threshold:
                better_program = "xxd" if avg_xxd < avg_tinyxxd else "tinyxxd"
                percent_faster = (diff / (1 - diff)) * 100
                summary = f"With flag '{flag}', {better_program} was {percent_faster:.2f}% faster."
                performance_summaries_by_flag.append(summary)

    return performance_summaries_by_flag


def summarize_performance_change():
    global results
    global previous_results

    performance_change_summaries = []

    # Convert previous results to a more accessible structure
    prev_summary = defaultdict(lambda: defaultdict(lambda: defaultdict(float)))
    for result in previous_results:
        prev_summary[result["program"]][result["flags"]][result["size"]] = float(
            result["conversion_time"]
        )

    # Calculate changes and summarize
    for current in results:
        program = current["program"]
        flags = current["flags"]
        size = current["size"]
        current_time = float(current["conversion_time"])
        prev_time = prev_summary[program][flags][size]

        if prev_time > 0:  # Ensure there was a previous run to compare against
            change_percent = ((current_time - prev_time) / prev_time) * 100
            if change_percent < 0:
                performance_change_summaries.append(
                    f"For {size}MiB files with flags '{flags}', {program} improved by {abs(change_percent):.2f}% compared to the last run."
                )
            elif change_percent > 0:
                performance_change_summaries.append(
                    f"For {size}MiB files with flags '{flags}', {program} slowed down by {change_percent:.2f}% compared to the last run."
                )
            # If change_percent is 0, you might choose not to add a summary for no change or handle it differently.

    return performance_change_summaries


def generate_html_report():
    global results
    global previous_results
    current_datetime_iso = datetime.now().isoformat()
    html_content = """
    <!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Benchmark results</title>
        <style>
        body { font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif; margin: 20px; background-color: #f8f9fa; }
        h2 { color: #17a2b8; }
        table { border-collapse: collapse; width: 100%; margin-top: 20px; }
        th, td { border: 1px solid #dee2e6; text-align: left; padding: 8px; }
        th { background-color: #17a2b8; color: #ffffff; }
        tr:nth-child(even) { background-color: #f2f2f2; }
        hr { border: 1px solid #17a2b8; margin-top: 40px; }
        p { color: #212529; }
        img { max-width: 100%; height: auto; }
        </style>
    </head>
    <body>
        <h2>Benchmark results</h2>
        <table>
            <tr>
                <th>Program</th>
                <th>Size (MiB)</th>
                <th>Conversion Time (s)</th>
                <th>Flags</th>
            </tr>
    """
    for result in results:
        html_content += f"""
            <tr>
                <td>{result['program']}</td>
                <td>{result['size']}</td>
                <td>{result['conversion_time']:.2f}</td>
                <td>{result['flags']}</td>
            </tr>
        """

    html_content += """
        </table>
    </body>
    </html>
    """
    html_content += "<hr>"

    performance_summaries = analyze_performance()
    for summary in performance_summaries:
        html_content += f"<p>{summary}</p>"
    html_content += "<hr>"

    # per-size performance summary
    performance_summaries_by_size = summarize_performance_by_size()
    for summary in performance_summaries_by_size:
        html_content += f"<p>{summary}</p>"
    html_content += "<hr>"

    # per-flag performance summary
    performance_summaries_by_flag = summarize_performance_by_flag()
    for summary in performance_summaries_by_flag:
        html_content += f"<p>{summary}</p>"
    html_content += "<hr>"

    if previous_results:
        performance_change_summaries = summarize_performance_change()
        for summary in performance_change_summaries:
            html_content += f"<p>{summary}</p>"
        html_content += "<hr>"

    html_content += "<h2>Graphs</h2>\n"
    html_content += "<h3>Graph by sample size</h3>\n"
    html_content += '<img src="img/graph_by_size.svg" alt="Graph by sample size">\n'
    for flag in bench_flags:
        flag_modified = flag.replace("-", "").replace("E", "e_upper")
        flag_suffix = flag if flag else "none"
        if flag_modified:
            html_content += f"<h3>Graph for flag '{flag}'</h3>\n"
        else:
            html_content += f"<h3>Graph for no flag</h3>\n"
        html_content += f'<img src="img/graph_flag_{flag_modified}.svg" alt="Graph Flag {flag_suffix}">\n'

    html_content += f"<p>Report generated on: {current_datetime_iso}</p>"
    html_content += "</body></html>"

    filename = "benchmark_results.html"
    with open(filename, "w") as file:
        file.write(html_content)

    print(f"Wrote {filename}.")


def generate_markdown_report():
    global results
    global previous_results
    current_datetime_iso = datetime.now().isoformat()
    md_content = "# Benchmark results\n\n"

    # Add the table header
    md_content += "| Program | Size (MiB) | Conversion Time (s) | Flags |\n"
    md_content += "|---------|------------|----------------------|-------|\n"

    # Add the table rows with the benchmark results
    for result in results:
        md_content += f"| {result['program']} | {result['size']} | {result['conversion_time']:.2f} | {result['flags']} |\n"

    # Add performance summaries
    md_content += "\n## Performance Summaries\n"
    performance_summaries = analyze_performance()
    for summary in performance_summaries:
        md_content += f"- {summary}\n"

    md_content += "\n### Performance by sample size\n"
    performance_summaries_by_size = summarize_performance_by_size()
    for summary in performance_summaries_by_size:
        md_content += f"- {summary}\n"

    md_content += "\n### Performance by flag\n"
    performance_summaries_by_flag = summarize_performance_by_flag()
    for summary in performance_summaries_by_flag:
        md_content += f"- {summary}\n"

    if previous_results:
        md_content += "\n### Performance compared to last run\n"
        performance_change_summaries = summarize_performance_change()
        for summary in performance_change_summaries:
            md_content += f"- {summary}\n"

    md_content += "\n## Graphs\n\n"
    md_content += "### Graph by sample size\n"
    md_content += "![Graph by sample size](img/graph_by_size.svg)\n\n"
    for flag in bench_flags:
        flag_suffix = flag.replace("-", "").replace("E", "e_upper") if flag else "none"
        if flag:
            md_content += f"### Graph for flag '{flag}'\n"
        else:
            md_content += f"### Graph for no flag\n"
        md_content += (
            f"![Graph Flag {flag_suffix}](img/graph_flag_{flag_suffix}.svg)\n\n"
        )

    md_content = md_content.replace("xxd", "xxd")

    md_content += f"\nReport generated on: {current_datetime_iso}\n"

    # Write the Markdown content to a file
    filename = "benchmark_results.md"
    with open(filename, "w") as md_file:
        md_file.write(md_content)
    print(f"Wrote {filename}.")


def cleanup_files():
    """Removes sample and output files created during the benchmark."""
    global base_path
    for size in sample_sizes:
        for flags in bench_flags:
            files_to_delete = [
                os.path.join(base_path, f"{size}mb.bin"),
                os.path.join(base_path, f"{size}mb_recreated.bin"),
                os.path.join(base_path, f"{size}mb{flags}_xxd.hex"),
                os.path.join(base_path, f"{size}mb{flags}_tinyxxd.hex"),
            ]
            for file in files_to_delete:
                try:
                    os.remove(file)
                except OSError:
                    pass


def gnuplot_is_available():
    """Check if gnuplot is available on the system and works."""
    try:
        subprocess.run(
            ["gnuplot", "--version"],
            check=True,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
        )
        return True
    except subprocess.CalledProcessError as e:
        print(
            "gnuplot not found or an error occurred while checking gnuplot version:", e
        )
        return False
    except FileNotFoundError:
        print("gnuplot is not installed or not in the PATH.")
        return False


def export_benchmark_results_for_gnuplot(data_filename, group_by):
    global previous_results
    include_previous = len(previous_results) > 0

    with open(data_filename, "w") as f:
        if group_by == "size":
            header_line = "#SampleSizeMB xxd tinyxxd"
            if include_previous:
                header_line += " previous_tinyxxd"
            f.write(header_line + "\n")

            for size in sample_sizes:
                data_line = f"{size} " + " ".join(
                    f"{next((x['conversion_time'] for x in results if x['program'] == prog and x['size'] == size and x['flags'] == ''), 'NaN')}"
                    for prog in ["xxd", "tinyxxd"]
                )
                if include_previous:
                    prev_time = next(
                        (
                            x["conversion_time"]
                            for x in previous_results
                            if x["program"] == "tinyxxd"
                            and x["size"] == size
                            and x["flags"] == ""
                        ),
                        "NaN",
                    )
                    data_line += f" {prev_time}"
                f.write(data_line + "\n")

        elif group_by == "flags":
            header_line = "#Flag xxd tinyxxd"
            if include_previous:
                header_line += " previous_tinyxxd"
            f.write(header_line + "\n")

        for flag in bench_flags:
            modified_flag = flag.replace("-", "").replace("E", "e_upper")
            if modified_flag == "":
                modified_flag = "N/A"
            data_line = f"'{modified_flag}' " + " ".join(  # Ensure flags are quoted for gnuplot
                f"{next((x['conversion_time'] for x in results if x['program'] == prog and x['flags'] == flag), 'NaN')}"
                for prog in ["xxd", "tinyxxd"]
            )
            if include_previous:
                prev_time = next(
                    (
                        x["conversion_time"]
                        for x in previous_results
                        if x["program"] == "tinyxxd" and x["flags"] == flag
                    ),
                    "NaN",
                )
                data_line += f" {prev_time}"
            f.write(data_line + "\n")

    print(f"Wrote {data_filename}.")


def export_benchmark_results_for_each_flag():
    for flag in bench_flags:
        filename = f'img/benchmark_data_flag_{flag.replace("-", "").replace("E", "e_upper") if flag else "none"}.dat'
        with open(filename, "w") as file:
            header = (
                "#SampleSizeMB xxd tinyxxd"
                + (" previous_tinyxxd" if previous_results else "")
                + "\n"
            )
            file.write(header)
            for size in sample_sizes:
                line = f"{size} "
                line += " ".join(
                    f"{avg_time_for_program_size_flag(program, size, flag)}"
                    for program in ["xxd", "tinyxxd"]
                )
                if previous_results:
                    prev_avg_time = avg_time_for_program_size_flag(
                        "tinyxxd", size, flag, previous=True
                    )
                    line += f" {prev_avg_time}"
                file.write(line + "\n")


def generate_graphs_for_each_flag():
    for flag in bench_flags:
        modified_flag = flag.replace("-", "").replace("E", "e_upper")
        data_filename = (
            f'img/benchmark_data_flag_{modified_flag if modified_flag else "none"}.dat'
        )
        graph_filename = (
            f'img/graph_flag_{modified_flag if modified_flag else "none"}.svg'
        )
        title = f"Benchmark results for no flag"
        if modified_flag:
            title = f"Benchmark results for flag {flag}"
        generate_gnuplot_graph(
            data_filename, graph_filename, title, "Sample size (MiB)", "Time (seconds)"
        )


def avg_time_for_program_size_flag(program, size, flag, previous=False):
    relevant_results = previous_results if previous else results
    times = [
        result["conversion_time"]
        for result in relevant_results
        if result["program"] == program
        and result["size"] == size
        and result["flags"] == flag
    ]
    if times:
        return sum(times) / len(times)
    return "NaN"


def generate_gnuplot_graph(data_filename, graph_filename, title, xlabel, ylabel):
    global previous_results
    include_previous = len(previous_results) > 0

    plot_commands = [
        f"'{data_filename}' using 1:2 title 'xxd' with linespoints",
        f"'{data_filename}' using 1:3 title 'tinyxxd' with linespoints",
    ]
    if include_previous:
        plot_commands.append(
            f"'{data_filename}' using 1:4 title 'previous tinyxxd' with linespoints"
        )

    gnuplot_commands = f"""
set terminal svg size 800,600 enhanced background rgb 'white'
set output '{graph_filename}'
set title '{title}'
set xlabel '{xlabel}'
set ylabel '{ylabel}'
set key outside
set grid
plot {", ".join(plot_commands)}
"""

    # Write commands to a temporary script file
    with tempfile.NamedTemporaryFile("w", delete=False) as script_file:
        script_file.write(gnuplot_commands)
        script_filename = script_file.name

    # Execute the script with gnuplot
    subprocess.run(["gnuplot", script_filename], check=True)

    # Optionally, remove the script file after execution
    os.remove(script_filename)

    print(f"Wrote {graph_filename}.")


def clean_all_hex_bin():
    for pattern in ["*mb.bin", "*mb.hex"]:
        for file_path in glob.glob(os.path.join(directory, pattern)):
            try:
                os.remove(file_path)
                print(f"removed {file_path}")
            except OSError as e:
                print(f"Error removing {file_path}: {e.strerror}")


def main():
    atexit.register(cleanup_files)
    try:
        read_previous_results()
        compile_programs()
        perform_benchmarks()
        write_results_to_file()
        generate_html_report()
        generate_markdown_report()
        if gnuplot_is_available():
            export_benchmark_results_for_gnuplot(
                "img/benchmark_data_by_size.dat", "size"
            )
            generate_gnuplot_graph(
                "img/benchmark_data_by_size.dat",
                "img/graph_by_size.svg",
                "Benchmark results by sample size",
                "Sample size (MiB)",
                "Time (seconds)",
            )
            export_benchmark_results_for_each_flag()
            generate_graphs_for_each_flag()
            print_final_comparison()
    except KeyboardInterrupt:
        print("\nctrl-c")
    clean_all_hex_bin()


if __name__ == "__main__":
    main()
