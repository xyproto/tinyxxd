# Benchmark results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| xxd | 64 | 1.63 |  |
| xxd | 64 | 2.23 | -r |
| xxd | 64 | 1.49 |  |
| xxd | 64 | 0.95 | -p |
| xxd | 64 | 4.90 | -i |
| xxd | 64 | 1.54 | -e |
| xxd | 64 | 3.53 | -b |
| xxd | 64 | 1.56 | -u |
| xxd | 64 | 1.69 | -E |
| tinyxxd | 64 | 1.29 |  |
| tinyxxd | 64 | 2.20 | -r |
| tinyxxd | 64 | 1.25 |  |
| tinyxxd | 64 | 0.84 | -p |
| tinyxxd | 64 | 4.98 | -i |
| tinyxxd | 64 | 1.30 | -e |
| tinyxxd | 64 | 3.08 | -b |
| tinyxxd | 64 | 1.27 | -u |
| tinyxxd | 64 | 1.42 | -E |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 1.07 | -r |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 0.42 | -p |
| tinyxxd | 32 | 2.44 | -i |
| tinyxxd | 32 | 0.65 | -e |
| tinyxxd | 32 | 1.51 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.71 | -E |
| xxd | 32 | 0.81 |  |
| xxd | 32 | 1.11 | -r |
| xxd | 32 | 0.75 |  |
| xxd | 32 | 0.48 | -p |
| xxd | 32 | 2.42 | -i |
| xxd | 32 | 0.75 | -e |
| xxd | 32 | 1.76 | -b |
| xxd | 32 | 0.77 | -u |
| xxd | 32 | 0.83 | -E |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.57 | -r |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.22 | -i |
| xxd | 16 | 0.38 | -e |
| xxd | 16 | 0.88 | -b |
| xxd | 16 | 0.38 | -u |
| xxd | 16 | 0.42 | -E |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.55 | -r |
| tinyxxd | 16 | 0.31 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.19 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.80 | -b |
| tinyxxd | 16 | 0.33 | -u |
| tinyxxd | 16 | 0.36 | -E |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.47 | -b |
| xxd | 8 | 0.19 | -u |
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
- With flags '' and size 64MiB, tinyxxd was 23.02% faster.
- With flags '-p' and size 64MiB, tinyxxd was 14.16% faster.
- With flags '-e' and size 64MiB, tinyxxd was 18.26% faster.
- With flags '-b' and size 64MiB, tinyxxd was 14.86% faster.
- With flags '-u' and size 64MiB, tinyxxd was 22.87% faster.
- With flags '-E' and size 64MiB, tinyxxd was 18.37% faster.
- With flags '' and size 32MiB, tinyxxd was 22.01% faster.
- With flags '-p' and size 32MiB, tinyxxd was 13.23% faster.
- With flags '-e' and size 32MiB, tinyxxd was 14.79% faster.
- With flags '-b' and size 32MiB, tinyxxd was 16.47% faster.
- With flags '-u' and size 32MiB, tinyxxd was 21.75% faster.
- With flags '-E' and size 32MiB, tinyxxd was 17.57% faster.
- With flags '' and size 16MiB, tinyxxd was 19.88% faster.
- With flags '-p' and size 16MiB, tinyxxd was 15.28% faster.
- With flags '-e' and size 16MiB, tinyxxd was 15.92% faster.
- With flags '-b' and size 16MiB, tinyxxd was 10.73% faster.
- With flags '-u' and size 16MiB, tinyxxd was 14.42% faster.
- With flags '-E' and size 16MiB, tinyxxd was 17.09% faster.
- With flags '' and size 8MiB, tinyxxd was 18.17% faster.
- With flags '-p' and size 8MiB, tinyxxd was 14.91% faster.
- With flags '-e' and size 8MiB, tinyxxd was 14.05% faster.
- With flags '-b' and size 8MiB, tinyxxd was 22.64% faster.
- With flags '-u' and size 8MiB, tinyxxd was 18.13% faster.
- With flags '-E' and size 8MiB, tinyxxd was 15.99% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 10.78% faster than xxd.
- For 32MiB files, tinyxxd was 11.01% faster than xxd.
- For 16MiB files, tinyxxd was 10.36% faster than xxd.
- For 8MiB files, tinyxxd was 10.11% faster than xxd.

### Performance by flag
- With flag '', tinyxxd was 22.00% faster.
- With flag '-p', tinyxxd was 14.11% faster.
- With flag '-e', tinyxxd was 16.74% faster.
- With flag '-b', tinyxxd was 15.23% faster.
- With flag '-u', tinyxxd was 21.09% faster.
- With flag '-E', tinyxxd was 17.83% faster.

