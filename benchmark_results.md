# Benchmark results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| tinyxxd | 64 | 1.33 |  |
| tinyxxd | 64 | 2.18 | -r |
| tinyxxd | 64 | 1.25 |  |
| tinyxxd | 64 | 0.82 | -p |
| tinyxxd | 64 | 4.85 | -i |
| tinyxxd | 64 | 1.35 | -e |
| tinyxxd | 64 | 3.18 | -b |
| tinyxxd | 64 | 1.25 | -u |
| tinyxxd | 64 | 1.41 | -E |
| xxd | 64 | 1.56 |  |
| xxd | 64 | 2.23 | -r |
| xxd | 64 | 1.49 |  |
| xxd | 64 | 0.96 | -p |
| xxd | 64 | 4.88 | -i |
| xxd | 64 | 1.51 | -e |
| xxd | 64 | 3.55 | -b |
| xxd | 64 | 1.52 | -u |
| xxd | 64 | 1.66 | -E |
| xxd | 32 | 0.79 |  |
| xxd | 32 | 1.29 | -r |
| xxd | 32 | 0.76 |  |
| xxd | 32 | 0.48 | -p |
| xxd | 32 | 2.44 | -i |
| xxd | 32 | 0.76 | -e |
| xxd | 32 | 1.79 | -b |
| xxd | 32 | 0.78 | -u |
| xxd | 32 | 0.84 | -E |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 1.16 | -r |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 0.42 | -p |
| tinyxxd | 32 | 2.47 | -i |
| tinyxxd | 32 | 0.66 | -e |
| tinyxxd | 32 | 1.53 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.71 | -E |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.54 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.21 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.77 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.35 | -E |
| xxd | 16 | 0.39 |  |
| xxd | 16 | 0.64 | -r |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.25 | -i |
| xxd | 16 | 0.37 | -e |
| xxd | 16 | 0.88 | -b |
| xxd | 16 | 0.37 | -u |
| xxd | 16 | 0.43 | -E |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.46 | -b |
| xxd | 8 | 0.20 | -u |
| xxd | 8 | 0.22 | -E |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.39 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.64 | -i |
| tinyxxd | 8 | 0.17 | -e |
| tinyxxd | 8 | 0.39 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |

## Performance Summaries
- With flags '' and size 64MiB, tinyxxd was 18.30% faster.
- With flags '-p' and size 64MiB, tinyxxd was 16.88% faster.
- With flags '-e' and size 64MiB, tinyxxd was 12.07% faster.
- With flags '-b' and size 64MiB, tinyxxd was 11.86% faster.
- With flags '-u' and size 64MiB, tinyxxd was 21.32% faster.
- With flags '-E' and size 64MiB, tinyxxd was 18.21% faster.
- With flags '' and size 32MiB, tinyxxd was 20.84% faster.
- With flags '-r' and size 32MiB, tinyxxd was 11.21% faster.
- With flags '-p' and size 32MiB, tinyxxd was 13.84% faster.
- With flags '-e' and size 32MiB, tinyxxd was 15.07% faster.
- With flags '-b' and size 32MiB, tinyxxd was 17.41% faster.
- With flags '-u' and size 32MiB, tinyxxd was 22.76% faster.
- With flags '-E' and size 32MiB, tinyxxd was 19.12% faster.
- With flags '' and size 16MiB, tinyxxd was 18.63% faster.
- With flags '-r' and size 16MiB, tinyxxd was 18.46% faster.
- With flags '-p' and size 16MiB, tinyxxd was 15.19% faster.
- With flags '-e' and size 16MiB, tinyxxd was 15.76% faster.
- With flags '-b' and size 16MiB, tinyxxd was 14.27% faster.
- With flags '-u' and size 16MiB, tinyxxd was 18.57% faster.
- With flags '-E' and size 16MiB, tinyxxd was 20.85% faster.
- With flags '' and size 8MiB, tinyxxd was 17.91% faster.
- With flags '-r' and size 8MiB, xxd was 40.04% faster.
- With flags '-p' and size 8MiB, tinyxxd was 11.66% faster.
- With flags '-e' and size 8MiB, tinyxxd was 11.92% faster.
- With flags '-b' and size 8MiB, tinyxxd was 17.03% faster.
- With flags '-u' and size 8MiB, tinyxxd was 25.67% faster.
- With flags '-E' and size 8MiB, tinyxxd was 20.49% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 9.95% faster than xxd.
- For 32MiB files, tinyxxd was 12.01% faster than xxd.
- For 16MiB files, tinyxxd was 13.47% faster than xxd.
- For 8MiB files, tinyxxd was 4.06% faster than xxd.

