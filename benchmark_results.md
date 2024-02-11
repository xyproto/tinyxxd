# Benchmark Results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| og_xxd | 64 | 1.67 |  |
| og_xxd | 64 | 2.20 | -r |
| og_xxd | 64 | 1.53 |  |
| og_xxd | 64 | 0.95 | -p |
| og_xxd | 64 | 4.89 | -i |
| og_xxd | 64 | 1.52 | -e |
| og_xxd | 64 | 3.60 | -b |
| og_xxd | 64 | 1.53 | -u |
| og_xxd | 64 | 1.71 | -E |
| tinyxxd | 64 | 1.28 |  |
| tinyxxd | 64 | 2.20 | -r |
| tinyxxd | 64 | 1.26 |  |
| tinyxxd | 64 | 0.83 | -p |
| tinyxxd | 64 | 4.90 | -i |
| tinyxxd | 64 | 1.31 | -e |
| tinyxxd | 64 | 3.02 | -b |
| tinyxxd | 64 | 1.25 | -u |
| tinyxxd | 64 | 1.40 | -E |
| tinyxxd | 32 | 0.65 |  |
| tinyxxd | 32 | 1.11 | -r |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 0.42 | -p |
| tinyxxd | 32 | 2.49 | -i |
| tinyxxd | 32 | 0.65 | -e |
| tinyxxd | 32 | 1.52 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.70 | -E |
| og_xxd | 32 | 0.79 |  |
| og_xxd | 32 | 1.12 | -r |
| og_xxd | 32 | 0.78 |  |
| og_xxd | 32 | 0.50 | -p |
| og_xxd | 32 | 2.45 | -i |
| og_xxd | 32 | 0.76 | -e |
| og_xxd | 32 | 1.76 | -b |
| og_xxd | 32 | 0.78 | -u |
| og_xxd | 32 | 0.83 | -E |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.54 | -r |
| tinyxxd | 16 | 0.31 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.21 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.78 | -b |
| tinyxxd | 16 | 0.34 | -u |
| tinyxxd | 16 | 0.36 | -E |
| og_xxd | 16 | 0.39 |  |
| og_xxd | 16 | 0.56 | -r |
| og_xxd | 16 | 0.38 |  |
| og_xxd | 16 | 0.24 | -p |
| og_xxd | 16 | 1.22 | -i |
| og_xxd | 16 | 0.37 | -e |
| og_xxd | 16 | 0.88 | -b |
| og_xxd | 16 | 0.39 | -u |
| og_xxd | 16 | 0.41 | -E |
| og_xxd | 8 | 0.20 |  |
| og_xxd | 8 | 0.28 | -r |
| og_xxd | 8 | 0.20 |  |
| og_xxd | 8 | 0.12 | -p |
| og_xxd | 8 | 0.62 | -i |
| og_xxd | 8 | 0.19 | -e |
| og_xxd | 8 | 0.44 | -b |
| og_xxd | 8 | 0.19 | -u |
| og_xxd | 8 | 0.21 | -E |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.27 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.61 | -i |
| tinyxxd | 8 | 0.19 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.17 | -u |
| tinyxxd | 8 | 0.18 | -E |

## Performance Summaries
- With flags '' and size 64MiB, tinyxxd was 26.17% faster.
- With flags '-p' and size 64MiB, tinyxxd was 14.09% faster.
- With flags '-e' and size 64MiB, tinyxxd was 15.99% faster.
- With flags '-b' and size 64MiB, tinyxxd was 19.18% faster.
- With flags '-u' and size 64MiB, tinyxxd was 22.16% faster.
- With flags '-E' and size 64MiB, tinyxxd was 21.45% faster.
- With flags '' and size 32MiB, tinyxxd was 21.28% faster.
- With flags '-p' and size 32MiB, tinyxxd was 17.71% faster.
- With flags '-e' and size 32MiB, tinyxxd was 17.88% faster.
- With flags '-b' and size 32MiB, tinyxxd was 15.87% faster.
- With flags '-u' and size 32MiB, tinyxxd was 24.26% faster.
- With flags '-E' and size 32MiB, tinyxxd was 17.71% faster.
- With flags '' and size 16MiB, tinyxxd was 21.63% faster.
- With flags '-p' and size 16MiB, tinyxxd was 15.52% faster.
- With flags '-e' and size 16MiB, tinyxxd was 15.16% faster.
- With flags '-b' and size 16MiB, tinyxxd was 12.56% faster.
- With flags '-u' and size 16MiB, tinyxxd was 12.77% faster.
- With flags '-E' and size 16MiB, tinyxxd was 15.35% faster.
- With flags '' and size 8MiB, tinyxxd was 21.48% faster.
- With flags '-p' and size 8MiB, tinyxxd was 15.23% faster.
- With flags '-b' and size 8MiB, tinyxxd was 16.29% faster.
- With flags '-u' and size 8MiB, tinyxxd was 14.03% faster.
- With flags '-E' and size 8MiB, tinyxxd was 16.79% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 12.23% faster than og_xxd.
- For 32MiB files, tinyxxd was 10.64% faster than og_xxd.
- For 16MiB files, tinyxxd was 10.13% faster than og_xxd.
- For 8MiB files, tinyxxd was 9.66% faster than og_xxd.

