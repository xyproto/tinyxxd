# Benchmark results


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

### Graph for flag '-b -i'
![Graph Flag b_i](img/graph_flag_b_i.svg)

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| xxd | 64 | 1.33 |  |
| xxd | 64 | 2.24 | -r |
| xxd | 64 | 3.84 | -b |
| xxd | 64 | 4.35 | -r -b |
| xxd | 64 | 1.52 |  |
| xxd | 64 | 1.03 | -p |
| xxd | 64 | 4.99 | -i |
| xxd | 64 | 1.36 | -e |
| xxd | 64 | 2.66 | -b |
| xxd | 64 | 1.31 | -u |
| xxd | 64 | 1.48 | -E |
| xxd | 64 | 5.83 | -b -i |
| tinyxxd | 64 | 0.61 |  |
| tinyxxd | 64 | 0.97 | -r |
| tinyxxd | 64 | 4.18 | -b |
| tinyxxd | 64 | 1.61 | -r -b |
| tinyxxd | 64 | 0.86 |  |
| tinyxxd | 64 | 0.65 | -p |
| tinyxxd | 64 | 4.69 | -i |
| tinyxxd | 64 | 1.10 | -e |
| tinyxxd | 64 | 2.80 | -b |
| tinyxxd | 64 | 0.58 | -u |
| tinyxxd | 64 | 0.63 | -E |
| tinyxxd | 64 | 3.49 | -b -i |
| xxd | 32 | 0.65 |  |
| xxd | 32 | 1.08 | -r |
| xxd | 32 | 1.66 | -b |
| xxd | 32 | 2.27 | -r -b |
| xxd | 32 | 0.74 |  |
| xxd | 32 | 0.52 | -p |
| xxd | 32 | 2.48 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.33 | -b |
| xxd | 32 | 0.65 | -u |
| xxd | 32 | 0.73 | -E |
| xxd | 32 | 2.97 | -b -i |
| tinyxxd | 32 | 0.30 |  |
| tinyxxd | 32 | 0.49 | -r |
| tinyxxd | 32 | 1.67 | -b |
| tinyxxd | 32 | 0.81 | -r -b |
| tinyxxd | 32 | 0.38 |  |
| tinyxxd | 32 | 0.31 | -p |
| tinyxxd | 32 | 2.34 | -i |
| tinyxxd | 32 | 0.55 | -e |
| tinyxxd | 32 | 1.37 | -b |
| tinyxxd | 32 | 0.30 | -u |
| tinyxxd | 32 | 0.29 | -E |
| tinyxxd | 32 | 1.79 | -b -i |
| tinyxxd | 16 | 0.15 |  |
| tinyxxd | 16 | 0.24 | -r |
| tinyxxd | 16 | 0.74 | -b |
| tinyxxd | 16 | 0.40 | -r -b |
| tinyxxd | 16 | 0.20 |  |
| tinyxxd | 16 | 0.16 | -p |
| tinyxxd | 16 | 1.17 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.69 | -b |
| tinyxxd | 16 | 0.15 | -u |
| tinyxxd | 16 | 0.15 | -E |
| tinyxxd | 16 | 0.88 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.56 | -r |
| xxd | 16 | 0.71 | -b |
| xxd | 16 | 1.06 | -r -b |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.30 | -p |
| xxd | 16 | 1.25 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.47 | -b -i |
| tinyxxd | 8 | 0.08 |  |
| tinyxxd | 8 | 0.12 | -r |
| tinyxxd | 8 | 0.37 | -b |
| tinyxxd | 8 | 0.20 | -r -b |
| tinyxxd | 8 | 0.10 |  |
| tinyxxd | 8 | 0.08 | -p |
| tinyxxd | 8 | 0.60 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.35 | -b |
| tinyxxd | 8 | 0.08 | -u |
| tinyxxd | 8 | 0.08 | -E |
| tinyxxd | 8 | 0.44 | -b -i |
| xxd | 8 | 0.18 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.55 | -r -b |
| xxd | 8 | 0.18 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.63 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.73 | -b -i |
| xxd | 4 | 0.08 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.27 | -r -b |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.32 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.08 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 4 | 0.04 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.18 | -b |
| tinyxxd | 4 | 0.10 | -r -b |
| tinyxxd | 4 | 0.05 |  |
| tinyxxd | 4 | 0.04 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.18 | -b |
| tinyxxd | 4 | 0.04 | -u |
| tinyxxd | 4 | 0.04 | -E |
| tinyxxd | 4 | 0.22 | -b -i |
| tinyxxd | 2 | 0.02 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.09 | -b |
| tinyxxd | 2 | 0.05 | -r -b |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.02 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.09 | -b |
| tinyxxd | 2 | 0.02 | -u |
| tinyxxd | 2 | 0.02 | -E |
| tinyxxd | 2 | 0.11 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.14 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
| tinyxxd | 1 | 0.01 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.03 | -r -b |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.01 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.01 | -u |
| tinyxxd | 1 | 0.01 | -E |
| tinyxxd | 1 | 0.06 | -b -i |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.07 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.04 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.10 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 94.73% faster with no flag.
- For sample size 64 MiB, tinyxxd was 130.12% faster with flags '-r'.
- For sample size 64 MiB, xxd was 7.46% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 169.61% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 57.67% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 6.36% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 23.06% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 126.48% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 135.75% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 66.96% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 105.08% faster with no flag.
- For sample size 32 MiB, tinyxxd was 121.31% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 179.13% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 66.05% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 6.05% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 20.77% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 117.54% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 149.95% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 65.80% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 96.70% faster with no flag.
- For sample size 16 MiB, tinyxxd was 128.60% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 164.22% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 86.75% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 6.74% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 21.80% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 122.36% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 145.70% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 66.12% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 109.67% faster with no flag.
- For sample size 8 MiB, tinyxxd was 133.47% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 168.86% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 69.50% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 37.42% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 113.38% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 128.48% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 64.71% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 97.97% faster with no flag.
- For sample size 4 MiB, tinyxxd was 123.37% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 157.36% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 76.01% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 8.76% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 21.14% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 108.08% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 138.27% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 67.18% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 90.93% faster with no flag.
- For sample size 2 MiB, tinyxxd was 128.62% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 167.62% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 52.98% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 6.12% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 19.72% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 98.75% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 119.61% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 64.91% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 75.43% faster with no flag.
- For sample size 1 MiB, tinyxxd was 114.87% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 139.61% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 49.44% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 7.75% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 18.40% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 85.90% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 103.35% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 66.14% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 43.98% faster than xxd.
- For sample 32 MiB, tinyxxd was 48.52% faster than xxd.
- For sample 16 MiB, tinyxxd was 48.13% faster than xxd.
- For sample 8 MiB, tinyxxd was 49.15% faster than xxd.
- For sample 4 MiB, tinyxxd was 48.23% faster than xxd.
- For sample 2 MiB, tinyxxd was 47.09% faster than xxd.
- For sample 1 MiB, tinyxxd was 43.32% faster than xxd.

