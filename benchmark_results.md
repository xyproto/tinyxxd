# Benchmark results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| tinyxxd | 64 | 1.30 |  |
| tinyxxd | 64 | 2.15 | -r |
| tinyxxd | 64 | 1.25 |  |
| tinyxxd | 64 | 0.82 | -p |
| tinyxxd | 64 | 4.93 | -i |
| tinyxxd | 64 | 1.35 | -e |
| tinyxxd | 64 | 3.07 | -b |
| tinyxxd | 64 | 1.26 | -u |
| tinyxxd | 64 | 1.46 | -E |
| xxd | 64 | 1.58 |  |
| xxd | 64 | 2.38 | -r |
| xxd | 64 | 1.53 |  |
| xxd | 64 | 0.97 | -p |
| xxd | 64 | 4.92 | -i |
| xxd | 64 | 1.49 | -e |
| xxd | 64 | 3.58 | -b |
| xxd | 64 | 1.53 | -u |
| xxd | 64 | 1.73 | -E |
| xxd | 32 | 0.81 |  |
| xxd | 32 | 1.35 | -r |
| xxd | 32 | 0.77 |  |
| xxd | 32 | 0.48 | -p |
| xxd | 32 | 2.43 | -i |
| xxd | 32 | 0.75 | -e |
| xxd | 32 | 1.78 | -b |
| xxd | 32 | 0.80 | -u |
| xxd | 32 | 0.83 | -E |
| tinyxxd | 32 | 0.65 |  |
| tinyxxd | 32 | 1.12 | -r |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 0.42 | -p |
| tinyxxd | 32 | 2.43 | -i |
| tinyxxd | 32 | 0.65 | -e |
| tinyxxd | 32 | 1.51 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.75 | -E |
| xxd | 16 | 0.40 |  |
| xxd | 16 | 0.56 | -r |
| xxd | 16 | 0.39 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.24 | -i |
| xxd | 16 | 0.38 | -e |
| xxd | 16 | 0.92 | -b |
| xxd | 16 | 0.39 | -u |
| xxd | 16 | 0.41 | -E |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.55 | -r |
| tinyxxd | 16 | 0.34 |  |
| tinyxxd | 16 | 0.28 | -p |
| tinyxxd | 16 | 1.23 | -i |
| tinyxxd | 16 | 0.33 | -e |
| tinyxxd | 16 | 0.76 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.36 | -E |
| tinyxxd | 8 | 0.19 |  |
| tinyxxd | 8 | 0.27 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.60 | -i |
| tinyxxd | 8 | 0.17 | -e |
| tinyxxd | 8 | 0.40 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.33 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.46 | -b |
| xxd | 8 | 0.20 | -u |
| xxd | 8 | 0.21 | -E |

## Performance Summaries
- With flags '' and size 64MiB, tinyxxd was 22.35% faster.
- With flags '-r' and size 64MiB, tinyxxd was 10.58% faster.
- With flags '-p' and size 64MiB, tinyxxd was 17.41% faster.
- With flags '-e' and size 64MiB, tinyxxd was 10.63% faster.
- With flags '-b' and size 64MiB, tinyxxd was 16.36% faster.
- With flags '-u' and size 64MiB, tinyxxd was 21.65% faster.
- With flags '-E' and size 64MiB, tinyxxd was 18.91% faster.
- With flags '' and size 32MiB, tinyxxd was 22.69% faster.
- With flags '-r' and size 32MiB, tinyxxd was 21.15% faster.
- With flags '-p' and size 32MiB, tinyxxd was 13.74% faster.
- With flags '-e' and size 32MiB, tinyxxd was 16.64% faster.
- With flags '-b' and size 32MiB, tinyxxd was 17.92% faster.
- With flags '-u' and size 32MiB, tinyxxd was 27.39% faster.
- With flags '-E' and size 32MiB, tinyxxd was 10.19% faster.
- With flags '' and size 16MiB, tinyxxd was 18.37% faster.
- With flags '-p' and size 16MiB, xxd was 14.44% faster.
- With flags '-e' and size 16MiB, tinyxxd was 15.48% faster.
- With flags '-b' and size 16MiB, tinyxxd was 21.83% faster.
- With flags '-u' and size 16MiB, tinyxxd was 21.33% faster.
- With flags '-E' and size 16MiB, tinyxxd was 14.12% faster.
- With flags '' and size 8MiB, tinyxxd was 13.70% faster.
- With flags '-r' and size 8MiB, tinyxxd was 21.86% faster.
- With flags '-p' and size 8MiB, tinyxxd was 16.72% faster.
- With flags '-e' and size 8MiB, tinyxxd was 15.97% faster.
- With flags '-b' and size 8MiB, tinyxxd was 15.66% faster.
- With flags '-u' and size 8MiB, tinyxxd was 21.11% faster.
- With flags '-E' and size 8MiB, tinyxxd was 14.91% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 12.07% faster than xxd.
- For 32MiB files, tinyxxd was 13.75% faster than xxd.
- For 16MiB files, tinyxxd was 9.80% faster than xxd.
- For 8MiB files, tinyxxd was 12.72% faster than xxd.

### Performance by flag
- With flag '', tinyxxd was 21.28% faster.
- With flag '-r', tinyxxd was 13.09% faster.
- With flag '-p', tinyxxd was 11.32% faster.
- With flag '-e', tinyxxd was 13.18% faster.
- With flag '-b', tinyxxd was 17.44% faster.
- With flag '-u', tinyxxd was 23.09% faster.
- With flag '-E', tinyxxd was 15.63% faster.

### Performance compared to last run
- For 64MiB files with flags '', tinyxxd slowed down by 0.04% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd improved by 2.65% compared to the last run.
- For 64MiB files with flags '', tinyxxd improved by 3.69% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd slowed down by 0.02% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd slowed down by 0.15% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd slowed down by 3.04% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd improved by 0.15% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd slowed down by 0.45% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd slowed down by 3.78% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 3.20% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd slowed down by 1.50% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 2.69% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd slowed down by 2.08% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd slowed down by 0.58% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd slowed down by 0.39% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd improved by 2.54% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd improved by 7.36% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd slowed down by 6.78% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 2.16% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd slowed down by 0.14% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 6.55% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd slowed down by 32.65% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd slowed down by 1.41% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd slowed down by 0.96% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd improved by 1.03% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd improved by 5.43% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd slowed down by 1.54% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 16.15% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd improved by 0.31% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 1.13% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd slowed down by 0.48% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd improved by 0.52% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd slowed down by 1.53% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd slowed down by 3.22% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd slowed down by 3.50% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd slowed down by 3.96% compared to the last run.

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
![Graph Flag e_upper](img/graph_flag_e_upper.svg)


Report generated on: 2024-02-13T00:16:19.997143
