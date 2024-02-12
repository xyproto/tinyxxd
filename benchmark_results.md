# Benchmark results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| xxd | 64 | 1.57 |  |
| xxd | 64 | 2.19 | -r |
| xxd | 64 | 1.57 |  |
| xxd | 64 | 0.96 | -p |
| xxd | 64 | 4.86 | -i |
| xxd | 64 | 1.53 | -e |
| xxd | 64 | 3.61 | -b |
| xxd | 64 | 1.51 | -u |
| xxd | 64 | 1.66 | -E |
| tinyxxd | 64 | 1.29 |  |
| tinyxxd | 64 | 2.20 | -r |
| tinyxxd | 64 | 1.25 |  |
| tinyxxd | 64 | 0.82 | -p |
| tinyxxd | 64 | 4.88 | -i |
| tinyxxd | 64 | 1.29 | -e |
| tinyxxd | 64 | 3.13 | -b |
| tinyxxd | 64 | 1.28 | -u |
| tinyxxd | 64 | 1.42 | -E |
| tinyxxd | 32 | 0.65 |  |
| tinyxxd | 32 | 1.11 | -r |
| tinyxxd | 32 | 0.65 |  |
| tinyxxd | 32 | 0.41 | -p |
| tinyxxd | 32 | 2.49 | -i |
| tinyxxd | 32 | 0.64 | -e |
| tinyxxd | 32 | 1.51 | -b |
| tinyxxd | 32 | 0.65 | -u |
| tinyxxd | 32 | 0.70 | -E |
| xxd | 32 | 0.79 |  |
| xxd | 32 | 1.11 | -r |
| xxd | 32 | 0.79 |  |
| xxd | 32 | 0.48 | -p |
| xxd | 32 | 2.44 | -i |
| xxd | 32 | 0.74 | -e |
| xxd | 32 | 1.80 | -b |
| xxd | 32 | 0.75 | -u |
| xxd | 32 | 0.87 | -E |
| xxd | 16 | 0.39 |  |
| xxd | 16 | 0.55 | -r |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.21 | -i |
| xxd | 16 | 0.37 | -e |
| xxd | 16 | 0.90 | -b |
| xxd | 16 | 0.38 | -u |
| xxd | 16 | 0.42 | -E |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.54 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.22 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.76 | -b |
| tinyxxd | 16 | 0.33 | -u |
| tinyxxd | 16 | 0.39 | -E |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.19 |  |
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
| tinyxxd | 8 | 0.60 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |

## Performance Summaries
- With flags '' and size 64MiB, tinyxxd was 23.76% faster.
- With flags '-p' and size 64MiB, tinyxxd was 16.43% faster.
- With flags '-e' and size 64MiB, tinyxxd was 18.42% faster.
- With flags '-b' and size 64MiB, tinyxxd was 15.61% faster.
- With flags '-u' and size 64MiB, tinyxxd was 18.48% faster.
- With flags '-E' and size 64MiB, tinyxxd was 16.73% faster.
- With flags '' and size 32MiB, tinyxxd was 21.18% faster.
- With flags '-p' and size 32MiB, tinyxxd was 15.68% faster.
- With flags '-e' and size 32MiB, tinyxxd was 15.78% faster.
- With flags '-b' and size 32MiB, tinyxxd was 19.03% faster.
- With flags '-u' and size 32MiB, tinyxxd was 15.76% faster.
- With flags '-E' and size 32MiB, tinyxxd was 23.97% faster.
- With flags '' and size 16MiB, tinyxxd was 19.05% faster.
- With flags '-p' and size 16MiB, tinyxxd was 15.06% faster.
- With flags '-e' and size 16MiB, tinyxxd was 15.29% faster.
- With flags '-b' and size 16MiB, tinyxxd was 18.62% faster.
- With flags '-u' and size 16MiB, tinyxxd was 17.85% faster.
- With flags '-E' and size 16MiB, tinyxxd was 9.72% faster.
- With flags '' and size 8MiB, tinyxxd was 21.51% faster.
- With flags '-p' and size 8MiB, tinyxxd was 17.26% faster.
- With flags '-e' and size 8MiB, tinyxxd was 15.81% faster.
- With flags '-b' and size 8MiB, tinyxxd was 16.22% faster.
- With flags '-u' and size 8MiB, tinyxxd was 20.96% faster.
- With flags '-E' and size 8MiB, tinyxxd was 17.89% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 10.84% faster than xxd.
- For 32MiB files, tinyxxd was 10.91% faster than xxd.
- For 16MiB files, tinyxxd was 9.79% faster than xxd.
- For 8MiB files, tinyxxd was 12.34% faster than xxd.

