# Benchmark Results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| og_xxd | 64 | 1.58 |  |
| og_xxd | 64 | 2.24 | -r |
| og_xxd | 64 | 1.62 |  |
| og_xxd | 64 | 0.97 | -p |
| og_xxd | 64 | 4.86 | -i |
| og_xxd | 64 | 1.52 | -e |
| og_xxd | 64 | 3.57 | -b |
| og_xxd | 64 | 1.58 | -u |
| og_xxd | 64 | 1.68 | -E |
| tinyxxd | 64 | 1.29 |  |
| tinyxxd | 64 | 2.25 | -r |
| tinyxxd | 64 | 1.25 |  |
| tinyxxd | 64 | 0.82 | -p |
| tinyxxd | 64 | 4.86 | -i |
| tinyxxd | 64 | 1.29 | -e |
| tinyxxd | 64 | 3.13 | -b |
| tinyxxd | 64 | 1.28 | -u |
| tinyxxd | 64 | 1.43 | -E |
| og_xxd | 32 | 0.81 |  |
| og_xxd | 32 | 1.09 | -r |
| og_xxd | 32 | 0.77 |  |
| og_xxd | 32 | 0.48 | -p |
| og_xxd | 32 | 2.45 | -i |
| og_xxd | 32 | 0.90 | -e |
| og_xxd | 32 | 1.77 | -b |
| og_xxd | 32 | 0.77 | -u |
| og_xxd | 32 | 0.83 | -E |
| tinyxxd | 32 | 0.65 |  |
| tinyxxd | 32 | 1.09 | -r |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 0.41 | -p |
| tinyxxd | 32 | 2.44 | -i |
| tinyxxd | 32 | 0.69 | -e |
| tinyxxd | 32 | 1.51 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.71 | -E |
| og_xxd | 16 | 0.39 |  |
| og_xxd | 16 | 0.55 | -r |
| og_xxd | 16 | 0.37 |  |
| og_xxd | 16 | 0.24 | -p |
| og_xxd | 16 | 1.23 | -i |
| og_xxd | 16 | 0.37 | -e |
| og_xxd | 16 | 0.90 | -b |
| og_xxd | 16 | 0.38 | -u |
| og_xxd | 16 | 0.42 | -E |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.55 | -r |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.25 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.77 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.36 | -E |
| og_xxd | 8 | 0.20 |  |
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
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.61 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |

## Performance Summaries
- With flags '' and size 64MiB, tinyxxd was 25.74% faster.
- With flags '-p' and size 64MiB, tinyxxd was 18.19% faster.
- With flags '-e' and size 64MiB, tinyxxd was 17.67% faster.
- With flags '-b' and size 64MiB, tinyxxd was 13.78% faster.
- With flags '-u' and size 64MiB, tinyxxd was 23.77% faster.
- With flags '-E' and size 64MiB, tinyxxd was 18.01% faster.
- With flags '' and size 32MiB, tinyxxd was 21.83% faster.
- With flags '-p' and size 32MiB, tinyxxd was 16.12% faster.
- With flags '-e' and size 32MiB, tinyxxd was 30.75% faster.
- With flags '-b' and size 32MiB, tinyxxd was 17.42% faster.
- With flags '-u' and size 32MiB, tinyxxd was 21.92% faster.
- With flags '-E' and size 32MiB, tinyxxd was 16.53% faster.
- With flags '' and size 16MiB, tinyxxd was 17.94% faster.
- With flags '-p' and size 16MiB, tinyxxd was 15.66% faster.
- With flags '-e' and size 16MiB, tinyxxd was 15.72% faster.
- With flags '-b' and size 16MiB, tinyxxd was 16.66% faster.
- With flags '-u' and size 16MiB, tinyxxd was 22.02% faster.
- With flags '-E' and size 16MiB, tinyxxd was 16.01% faster.
- With flags '' and size 8MiB, tinyxxd was 21.13% faster.
- With flags '-p' and size 8MiB, tinyxxd was 16.17% faster.
- With flags '-e' and size 8MiB, tinyxxd was 15.83% faster.
- With flags '-b' and size 8MiB, tinyxxd was 16.08% faster.
- With flags '-u' and size 8MiB, tinyxxd was 20.33% faster.
- With flags '-E' and size 8MiB, tinyxxd was 16.14% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 11.46% faster than og_xxd.
- For 32MiB files, tinyxxd was 12.46% faster than og_xxd.
- For 16MiB files, tinyxxd was 9.72% faster than og_xxd.
- For 8MiB files, tinyxxd was 10.58% faster than og_xxd.

