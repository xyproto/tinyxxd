# Benchmark Results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| og_xxd | 64 | 1.62 |  |
| og_xxd | 64 | 2.18 | -r |
| og_xxd | 64 | 1.58 |  |
| og_xxd | 64 | 0.95 | -p |
| og_xxd | 64 | 4.92 | -i |
| og_xxd | 64 | 1.57 | -e |
| og_xxd | 64 | 3.62 | -b |
| og_xxd | 64 | 1.52 | -u |
| og_xxd | 64 | 1.67 | -E |
| tinyxxd | 64 | 1.29 |  |
| tinyxxd | 64 | 2.18 | -r |
| tinyxxd | 64 | 1.25 |  |
| tinyxxd | 64 | 0.83 | -p |
| tinyxxd | 64 | 4.90 | -i |
| tinyxxd | 64 | 1.29 | -e |
| tinyxxd | 64 | 3.06 | -b |
| tinyxxd | 64 | 1.34 | -u |
| tinyxxd | 64 | 1.40 | -E |
| og_xxd | 32 | 0.78 |  |
| og_xxd | 32 | 1.09 | -r |
| og_xxd | 32 | 0.77 |  |
| og_xxd | 32 | 0.49 | -p |
| og_xxd | 32 | 2.46 | -i |
| og_xxd | 32 | 0.75 | -e |
| og_xxd | 32 | 1.79 | -b |
| og_xxd | 32 | 0.77 | -u |
| og_xxd | 32 | 0.83 | -E |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 1.09 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.41 | -p |
| tinyxxd | 32 | 2.43 | -i |
| tinyxxd | 32 | 0.64 | -e |
| tinyxxd | 32 | 1.53 | -b |
| tinyxxd | 32 | 0.65 | -u |
| tinyxxd | 32 | 0.70 | -E |
| og_xxd | 16 | 0.40 |  |
| og_xxd | 16 | 0.55 | -r |
| og_xxd | 16 | 0.38 |  |
| og_xxd | 16 | 0.24 | -p |
| og_xxd | 16 | 1.24 | -i |
| og_xxd | 16 | 0.37 | -e |
| og_xxd | 16 | 0.88 | -b |
| og_xxd | 16 | 0.37 | -u |
| og_xxd | 16 | 0.41 | -E |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.54 | -r |
| tinyxxd | 16 | 0.31 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.23 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.76 | -b |
| tinyxxd | 16 | 0.33 | -u |
| tinyxxd | 16 | 0.37 | -E |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.27 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.61 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| og_xxd | 8 | 0.20 |  |
| og_xxd | 8 | 0.28 | -r |
| og_xxd | 8 | 0.19 |  |
| og_xxd | 8 | 0.12 | -p |
| og_xxd | 8 | 0.64 | -i |
| og_xxd | 8 | 0.19 | -e |
| og_xxd | 8 | 0.44 | -b |
| og_xxd | 8 | 0.19 | -u |
| og_xxd | 8 | 0.21 | -E |

## Performance Summaries
- With flags '' and size 64MiB, tinyxxd was 26.25% faster.
- With flags '-p' and size 64MiB, tinyxxd was 13.99% faster.
- With flags '-e' and size 64MiB, tinyxxd was 21.89% faster.
- With flags '-b' and size 64MiB, tinyxxd was 18.27% faster.
- With flags '-u' and size 64MiB, tinyxxd was 13.77% faster.
- With flags '-E' and size 64MiB, tinyxxd was 19.30% faster.
- With flags '' and size 32MiB, tinyxxd was 21.18% faster.
- With flags '-p' and size 32MiB, tinyxxd was 17.86% faster.
- With flags '-e' and size 32MiB, tinyxxd was 16.22% faster.
- With flags '-b' and size 32MiB, tinyxxd was 17.27% faster.
- With flags '-u' and size 32MiB, tinyxxd was 17.23% faster.
- With flags '-E' and size 32MiB, tinyxxd was 18.07% faster.
- With flags '' and size 16MiB, tinyxxd was 22.48% faster.
- With flags '-p' and size 16MiB, tinyxxd was 15.39% faster.
- With flags '-e' and size 16MiB, tinyxxd was 14.97% faster.
- With flags '-b' and size 16MiB, tinyxxd was 15.83% faster.
- With flags '-u' and size 16MiB, tinyxxd was 11.60% faster.
- With flags '-E' and size 16MiB, tinyxxd was 12.51% faster.
- With flags '' and size 8MiB, tinyxxd was 19.86% faster.
- With flags '-p' and size 8MiB, tinyxxd was 14.99% faster.
- With flags '-e' and size 8MiB, tinyxxd was 17.80% faster.
- With flags '-b' and size 8MiB, tinyxxd was 16.29% faster.
- With flags '-u' and size 8MiB, tinyxxd was 21.87% faster.
- With flags '-E' and size 8MiB, tinyxxd was 18.97% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 11.99% faster than og_xxd.
- For 32MiB files, tinyxxd was 11.24% faster than og_xxd.
- For 16MiB files, tinyxxd was 9.97% faster than og_xxd.
- For 8MiB files, tinyxxd was 12.56% faster than og_xxd.