### Performance by flag
- With flag '', tinyxxd was 22.28% faster.
- With flag '-p', tinyxxd was 16.10% faster.
- With flag '-e', tinyxxd was 17.13% faster.
- With flag '-b', tinyxxd was 16.94% faster.
- With flag '-u', tinyxxd was 17.83% faster.
- With flag '-E', tinyxxd was 17.70% faster.

### Performance compared to last run
- For 64MiB files with flags '', xxd slowed down by 5.49% compared to the last run.
- For 64MiB files with flags '-r', xxd improved by 1.68% compared to the last run.
- For 64MiB files with flags '', xxd slowed down by 5.29% compared to the last run.
- For 64MiB files with flags '-p', xxd improved by 0.83% compared to the last run.
- For 64MiB files with flags '-i', xxd improved by 0.51% compared to the last run.
- For 64MiB files with flags '-e', xxd slowed down by 1.41% compared to the last run.
- For 64MiB files with flags '-b', xxd slowed down by 1.76% compared to the last run.
- For 64MiB files with flags '-u', xxd improved by 0.42% compared to the last run.
- For 64MiB files with flags '-E', xxd improved by 0.07% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 3.01% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd slowed down by 0.93% compared to the last run.
- For 64MiB files with flags '', tinyxxd improved by 0.45% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd improved by 0.44% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd slowed down by 0.63% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd improved by 4.04% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd improved by 1.54% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd slowed down by 1.97% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd slowed down by 1.20% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 0.14% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd improved by 4.29% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 1.44% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd improved by 1.47% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd slowed down by 0.57% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd improved by 3.12% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd improved by 1.22% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd slowed down by 2.07% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd improved by 0.06% compared to the last run.
- For 32MiB files with flags '', xxd slowed down by 2.94% compared to the last run.
- For 32MiB files with flags '-r', xxd improved by 13.53% compared to the last run.
- For 32MiB files with flags '', xxd slowed down by 3.36% compared to the last run.
- For 32MiB files with flags '-p', xxd slowed down by 0.13% compared to the last run.
- For 32MiB files with flags '-i', xxd slowed down by 0.30% compared to the last run.
- For 32MiB files with flags '-e', xxd improved by 2.52% compared to the last run.
- For 32MiB files with flags '-b', xxd slowed down by 0.14% compared to the last run.
- For 32MiB files with flags '-u', xxd improved by 3.76% compared to the last run.
- For 32MiB files with flags '-E', xxd slowed down by 4.01% compared to the last run.
- For 16MiB files with flags '', xxd slowed down by 5.27% compared to the last run.
- For 16MiB files with flags '-r', xxd improved by 14.74% compared to the last run.
- For 16MiB files with flags '', xxd improved by 0.09% compared to the last run.
- For 16MiB files with flags '-p', xxd improved by 0.19% compared to the last run.
- For 16MiB files with flags '-i', xxd improved by 3.22% compared to the last run.
- For 16MiB files with flags '-e', xxd improved by 0.42% compared to the last run.
- For 16MiB files with flags '-b', xxd slowed down by 2.38% compared to the last run.
- For 16MiB files with flags '-u', xxd slowed down by 2.51% compared to the last run.
- For 16MiB files with flags '-E', xxd improved by 0.60% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 0.56% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd slowed down by 0.77% compared to the last run.
- For 16MiB files with flags '', tinyxxd improved by 0.16% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd improved by 0.08% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd slowed down by 1.06% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd improved by 0.01% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd improved by 1.38% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd slowed down by 3.13% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd slowed down by 9.48% compared to the last run.
- For 8MiB files with flags '', xxd slowed down by 6.26% compared to the last run.
- For 8MiB files with flags '-r', xxd slowed down by 3.73% compared to the last run.
- For 8MiB files with flags '', xxd slowed down by 0.10% compared to the last run.
- For 8MiB files with flags '-p', xxd slowed down by 1.23% compared to the last run.
- For 8MiB files with flags '-i', xxd slowed down by 0.73% compared to the last run.
- For 8MiB files with flags '-e', xxd improved by 0.10% compared to the last run.
- For 8MiB files with flags '-b', xxd improved by 3.69% compared to the last run.
- For 8MiB files with flags '-u', xxd improved by 3.24% compared to the last run.
- For 8MiB files with flags '-E', xxd improved by 3.03% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 2.78% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd improved by 28.91% compared to the last run.
- For 8MiB files with flags '', tinyxxd improved by 0.40% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd improved by 3.61% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd improved by 6.56% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd improved by 3.46% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd improved by 3.03% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd slowed down by 0.53% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd improved by 0.89% compared to the last run.

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


Report generated on: 2024-02-12T22:14:35.853320
