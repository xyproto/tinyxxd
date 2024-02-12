# Benchmark results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| tinyxxd | 64 | 1.36 |  |
| tinyxxd | 64 | 2.18 | -r |
| tinyxxd | 64 | 1.25 |  |
| tinyxxd | 64 | 0.82 | -p |
| tinyxxd | 64 | 4.88 | -i |
| tinyxxd | 64 | 1.31 | -e |
| tinyxxd | 64 | 3.06 | -b |
| tinyxxd | 64 | 1.34 | -u |
| tinyxxd | 64 | 1.40 | -E |
| xxd | 64 | 1.59 |  |
| xxd | 64 | 2.27 | -r |
| xxd | 64 | 1.55 |  |
| xxd | 64 | 0.96 | -p |
| xxd | 64 | 5.01 | -i |
| xxd | 64 | 1.51 | -e |
| xxd | 64 | 3.56 | -b |
| xxd | 64 | 1.55 | -u |
| xxd | 64 | 1.70 | -E |
| xxd | 32 | 0.82 |  |
| xxd | 32 | 1.14 | -r |
| xxd | 32 | 0.75 |  |
| xxd | 32 | 0.48 | -p |
| xxd | 32 | 2.44 | -i |
| xxd | 32 | 0.75 | -e |
| xxd | 32 | 1.77 | -b |
| xxd | 32 | 0.75 | -u |
| xxd | 32 | 0.84 | -E |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 1.33 | -r |
| tinyxxd | 32 | 0.65 |  |
| tinyxxd | 32 | 0.43 | -p |
| tinyxxd | 32 | 2.43 | -i |
| tinyxxd | 32 | 0.65 | -e |
| tinyxxd | 32 | 1.52 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.75 | -E |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.54 | -r |
| tinyxxd | 16 | 0.31 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.23 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.76 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.35 | -E |
| xxd | 16 | 0.40 |  |
| xxd | 16 | 0.55 | -r |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.25 | -p |
| xxd | 16 | 1.23 | -i |
| xxd | 16 | 0.37 | -e |
| xxd | 16 | 0.88 | -b |
| xxd | 16 | 0.38 | -u |
| xxd | 16 | 0.42 | -E |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.46 | -b |
| xxd | 8 | 0.19 | -u |
| xxd | 8 | 0.21 | -E |
| tinyxxd | 8 | 0.39 |  |
| tinyxxd | 8 | 0.36 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.62 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |

## Performance Summaries
- With flags '' and size 64MiB, tinyxxd was 20.67% faster.
- With flags '-p' and size 64MiB, tinyxxd was 16.96% faster.
- With flags '-e' and size 64MiB, tinyxxd was 15.07% faster.
- With flags '-b' and size 64MiB, tinyxxd was 16.22% faster.
- With flags '-u' and size 64MiB, tinyxxd was 16.02% faster.
- With flags '-E' and size 64MiB, tinyxxd was 20.97% faster.
- With flags '' and size 32MiB, tinyxxd was 21.57% faster.
- With flags '-r' and size 32MiB, xxd was 16.98% faster.
- With flags '-p' and size 32MiB, tinyxxd was 11.93% faster.
- With flags '-e' and size 32MiB, tinyxxd was 15.51% faster.
- With flags '-b' and size 32MiB, tinyxxd was 16.35% faster.
- With flags '-u' and size 32MiB, tinyxxd was 18.54% faster.
- With flags '-E' and size 32MiB, tinyxxd was 12.01% faster.
- With flags '' and size 16MiB, tinyxxd was 20.49% faster.
- With flags '-p' and size 16MiB, tinyxxd was 17.42% faster.
- With flags '-e' and size 16MiB, tinyxxd was 15.95% faster.
- With flags '-b' and size 16MiB, tinyxxd was 15.78% faster.
- With flags '-u' and size 16MiB, tinyxxd was 20.60% faster.
- With flags '-E' and size 16MiB, tinyxxd was 18.24% faster.
- With flags '' and size 8MiB, xxd was 39.66% faster.
- With flags '-r' and size 8MiB, xxd was 31.04% faster.
- With flags '-p' and size 8MiB, tinyxxd was 15.15% faster.
- With flags '-e' and size 8MiB, tinyxxd was 15.22% faster.
- With flags '-b' and size 8MiB, tinyxxd was 21.75% faster.
- With flags '-u' and size 8MiB, tinyxxd was 21.99% faster.
- With flags '-E' and size 8MiB, tinyxxd was 18.00% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 11.93% faster than xxd.
- For 32MiB files, tinyxxd was 7.73% faster than xxd.
- For 16MiB files, tinyxxd was 10.96% faster than xxd.
- For 8MiB files, xxd was 2.39% faster than tinyxxd.