### Performance compared to last run
- For 64MiB files with flags '', xxd slowed down by 6.51% compared to the last run.
- For 64MiB files with flags '-r', xxd slowed down by 2.40% compared to the last run.
- For 64MiB files with flags '', xxd improved by 2.75% compared to the last run.
- For 64MiB files with flags '-p', xxd improved by 4.08% compared to the last run.
- For 64MiB files with flags '-i', xxd improved by 2.90% compared to the last run.
- For 64MiB files with flags '-e', xxd slowed down by 3.32% compared to the last run.
- For 64MiB files with flags '-b', xxd improved by 0.01% compared to the last run.
- For 64MiB files with flags '-u', xxd improved by 2.88% compared to the last run.
- For 64MiB files with flags '-E', xxd slowed down by 0.45% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 1.13% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd slowed down by 1.28% compared to the last run.
- For 64MiB files with flags '', tinyxxd improved by 2.39% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd slowed down by 1.53% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd slowed down by 2.21% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd slowed down by 1.34% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd improved by 0.83% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd slowed down by 0.22% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd improved by 2.14% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 2.74% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd improved by 0.25% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 1.96% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd slowed down by 2.04% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd slowed down by 0.85% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd slowed down by 0.71% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd slowed down by 0.03% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd slowed down by 0.32% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd slowed down by 0.06% compared to the last run.
- For 32MiB files with flags '', xxd slowed down by 5.18% compared to the last run.
- For 32MiB files with flags '-r', xxd improved by 0.81% compared to the last run.
- For 32MiB files with flags '', xxd improved by 2.02% compared to the last run.
- For 32MiB files with flags '-p', xxd improved by 0.03% compared to the last run.
- For 32MiB files with flags '-i', xxd improved by 1.02% compared to the last run.
- For 32MiB files with flags '-e', xxd slowed down by 0.23% compared to the last run.
- For 32MiB files with flags '-b', xxd slowed down by 0.14% compared to the last run.
- For 32MiB files with flags '-u', xxd improved by 6.20% compared to the last run.
- For 32MiB files with flags '-E', xxd improved by 1.10% compared to the last run.
- For 16MiB files with flags '', xxd improved by 7.76% compared to the last run.
- For 16MiB files with flags '-r', xxd slowed down by 3.29% compared to the last run.
- For 16MiB files with flags '', xxd improved by 8.70% compared to the last run.
- For 16MiB files with flags '-p', xxd slowed down by 0.04% compared to the last run.
- For 16MiB files with flags '-i', xxd improved by 3.57% compared to the last run.
- For 16MiB files with flags '-e', xxd slowed down by 0.08% compared to the last run.
- For 16MiB files with flags '-b', xxd slowed down by 0.22% compared to the last run.
- For 16MiB files with flags '-u', xxd slowed down by 0.48% compared to the last run.
- For 16MiB files with flags '-E', xxd improved by 0.00% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 1.99% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd improved by 1.04% compared to the last run.
- For 16MiB files with flags '', tinyxxd improved by 1.05% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd improved by 0.93% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd improved by 1.48% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd improved by 0.54% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd slowed down by 5.11% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd slowed down by 4.40% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd improved by 2.43% compared to the last run.
- For 8MiB files with flags '', xxd slowed down by 2.96% compared to the last run.
- For 8MiB files with flags '-r', xxd slowed down by 0.10% compared to the last run.
- For 8MiB files with flags '', xxd slowed down by 0.54% compared to the last run.
- For 8MiB files with flags '-p', xxd slowed down by 0.18% compared to the last run.
- For 8MiB files with flags '-i', xxd slowed down by 0.51% compared to the last run.
- For 8MiB files with flags '-e', xxd improved by 0.23% compared to the last run.
- For 8MiB files with flags '-b', xxd slowed down by 1.21% compared to the last run.
- For 8MiB files with flags '-u', xxd slowed down by 0.03% compared to the last run.
- For 8MiB files with flags '-E', xxd improved by 0.16% compared to the last run.
- For 8MiB files with flags '', tinyxxd improved by 0.27% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd slowed down by 0.17% compared to the last run.
- For 8MiB files with flags '', tinyxxd improved by 3.78% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd slowed down by 0.10% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd slowed down by 3.37% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd slowed down by 0.31% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd improved by 2.19% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd slowed down by 1.01% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd slowed down by 0.22% compared to the last run.

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


Report generated on: 2024-02-13T08:04:19.208317
