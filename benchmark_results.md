# Benchmark Results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| og_xxd | 64 | 1.64 |  |
| og_xxd | 64 | 2.17 | -r |
| og_xxd | 64 | 1.51 |  |
| og_xxd | 64 | 0.95 | -p |
| og_xxd | 64 | 4.95 | -i |
| og_xxd | 64 | 1.51 | -e |
| og_xxd | 64 | 3.63 | -b |
| og_xxd | 64 | 1.50 | -u |
| og_xxd | 64 | 1.66 | -E |
| tinyxxd | 64 | 1.28 |  |
| tinyxxd | 64 | 2.16 | -r |
| tinyxxd | 64 | 1.24 |  |
| tinyxxd | 64 | 0.84 | -p |
| tinyxxd | 64 | 4.90 | -i |
| tinyxxd | 64 | 1.30 | -e |
| tinyxxd | 64 | 3.07 | -b |
| tinyxxd | 64 | 1.31 | -u |
| tinyxxd | 64 | 1.41 | -E |
| tinyxxd | 32 | 0.66 |  |
| tinyxxd | 32 | 1.09 | -r |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 0.42 | -p |
| tinyxxd | 32 | 2.44 | -i |
| tinyxxd | 32 | 0.64 | -e |
| tinyxxd | 32 | 1.51 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.74 | -E |
| og_xxd | 32 | 0.76 |  |
| og_xxd | 32 | 1.12 | -r |
| og_xxd | 32 | 0.77 |  |
| og_xxd | 32 | 0.48 | -p |
| og_xxd | 32 | 2.45 | -i |
| og_xxd | 32 | 0.74 | -e |
| og_xxd | 32 | 1.80 | -b |
| og_xxd | 32 | 0.75 | -u |
| og_xxd | 32 | 0.86 | -E |
| og_xxd | 16 | 0.39 |  |
| og_xxd | 16 | 0.55 | -r |
| og_xxd | 16 | 0.37 |  |
| og_xxd | 16 | 0.24 | -p |
| og_xxd | 16 | 1.22 | -i |
| og_xxd | 16 | 0.37 | -e |
| og_xxd | 16 | 0.88 | -b |
| og_xxd | 16 | 0.38 | -u |
| og_xxd | 16 | 0.41 | -E |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.55 | -r |
| tinyxxd | 16 | 0.31 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.21 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.76 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.37 | -E |
| og_xxd | 8 | 0.19 |  |
| og_xxd | 8 | 0.28 | -r |
| og_xxd | 8 | 0.19 |  |
| og_xxd | 8 | 0.12 | -p |
| og_xxd | 8 | 0.61 | -i |
| og_xxd | 8 | 0.19 | -e |
| og_xxd | 8 | 0.44 | -b |
| og_xxd | 8 | 0.19 | -u |
| og_xxd | 8 | 0.21 | -E |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.27 | -r |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.63 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |

## Performance Summaries
- With flags '' and size 64MiB, tinyxxd was 24.65% faster.
- With flags '-p' and size 64MiB, tinyxxd was 12.55% faster.
- With flags '-e' and size 64MiB, tinyxxd was 15.51% faster.
- With flags '-b' and size 64MiB, tinyxxd was 18.34% faster.
- With flags '-u' and size 64MiB, tinyxxd was 14.09% faster.
- With flags '-E' and size 64MiB, tinyxxd was 17.39% faster.
- With flags '' and size 32MiB, tinyxxd was 18.09% faster.
- With flags '-p' and size 32MiB, tinyxxd was 13.57% faster.
- With flags '-e' and size 32MiB, tinyxxd was 16.08% faster.
- With flags '-b' and size 32MiB, tinyxxd was 19.64% faster.
- With flags '-u' and size 32MiB, tinyxxd was 19.47% faster.
- With flags '-E' and size 32MiB, tinyxxd was 15.27% faster.
- With flags '' and size 16MiB, tinyxxd was 20.65% faster.
- With flags '-p' and size 16MiB, tinyxxd was 15.47% faster.
- With flags '-e' and size 16MiB, tinyxxd was 16.01% faster.
- With flags '-b' and size 16MiB, tinyxxd was 15.81% faster.
- With flags '-u' and size 16MiB, tinyxxd was 19.10% faster.
- With flags '-E' and size 16MiB, tinyxxd was 12.51% faster.
- With flags '' and size 8MiB, tinyxxd was 15.12% faster.
- With flags '-p' and size 8MiB, tinyxxd was 15.54% faster.
- With flags '-e' and size 8MiB, tinyxxd was 14.60% faster.
- With flags '-b' and size 8MiB, tinyxxd was 16.42% faster.
- With flags '-u' and size 8MiB, tinyxxd was 21.35% faster.
- With flags '-E' and size 8MiB, tinyxxd was 16.71% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 11.37% faster than og_xxd.
- For 32MiB files, tinyxxd was 10.86% faster than og_xxd.
- For 16MiB files, tinyxxd was 10.30% faster than og_xxd.
- For 8MiB files, tinyxxd was 9.46% faster than og_xxd.

