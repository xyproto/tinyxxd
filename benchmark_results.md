# Benchmark results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| xxd | 64 | 1.59 |  |
| xxd | 64 | 2.18 | -r |
| xxd | 64 | 1.53 |  |
| xxd | 64 | 0.99 | -p |
| xxd | 64 | 5.05 | -i |
| xxd | 64 | 1.49 | -e |
| xxd | 64 | 3.53 | -b |
| xxd | 64 | 1.60 | -u |
| xxd | 64 | 1.68 | -E |
| tinyxxd | 64 | 1.32 |  |
| tinyxxd | 64 | 2.18 | -r |
| tinyxxd | 64 | 1.28 |  |
| tinyxxd | 64 | 0.82 | -p |
| tinyxxd | 64 | 4.87 | -i |
| tinyxxd | 64 | 1.28 | -e |
| tinyxxd | 64 | 3.10 | -b |
| tinyxxd | 64 | 1.26 | -u |
| tinyxxd | 64 | 1.46 | -E |
| tinyxxd | 32 | 0.66 |  |
| tinyxxd | 32 | 1.08 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.41 | -p |
| tinyxxd | 32 | 2.42 | -i |
| tinyxxd | 32 | 0.64 | -e |
| tinyxxd | 32 | 1.51 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.71 | -E |
| xxd | 32 | 0.78 |  |
| xxd | 32 | 1.12 | -r |
| xxd | 32 | 0.77 |  |
| xxd | 32 | 0.48 | -p |
| xxd | 32 | 2.45 | -i |
| xxd | 32 | 0.74 | -e |
| xxd | 32 | 1.76 | -b |
| xxd | 32 | 0.82 | -u |
| xxd | 32 | 0.84 | -E |
| xxd | 16 | 0.40 |  |
| xxd | 16 | 0.55 | -r |
| xxd | 16 | 0.42 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.26 | -i |
| xxd | 16 | 0.37 | -e |
| xxd | 16 | 0.88 | -b |
| xxd | 16 | 0.37 | -u |
| xxd | 16 | 0.42 | -E |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.55 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.21 | -i |
| tinyxxd | 16 | 0.33 | -e |
| tinyxxd | 16 | 0.76 | -b |
| tinyxxd | 16 | 0.31 | -u |
| tinyxxd | 16 | 0.36 | -E |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.27 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.46 | -b |
| xxd | 8 | 0.19 | -u |
| xxd | 8 | 0.21 | -E |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.27 | -r |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.61 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.39 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |

## Performance Summaries
- With flags '' and size 64MiB, tinyxxd was 20.26% faster.
- With flags '-p' and size 64MiB, tinyxxd was 20.84% faster.
- With flags '-e' and size 64MiB, tinyxxd was 15.99% faster.
- With flags '-b' and size 64MiB, tinyxxd was 13.92% faster.
- With flags '-u' and size 64MiB, tinyxxd was 26.79% faster.
- With flags '-E' and size 64MiB, tinyxxd was 15.31% faster.
- With flags '' and size 32MiB, tinyxxd was 20.35% faster.
- With flags '-p' and size 32MiB, tinyxxd was 15.58% faster.
- With flags '-e' and size 32MiB, tinyxxd was 15.35% faster.
- With flags '-b' and size 32MiB, tinyxxd was 16.34% faster.
- With flags '-u' and size 32MiB, tinyxxd was 30.22% faster.
- With flags '-E' and size 32MiB, tinyxxd was 18.94% faster.
- With flags '' and size 16MiB, tinyxxd was 27.81% faster.
- With flags '-p' and size 16MiB, tinyxxd was 14.17% faster.
- With flags '-e' and size 16MiB, tinyxxd was 15.20% faster.
- With flags '-b' and size 16MiB, tinyxxd was 16.14% faster.
- With flags '-u' and size 16MiB, tinyxxd was 18.89% faster.
- With flags '-E' and size 16MiB, tinyxxd was 14.24% faster.
- With flags '' and size 8MiB, tinyxxd was 15.84% faster.
- With flags '-p' and size 8MiB, tinyxxd was 14.82% faster.
- With flags '-e' and size 8MiB, tinyxxd was 14.66% faster.
- With flags '-b' and size 8MiB, tinyxxd was 18.52% faster.
- With flags '-u' and size 8MiB, tinyxxd was 19.29% faster.
- With flags '-E' and size 8MiB, tinyxxd was 16.43% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 11.82% faster than xxd.
- For 32MiB files, tinyxxd was 12.25% faster than xxd.
- For 16MiB files, tinyxxd was 12.46% faster than xxd.
- For 8MiB files, tinyxxd was 10.14% faster than xxd.

