# Benchmark results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| tinyxxd | 64 | 1.35 |  |
| tinyxxd | 64 | 2.20 | -r |
| tinyxxd | 64 | 2.00 |  |
| tinyxxd | 64 | 0.86 | -p |
| tinyxxd | 64 | 4.83 | -i |
| tinyxxd | 64 | 1.31 | -e |
| tinyxxd | 64 | 3.03 | -b |
| tinyxxd | 64 | 1.29 | -u |
| tinyxxd | 64 | 1.42 | -E |
| xxd | 64 | 1.59 |  |
| xxd | 64 | 2.26 | -r |
| xxd | 64 | 1.50 |  |
| xxd | 64 | 0.95 | -p |
| xxd | 64 | 4.87 | -i |
| xxd | 64 | 1.49 | -e |
| xxd | 64 | 3.57 | -b |
| xxd | 64 | 1.61 | -u |
| xxd | 64 | 1.67 | -E |
| xxd | 32 | 0.79 |  |
| xxd | 32 | 1.10 | -r |
| xxd | 32 | 0.77 |  |
| xxd | 32 | 0.48 | -p |
| xxd | 32 | 2.44 | -i |
| xxd | 32 | 0.75 | -e |
| xxd | 32 | 1.80 | -b |
| xxd | 32 | 0.77 | -u |
| xxd | 32 | 0.84 | -E |
| tinyxxd | 32 | 0.67 |  |
| tinyxxd | 32 | 1.27 | -r |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 0.42 | -p |
| tinyxxd | 32 | 2.42 | -i |
| tinyxxd | 32 | 0.65 | -e |
| tinyxxd | 32 | 1.55 | -b |
| tinyxxd | 32 | 0.66 | -u |
| tinyxxd | 32 | 0.71 | -E |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.55 | -r |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.23 | -i |
| xxd | 16 | 0.37 | -e |
| xxd | 16 | 0.90 | -b |
| xxd | 16 | 0.39 | -u |
| xxd | 16 | 0.43 | -E |
| tinyxxd | 16 | 0.34 |  |
| tinyxxd | 16 | 0.55 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.21 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.76 | -b |
| tinyxxd | 16 | 0.34 | -u |
| tinyxxd | 16 | 0.36 | -E |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.44 | -b |
| xxd | 8 | 0.20 | -u |
| xxd | 8 | 0.21 | -E |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.27 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.62 | -i |
| tinyxxd | 8 | 0.17 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |

## Performance Summaries
- With flags '' and size 64MiB, xxd was 8.33% faster.
- With flags '-p' and size 64MiB, tinyxxd was 11.21% faster.
- With flags '-e' and size 64MiB, tinyxxd was 14.10% faster.
- With flags '-b' and size 64MiB, tinyxxd was 17.59% faster.
- With flags '-u' and size 64MiB, tinyxxd was 25.42% faster.
- With flags '-E' and size 64MiB, tinyxxd was 17.55% faster.
- With flags '' and size 32MiB, tinyxxd was 18.52% faster.
- With flags '-r' and size 32MiB, xxd was 15.50% faster.
- With flags '-p' and size 32MiB, tinyxxd was 15.48% faster.
- With flags '-e' and size 32MiB, tinyxxd was 15.57% faster.
- With flags '-b' and size 32MiB, tinyxxd was 16.39% faster.
- With flags '-u' and size 32MiB, tinyxxd was 17.81% faster.
- With flags '-E' and size 32MiB, tinyxxd was 17.31% faster.
- With flags '' and size 16MiB, tinyxxd was 16.73% faster.
- With flags '-p' and size 16MiB, tinyxxd was 15.38% faster.
- With flags '-e' and size 16MiB, tinyxxd was 15.34% faster.
- With flags '-b' and size 16MiB, tinyxxd was 18.84% faster.
- With flags '-u' and size 16MiB, tinyxxd was 17.74% faster.
- With flags '-E' and size 16MiB, tinyxxd was 16.97% faster.
- With flags '' and size 8MiB, tinyxxd was 21.24% faster.
- With flags '-p' and size 8MiB, tinyxxd was 15.40% faster.
- With flags '-e' and size 8MiB, tinyxxd was 14.18% faster.
- With flags '-b' and size 8MiB, tinyxxd was 16.25% faster.
- With flags '-u' and size 8MiB, tinyxxd was 22.88% faster.
- With flags '-E' and size 8MiB, tinyxxd was 18.12% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 6.76% faster than xxd.
- For 32MiB files, tinyxxd was 8.38% faster than xxd.
- For 16MiB files, tinyxxd was 10.66% faster than xxd.
- For 8MiB files, tinyxxd was 10.54% faster than xxd.

