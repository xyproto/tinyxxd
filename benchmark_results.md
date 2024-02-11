# Benchmark results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| xxd | 64 | 1.58 |  |
| xxd | 64 | 2.21 | -r |
| xxd | 64 | 1.48 |  |
| xxd | 64 | 0.95 | -p |
| xxd | 64 | 4.88 | -i |
| xxd | 64 | 1.50 | -e |
| xxd | 64 | 3.56 | -b |
| xxd | 64 | 1.50 | -u |
| xxd | 64 | 1.64 | -E |
| tinyxxd | 64 | 1.39 |  |
| tinyxxd | 64 | 2.21 | -r |
| tinyxxd | 64 | 1.26 |  |
| tinyxxd | 64 | 0.83 | -p |
| tinyxxd | 64 | 4.92 | -i |
| tinyxxd | 64 | 1.30 | -e |
| tinyxxd | 64 | 3.01 | -b |
| tinyxxd | 64 | 1.26 | -u |
| tinyxxd | 64 | 1.41 | -E |
| xxd | 32 | 0.78 |  |
| xxd | 32 | 1.18 | -r |
| xxd | 32 | 0.76 |  |
| xxd | 32 | 0.51 | -p |
| xxd | 32 | 2.53 | -i |
| xxd | 32 | 0.74 | -e |
| xxd | 32 | 1.75 | -b |
| xxd | 32 | 0.76 | -u |
| xxd | 32 | 0.82 | -E |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 1.10 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.41 | -p |
| tinyxxd | 32 | 2.45 | -i |
| tinyxxd | 32 | 0.64 | -e |
| tinyxxd | 32 | 1.54 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.71 | -E |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.54 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.20 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.76 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.37 | -E |
| xxd | 16 | 0.40 |  |
| xxd | 16 | 0.55 | -r |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.24 | -i |
| xxd | 16 | 0.37 | -e |
| xxd | 16 | 0.88 | -b |
| xxd | 16 | 0.38 | -u |
| xxd | 16 | 0.41 | -E |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.44 | -b |
| xxd | 8 | 0.19 | -u |
| xxd | 8 | 0.21 | -E |
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
- With flags '' and size 64MiB, tinyxxd was 15.28% faster.
- With flags '-p' and size 64MiB, tinyxxd was 13.90% faster.
- With flags '-e' and size 64MiB, tinyxxd was 14.70% faster.
- With flags '-b' and size 64MiB, tinyxxd was 18.24% faster.
- With flags '-u' and size 64MiB, tinyxxd was 18.95% faster.
- With flags '-E' and size 64MiB, tinyxxd was 16.35% faster.
- With flags '' and size 32MiB, tinyxxd was 21.00% faster.
- With flags '-r' and size 32MiB, tinyxxd was 6.75% faster.
- With flags '-p' and size 32MiB, tinyxxd was 24.92% faster.
- With flags '-e' and size 32MiB, tinyxxd was 16.23% faster.
- With flags '-b' and size 32MiB, tinyxxd was 14.15% faster.
- With flags '-u' and size 32MiB, tinyxxd was 20.10% faster.
- With flags '-E' and size 32MiB, tinyxxd was 15.00% faster.
- With flags '' and size 16MiB, tinyxxd was 21.35% faster.
- With flags '-p' and size 16MiB, tinyxxd was 14.60% faster.
- With flags '-e' and size 16MiB, tinyxxd was 14.52% faster.
- With flags '-b' and size 16MiB, tinyxxd was 15.04% faster.
- With flags '-u' and size 16MiB, tinyxxd was 18.65% faster.
- With flags '-E' and size 16MiB, tinyxxd was 11.45% faster.
- With flags '' and size 8MiB, tinyxxd was 23.85% faster.
- With flags '-p' and size 8MiB, tinyxxd was 16.09% faster.
- With flags '-e' and size 8MiB, tinyxxd was 15.50% faster.
- With flags '-b' and size 8MiB, tinyxxd was 16.22% faster.
- With flags '-u' and size 8MiB, tinyxxd was 18.48% faster.
- With flags '-E' and size 8MiB, tinyxxd was 17.78% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 9.61% faster than xxd.
- For 32MiB files, tinyxxd was 12.38% faster than xxd.
- For 16MiB files, tinyxxd was 10.95% faster than xxd.
- For 8MiB files, tinyxxd was 11.16% faster than xxd.

### Performance by flag
- With flag '', tinyxxd was 18.13% faster.
- With flag '-p', tinyxxd was 17.05% faster.
- With flag '-e', tinyxxd was 15.14% faster.
- With flag '-b', tinyxxd was 16.57% faster.
- With flag '-u', tinyxxd was 19.19% faster.
- With flag '-E', tinyxxd was 15.40% faster.