### Performance by flag
- With flag '', tinyxxd was 21.68% faster.
- With flag '-p', tinyxxd was 13.41% faster.
- With flag '-e', tinyxxd was 15.66% faster.
- With flag '-b', tinyxxd was 18.22% faster.
- With flag '-u', tinyxxd was 16.63% faster.
- With flag '-E', tinyxxd was 16.10% faster.

### Performance compared to last run
- For 64MiB files with flags '', og_xxd slowed down by 5.31% compared to the last run.
- For 64MiB files with flags '-r', og_xxd slowed down by 0.16% compared to the last run.
- For 64MiB files with flags '', og_xxd improved by 2.82% compared to the last run.
- For 64MiB files with flags '-p', og_xxd improved by 0.41% compared to the last run.
- For 64MiB files with flags '-i', og_xxd improved by 0.44% compared to the last run.
- For 64MiB files with flags '-e', og_xxd slowed down by 1.25% compared to the last run.
- For 64MiB files with flags '-b', og_xxd slowed down by 2.83% compared to the last run.
- For 64MiB files with flags '-u', og_xxd improved by 5.94% compared to the last run.
- For 64MiB files with flags '-E', og_xxd improved by 1.50% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 1.39% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd improved by 20.66% compared to the last run.
- For 64MiB files with flags '', tinyxxd improved by 1.67% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd slowed down by 2.42% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd slowed down by 0.53% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd slowed down by 1.14% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd slowed down by 0.86% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd slowed down by 1.47% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd improved by 16.82% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 4.69% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd slowed down by 1.82% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 1.43% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd slowed down by 2.14% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd slowed down by 1.50% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd slowed down by 0.59% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd improved by 0.16% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd slowed down by 0.53% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd slowed down by 7.15% compared to the last run.
- For 32MiB files with flags '', og_xxd slowed down by 2.48% compared to the last run.
- For 32MiB files with flags '-r', og_xxd improved by 0.91% compared to the last run.
- For 32MiB files with flags '', og_xxd slowed down by 3.57% compared to the last run.
- For 32MiB files with flags '-p', og_xxd improved by 0.24% compared to the last run.
- For 32MiB files with flags '-i', og_xxd slowed down by 0.00% compared to the last run.
- For 32MiB files with flags '-e', og_xxd improved by 0.27% compared to the last run.
- For 32MiB files with flags '-b', og_xxd slowed down by 1.02% compared to the last run.
- For 32MiB files with flags '-u', og_xxd improved by 0.31% compared to the last run.
- For 32MiB files with flags '-E', og_xxd slowed down by 3.34% compared to the last run.
- For 16MiB files with flags '', og_xxd slowed down by 5.24% compared to the last run.
- For 16MiB files with flags '-r', og_xxd improved by 0.09% compared to the last run.
- For 16MiB files with flags '', og_xxd improved by 0.51% compared to the last run.
- For 16MiB files with flags '-p', og_xxd improved by 6.00% compared to the last run.
- For 16MiB files with flags '-i', og_xxd improved by 1.61% compared to the last run.
- For 16MiB files with flags '-e', og_xxd slowed down by 0.54% compared to the last run.
- For 16MiB files with flags '-b', og_xxd improved by 1.86% compared to the last run.
- For 16MiB files with flags '-u', og_xxd slowed down by 0.17% compared to the last run.
- For 16MiB files with flags '-E', og_xxd improved by 0.48% compared to the last run.
- For 16MiB files with flags '', tinyxxd improved by 0.08% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd improved by 7.18% compared to the last run.
- For 16MiB files with flags '', tinyxxd improved by 2.92% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd improved by 1.10% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd improved by 0.08% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd improved by 0.27% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd improved by 0.94% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd slowed down by 2.30% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd improved by 3.76% compared to the last run.
- For 8MiB files with flags '', og_xxd slowed down by 2.15% compared to the last run.
- For 8MiB files with flags '-r', og_xxd slowed down by 3.49% compared to the last run.
- For 8MiB files with flags '', og_xxd slowed down by 0.06% compared to the last run.
- For 8MiB files with flags '-p', og_xxd improved by 0.01% compared to the last run.
- For 8MiB files with flags '-i', og_xxd slowed down by 0.67% compared to the last run.
- For 8MiB files with flags '-e', og_xxd slowed down by 0.22% compared to the last run.
- For 8MiB files with flags '-b', og_xxd improved by 7.83% compared to the last run.
- For 8MiB files with flags '-u', og_xxd improved by 8.92% compared to the last run.
- For 8MiB files with flags '-E', og_xxd improved by 12.13% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 2.89% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd improved by 4.40% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 5.48% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd improved by 1.60% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd slowed down by 0.61% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd improved by 1.35% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd improved by 2.68% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd improved by 1.94% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd slowed down by 1.33% compared to the last run.

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


Report generated on: 2024-02-11T12:28:17.464389