### Performance by flag
- With flag '', tinyxxd was 18.99% faster.
- With flag '-p', tinyxxd was 15.47% faster.
- With flag '-e', tinyxxd was 13.33% faster.
- With flag '-b', tinyxxd was 13.97% faster.
- With flag '-u', tinyxxd was 21.63% faster.
- With flag '-E', tinyxxd was 18.96% faster.

### Performance compared to last run
- For 64MiB files with flags '', tinyxxd slowed down by 4.13% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd improved by 1.74% compared to the last run.
- For 64MiB files with flags '', tinyxxd improved by 1.97% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd improved by 1.44% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd improved by 0.56% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd slowed down by 4.82% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd slowed down by 4.96% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd improved by 2.90% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd improved by 2.23% compared to the last run.
- For 64MiB files with flags '', xxd slowed down by 2.88% compared to the last run.
- For 64MiB files with flags '-r', xxd slowed down by 2.60% compared to the last run.
- For 64MiB files with flags '', xxd improved by 2.12% compared to the last run.
- For 64MiB files with flags '-p', xxd slowed down by 2.05% compared to the last run.
- For 64MiB files with flags '-i', xxd slowed down by 0.05% compared to the last run.
- For 64MiB files with flags '-e', xxd improved by 3.87% compared to the last run.
- For 64MiB files with flags '-b', xxd improved by 1.07% compared to the last run.
- For 64MiB files with flags '-u', xxd slowed down by 1.91% compared to the last run.
- For 64MiB files with flags '-E', xxd improved by 2.76% compared to the last run.
- For 32MiB files with flags '', xxd slowed down by 4.12% compared to the last run.
- For 32MiB files with flags '-r', xxd slowed down by 14.57% compared to the last run.
- For 32MiB files with flags '', xxd slowed down by 0.11% compared to the last run.
- For 32MiB files with flags '-p', xxd improved by 4.96% compared to the last run.
- For 32MiB files with flags '-i', xxd slowed down by 0.62% compared to the last run.
- For 32MiB files with flags '-e', xxd improved by 0.89% compared to the last run.
- For 32MiB files with flags '-b', xxd slowed down by 1.77% compared to the last run.
- For 32MiB files with flags '-u', xxd slowed down by 0.34% compared to the last run.
- For 32MiB files with flags '-E', xxd slowed down by 1.59% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 2.71% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd slowed down by 5.03% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 2.82% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd slowed down by 1.29% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd slowed down by 0.22% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd slowed down by 1.51% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd slowed down by 0.76% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd slowed down by 1.19% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd improved by 0.18% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 1.82% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd improved by 1.34% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 1.26% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd improved by 0.00% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd improved by 1.26% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd improved by 0.30% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd improved by 1.39% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd improved by 2.16% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd improved by 3.17% compared to the last run.
- For 16MiB files with flags '', xxd slowed down by 1.35% compared to the last run.
- For 16MiB files with flags '-r', xxd slowed down by 15.40% compared to the last run.
- For 16MiB files with flags '', xxd improved by 3.11% compared to the last run.
- For 16MiB files with flags '-p', xxd improved by 0.46% compared to the last run.
- For 16MiB files with flags '-i', xxd slowed down by 2.92% compared to the last run.
- For 16MiB files with flags '-e', xxd improved by 11.93% compared to the last run.
- For 16MiB files with flags '-b', xxd improved by 2.16% compared to the last run.
- For 16MiB files with flags '-u', xxd improved by 4.31% compared to the last run.
- For 16MiB files with flags '-E', xxd improved by 0.85% compared to the last run.
- For 8MiB files with flags '', xxd improved by 0.20% compared to the last run.
- For 8MiB files with flags '-r', xxd improved by 1.55% compared to the last run.
- For 8MiB files with flags '', xxd improved by 2.38% compared to the last run.
- For 8MiB files with flags '-p', xxd improved by 0.56% compared to the last run.
- For 8MiB files with flags '-i', xxd improved by 0.45% compared to the last run.
- For 8MiB files with flags '-e', xxd slowed down by 0.13% compared to the last run.
- For 8MiB files with flags '-b', xxd slowed down by 2.99% compared to the last run.
- For 8MiB files with flags '-u', xxd slowed down by 2.85% compared to the last run.
- For 8MiB files with flags '-E', xxd slowed down by 3.56% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 4.59% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd slowed down by 40.33% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 0.18% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd slowed down by 3.08% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd improved by 1.48% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd slowed down by 3.07% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd slowed down by 2.76% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd improved by 1.26% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd improved by 0.33% compared to the last run.

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


Report generated on: 2024-02-12T18:38:03.202804