### Performance by flag
- With flag '', tinyxxd was 23.33% faster.
- With flag '-p', tinyxxd was 17.16% faster.
- With flag '-e', tinyxxd was 20.94% faster.
- With flag '-b', tinyxxd was 15.26% faster.
- With flag '-u', tinyxxd was 22.82% faster.
- With flag '-E', tinyxxd was 17.22% faster.

### Performance compared to last run
- For 64MiB files with flags '', og_xxd slowed down by 2.42% compared to the last run.
- For 64MiB files with flags '-r', og_xxd improved by 0.52% compared to the last run.
- For 64MiB files with flags '', og_xxd slowed down by 5.32% compared to the last run.
- For 64MiB files with flags '-p', og_xxd slowed down by 1.11% compared to the last run.
- For 64MiB files with flags '-i', og_xxd improved by 1.38% compared to the last run.
- For 64MiB files with flags '-e', og_xxd slowed down by 1.94% compared to the last run.
- For 64MiB files with flags '-b', og_xxd slowed down by 0.24% compared to the last run.
- For 64MiB files with flags '-u', og_xxd slowed down by 5.32% compared to the last run.
- For 64MiB files with flags '-E', og_xxd slowed down by 0.38% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 1.74% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd slowed down by 3.60% compared to the last run.
- For 64MiB files with flags '', tinyxxd improved by 1.51% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd slowed down by 0.25% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd improved by 0.48% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd improved by 3.27% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd slowed down by 2.40% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd slowed down by 0.59% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd slowed down by 1.71% compared to the last run.
- For 32MiB files with flags '', og_xxd slowed down by 8.28% compared to the last run.
- For 32MiB files with flags '-r', og_xxd improved by 4.50% compared to the last run.
- For 32MiB files with flags '', og_xxd slowed down by 3.44% compared to the last run.
- For 32MiB files with flags '-p', og_xxd slowed down by 0.54% compared to the last run.
- For 32MiB files with flags '-i', og_xxd slowed down by 0.62% compared to the last run.
- For 32MiB files with flags '-e', og_xxd slowed down by 20.57% compared to the last run.
- For 32MiB files with flags '-b', og_xxd slowed down by 1.18% compared to the last run.
- For 32MiB files with flags '-u', og_xxd slowed down by 0.13% compared to the last run.
- For 32MiB files with flags '-E', og_xxd improved by 0.70% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 2.50% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd improved by 0.97% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 1.45% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd improved by 6.53% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd improved by 1.75% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd slowed down by 6.91% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd improved by 0.17% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd improved by 1.48% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd slowed down by 0.62% compared to the last run.
- For 16MiB files with flags '', og_xxd slowed down by 2.21% compared to the last run.
- For 16MiB files with flags '-r', og_xxd improved by 1.20% compared to the last run.
- For 16MiB files with flags '', og_xxd improved by 2.79% compared to the last run.
- For 16MiB files with flags '-p', og_xxd improved by 0.05% compared to the last run.
- For 16MiB files with flags '-i', og_xxd slowed down by 0.87% compared to the last run.
- For 16MiB files with flags '-e', og_xxd improved by 0.05% compared to the last run.
- For 16MiB files with flags '-b', og_xxd slowed down by 0.23% compared to the last run.
- For 16MiB files with flags '-u', og_xxd slowed down by 2.90% compared to the last run.
- For 16MiB files with flags '-E', og_xxd slowed down by 0.14% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 3.59% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd slowed down by 1.24% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 3.86% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd slowed down by 0.16% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd slowed down by 0.94% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd improved by 3.97% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd improved by 1.08% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd slowed down by 0.17% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd slowed down by 0.20% compared to the last run.
- For 8MiB files with flags '', og_xxd slowed down by 6.88% compared to the last run.
- For 8MiB files with flags '-r', og_xxd improved by 41.08% compared to the last run.
- For 8MiB files with flags '', og_xxd improved by 0.43% compared to the last run.
- For 8MiB files with flags '-p', og_xxd improved by 1.85% compared to the last run.
- For 8MiB files with flags '-i', og_xxd improved by 7.77% compared to the last run.
- For 8MiB files with flags '-e', og_xxd slowed down by 0.55% compared to the last run.
- For 8MiB files with flags '-b', og_xxd improved by 0.28% compared to the last run.
- For 8MiB files with flags '-u', og_xxd slowed down by 1.68% compared to the last run.
- For 8MiB files with flags '-E', og_xxd improved by 0.62% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 1.95% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd slowed down by 1.18% compared to the last run.
- For 8MiB files with flags '', tinyxxd improved by 0.87% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd improved by 0.37% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd slowed down by 1.06% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd improved by 1.66% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd improved by 1.72% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd improved by 3.64% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd improved by 2.21% compared to the last run.

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


Report generated on: 2024-02-11T13:24:52.335479