### Performance by flag
- With flag '', tinyxxd was 20.98% faster.
- With flag '-p', tinyxxd was 18.12% faster.
- With flag '-e', tinyxxd was 15.62% faster.
- With flag '-b', tinyxxd was 15.16% faster.
- With flag '-u', tinyxxd was 26.14% faster.
- With flag '-E', tinyxxd was 16.19% faster.

### Performance compared to last run
- For 64MiB files with flags '', xxd slowed down by 3.60% compared to the last run.
- For 64MiB files with flags '-r', xxd improved by 8.54% compared to the last run.
- For 64MiB files with flags '', xxd improved by 0.00% compared to the last run.
- For 64MiB files with flags '-p', xxd slowed down by 2.84% compared to the last run.
- For 64MiB files with flags '-i', xxd slowed down by 2.74% compared to the last run.
- For 64MiB files with flags '-e', xxd improved by 0.53% compared to the last run.
- For 64MiB files with flags '-b', xxd improved by 1.24% compared to the last run.
- For 64MiB files with flags '-u', xxd slowed down by 4.94% compared to the last run.
- For 64MiB files with flags '-E', xxd improved by 3.20% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 5.56% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd slowed down by 1.15% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 2.34% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd improved by 0.09% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd improved by 1.15% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd improved by 5.12% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd slowed down by 0.87% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd slowed down by 0.69% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd improved by 0.18% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 3.38% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd improved by 3.55% compared to the last run.
- For 32MiB files with flags '', tinyxxd improved by 2.54% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd improved by 1.90% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd improved by 0.45% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd improved by 0.14% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd slowed down by 0.06% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd improved by 0.04% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd improved by 6.23% compared to the last run.
- For 32MiB files with flags '', xxd slowed down by 1.35% compared to the last run.
- For 32MiB files with flags '-r', xxd improved by 17.22% compared to the last run.
- For 32MiB files with flags '', xxd improved by 0.39% compared to the last run.
- For 32MiB files with flags '-p', xxd improved by 0.32% compared to the last run.
- For 32MiB files with flags '-i', xxd slowed down by 0.73% compared to the last run.
- For 32MiB files with flags '-e', xxd improved by 1.25% compared to the last run.
- For 32MiB files with flags '-b', xxd improved by 1.28% compared to the last run.
- For 32MiB files with flags '-u', xxd slowed down by 2.19% compared to the last run.
- For 32MiB files with flags '-E', xxd slowed down by 1.22% compared to the last run.
- For 16MiB files with flags '', xxd slowed down by 4.55% compared to the last run.
- For 16MiB files with flags '-r', xxd improved by 0.42% compared to the last run.
- For 16MiB files with flags '', xxd slowed down by 7.94% compared to the last run.
- For 16MiB files with flags '-p', xxd improved by 0.24% compared to the last run.
- For 16MiB files with flags '-i', xxd slowed down by 1.99% compared to the last run.
- For 16MiB files with flags '-e', xxd improved by 0.29% compared to the last run.
- For 16MiB files with flags '-b', xxd improved by 4.40% compared to the last run.
- For 16MiB files with flags '-u', xxd improved by 2.94% compared to the last run.
- For 16MiB files with flags '-E', xxd slowed down by 0.90% compared to the last run.
- For 16MiB files with flags '', tinyxxd improved by 3.91% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd slowed down by 0.96% compared to the last run.
- For 16MiB files with flags '', tinyxxd improved by 5.93% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd improved by 23.64% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd improved by 1.55% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd improved by 0.05% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd slowed down by 0.27% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd improved by 0.95% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd slowed down by 0.79% compared to the last run.
- For 8MiB files with flags '', xxd improved by 0.48% compared to the last run.
- For 8MiB files with flags '-r', xxd improved by 17.44% compared to the last run.
- For 8MiB files with flags '', xxd improved by 2.92% compared to the last run.
- For 8MiB files with flags '-p', xxd improved by 1.92% compared to the last run.
- For 8MiB files with flags '-i', xxd improved by 0.30% compared to the last run.
- For 8MiB files with flags '-e', xxd improved by 1.87% compared to the last run.
- For 8MiB files with flags '-b', xxd slowed down by 0.93% compared to the last run.
- For 8MiB files with flags '-u', xxd improved by 4.80% compared to the last run.
- For 8MiB files with flags '-E', xxd improved by 1.33% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 1.82% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd slowed down by 0.58% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 2.93% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd improved by 0.30% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd slowed down by 1.23% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd improved by 0.75% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd improved by 1.50% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd improved by 3.35% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd improved by 2.62% compared to the last run.

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


Report generated on: 2024-02-13T00:30:20.090304