### Performance by flag
- tinyxxd was 98.22% faster with no flag.
- tinyxxd was 127.53% faster with flag '-r'.
- tinyxxd was 170.61% faster with flag '-r -b'.
- tinyxxd was 64.48% faster with flag '-p'.
- tinyxxd was 6.31% faster with flag '-i'.
- tinyxxd was 23.08% faster with flag '-e'.
- tinyxxd was 121.22% faster with flag '-u'.
- tinyxxd was 139.31% faster with flag '-E'.
- tinyxxd was 66.38% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 9.45% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 4.26% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 43.52% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 0.66% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 3.12% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 1.16% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 1.29% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 1.62% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 0.70% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 1.11% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 1.62% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 3.05% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 26.35% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 12.53% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 48.88% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 5.69% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 3.91% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 4.89% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 0.32% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 4.02% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 0.24% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 1.62% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 3.69% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 1.72% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 13.56% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 5.04% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 20.04% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 2.92% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 1.46% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 3.93% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 0.45% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 1.64% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 3.95% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 0.69% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 0.53% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 1.51% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 20.09% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 14.10% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 21.22% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd improved by 4.64% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 0.98% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 0.04% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 0.87% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 1.49% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 0.80% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 1.70% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 3.83% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 0.71% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 18.18% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 13.70% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 6.63% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 7.28% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 5.59% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 1.61% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 2.01% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 1.37% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 0.64% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 0.22% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 3.33% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 0.05% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 12.95% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 1.39% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 4.65% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 5.09% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 2.67% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 8.47% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 0.88% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 0.37% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 1.83% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 0.40% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 0.12% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 1.72% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 21.04% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 11.36% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 7.82% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 6.90% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 3.41% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 0.30% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 3.23% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 0.62% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.27% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 2.08% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 1.62% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 0.66% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 3.56% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 3.72% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 4.95% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 2.51% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 2.84% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 0.45% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 1.45% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 13.36% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 0.93% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 0.04% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 0.59% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 2.86% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 11.48% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 2.74% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 6.95% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 2.94% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 0.71% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 3.88% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 1.53% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 1.12% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 0.69% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 1.95% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 0.94% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 3.90% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 20.29% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 4.67% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 5.40% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 6.93% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 4.42% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 1.29% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 7.86% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 22.94% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.66% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 2.14% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 4.17% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.31% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 19.28% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 8.36% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 2.89% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 8.19% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 4.51% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 1.32% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 1.41% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 2.67% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 2.59% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 2.78% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 1.07% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.89% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 9.58% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 0.97% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 5.90% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 0.78% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 0.07% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 5.96% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 0.29% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 1.59% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.29% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 0.98% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 0.54% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 1.43% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 15.28% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 7.54% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 4.46% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 6.97% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 0.02% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 0.69% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 0.25% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 1.26% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 2.33% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 5.86% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 0.34% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 1.15% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 11.53% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 2.00% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 4.62% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 6.80% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 2.22% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 0.52% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 0.56% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 1.59% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 1.86% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 2.93% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 1.12% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 1.00% compared to the last run.
---
Report generated on: 2026-04-01T16:52:12.439628
