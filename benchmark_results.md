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
| xxd | 64 | 4.84 | -b |
| xxd | 64 | 4.52 | -r -b |
| xxd | 64 | 1.77 |  |
| xxd | 64 | 1.11 | -p |
| xxd | 64 | 5.00 | -i |
| xxd | 64 | 1.32 | -e |
| xxd | 64 | 2.76 | -b |
| xxd | 64 | 1.33 | -u |
| xxd | 64 | 1.48 | -E |
| xxd | 64 | 5.58 | -b -i |
| tinyxxd | 64 | 0.89 |  |
| tinyxxd | 64 | 0.87 | -r |
| tinyxxd | 64 | 4.32 | -b |
| tinyxxd | 64 | 1.55 | -r -b |
| tinyxxd | 64 | 1.13 |  |
| tinyxxd | 64 | 0.88 | -p |
| tinyxxd | 64 | 4.74 | -i |
| tinyxxd | 64 | 1.13 | -e |
| tinyxxd | 64 | 3.27 | -b |
| tinyxxd | 64 | 0.91 | -u |
| tinyxxd | 64 | 1.06 | -E |
| tinyxxd | 64 | 4.13 | -b -i |
| tinyxxd | 32 | 0.45 |  |
| tinyxxd | 32 | 0.42 | -r |
| tinyxxd | 32 | 2.06 | -b |
| tinyxxd | 32 | 0.80 | -r -b |
| tinyxxd | 32 | 0.54 |  |
| tinyxxd | 32 | 0.44 | -p |
| tinyxxd | 32 | 2.33 | -i |
| tinyxxd | 32 | 0.57 | -e |
| tinyxxd | 32 | 1.61 | -b |
| tinyxxd | 32 | 0.44 | -u |
| tinyxxd | 32 | 0.54 | -E |
| tinyxxd | 32 | 2.06 | -b -i |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.16 | -r |
| xxd | 32 | 3.16 | -b |
| xxd | 32 | 2.39 | -r -b |
| xxd | 32 | 0.74 |  |
| xxd | 32 | 0.55 | -p |
| xxd | 32 | 2.48 | -i |
| xxd | 32 | 0.71 | -e |
| xxd | 32 | 1.37 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.76 | -E |
| xxd | 32 | 2.82 | -b -i |
| tinyxxd | 16 | 0.23 |  |
| tinyxxd | 16 | 0.22 | -r |
| tinyxxd | 16 | 0.91 | -b |
| tinyxxd | 16 | 0.39 | -r -b |
| tinyxxd | 16 | 0.26 |  |
| tinyxxd | 16 | 0.22 | -p |
| tinyxxd | 16 | 1.19 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.81 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.03 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.88 | -b |
| xxd | 16 | 1.19 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.26 | -i |
| xxd | 16 | 0.33 | -e |
| xxd | 16 | 0.68 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.39 | -E |
| xxd | 16 | 1.45 | -b -i |
| tinyxxd | 8 | 0.12 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.44 | -b |
| tinyxxd | 8 | 0.20 | -r -b |
| tinyxxd | 8 | 0.14 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.66 | -i |
| tinyxxd | 8 | 0.15 | -e |
| tinyxxd | 8 | 0.41 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.14 | -E |
| tinyxxd | 8 | 0.51 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.57 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.63 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.72 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.10 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.29 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.36 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.05 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.04 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.15 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.18 | -b -i |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.06 | -b |
| tinyxxd | 1 | 0.03 | -r -b |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |
| tinyxxd | 1 | 0.07 | -b -i |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.08 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 52.64% faster with no flag.
- For sample size 64 MiB, tinyxxd was 156.51% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 190.57% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 26.26% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 5.49% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 16.41% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 45.70% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 39.77% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 35.08% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 42.56% faster with no flag.
- For sample size 32 MiB, tinyxxd was 175.70% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 23.33% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 196.92% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 23.76% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 6.21% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 24.87% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 51.89% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 40.87% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 37.12% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 45.22% faster with no flag.
- For sample size 16 MiB, tinyxxd was 164.51% faster with flags '-r'.
- For sample size 16 MiB, xxd was 10.23% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 202.79% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 23.31% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 6.52% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 18.36% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 48.73% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 43.96% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 40.24% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 41.50% faster with no flag.
- For sample size 8 MiB, tinyxxd was 168.75% faster with flags '-r'.
- For sample size 8 MiB, xxd was 17.30% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 186.98% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 25.03% faster with flags '-p'.
- For sample size 8 MiB, xxd was 6.05% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 15.22% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 49.99% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 40.53% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 39.78% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 39.77% faster with no flag.
- For sample size 4 MiB, tinyxxd was 163.35% faster with flags '-r'.
- For sample size 4 MiB, xxd was 23.34% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 182.89% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 22.34% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 6.70% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 17.61% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 47.53% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 39.00% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 38.84% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 38.58% faster with no flag.
- For sample size 2 MiB, tinyxxd was 148.74% faster with flags '-r'.
- For sample size 2 MiB, xxd was 16.15% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 184.97% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 20.16% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 5.99% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 17.55% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 50.70% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 35.60% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 39.37% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 35.66% faster with no flag.
- For sample size 1 MiB, tinyxxd was 140.47% faster with flags '-r'.
- For sample size 1 MiB, xxd was 15.40% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 176.19% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 20.61% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.84% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 16.28% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 40.21% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 34.36% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 36.80% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 33.59% faster than xxd.
- For sample 32 MiB, tinyxxd was 42.44% faster than xxd.
- For sample 16 MiB, tinyxxd was 33.90% faster than xxd.
- For sample 8 MiB, tinyxxd was 28.07% faster than xxd.
- For sample 4 MiB, tinyxxd was 29.02% faster than xxd.
- For sample 2 MiB, tinyxxd was 30.62% faster than xxd.
- For sample 1 MiB, tinyxxd was 29.70% faster than xxd.

