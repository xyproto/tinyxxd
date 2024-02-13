# Benchmark results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| tinyxxd | 64 | 1.35 |  |
| tinyxxd | 64 | 2.16 | -r |
| tinyxxd | 64 | 1.25 |  |
| tinyxxd | 64 | 0.82 | -p |
| tinyxxd | 64 | 4.90 | -i |
| tinyxxd | 64 | 1.31 | -e |
| tinyxxd | 64 | 3.09 | -b |
| tinyxxd | 64 | 1.25 | -u |
| tinyxxd | 64 | 1.44 | -E |
| xxd | 64 | 1.57 |  |
| xxd | 64 | 2.21 | -r |
| xxd | 64 | 1.49 |  |
| xxd | 64 | 0.95 | -p |
| xxd | 64 | 4.87 | -i |
| xxd | 64 | 1.49 | -e |
| xxd | 64 | 3.58 | -b |
| xxd | 64 | 1.52 | -u |
| xxd | 64 | 1.67 | -E |
| tinyxxd | 32 | 0.68 |  |
| tinyxxd | 32 | 1.22 | -r |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 0.41 | -p |
| tinyxxd | 32 | 2.42 | -i |
| tinyxxd | 32 | 0.64 | -e |
| tinyxxd | 32 | 1.51 | -b |
| tinyxxd | 32 | 0.64 | -u |
| tinyxxd | 32 | 0.71 | -E |
| xxd | 32 | 0.81 |  |
| xxd | 32 | 1.13 | -r |
| xxd | 32 | 0.75 |  |
| xxd | 32 | 0.48 | -p |
| xxd | 32 | 2.45 | -i |
| xxd | 32 | 0.76 | -e |
| xxd | 32 | 1.79 | -b |
| xxd | 32 | 0.75 | -u |
| xxd | 32 | 0.85 | -E |
| xxd | 16 | 0.39 |  |
| xxd | 16 | 0.55 | -r |
| xxd | 16 | 0.39 |  |
| xxd | 16 | 0.25 | -p |
| xxd | 16 | 1.23 | -i |
| xxd | 16 | 0.37 | -e |
| xxd | 16 | 0.91 | -b |
| xxd | 16 | 0.40 | -u |
| xxd | 16 | 0.42 | -E |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.54 | -r |
| tinyxxd | 16 | 0.31 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.21 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.76 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.35 | -E |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.46 | -b |
| xxd | 8 | 0.21 | -u |
| xxd | 8 | 0.21 | -E |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.28 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.63 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |

## Performance Summaries
- With flags '' and size 64MiB, tinyxxd was 17.86% faster.
- With flags '-p' and size 64MiB, tinyxxd was 15.89% faster.
- With flags '-e' and size 64MiB, tinyxxd was 13.63% faster.
- With flags '-b' and size 64MiB, tinyxxd was 15.83% faster.
- With flags '-u' and size 64MiB, tinyxxd was 21.76% faster.
- With flags '-E' and size 64MiB, tinyxxd was 15.24% faster.
- With flags '' and size 32MiB, tinyxxd was 18.17% faster.
- With flags '-r' and size 32MiB, xxd was 8.61% faster.
- With flags '-p' and size 32MiB, tinyxxd was 15.93% faster.
- With flags '-e' and size 32MiB, tinyxxd was 18.96% faster.
- With flags '-b' and size 32MiB, tinyxxd was 18.30% faster.
- With flags '-u' and size 32MiB, tinyxxd was 18.45% faster.
- With flags '-E' and size 32MiB, tinyxxd was 19.66% faster.
- With flags '' and size 16MiB, tinyxxd was 23.75% faster.
- With flags '-p' and size 16MiB, tinyxxd was 18.50% faster.
- With flags '-e' and size 16MiB, tinyxxd was 15.69% faster.
- With flags '-b' and size 16MiB, tinyxxd was 20.24% faster.
- With flags '-u' and size 16MiB, tinyxxd was 25.38% faster.
- With flags '-E' and size 16MiB, tinyxxd was 18.76% faster.
- With flags '' and size 8MiB, tinyxxd was 19.46% faster.
- With flags '-p' and size 8MiB, tinyxxd was 14.81% faster.
- With flags '-e' and size 8MiB, tinyxxd was 15.09% faster.
- With flags '-b' and size 8MiB, tinyxxd was 21.75% faster.
- With flags '-u' and size 8MiB, tinyxxd was 30.65% faster.
- With flags '-E' and size 8MiB, tinyxxd was 19.83% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 10.13% faster than xxd.
- For 32MiB files, tinyxxd was 10.10% faster than xxd.
- For 16MiB files, tinyxxd was 12.71% faster than xxd.
- For 8MiB files, tinyxxd was 10.83% faster than xxd.