### Performance compared to last run
- For 64MiB files with flags '', xxd slowed down by 5.41% compared to the last run.
- For 64MiB files with flags '-r', xxd improved by 2.21% compared to the last run.
- For 64MiB files with flags '', xxd improved by 1.18% compared to the last run.
- For 64MiB files with flags '-p', xxd improved by 0.84% compared to the last run.
- For 64MiB files with flags '-i', xxd slowed down by 0.15% compared to the last run.
- For 64MiB files with flags '-e', xxd slowed down by 0.10% compared to the last run.
- For 64MiB files with flags '-b', xxd improved by 0.18% compared to the last run.
- For 64MiB files with flags '-u', xxd improved by 6.71% compared to the last run.
- For 64MiB files with flags '-E', xxd improved by 1.58% compared to the last run.
- For 64MiB files with flags '', tinyxxd improved by 30.26% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd slowed down by 0.48% compared to the last run.
- For 64MiB files with flags '', tinyxxd improved by 37.06% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd improved by 3.18% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd slowed down by 1.86% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd improved by 0.43% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd improved by 0.72% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd improved by 1.63% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd improved by 0.57% compared to the last run.
- For 32MiB files with flags '', xxd slowed down by 1.24% compared to the last run.
- For 32MiB files with flags '-r', xxd slowed down by 7.38% compared to the last run.
- For 32MiB files with flags '', xxd improved by 0.53% compared to the last run.
- For 32MiB files with flags '-p', xxd slowed down by 7.06% compared to the last run.
- For 32MiB files with flags '-i', xxd slowed down by 3.76% compared to the last run.
- For 32MiB files with flags '-e', xxd improved by 0.65% compared to the last run.
- For 32MiB files with flags '-b', xxd improved by 2.78% compared to the last run.
- For 32MiB files with flags '-u', xxd improved by 2.13% compared to the last run.
- For 32MiB files with flags '-E', xxd improved by 1.78% compared to the last run.
- For 32MiB files with flags '', tinyxxd improved by 0.39% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd improved by 12.91% compared to the last run.
- For 32MiB files with flags '', tinyxxd improved by 0.98% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd improved by 1.03% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd slowed down by 1.15% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd improved by 1.21% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd improved by 0.88% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd improved by 4.00% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd slowed down by 0.20% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 2.36% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd improved by 2.84% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 0.19% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd slowed down by 0.72% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd improved by 0.78% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd slowed down by 0.08% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd slowed down by 0.61% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd improved by 5.48% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd slowed down by 1.50% compared to the last run.
- For 16MiB files with flags '', xxd slowed down by 6.83% compared to the last run.
- For 16MiB files with flags '-r', xxd slowed down by 0.69% compared to the last run.
- For 16MiB files with flags '', xxd improved by 0.09% compared to the last run.
- For 16MiB files with flags '-p', xxd slowed down by 0.04% compared to the last run.
- For 16MiB files with flags '-i', xxd slowed down by 0.29% compared to the last run.
- For 16MiB files with flags '-e', xxd improved by 0.63% compared to the last run.
- For 16MiB files with flags '-b', xxd improved by 2.61% compared to the last run.
- For 16MiB files with flags '-u', xxd improved by 4.75% compared to the last run.
- For 16MiB files with flags '-E', xxd improved by 3.29% compared to the last run.
- For 8MiB files with flags '', xxd slowed down by 2.66% compared to the last run.
- For 8MiB files with flags '-r', xxd slowed down by 0.09% compared to the last run.
- For 8MiB files with flags '', xxd slowed down by 1.25% compared to the last run.
- For 8MiB files with flags '-p', xxd improved by 0.46% compared to the last run.
- For 8MiB files with flags '-i', xxd improved by 0.40% compared to the last run.
- For 8MiB files with flags '-e', xxd improved by 0.39% compared to the last run.
- For 8MiB files with flags '-b', xxd improved by 0.37% compared to the last run.
- For 8MiB files with flags '-u', xxd improved by 3.89% compared to the last run.
- For 8MiB files with flags '-E', xxd improved by 0.68% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 2.03% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd improved by 0.05% compared to the last run.
- For 8MiB files with flags '', tinyxxd improved by 1.23% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd improved by 1.05% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd improved by 1.88% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd improved by 1.53% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd improved by 0.34% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd improved by 0.32% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd improved by 0.40% compared to the last run.

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


Report generated on: 2024-02-11T22:26:20.773549