### Performance by flag
- tinyxxd was 47.70% faster with no flag.
- tinyxxd was 162.94% faster with flag '-r'.
- tinyxxd was 193.03% faster with flag '-r -b'.
- tinyxxd was 24.89% faster with flag '-p'.
- tinyxxd was 18.75% faster with flag '-e'.
- tinyxxd was 47.95% faster with flag '-u'.
- tinyxxd was 40.48% faster with flag '-E'.
- tinyxxd was 36.74% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 28.83% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 13.43% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 71.39% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 8.06% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 5.13% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 7.45% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 4.81% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 11.83% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 2.13% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 8.03% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 7.77% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 2.62% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 18.80% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 7.54% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 22.93% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 5.91% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 2.77% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 8.24% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 3.42% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 2.80% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 6.99% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 2.15% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 2.86% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 0.32% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 17.48% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 7.24% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 17.18% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd improved by 15.44% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 0.43% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 10.07% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 6.87% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 2.79% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 8.61% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 5.14% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 0.56% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 1.27% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 16.21% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 7.31% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 123.47% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 0.44% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 6.63% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 8.98% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 5.75% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 3.34% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 3.32% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 10.36% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 5.98% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 4.40% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 15.91% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 7.77% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 4.37% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 2.20% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 1.76% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 8.61% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 4.39% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 3.96% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 6.44% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 0.22% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 0.86% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 1.23% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 19.30% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 7.47% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 20.20% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 0.03% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 6.49% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 9.51% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 5.36% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 9.11% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 6.45% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 6.55% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 4.32% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 1.64% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 16.10% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 5.84% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.81% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 2.45% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 0.51% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 8.01% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 7.29% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 1.16% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 7.58% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 1.48% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 3.03% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 1.83% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 18.73% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 11.62% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 6.34% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 3.14% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 8.66% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 7.72% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 4.90% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 7.01% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 2.82% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 6.10% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 7.83% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 1.68% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 16.40% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 1.86% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 0.98% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 3.14% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 3.12% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 7.78% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 14.05% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 3.65% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.97% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 2.30% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 2.53% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 1.95% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 17.96% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 7.13% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 2.65% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 3.13% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 8.18% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 8.95% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 5.59% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 6.01% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 3.88% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 7.16% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 6.62% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 3.41% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 14.46% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 0.94% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 1.64% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 4.12% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 4.41% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 9.24% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 4.01% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 4.37% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 7.79% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 4.14% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 3.07% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 1.85% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 16.29% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 8.52% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 3.17% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 1.32% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 6.76% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 10.45% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 3.10% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 7.30% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 3.38% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 4.61% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 8.76% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 2.58% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 12.92% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 0.98% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 5.05% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 7.77% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 6.39% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 10.30% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 5.80% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 5.40% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 9.15% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 4.25% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 5.90% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 1.27% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 16.65% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 8.70% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 0.20% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 5.44% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 7.42% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 7.74% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 5.18% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 8.10% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 4.25% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 9.88% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 8.35% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 2.65% compared to the last run.
---
Report generated on: 2026-03-23T11:27:00.129081