### Performance by flag
- With flag '-p', tinyxxd was 13.16% faster.
- With flag '-e', tinyxxd was 14.66% faster.
- With flag '-b', tinyxxd was 17.34% faster.
- With flag '-u', tinyxxd was 22.15% faster.
- With flag '-E', tinyxxd was 17.45% faster.

### Performance compared to last run
- For 64MiB files with flags '', tinyxxd slowed down by 7.96% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd slowed down by 1.33% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 60.51% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd slowed down by 4.33% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd improved by 1.26% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd slowed down by 1.17% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd improved by 1.83% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd slowed down by 3.12% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd slowed down by 1.01% compared to the last run.
- For 64MiB files with flags '', xxd slowed down by 3.49% compared to the last run.
- For 64MiB files with flags '-r', xxd slowed down by 2.86% compared to the last run.
- For 64MiB files with flags '', xxd improved by 2.52% compared to the last run.
- For 64MiB files with flags '-p', xxd improved by 0.35% compared to the last run.
- For 64MiB files with flags '-i', xxd improved by 2.12% compared to the last run.
- For 64MiB files with flags '-e', xxd slowed down by 0.02% compared to the last run.
- For 64MiB files with flags '-b', xxd slowed down by 1.72% compared to the last run.
- For 64MiB files with flags '-u', xxd slowed down by 5.05% compared to the last run.
- For 64MiB files with flags '-E', xxd improved by 1.86% compared to the last run.
- For 32MiB files with flags '', xxd slowed down by 1.85% compared to the last run.
- For 32MiB files with flags '-r', xxd improved by 2.74% compared to the last run.
- For 32MiB files with flags '', xxd improved by 0.85% compared to the last run.
- For 32MiB files with flags '-p', xxd slowed down by 0.42% compared to the last run.
- For 32MiB files with flags '-i', xxd slowed down by 0.34% compared to the last run.
- For 32MiB files with flags '-e', xxd improved by 0.14% compared to the last run.
- For 32MiB files with flags '-b', xxd slowed down by 2.27% compared to the last run.
- For 32MiB files with flags '-u', xxd slowed down by 0.77% compared to the last run.
- For 32MiB files with flags '-E', xxd slowed down by 0.82% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 3.78% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd slowed down by 14.74% compared to the last run.
- For 32MiB files with flags '', tinyxxd improved by 0.99% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd improved by 0.02% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd improved by 0.33% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd improved by 0.70% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd slowed down by 1.44% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd slowed down by 4.68% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd slowed down by 0.35% compared to the last run.
- For 16MiB files with flags '', xxd improved by 0.77% compared to the last run.
- For 16MiB files with flags '-r', xxd improved by 0.58% compared to the last run.
- For 16MiB files with flags '', xxd improved by 3.08% compared to the last run.
- For 16MiB files with flags '-p', xxd improved by 0.21% compared to the last run.
- For 16MiB files with flags '-i', xxd slowed down by 0.29% compared to the last run.
- For 16MiB files with flags '-e', xxd improved by 2.81% compared to the last run.
- For 16MiB files with flags '-b', xxd improved by 0.76% compared to the last run.
- For 16MiB files with flags '-u', xxd slowed down by 1.81% compared to the last run.
- For 16MiB files with flags '-E', xxd slowed down by 2.29% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 6.27% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd slowed down by 2.90% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 0.12% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd slowed down by 0.29% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd slowed down by 0.41% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd slowed down by 0.30% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd improved by 6.23% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd slowed down by 6.53% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd improved by 5.23% compared to the last run.
- For 8MiB files with flags '', xxd slowed down by 2.85% compared to the last run.
- For 8MiB files with flags '-r', xxd improved by 0.94% compared to the last run.
- For 8MiB files with flags '', xxd slowed down by 0.97% compared to the last run.
- For 8MiB files with flags '-p', xxd slowed down by 0.41% compared to the last run.
- For 8MiB files with flags '-i', xxd slowed down by 0.27% compared to the last run.
- For 8MiB files with flags '-e', xxd improved by 0.13% compared to the last run.
- For 8MiB files with flags '-b', xxd improved by 8.87% compared to the last run.
- For 8MiB files with flags '-u', xxd slowed down by 3.22% compared to the last run.
- For 8MiB files with flags '-E', xxd slowed down by 0.14% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 3.46% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd slowed down by 1.02% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 0.39% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd slowed down by 0.42% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd slowed down by 1.96% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd slowed down by 0.79% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd slowed down by 0.04% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd slowed down by 0.21% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd improved by 0.98% compared to the last run.

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


Report generated on: 2024-02-11T22:21:24.738184