### Performance by flag
- With flag '', tinyxxd was 15.60% faster.
- With flag '-p', tinyxxd was 15.53% faster.
- With flag '-e', tinyxxd was 15.31% faster.
- With flag '-b', tinyxxd was 16.57% faster.
- With flag '-u', tinyxxd was 17.65% faster.
- With flag '-E', tinyxxd was 17.91% faster.

### Performance compared to last run
- For 64MiB files with flags '', tinyxxd slowed down by 7.71% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd improved by 1.31% compared to the last run.
- For 64MiB files with flags '', tinyxxd improved by 0.78% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd improved by 0.83% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd improved by 0.72% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd slowed down by 0.49% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd slowed down by 1.54% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd slowed down by 5.85% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd improved by 0.56% compared to the last run.
- For 64MiB files with flags '', xxd slowed down by 7.70% compared to the last run.
- For 64MiB files with flags '-r', xxd slowed down by 2.97% compared to the last run.
- For 64MiB files with flags '', xxd slowed down by 4.66% compared to the last run.
- For 64MiB files with flags '-p', xxd slowed down by 1.84% compared to the last run.
- For 64MiB files with flags '-i', xxd slowed down by 2.69% compared to the last run.
- For 64MiB files with flags '-e', xxd slowed down by 0.82% compared to the last run.
- For 64MiB files with flags '-b', xxd improved by 0.19% compared to the last run.
- For 64MiB files with flags '-u', xxd slowed down by 3.24% compared to the last run.
- For 64MiB files with flags '-E', xxd slowed down by 3.40% compared to the last run.
- For 32MiB files with flags '', xxd slowed down by 7.85% compared to the last run.
- For 32MiB files with flags '-r', xxd improved by 3.31% compared to the last run.
- For 32MiB files with flags '', xxd improved by 1.95% compared to the last run.
- For 32MiB files with flags '-p', xxd improved by 6.95% compared to the last run.
- For 32MiB files with flags '-i', xxd improved by 3.53% compared to the last run.
- For 32MiB files with flags '-e', xxd slowed down by 0.74% compared to the last run.
- For 32MiB files with flags '-b', xxd slowed down by 0.98% compared to the last run.
- For 32MiB files with flags '-u', xxd improved by 1.37% compared to the last run.
- For 32MiB files with flags '-E', xxd slowed down by 2.70% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 1.46% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd slowed down by 20.74% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 2.28% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd slowed down by 3.85% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd improved by 0.47% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd slowed down by 1.38% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd improved by 0.93% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd improved by 0.07% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd slowed down by 5.44% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 2.91% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd slowed down by 0.32% compared to the last run.
- For 16MiB files with flags '', tinyxxd improved by 0.96% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd improved by 1.05% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd slowed down by 2.42% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd improved by 0.48% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd improved by 0.08% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd slowed down by 0.63% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd improved by 4.09% compared to the last run.
- For 16MiB files with flags '', xxd slowed down by 5.58% compared to the last run.
- For 16MiB files with flags '-r', xxd slowed down by 0.02% compared to the last run.
- For 16MiB files with flags '', xxd improved by 0.34% compared to the last run.
- For 16MiB files with flags '-p', xxd slowed down by 1.39% compared to the last run.
- For 16MiB files with flags '-i', xxd improved by 0.52% compared to the last run.
- For 16MiB files with flags '-e', xxd slowed down by 0.75% compared to the last run.
- For 16MiB files with flags '-b', xxd slowed down by 0.56% compared to the last run.
- For 16MiB files with flags '-u', xxd slowed down by 2.28% compared to the last run.
- For 16MiB files with flags '-E', xxd slowed down by 1.75% compared to the last run.
- For 8MiB files with flags '', xxd improved by 1.38% compared to the last run.
- For 8MiB files with flags '-r', xxd improved by 0.38% compared to the last run.
- For 8MiB files with flags '', xxd improved by 0.35% compared to the last run.
- For 8MiB files with flags '-p', xxd improved by 0.15% compared to the last run.
- For 8MiB files with flags '-i', xxd slowed down by 0.12% compared to the last run.
- For 8MiB files with flags '-e', xxd slowed down by 0.79% compared to the last run.
- For 8MiB files with flags '-b', xxd slowed down by 5.19% compared to the last run.
- For 8MiB files with flags '-u', xxd slowed down by 3.17% compared to the last run.
- For 8MiB files with flags '-E', xxd slowed down by 1.13% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 144.26% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd slowed down by 31.23% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 1.93% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd slowed down by 0.66% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd slowed down by 1.92% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd slowed down by 1.04% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd slowed down by 0.41% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd slowed down by 0.21% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd slowed down by 0.94% compared to the last run.

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


Report generated on: 2024-02-12T09:11:49.500236
