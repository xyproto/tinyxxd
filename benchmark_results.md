# Benchmark Results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| og_xxd | 64 | 1.57 |  |
| og_xxd | 64 | 2.17 | -r |
| og_xxd | 64 | 1.56 |  |
| og_xxd | 64 | 0.95 | -p |
| og_xxd | 64 | 4.98 | -i |
| og_xxd | 64 | 1.49 | -e |
| og_xxd | 64 | 3.53 | -b |
| og_xxd | 64 | 1.59 | -u |
| og_xxd | 64 | 1.68 | -E |
| tinyxxd | 64 | 1.27 |  |
| tinyxxd | 64 | 2.73 | -r |
| tinyxxd | 64 | 1.27 |  |
| tinyxxd | 64 | 0.82 | -p |
| tinyxxd | 64 | 4.87 | -i |
| tinyxxd | 64 | 1.29 | -e |
| tinyxxd | 64 | 3.04 | -b |
| tinyxxd | 64 | 1.29 | -u |
| tinyxxd | 64 | 1.70 | -E |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 1.07 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.41 | -p |
| tinyxxd | 32 | 2.41 | -i |
| tinyxxd | 32 | 0.64 | -e |
| tinyxxd | 32 | 1.51 | -b |
| tinyxxd | 32 | 0.62 | -u |
| tinyxxd | 32 | 0.69 | -E |
| og_xxd | 32 | 0.79 |  |
| og_xxd | 32 | 1.13 | -r |
| og_xxd | 32 | 0.74 |  |
| og_xxd | 32 | 0.48 | -p |
| og_xxd | 32 | 2.45 | -i |
| og_xxd | 32 | 0.75 | -e |
| og_xxd | 32 | 1.79 | -b |
| og_xxd | 32 | 0.75 | -u |
| og_xxd | 32 | 0.83 | -E |
| og_xxd | 16 | 0.40 |  |
| og_xxd | 16 | 0.55 | -r |
| og_xxd | 16 | 0.37 |  |
| og_xxd | 16 | 0.26 | -p |
| og_xxd | 16 | 1.24 | -i |
| og_xxd | 16 | 0.37 | -e |
| og_xxd | 16 | 0.90 | -b |
| og_xxd | 16 | 0.38 | -u |
| og_xxd | 16 | 0.41 | -E |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.59 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.21 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.77 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.38 | -E |
| og_xxd | 8 | 0.20 |  |
| og_xxd | 8 | 0.27 | -r |
| og_xxd | 8 | 0.19 |  |
| og_xxd | 8 | 0.12 | -p |
| og_xxd | 8 | 0.61 | -i |
| og_xxd | 8 | 0.19 | -e |
| og_xxd | 8 | 0.48 | -b |
| og_xxd | 8 | 0.21 | -u |
| og_xxd | 8 | 0.24 | -E |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.29 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.63 | -i |
| tinyxxd | 8 | 0.17 | -e |
| tinyxxd | 8 | 0.39 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |

## Performance Summaries
- With flags '' and size 64MiB, tinyxxd was 23.58% faster.
- With flags '-r' and size 64MiB, og_xxd was 25.61% faster.
- With flags '-p' and size 64MiB, tinyxxd was 15.75% faster.
- With flags '-e' and size 64MiB, tinyxxd was 15.38% faster.
- With flags '-b' and size 64MiB, tinyxxd was 16.08% faster.
- With flags '-u' and size 64MiB, tinyxxd was 23.07% faster.
- With flags '' and size 32MiB, tinyxxd was 20.73% faster.
- With flags '-p' and size 32MiB, tinyxxd was 16.28% faster.
- With flags '-e' and size 32MiB, tinyxxd was 17.08% faster.
- With flags '-b' and size 32MiB, tinyxxd was 18.24% faster.
- With flags '-u' and size 32MiB, tinyxxd was 20.47% faster.
- With flags '-E' and size 32MiB, tinyxxd was 19.53% faster.
- With flags '' and size 16MiB, tinyxxd was 17.55% faster.
- With flags '-r' and size 16MiB, og_xxd was 7.22% faster.
- With flags '-p' and size 16MiB, tinyxxd was 21.49% faster.
- With flags '-e' and size 16MiB, tinyxxd was 15.08% faster.
- With flags '-b' and size 16MiB, tinyxxd was 16.90% faster.
- With flags '-u' and size 16MiB, tinyxxd was 21.64% faster.
- With flags '-E' and size 16MiB, tinyxxd was 8.81% faster.
- With flags '' and size 8MiB, tinyxxd was 19.26% faster.
- With flags '-p' and size 8MiB, tinyxxd was 13.71% faster.
- With flags '-e' and size 8MiB, tinyxxd was 12.81% faster.
- With flags '-b' and size 8MiB, tinyxxd was 22.92% faster.
- With flags '-u' and size 8MiB, tinyxxd was 30.66% faster.
- With flags '-E' and size 8MiB, tinyxxd was 34.59% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 6.82% faster than og_xxd.
- For 32MiB files, tinyxxd was 12.41% faster than og_xxd.
- For 16MiB files, tinyxxd was 9.56% faster than og_xxd.
- For 8MiB files, tinyxxd was 12.04% faster than og_xxd.

