# Benchmark results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| tinyxxd | 64 | 1.34 |  |
| tinyxxd | 64 | 2.21 | -r |
| tinyxxd | 64 | 1.30 |  |
| tinyxxd | 64 | 0.82 | -p |
| tinyxxd | 64 | 4.92 | -i |
| tinyxxd | 64 | 1.31 | -e |
| tinyxxd | 64 | 3.08 | -b |
| tinyxxd | 64 | 1.25 | -u |
| tinyxxd | 64 | 1.41 | -E |
| xxd | 64 | 1.60 |  |
| xxd | 64 | 2.25 | -r |
| xxd | 64 | 1.53 |  |
| xxd | 64 | 0.95 | -p |
| xxd | 64 | 4.90 | -i |
| xxd | 64 | 1.50 | -e |
| xxd | 64 | 3.55 | -b |
| xxd | 64 | 1.53 | -u |
| xxd | 64 | 1.66 | -E |
| xxd | 32 | 0.78 |  |
| xxd | 32 | 1.24 | -r |
| xxd | 32 | 0.75 |  |
| xxd | 32 | 0.48 | -p |
| xxd | 32 | 2.43 | -i |
| xxd | 32 | 0.75 | -e |
| xxd | 32 | 1.76 | -b |
| xxd | 32 | 0.75 | -u |
| xxd | 32 | 0.83 | -E |
| tinyxxd | 32 | 0.66 |  |
| tinyxxd | 32 | 1.10 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.41 | -p |
| tinyxxd | 32 | 2.42 | -i |
| tinyxxd | 32 | 0.64 | -e |
| tinyxxd | 32 | 1.55 | -b |
| tinyxxd | 32 | 0.68 | -u |
| tinyxxd | 32 | 0.71 | -E |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.55 | -r |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.25 | -i |
| xxd | 16 | 0.37 | -e |
| xxd | 16 | 0.90 | -b |
| xxd | 16 | 0.38 | -u |
| xxd | 16 | 0.41 | -E |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.54 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.21 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.76 | -b |
| tinyxxd | 16 | 0.34 | -u |
| tinyxxd | 16 | 0.36 | -E |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.27 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.61 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.62 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.44 | -b |
| xxd | 8 | 0.22 | -u |
| xxd | 8 | 0.21 | -E |

## Performance Summaries
- With flags '' and size 64MiB, tinyxxd was 18.61% faster.
- With flags '-p' and size 64MiB, tinyxxd was 15.74% faster.
- With flags '-e' and size 64MiB, tinyxxd was 14.08% faster.
- With flags '-b' and size 64MiB, tinyxxd was 15.42% faster.
- With flags '-u' and size 64MiB, tinyxxd was 22.57% faster.
- With flags '-E' and size 64MiB, tinyxxd was 18.40% faster.
- With flags '' and size 32MiB, tinyxxd was 19.30% faster.
- With flags '-r' and size 32MiB, tinyxxd was 12.69% faster.
- With flags '-p' and size 32MiB, tinyxxd was 15.60% faster.
- With flags '-e' and size 32MiB, tinyxxd was 16.02% faster.
- With flags '-b' and size 32MiB, tinyxxd was 13.52% faster.
- With flags '-u' and size 32MiB, tinyxxd was 10.29% faster.
- With flags '-E' and size 32MiB, tinyxxd was 17.22% faster.
- With flags '' and size 16MiB, tinyxxd was 19.65% faster.
- With flags '-p' and size 16MiB, tinyxxd was 15.48% faster.
- With flags '-e' and size 16MiB, tinyxxd was 15.58% faster.
- With flags '-b' and size 16MiB, tinyxxd was 17.56% faster.
- With flags '-u' and size 16MiB, tinyxxd was 12.43% faster.
- With flags '-E' and size 16MiB, tinyxxd was 16.10% faster.
- With flags '' and size 8MiB, tinyxxd was 18.24% faster.
- With flags '-p' and size 8MiB, tinyxxd was 27.47% faster.
- With flags '-e' and size 8MiB, tinyxxd was 16.38% faster.
- With flags '-b' and size 8MiB, tinyxxd was 15.69% faster.
- With flags '-u' and size 8MiB, tinyxxd was 35.67% faster.
- With flags '-E' and size 8MiB, tinyxxd was 18.99% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 10.45% faster than xxd.
- For 32MiB files, tinyxxd was 11.01% faster than xxd.
- For 16MiB files, tinyxxd was 11.10% faster than xxd.
- For 8MiB files, tinyxxd was 12.90% faster than xxd.