### Performance by flag
- With flag '', tinyxxd was 23.95% faster.
- With flag '-p', tinyxxd was 15.27% faster.
- With flag '-e', tinyxxd was 19.18% faster.
- With flag '-b', tinyxxd was 17.55% faster.
- With flag '-u', tinyxxd was 14.91% faster.
- With flag '-E', tinyxxd was 18.01% faster.

### Performance compared to last run
- For 64MiB files with flags '', og_xxd slowed down by 5.01% compared to the last run.
- For 64MiB files with flags '-r', og_xxd improved by 3.28% compared to the last run.
- For 64MiB files with flags '', og_xxd slowed down by 2.25% compared to the last run.
- For 64MiB files with flags '-p', og_xxd improved by 1.93% compared to the last run.
- For 64MiB files with flags '-i', og_xxd improved by 0.90% compared to the last run.
- For 64MiB files with flags '-e', og_xxd slowed down by 5.24% compared to the last run.
- For 64MiB files with flags '-b', og_xxd slowed down by 3.02% compared to the last run.
- For 64MiB files with flags '-u', og_xxd improved by 0.99% compared to the last run.
- For 64MiB files with flags '-E', og_xxd improved by 2.98% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 3.30% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd slowed down by 1.40% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 0.22% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd slowed down by 1.54% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd slowed down by 0.68% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd improved by 1.56% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd slowed down by 2.66% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd improved by 5.49% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd slowed down by 0.57% compared to the last run.
- For 32MiB files with flags '', og_xxd slowed down by 2.30% compared to the last run.
- For 32MiB files with flags '-r', og_xxd improved by 3.14% compared to the last run.
- For 32MiB files with flags '', og_xxd slowed down by 0.42% compared to the last run.
- For 32MiB files with flags '-p', og_xxd slowed down by 1.88% compared to the last run.
- For 32MiB files with flags '-i', og_xxd improved by 0.18% compared to the last run.
- For 32MiB files with flags '-e', og_xxd improved by 2.00% compared to the last run.
- For 32MiB files with flags '-b', og_xxd slowed down by 0.67% compared to the last run.
- For 32MiB files with flags '-u', og_xxd improved by 1.70% compared to the last run.
- For 32MiB files with flags '-E', og_xxd slowed down by 0.19% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 2.68% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd improved by 0.02% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 1.22% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd improved by 2.41% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd slowed down by 0.49% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd improved by 0.26% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd slowed down by 1.24% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd slowed down by 4.21% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd improved by 0.50% compared to the last run.
- For 16MiB files with flags '', og_xxd slowed down by 7.66% compared to the last run.
- For 16MiB files with flags '-r', og_xxd improved by 3.73% compared to the last run.
- For 16MiB files with flags '', og_xxd slowed down by 1.57% compared to the last run.
- For 16MiB files with flags '-p', og_xxd improved by 0.20% compared to the last run.
- For 16MiB files with flags '-i', og_xxd slowed down by 2.25% compared to the last run.
- For 16MiB files with flags '-e', og_xxd improved by 1.15% compared to the last run.
- For 16MiB files with flags '-b', og_xxd improved by 0.73% compared to the last run.
- For 16MiB files with flags '-u', og_xxd improved by 2.64% compared to the last run.
- For 16MiB files with flags '-E', og_xxd slowed down by 0.32% compared to the last run.
- For 16MiB files with flags '', tinyxxd improved by 3.47% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd improved by 0.12% compared to the last run.
- For 16MiB files with flags '', tinyxxd improved by 5.95% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd improved by 0.12% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd slowed down by 1.28% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd improved by 0.12% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd improved by 0.92% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd slowed down by 5.36% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd slowed down by 0.26% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 5.79% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd slowed down by 0.55% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 0.46% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd improved by 0.07% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd improved by 0.03% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd slowed down by 0.00% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd improved by 3.81% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd improved by 0.73% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd improved by 0.36% compared to the last run.
- For 8MiB files with flags '', og_xxd slowed down by 4.64% compared to the last run.
- For 8MiB files with flags '-r', og_xxd slowed down by 0.54% compared to the last run.
- For 8MiB files with flags '', og_xxd slowed down by 2.78% compared to the last run.
- For 8MiB files with flags '-p', og_xxd improved by 0.26% compared to the last run.
- For 8MiB files with flags '-i', og_xxd slowed down by 3.95% compared to the last run.
- For 8MiB files with flags '-e', og_xxd slowed down by 2.57% compared to the last run.
- For 8MiB files with flags '-b', og_xxd improved by 8.88% compared to the last run.
- For 8MiB files with flags '-u', og_xxd slowed down by 2.66% compared to the last run.
- For 8MiB files with flags '-E', og_xxd slowed down by 1.74% compared to the last run.

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


Report generated on: 2024-02-11T21:57:38.156359
