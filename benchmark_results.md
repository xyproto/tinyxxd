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
| tinyxxd | 64 | 0.82 |  |
| tinyxxd | 64 | 0.76 | -r |
| tinyxxd | 64 | 4.93 | -b |
| tinyxxd | 64 | 1.76 | -r -b |
| tinyxxd | 64 | 1.04 |  |
| tinyxxd | 64 | 0.95 | -p |
| tinyxxd | 64 | 4.95 | -i |
| tinyxxd | 64 | 1.20 | -e |
| tinyxxd | 64 | 3.45 | -b |
| tinyxxd | 64 | 0.86 | -u |
| tinyxxd | 64 | 0.83 | -E |
| tinyxxd | 64 | 3.58 | -b -i |
| xxd | 64 | 1.45 |  |
| xxd | 64 | 2.55 | -r |
| xxd | 64 | 4.35 | -b |
| xxd | 64 | 4.57 | -r -b |
| xxd | 64 | 1.67 |  |
| xxd | 64 | 1.17 | -p |
| xxd | 64 | 5.26 | -i |
| xxd | 64 | 1.49 | -e |
| xxd | 64 | 2.85 | -b |
| xxd | 64 | 1.43 | -u |
| xxd | 64 | 1.63 | -E |
| xxd | 64 | 5.91 | -b -i |
| tinyxxd | 32 | 0.42 |  |
| tinyxxd | 32 | 0.39 | -r |
| tinyxxd | 32 | 2.15 | -b |
| tinyxxd | 32 | 0.88 | -r -b |
| tinyxxd | 32 | 0.51 |  |
| tinyxxd | 32 | 0.47 | -p |
| tinyxxd | 32 | 2.53 | -i |
| tinyxxd | 32 | 0.58 | -e |
| tinyxxd | 32 | 1.75 | -b |
| tinyxxd | 32 | 0.41 | -u |
| tinyxxd | 32 | 0.42 | -E |
| tinyxxd | 32 | 1.78 | -b -i |
| xxd | 32 | 0.72 |  |
| xxd | 32 | 1.27 | -r |
| xxd | 32 | 3.26 | -b |
| xxd | 32 | 2.52 | -r -b |
| xxd | 32 | 0.84 |  |
| xxd | 32 | 0.60 | -p |
| xxd | 32 | 2.64 | -i |
| xxd | 32 | 0.72 | -e |
| xxd | 32 | 1.45 | -b |
| xxd | 32 | 0.70 | -u |
| xxd | 32 | 0.82 | -E |
| xxd | 32 | 2.94 | -b -i |
| tinyxxd | 16 | 0.21 |  |
| tinyxxd | 16 | 0.20 | -r |
| tinyxxd | 16 | 0.98 | -b |
| tinyxxd | 16 | 0.45 | -r -b |
| tinyxxd | 16 | 0.26 |  |
| tinyxxd | 16 | 0.34 | -p |
| tinyxxd | 16 | 1.26 | -i |
| tinyxxd | 16 | 0.29 | -e |
| tinyxxd | 16 | 0.87 | -b |
| tinyxxd | 16 | 0.21 | -u |
| tinyxxd | 16 | 0.23 | -E |
| tinyxxd | 16 | 0.90 | -b -i |
| xxd | 16 | 0.36 |  |
| xxd | 16 | 0.63 | -r |
| xxd | 16 | 0.85 | -b |
| xxd | 16 | 1.19 | -r -b |
| xxd | 16 | 0.40 |  |
| xxd | 16 | 0.30 | -p |
| xxd | 16 | 1.31 | -i |
| xxd | 16 | 0.37 | -e |
| xxd | 16 | 0.71 | -b |
| xxd | 16 | 0.35 | -u |
| xxd | 16 | 0.40 | -E |
| xxd | 16 | 1.52 | -b -i |
| xxd | 8 | 0.18 |  |
| xxd | 8 | 0.32 | -r |
| xxd | 8 | 0.39 | -b |
| xxd | 8 | 0.55 | -r -b |
| xxd | 8 | 0.21 |  |
| xxd | 8 | 0.15 | -p |
| xxd | 8 | 0.66 | -i |
| xxd | 8 | 0.18 | -e |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.18 | -u |
| xxd | 8 | 0.21 | -E |
| xxd | 8 | 0.73 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.10 | -r |
| tinyxxd | 8 | 0.46 | -b |
| tinyxxd | 8 | 0.23 | -r -b |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.62 | -i |
| tinyxxd | 8 | 0.15 | -e |
| tinyxxd | 8 | 0.43 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.11 | -E |
| tinyxxd | 8 | 0.45 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.16 | -r |
| xxd | 4 | 0.20 | -b |
| xxd | 4 | 0.30 | -r -b |
| xxd | 4 | 0.11 |  |
| xxd | 4 | 0.08 | -p |
| xxd | 4 | 0.33 | -i |
| xxd | 4 | 0.12 | -e |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.05 | -r |
| tinyxxd | 4 | 0.23 | -b |
| tinyxxd | 4 | 0.12 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.32 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.06 | -E |
| tinyxxd | 4 | 0.23 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.12 | -b |
| tinyxxd | 2 | 0.06 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.16 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.03 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.14 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.17 | -i |
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
| tinyxxd | 1 | 0.06 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |
| tinyxxd | 1 | 0.06 | -b -i |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.08 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.09 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.10 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 67.82% faster with no flag.
- For sample size 64 MiB, tinyxxd was 233.93% faster with flags '-r'.
- For sample size 64 MiB, xxd was 16.41% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 160.32% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 22.96% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 6.35% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 23.89% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 66.52% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 95.82% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 64.95% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 67.92% faster with no flag.
- For sample size 32 MiB, tinyxxd was 229.37% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 20.75% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 185.33% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 28.97% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 24.98% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 70.95% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 97.19% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 64.98% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 60.89% faster with no flag.
- For sample size 16 MiB, tinyxxd was 214.70% faster with flags '-r'.
- For sample size 16 MiB, xxd was 18.62% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 163.93% faster with flags '-r -b'.
- For sample size 16 MiB, xxd was 11.23% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 26.01% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 68.64% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 78.73% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 68.80% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 63.70% faster with no flag.
- For sample size 8 MiB, tinyxxd was 209.85% faster with flags '-r'.
- For sample size 8 MiB, xxd was 20.41% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 141.62% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 28.17% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 5.40% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 21.87% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 70.07% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 92.29% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 63.63% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 61.88% faster with no flag.
- For sample size 4 MiB, tinyxxd was 199.80% faster with flags '-r'.
- For sample size 4 MiB, xxd was 17.90% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 154.43% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 27.05% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 60.18% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 66.00% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 85.83% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 63.88% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 53.10% faster with no flag.
- For sample size 2 MiB, tinyxxd was 191.39% faster with flags '-r'.
- For sample size 2 MiB, xxd was 22.07% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 134.04% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 23.40% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 6.21% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 22.01% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 19.45% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 77.60% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 39.22% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 47.68% faster with no flag.
- For sample size 1 MiB, tinyxxd was 168.85% faster with flags '-r'.
- For sample size 1 MiB, xxd was 21.01% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 140.04% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 22.29% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 18.97% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 51.60% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 66.45% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 58.96% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 36.60% faster than xxd.
- For sample 32 MiB, tinyxxd was 50.49% faster than xxd.
- For sample 16 MiB, tinyxxd was 35.42% faster than xxd.
- For sample 8 MiB, tinyxxd was 36.31% faster than xxd.
- For sample 4 MiB, tinyxxd was 39.05% faster than xxd.
- For sample 2 MiB, tinyxxd was 29.05% faster than xxd.
- For sample 1 MiB, tinyxxd was 32.45% faster than xxd.

