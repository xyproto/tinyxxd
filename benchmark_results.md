# Benchmark results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| xxd | 64 | 1.62 |  |
| xxd | 64 | 2.18 | -r |
| xxd | 64 | 1.53 |  |
| xxd | 64 | 0.97 | -p |
| xxd | 64 | 4.85 | -i |
| xxd | 64 | 1.53 | -e |
| xxd | 64 | 3.62 | -b |
| xxd | 64 | 1.52 | -u |
| xxd | 64 | 1.66 | -E |
| tinyxxd | 64 | 1.30 |  |
| tinyxxd | 64 | 2.19 | -r |
| tinyxxd | 64 | 1.26 |  |
| tinyxxd | 64 | 0.83 | -p |
| tinyxxd | 64 | 4.86 | -i |
| tinyxxd | 64 | 1.29 | -e |
| tinyxxd | 64 | 3.07 | -b |
| tinyxxd | 64 | 1.26 | -u |
| tinyxxd | 64 | 1.45 | -E |
| xxd | 32 | 0.79 |  |
| xxd | 32 | 1.17 | -r |
| xxd | 32 | 0.76 |  |
| xxd | 32 | 0.49 | -p |
| xxd | 32 | 2.45 | -i |
| xxd | 32 | 0.74 | -e |
| xxd | 32 | 1.76 | -b |
| xxd | 32 | 0.79 | -u |
| xxd | 32 | 0.83 | -E |
| tinyxxd | 32 | 0.65 |  |
| tinyxxd | 32 | 1.09 | -r |
| tinyxxd | 32 | 0.62 |  |
| tinyxxd | 32 | 0.41 | -p |
| tinyxxd | 32 | 2.40 | -i |
| tinyxxd | 32 | 0.67 | -e |
| tinyxxd | 32 | 1.57 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.70 | -E |
| xxd | 16 | 0.43 |  |
| xxd | 16 | 0.55 | -r |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.25 | -i |
| xxd | 16 | 0.37 | -e |
| xxd | 16 | 0.91 | -b |
| xxd | 16 | 0.38 | -u |
| xxd | 16 | 0.42 | -E |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.55 | -r |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.22 | -i |
| tinyxxd | 16 | 0.33 | -e |
| tinyxxd | 16 | 0.78 | -b |
| tinyxxd | 16 | 0.33 | -u |
| tinyxxd | 16 | 0.36 | -E |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.27 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.62 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.18 | -u |
| tinyxxd | 8 | 0.18 | -E |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.45 | -b |
| xxd | 8 | 0.19 | -u |
| xxd | 8 | 0.21 | -E |

## Performance Summaries
- With flags '' and size 64MiB, tinyxxd was 23.24% faster.
- With flags '-p' and size 64MiB, tinyxxd was 16.85% faster.
- With flags '-e' and size 64MiB, tinyxxd was 18.78% faster.
- With flags '-b' and size 64MiB, tinyxxd was 18.20% faster.
- With flags '-u' and size 64MiB, tinyxxd was 20.82% faster.
- With flags '-E' and size 64MiB, tinyxxd was 14.25% faster.
- With flags '' and size 32MiB, tinyxxd was 21.07% faster.
- With flags '-r' and size 32MiB, tinyxxd was 7.92% faster.
- With flags '-p' and size 32MiB, tinyxxd was 18.98% faster.
- With flags '-e' and size 32MiB, tinyxxd was 11.77% faster.
- With flags '-b' and size 32MiB, tinyxxd was 12.14% faster.
- With flags '-u' and size 32MiB, tinyxxd was 26.06% faster.
- With flags '-E' and size 32MiB, tinyxxd was 17.71% faster.
- With flags '' and size 16MiB, tinyxxd was 22.49% faster.
- With flags '-p' and size 16MiB, tinyxxd was 15.07% faster.
- With flags '-e' and size 16MiB, tinyxxd was 14.82% faster.
- With flags '-b' and size 16MiB, tinyxxd was 16.11% faster.
- With flags '-u' and size 16MiB, tinyxxd was 15.36% faster.
- With flags '-E' and size 16MiB, tinyxxd was 16.10% faster.
- With flags '' and size 8MiB, tinyxxd was 18.94% faster.
- With flags '-e' and size 8MiB, tinyxxd was 16.59% faster.
- With flags '-b' and size 8MiB, tinyxxd was 17.37% faster.
- With flags '-u' and size 8MiB, tinyxxd was 6.79% faster.
- With flags '-E' and size 8MiB, tinyxxd was 17.08% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 11.29% faster than xxd.
- For 32MiB files, tinyxxd was 11.85% faster than xxd.
- For 16MiB files, tinyxxd was 11.11% faster than xxd.
- For 8MiB files, tinyxxd was 8.42% faster than xxd.