### Performance by flag
- With flag '', tinyxxd was 21.71% faster.
- With flag '-r', og_xxd was 13.42% faster.
- With flag '-p', tinyxxd was 16.53% faster.
- With flag '-e', tinyxxd was 15.61% faster.
- With flag '-b', tinyxxd was 17.23% faster.
- With flag '-u', tinyxxd was 22.72% faster.
- With flag '-E', tinyxxd was 7.30% faster.

### Performance compared to last run
- For 64MiB files with flags '', og_xxd improved by 0.02% compared to the last run.
- For 64MiB files with flags '-r', og_xxd improved by 9.65% compared to the last run.
- For 64MiB files with flags '', og_xxd improved by 1.07% compared to the last run.
- For 64MiB files with flags '-p', og_xxd improved by 1.24% compared to the last run.
- For 64MiB files with flags '-i', og_xxd slowed down by 2.01% compared to the last run.
- For 64MiB files with flags '-e', og_xxd improved by 0.24% compared to the last run.
- For 64MiB files with flags '-b', og_xxd improved by 1.29% compared to the last run.
- For 64MiB files with flags '-u', og_xxd slowed down by 2.37% compared to the last run.
- For 64MiB files with flags '-E', og_xxd slowed down by 1.70% compared to the last run.
- For 64MiB files with flags '', tinyxxd improved by 7.44% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd slowed down by 30.55% compared to the last run.
- For 64MiB files with flags '', tinyxxd improved by 7.46% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd slowed down by 1.15% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd improved by 1.30% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd slowed down by 0.54% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd slowed down by 1.47% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd slowed down by 4.05% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd slowed down by 22.36% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 2.31% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd slowed down by 1.70% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 0.24% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd slowed down by 0.99% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd improved by 0.84% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd improved by 1.08% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd slowed down by 1.81% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd improved by 6.03% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd improved by 1.57% compared to the last run.
- For 32MiB files with flags '', og_xxd slowed down by 5.15% compared to the last run.
- For 32MiB files with flags '-r', og_xxd slowed down by 3.20% compared to the last run.
- For 32MiB files with flags '', og_xxd improved by 1.28% compared to the last run.
- For 32MiB files with flags '-p', og_xxd slowed down by 1.16% compared to the last run.
- For 32MiB files with flags '-i', og_xxd slowed down by 0.89% compared to the last run.
- For 32MiB files with flags '-e', og_xxd improved by 0.00% compared to the last run.
- For 32MiB files with flags '-b', og_xxd improved by 2.29% compared to the last run.
- For 32MiB files with flags '-u', og_xxd improved by 2.22% compared to the last run.
- For 32MiB files with flags '-E', og_xxd improved by 1.45% compared to the last run.
- For 16MiB files with flags '', og_xxd slowed down by 4.37% compared to the last run.
- For 16MiB files with flags '-r', og_xxd improved by 1.33% compared to the last run.
- For 16MiB files with flags '', og_xxd improved by 1.18% compared to the last run.
- For 16MiB files with flags '-p', og_xxd slowed down by 6.33% compared to the last run.
- For 16MiB files with flags '-i', og_xxd slowed down by 1.01% compared to the last run.
- For 16MiB files with flags '-e', og_xxd improved by 0.52% compared to the last run.
- For 16MiB files with flags '-b', og_xxd slowed down by 2.22% compared to the last run.
- For 16MiB files with flags '-u', og_xxd improved by 0.59% compared to the last run.
- For 16MiB files with flags '-E', og_xxd improved by 2.88% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 6.77% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd improved by 10.76% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 3.60% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd slowed down by 3.50% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd slowed down by 0.26% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd slowed down by 0.41% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd slowed down by 3.00% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd improved by 7.31% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd slowed down by 3.86% compared to the last run.
- For 8MiB files with flags '', og_xxd slowed down by 2.67% compared to the last run.
- For 8MiB files with flags '-r', og_xxd improved by 50.70% compared to the last run.
- For 8MiB files with flags '', og_xxd improved by 2.52% compared to the last run.
- For 8MiB files with flags '-p', og_xxd improved by 0.72% compared to the last run.
- For 8MiB files with flags '-i', og_xxd improved by 4.12% compared to the last run.
- For 8MiB files with flags '-e', og_xxd improved by 3.74% compared to the last run.
- For 8MiB files with flags '-b', og_xxd slowed down by 7.19% compared to the last run.
- For 8MiB files with flags '-u', og_xxd slowed down by 10.69% compared to the last run.
- For 8MiB files with flags '-E', og_xxd slowed down by 14.43% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 5.26% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd slowed down by 8.33% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 1.01% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd slowed down by 3.51% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd slowed down by 2.95% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd slowed down by 1.98% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd slowed down by 0.11% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd improved by 5.79% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd improved by 6.51% compared to the last run.

## Graphs

### Graph by Size
![Graph by Size](img/graph_by_size.svg)

### Graph for no flag
![Graph Flag none](img/graph_flag_none.svg)

### Graph for flag '-p'
![Graph Flag p](img/graph_flag_p.svg)

### Graph for flag '-i'
![Graph Flag i](img/graph_flag_i.svg)

### Graph for flag '-e'
![Graph Flag e](img/graph_flag_e.svg)

### Graph for flag '-b'
![Graph Flag b](img/graph_flag_b.svg)

### Graph for flag '-u'
![Graph Flag u](img/graph_flag_u.svg)

### Graph for flag '-E'
![Graph Flag E](img/graph_flag_E.svg)


Report generated on: 2024-02-10T23:45:09.186145