### Performance by flag
- tinyxxd was 66.04% faster with no flag.
- tinyxxd was 226.08% faster with flag '-r'.
- xxd was 6.36% faster with flag '-b'.
- tinyxxd was 165.00% faster with flag '-r -b'.
- tinyxxd was 19.21% faster with flag '-p'.
- tinyxxd was 5.36% faster with flag '-i'.
- tinyxxd was 25.38% faster with flag '-e'.
- tinyxxd was 66.79% faster with flag '-u'.
- tinyxxd was 92.67% faster with flag '-E'.
- tinyxxd was 64.81% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 29.55% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 4.75% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 49.84% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 5.61% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 11.27% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 7.14% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 3.34% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 6.17% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 4.95% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 2.59% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 15.43% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 2.50% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 12.47% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 16.19% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 59.52% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 0.48% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 0.93% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 8.14% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 3.75% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 10.87% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 4.40% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 4.05% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 9.42% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 3.43% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 17.65% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 15.54% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 31.24% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 7.30% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 0.16% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 5.02% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 9.04% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 1.99% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 6.63% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 4.03% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 14.41% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 0.16% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 6.67% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 14.76% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 137.49% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 5.59% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 8.18% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 6.75% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 2.92% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 7.80% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 5.82% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 5.97% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 10.94% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 3.05% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 18.98% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 2.07% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 18.81% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 7.41% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 0.80% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 50.53% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 7.91% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 2.60% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 4.58% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 4.85% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 9.91% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 4.95% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 7.32% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 8.73% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 24.35% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 4.29% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 3.97% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 7.82% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 4.23% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 6.15% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 3.07% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 5.46% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 7.65% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 4.48% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 4.16% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 7.59% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 10.54% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 5.19% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 9.21% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 7.90% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 3.98% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 4.53% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 2.82% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 7.51% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 9.33% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 1.54% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 20.43% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 0.36% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 11.88% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 7.81% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 3.39% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 5.00% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 5.82% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 3.41% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 5.41% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 5.66% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 16.41% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 4.32% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 5.23% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 7.70% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 11.54% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 3.81% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 6.54% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 7.04% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 6.03% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 37.37% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 7.36% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 6.42% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 5.82% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 2.73% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 19.54% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 3.40% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 11.02% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 6.32% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 2.16% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 4.64% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 7.62% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 3.32% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 5.15% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.78% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 15.34% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 4.36% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 15.12% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 2.20% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 12.05% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 8.33% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 0.42% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 5.44% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 5.49% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 2.80% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 7.13% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 31.70% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 12.44% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 17.77% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 4.26% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 8.76% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 10.51% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 5.83% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 6.76% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 7.41% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 5.55% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 6.25% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 3.54% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 5.79% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 7.00% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 1.06% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 11.74% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 0.99% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 10.85% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 6.89% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 1.65% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 5.18% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 6.20% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 3.49% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 6.70% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 1.82% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 9.35% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 4.93% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 5.31% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 8.13% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 9.72% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 1.03% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 5.89% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 6.68% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 3.59% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 6.00% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 2.47% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 6.52% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 6.18% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 2.33% compared to the last run.
---
Report generated on: 2026-03-25T10:00:16.490660