### Performance by flag
- With flag '', tinyxxd was 23.93% faster.
- With flag '-p', tinyxxd was 15.33% faster.
- With flag '-e', tinyxxd was 14.98% faster.
- With flag '-b', tinyxxd was 17.20% faster.
- With flag '-u', tinyxxd was 20.80% faster.
- With flag '-E', tinyxxd was 19.31% faster.

### Performance compared to last run
- For 64MiB files with flags '', og_xxd slowed down by 11.72% compared to the last run.
- For 64MiB files with flags '-r', og_xxd improved by 1.52% compared to the last run.
- For 64MiB files with flags '', og_xxd slowed down by 2.37% compared to the last run.
- For 64MiB files with flags '-p', og_xxd improved by 0.20% compared to the last run.
- For 64MiB files with flags '-i', og_xxd slowed down by 0.79% compared to the last run.
- For 64MiB files with flags '-e', og_xxd improved by 0.09% compared to the last run.
- For 64MiB files with flags '-b', og_xxd slowed down by 0.20% compared to the last run.
- For 64MiB files with flags '-u', og_xxd slowed down by 2.37% compared to the last run.
- For 64MiB files with flags '-E', og_xxd slowed down by 2.25% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 1.79% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd improved by 1.66% compared to the last run.
- For 64MiB files with flags '', tinyxxd improved by 0.24% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd slowed down by 1.36% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd slowed down by 1.95% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd improved by 0.13% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd improved by 0.27% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd improved by 0.02% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd improved by 0.54% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 2.98% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd improved by 20.68% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 1.07% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd slowed down by 1.82% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd slowed down by 2.70% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd slowed down by 0.40% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd improved by 2.51% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd improved by 0.51% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd improved by 0.02% compared to the last run.
- For 32MiB files with flags '', og_xxd improved by 1.29% compared to the last run.
- For 32MiB files with flags '-r', og_xxd slowed down by 1.66% compared to the last run.
- For 32MiB files with flags '', og_xxd improved by 2.36% compared to the last run.
- For 32MiB files with flags '-p', og_xxd slowed down by 2.15% compared to the last run.
- For 32MiB files with flags '-i', og_xxd improved by 0.76% compared to the last run.
- For 32MiB files with flags '-e', og_xxd slowed down by 2.08% compared to the last run.
- For 32MiB files with flags '-b', og_xxd improved by 0.66% compared to the last run.
- For 32MiB files with flags '-u', og_xxd slowed down by 2.53% compared to the last run.
- For 32MiB files with flags '-E', og_xxd improved by 0.79% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 2.98% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd slowed down by 0.28% compared to the last run.
- For 16MiB files with flags '', tinyxxd improved by 0.08% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd improved by 0.19% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd improved by 4.13% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd improved by 3.46% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd slowed down by 3.40% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd slowed down by 8.32% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd slowed down by 0.46% compared to the last run.
- For 16MiB files with flags '', og_xxd slowed down by 4.20% compared to the last run.
- For 16MiB files with flags '-r', og_xxd slowed down by 1.83% compared to the last run.
- For 16MiB files with flags '', og_xxd slowed down by 1.55% compared to the last run.
- For 16MiB files with flags '-p', og_xxd improved by 0.01% compared to the last run.
- For 16MiB files with flags '-i', og_xxd slowed down by 0.17% compared to the last run.
- For 16MiB files with flags '-e', og_xxd improved by 0.32% compared to the last run.
- For 16MiB files with flags '-b', og_xxd improved by 0.57% compared to the last run.
- For 16MiB files with flags '-u', og_xxd slowed down by 1.01% compared to the last run.
- For 16MiB files with flags '-E', og_xxd improved by 1.09% compared to the last run.
- For 8MiB files with flags '', og_xxd slowed down by 5.48% compared to the last run.
- For 8MiB files with flags '-r', og_xxd slowed down by 2.62% compared to the last run.
- For 8MiB files with flags '', og_xxd slowed down by 3.33% compared to the last run.
- For 8MiB files with flags '-p', og_xxd slowed down by 0.08% compared to the last run.
- For 8MiB files with flags '-i', og_xxd improved by 6.11% compared to the last run.
- For 8MiB files with flags '-e', og_xxd improved by 2.90% compared to the last run.
- For 8MiB files with flags '-b', og_xxd slowed down by 0.30% compared to the last run.
- For 8MiB files with flags '-u', og_xxd improved by 0.16% compared to the last run.
- For 8MiB files with flags '-E', og_xxd slowed down by 0.19% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 1.97% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd slowed down by 1.35% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 1.86% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd slowed down by 0.07% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd slowed down by 0.19% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd slowed down by 17.70% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd improved by 0.15% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd slowed down by 1.28% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd improved by 7.98% compared to the last run.

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


Report generated on: 2024-02-11T17:38:13.062432