### Performance by flag
- With flag '', tinyxxd was 18.90% faster.
- With flag '-p', tinyxxd was 16.47% faster.
- With flag '-e', tinyxxd was 14.94% faster.
- With flag '-b', tinyxxd was 15.21% faster.
- With flag '-u', tinyxxd was 18.59% faster.
- With flag '-E', tinyxxd was 17.82% faster.

### Performance compared to last run
- For 64MiB files with flags '', tinyxxd slowed down by 7.83% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd slowed down by 0.43% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 4.05% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd slowed down by 0.23% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd slowed down by 0.75% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd slowed down by 1.38% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd improved by 1.51% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd improved by 2.25% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd improved by 1.20% compared to the last run.
- For 64MiB files with flags '', xxd slowed down by 2.24% compared to the last run.
- For 64MiB files with flags '-r', xxd slowed down by 2.73% compared to the last run.
- For 64MiB files with flags '', xxd improved by 2.46% compared to the last run.
- For 64MiB files with flags '-p', xxd improved by 0.36% compared to the last run.
- For 64MiB files with flags '-i', xxd slowed down by 0.88% compared to the last run.
- For 64MiB files with flags '-e', xxd improved by 2.34% compared to the last run.
- For 64MiB files with flags '-b', xxd improved by 1.67% compared to the last run.
- For 64MiB files with flags '-u', xxd slowed down by 1.12% compared to the last run.
- For 64MiB files with flags '-E', xxd slowed down by 0.22% compared to the last run.
- For 32MiB files with flags '', xxd improved by 1.33% compared to the last run.
- For 32MiB files with flags '-r', xxd slowed down by 11.16% compared to the last run.
- For 32MiB files with flags '', xxd improved by 4.42% compared to the last run.
- For 32MiB files with flags '-p', xxd improved by 0.25% compared to the last run.
- For 32MiB files with flags '-i', xxd improved by 0.38% compared to the last run.
- For 32MiB files with flags '-e', xxd slowed down by 0.40% compared to the last run.
- For 32MiB files with flags '-b', xxd improved by 2.01% compared to the last run.
- For 32MiB files with flags '-u', xxd improved by 0.04% compared to the last run.
- For 32MiB files with flags '-E', xxd improved by 5.39% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 0.75% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd improved by 0.89% compared to the last run.
- For 32MiB files with flags '', tinyxxd improved by 4.32% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd improved by 0.17% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd improved by 2.61% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd slowed down by 0.18% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd slowed down by 2.74% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd slowed down by 4.91% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd slowed down by 0.06% compared to the last run.
- For 16MiB files with flags '', xxd slowed down by 2.56% compared to the last run.
- For 16MiB files with flags '-r', xxd slowed down by 1.66% compared to the last run.
- For 16MiB files with flags '', xxd slowed down by 1.90% compared to the last run.
- For 16MiB files with flags '-p', xxd improved by 0.06% compared to the last run.
- For 16MiB files with flags '-i', xxd slowed down by 2.95% compared to the last run.
- For 16MiB files with flags '-e', xxd improved by 0.05% compared to the last run.
- For 16MiB files with flags '-b', xxd improved by 0.21% compared to the last run.
- For 16MiB files with flags '-u', xxd improved by 1.60% compared to the last run.
- For 16MiB files with flags '-E', xxd improved by 2.59% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 0.43% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd slowed down by 0.02% compared to the last run.
- For 16MiB files with flags '', tinyxxd improved by 1.60% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd improved by 0.43% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd improved by 0.75% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd improved by 0.29% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd slowed down by 0.69% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd slowed down by 3.14% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd improved by 7.94% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 4.18% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd improved by 0.16% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 0.10% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd slowed down by 0.39% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd slowed down by 1.34% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd improved by 0.03% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd slowed down by 1.31% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd improved by 0.66% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd improved by 0.51% compared to the last run.
- For 8MiB files with flags '', xxd slowed down by 2.56% compared to the last run.
- For 8MiB files with flags '-r', xxd improved by 2.70% compared to the last run.
- For 8MiB files with flags '', xxd improved by 0.88% compared to the last run.
- For 8MiB files with flags '-p', xxd slowed down by 9.12% compared to the last run.
- For 8MiB files with flags '-i', xxd slowed down by 0.65% compared to the last run.
- For 8MiB files with flags '-e', xxd slowed down by 0.46% compared to the last run.
- For 8MiB files with flags '-b', xxd slowed down by 0.84% compared to the last run.
- For 8MiB files with flags '-u', xxd slowed down by 11.42% compared to the last run.
- For 8MiB files with flags '-E', xxd slowed down by 0.41% compared to the last run.

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


Report generated on: 2024-02-12T23:19:22.257425