### Performance by flag
- With flag '', tinyxxd was 22.27% faster.
- With flag '-p', tinyxxd was 15.80% faster.
- With flag '-e', tinyxxd was 16.19% faster.
- With flag '-b', tinyxxd was 16.22% faster.
- With flag '-u', tinyxxd was 20.40% faster.
- With flag '-E', tinyxxd was 15.59% faster.

### Performance compared to last run
- For 64MiB files with flags '', xxd slowed down by 8.39% compared to the last run.
- For 64MiB files with flags '-r', xxd improved by 1.76% compared to the last run.
- For 64MiB files with flags '', xxd slowed down by 2.74% compared to the last run.
- For 64MiB files with flags '-p', xxd slowed down by 1.61% compared to the last run.
- For 64MiB files with flags '-i', xxd improved by 0.42% compared to the last run.
- For 64MiB files with flags '-e', xxd slowed down by 2.63% compared to the last run.
- For 64MiB files with flags '-b', xxd slowed down by 1.25% compared to the last run.
- For 64MiB files with flags '-u', xxd slowed down by 0.38% compared to the last run.
- For 64MiB files with flags '-E', xxd improved by 0.55% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 4.46% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd slowed down by 1.44% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 0.78% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd slowed down by 0.76% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd improved by 0.76% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd improved by 1.82% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd improved by 0.78% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd slowed down by 1.16% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd slowed down by 0.31% compared to the last run.
- For 32MiB files with flags '', xxd slowed down by 5.04% compared to the last run.
- For 32MiB files with flags '-r', xxd slowed down by 4.26% compared to the last run.
- For 32MiB files with flags '', xxd slowed down by 0.72% compared to the last run.
- For 32MiB files with flags '-p', xxd slowed down by 2.57% compared to the last run.
- For 32MiB files with flags '-i', xxd improved by 0.37% compared to the last run.
- For 32MiB files with flags '-e', xxd improved by 2.49% compared to the last run.
- For 32MiB files with flags '-b', xxd improved by 1.26% compared to the last run.
- For 32MiB files with flags '-u', xxd slowed down by 4.65% compared to the last run.
- For 32MiB files with flags '-E', xxd improved by 2.00% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 2.01% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd improved by 11.05% compared to the last run.
- For 32MiB files with flags '', tinyxxd improved by 2.51% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd improved by 0.06% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd improved by 0.89% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd slowed down by 3.78% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd slowed down by 4.17% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd improved by 1.67% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd improved by 0.37% compared to the last run.
- For 16MiB files with flags '', xxd slowed down by 8.16% compared to the last run.
- For 16MiB files with flags '-r', xxd improved by 0.04% compared to the last run.
- For 16MiB files with flags '', xxd improved by 4.86% compared to the last run.
- For 16MiB files with flags '-p', xxd improved by 2.53% compared to the last run.
- For 16MiB files with flags '-i', xxd slowed down by 1.97% compared to the last run.
- For 16MiB files with flags '-e', xxd slowed down by 0.42% compared to the last run.
- For 16MiB files with flags '-b', xxd slowed down by 0.06% compared to the last run.
- For 16MiB files with flags '-u', xxd improved by 3.87% compared to the last run.
- For 16MiB files with flags '-E', xxd improved by 0.42% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 2.58% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd slowed down by 0.29% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 5.64% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd slowed down by 0.37% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd slowed down by 0.45% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd slowed down by 1.19% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd slowed down by 3.61% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd slowed down by 4.48% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd slowed down by 1.86% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 2.80% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd improved by 4.11% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 0.02% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd slowed down by 16.10% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd improved by 1.08% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd improved by 0.97% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd improved by 0.25% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd slowed down by 11.09% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd improved by 0.28% compared to the last run.
- For 8MiB files with flags '', xxd improved by 0.04% compared to the last run.
- For 8MiB files with flags '-r', xxd slowed down by 1.17% compared to the last run.
- For 8MiB files with flags '', xxd improved by 2.16% compared to the last run.
- For 8MiB files with flags '-p', xxd slowed down by 0.50% compared to the last run.
- For 8MiB files with flags '-i', xxd slowed down by 0.10% compared to the last run.
- For 8MiB files with flags '-e', xxd slowed down by 0.32% compared to the last run.
- For 8MiB files with flags '-b', xxd improved by 3.83% compared to the last run.
- For 8MiB files with flags '-u', xxd improved by 9.20% compared to the last run.
- For 8MiB files with flags '-E', xxd improved by 2.57% compared to the last run.

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


Report generated on: 2024-02-13T14:10:00.933450