### Performance by flag
- With flag '', tinyxxd was 18.82% faster.
- With flag '-p', tinyxxd was 16.18% faster.
- With flag '-e', tinyxxd was 15.40% faster.
- With flag '-b', tinyxxd was 17.46% faster.
- With flag '-u', tinyxxd was 21.95% faster.
- With flag '-E', tinyxxd was 17.17% faster.

### Performance compared to last run
- For 64MiB files with flags '', tinyxxd slowed down by 8.49% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd improved by 2.09% compared to the last run.
- For 64MiB files with flags '', tinyxxd improved by 0.00% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd improved by 1.58% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd improved by 1.59% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd slowed down by 1.10% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd slowed down by 0.47% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd improved by 1.64% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd slowed down by 1.43% compared to the last run.
- For 64MiB files with flags '', xxd slowed down by 5.32% compared to the last run.
- For 64MiB files with flags '-r', xxd improved by 0.61% compared to the last run.
- For 64MiB files with flags '', xxd slowed down by 0.21% compared to the last run.
- For 64MiB files with flags '-p', xxd improved by 0.09% compared to the last run.
- For 64MiB files with flags '-i', xxd improved by 0.75% compared to the last run.
- For 64MiB files with flags '-e', xxd improved by 2.85% compared to the last run.
- For 64MiB files with flags '-b', xxd slowed down by 1.32% compared to the last run.
- For 64MiB files with flags '-u', xxd improved by 2.53% compared to the last run.
- For 64MiB files with flags '-E', xxd improved by 1.25% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 6.14% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd slowed down by 13.88% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 0.29% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd improved by 1.99% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd improved by 0.94% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd improved by 1.20% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd improved by 0.15% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd slowed down by 1.07% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd improved by 0.01% compared to the last run.
- For 32MiB files with flags '', xxd slowed down by 6.83% compared to the last run.
- For 32MiB files with flags '-r', xxd slowed down by 1.40% compared to the last run.
- For 32MiB files with flags '', xxd improved by 0.35% compared to the last run.
- For 32MiB files with flags '-p', xxd slowed down by 0.35% compared to the last run.
- For 32MiB files with flags '-i', xxd slowed down by 1.25% compared to the last run.
- For 32MiB files with flags '-e', xxd slowed down by 2.39% compared to the last run.
- For 32MiB files with flags '-b', xxd slowed down by 1.42% compared to the last run.
- For 32MiB files with flags '-u', xxd improved by 1.68% compared to the last run.
- For 32MiB files with flags '-E', xxd slowed down by 1.77% compared to the last run.
- For 16MiB files with flags '', xxd slowed down by 3.93% compared to the last run.
- For 16MiB files with flags '-r', xxd improved by 4.73% compared to the last run.
- For 16MiB files with flags '', xxd slowed down by 3.98% compared to the last run.
- For 16MiB files with flags '-p', xxd slowed down by 2.57% compared to the last run.
- For 16MiB files with flags '-i', xxd slowed down by 0.91% compared to the last run.
- For 16MiB files with flags '-e', xxd improved by 0.49% compared to the last run.
- For 16MiB files with flags '-b', xxd slowed down by 3.15% compared to the last run.
- For 16MiB files with flags '-u', xxd slowed down by 5.21% compared to the last run.
- For 16MiB files with flags '-E', xxd slowed down by 0.57% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 3.10% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd improved by 0.08% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 0.37% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd improved by 0.21% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd slowed down by 1.85% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd improved by 0.29% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd improved by 5.00% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd improved by 3.99% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd improved by 0.84% compared to the last run.
- For 8MiB files with flags '', xxd slowed down by 2.30% compared to the last run.
- For 8MiB files with flags '-r', xxd improved by 0.02% compared to the last run.
- For 8MiB files with flags '', xxd slowed down by 2.57% compared to the last run.
- For 8MiB files with flags '-p', xxd improved by 0.32% compared to the last run.
- For 8MiB files with flags '-i', xxd improved by 0.42% compared to the last run.
- For 8MiB files with flags '-e', xxd slowed down by 0.88% compared to the last run.
- For 8MiB files with flags '-b', xxd improved by 0.80% compared to the last run.
- For 8MiB files with flags '-u', xxd slowed down by 10.08% compared to the last run.
- For 8MiB files with flags '-E', xxd slowed down by 3.11% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 3.90% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd slowed down by 3.12% compared to the last run.
- For 8MiB files with flags '', tinyxxd improved by 0.01% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd improved by 0.24% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd slowed down by 0.15% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd improved by 0.04% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd improved by 0.08% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd improved by 0.47% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd improved by 0.19% compared to the last run.

## Graphs

### Graph by sample size
![Graph by sample size](img/graph_by_size.svg)

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
![Graph Flag e_upper](img/graph_flag_e_upper.svg)


Report generated on: 2024-02-13T13:53:07.841478
