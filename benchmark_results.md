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
| tinyxxd | 64 | 1.00 |  |
| tinyxxd | 64 | 1.30 | -r |
| tinyxxd | 64 | 4.64 | -b |
| tinyxxd | 64 | 2.03 | -r -b |
| tinyxxd | 64 | 1.24 |  |
| tinyxxd | 64 | 0.98 | -p |
| tinyxxd | 64 | 4.67 | -i |
| tinyxxd | 64 | 1.14 | -e |
| tinyxxd | 64 | 3.19 | -b |
| tinyxxd | 64 | 0.99 | -u |
| tinyxxd | 64 | 1.11 | -E |
| tinyxxd | 64 | 4.25 | -b -i |
| xxd | 64 | 1.32 |  |
| xxd | 64 | 2.33 | -r |
| xxd | 64 | 4.64 | -b |
| xxd | 64 | 4.71 | -r -b |
| xxd | 64 | 1.63 |  |
| xxd | 64 | 1.08 | -p |
| xxd | 64 | 4.82 | -i |
| xxd | 64 | 1.34 | -e |
| xxd | 64 | 2.67 | -b |
| xxd | 64 | 1.32 | -u |
| xxd | 64 | 1.46 | -E |
| xxd | 64 | 5.82 | -b -i |
| xxd | 32 | 0.69 |  |
| xxd | 32 | 1.12 | -r |
| xxd | 32 | 1.77 | -b |
| xxd | 32 | 2.39 | -r -b |
| xxd | 32 | 0.74 |  |
| xxd | 32 | 0.53 | -p |
| xxd | 32 | 2.43 | -i |
| xxd | 32 | 0.70 | -e |
| xxd | 32 | 1.33 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.76 | -E |
| xxd | 32 | 2.91 | -b -i |
| tinyxxd | 32 | 0.50 |  |
| tinyxxd | 32 | 0.68 | -r |
| tinyxxd | 32 | 2.32 | -b |
| tinyxxd | 32 | 1.05 | -r -b |
| tinyxxd | 32 | 0.58 |  |
| tinyxxd | 32 | 0.48 | -p |
| tinyxxd | 32 | 2.33 | -i |
| tinyxxd | 32 | 0.57 | -e |
| tinyxxd | 32 | 1.59 | -b |
| tinyxxd | 32 | 0.49 | -u |
| tinyxxd | 32 | 0.54 | -E |
| tinyxxd | 32 | 2.07 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.60 | -r |
| xxd | 16 | 0.80 | -b |
| xxd | 16 | 1.08 | -r -b |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.27 | -p |
| xxd | 16 | 1.22 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.49 | -b -i |
| tinyxxd | 16 | 0.25 |  |
| tinyxxd | 16 | 0.32 | -r |
| tinyxxd | 16 | 0.93 | -b |
| tinyxxd | 16 | 0.51 | -r -b |
| tinyxxd | 16 | 0.29 |  |
| tinyxxd | 16 | 0.24 | -p |
| tinyxxd | 16 | 1.20 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.79 | -b |
| tinyxxd | 16 | 0.25 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.02 | -b -i |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.16 | -r |
| tinyxxd | 8 | 0.43 | -b |
| tinyxxd | 8 | 0.26 | -r -b |
| tinyxxd | 8 | 0.15 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.40 | -b |
| tinyxxd | 8 | 0.13 | -u |
| tinyxxd | 8 | 0.13 | -E |
| tinyxxd | 8 | 0.51 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.58 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.38 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.74 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.08 | -r |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.13 | -r -b |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| xxd | 4 | 0.08 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.29 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.08 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.37 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.15 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.04 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.04 | -r |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.07 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.04 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
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
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.03 | -r -b |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.07 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |
| tinyxxd | 1 | 0.07 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 31.72% faster with no flag.
- For sample size 64 MiB, tinyxxd was 78.64% faster with flags '-r'.
- For sample size 64 MiB, xxd was 7.15% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 132.60% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 10.27% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 17.90% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 33.44% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 32.19% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 36.93% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 31.84% faster with no flag.
- For sample size 32 MiB, tinyxxd was 64.39% faster with flags '-r'.
- For sample size 32 MiB, xxd was 25.91% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 127.42% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 11.34% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 24.08% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 32.73% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 41.04% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 40.32% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 30.65% faster with no flag.
- For sample size 16 MiB, tinyxxd was 85.68% faster with flags '-r'.
- For sample size 16 MiB, xxd was 17.56% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 112.31% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 11.14% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 22.03% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 34.08% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 38.01% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 46.43% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 30.78% faster with no flag.
- For sample size 8 MiB, tinyxxd was 80.13% faster with flags '-r'.
- For sample size 8 MiB, xxd was 10.93% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 126.57% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 14.76% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 5.67% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 21.35% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 32.60% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 38.81% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 44.86% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 29.12% faster with no flag.
- For sample size 4 MiB, tinyxxd was 79.55% faster with flags '-r'.
- For sample size 4 MiB, xxd was 20.58% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 120.36% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 14.61% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 20.18% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 31.40% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 37.88% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 45.88% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 28.30% faster with no flag.
- For sample size 2 MiB, tinyxxd was 74.57% faster with flags '-r'.
- For sample size 2 MiB, xxd was 18.02% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 120.52% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 9.96% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 21.23% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 29.31% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 34.89% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 45.57% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 29.89% faster with no flag.
- For sample size 1 MiB, tinyxxd was 72.44% faster with flags '-r'.
- For sample size 1 MiB, xxd was 16.67% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 107.25% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 8.79% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 19.21% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 29.76% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 34.34% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 44.81% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 24.91% faster than xxd.
- For sample 32 MiB, tinyxxd was 21.47% faster than xxd.
- For sample 16 MiB, tinyxxd was 24.06% faster than xxd.
- For sample 8 MiB, tinyxxd was 27.47% faster than xxd.
- For sample 4 MiB, tinyxxd was 24.50% faster than xxd.
- For sample 2 MiB, tinyxxd was 24.54% faster than xxd.
- For sample 1 MiB, tinyxxd was 23.94% faster than xxd.

### Performance by flag
- tinyxxd was 31.41% faster with no flag.
- tinyxxd was 75.82% faster with flag '-r'.
- xxd was 13.48% faster with flag '-b'.
- tinyxxd was 127.55% faster with flag '-r -b'.
- tinyxxd was 11.05% faster with flag '-p'.
- tinyxxd was 20.32% faster with flag '-e'.
- tinyxxd was 33.12% faster with flag '-u'.
- tinyxxd was 35.75% faster with flag '-E'.
- tinyxxd was 39.90% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 22.78% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 0.11% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 45.66% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 0.29% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 4.76% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 2.81% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 0.12% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 2.55% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 0.18% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 0.07% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 4.20% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 2.08% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 26.14% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 0.71% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 70.49% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 5.86% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 8.90% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 1.47% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 0.24% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 0.30% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 1.96% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 1.04% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 1.06% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 0.65% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 11.17% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 5.76% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 32.16% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 0.36% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 3.56% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 3.46% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 0.88% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 3.79% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.89% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 0.18% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 0.52% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 3.56% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 14.18% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 5.41% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 44.69% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 0.84% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 0.61% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 0.18% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 0.47% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 3.20% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 0.74% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 0.88% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 0.46% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 1.76% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 13.05% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 4.86% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 20.24% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 12.23% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 1.88% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 3.90% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 2.02% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 0.18% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 0.16% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 2.04% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 0.55% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 0.22% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 13.08% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 0.19% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 14.24% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 0.13% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 0.89% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 0.29% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 4.24% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 0.01% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 2.58% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 1.17% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 1.78% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 0.17% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 14.93% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 1.32% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 7.95% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 0.61% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 2.57% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 0.53% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 0.36% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 0.81% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.42% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 0.49% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 1.52% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 0.03% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 12.22% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 0.07% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 10.59% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 1.78% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 1.04% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 3.36% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 0.15% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 0.06% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 13.04% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 1.92% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 0.65% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 0.44% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 15.12% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 0.48% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 8.68% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 19.32% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 1.32% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 0.13% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 1.41% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 0.04% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 1.05% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.55% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 0.74% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.08% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 11.82% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 0.46% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 7.78% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 0.96% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 0.16% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 0.04% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 1.56% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 0.82% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 1.73% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 1.02% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 2.55% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 0.14% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 10.58% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 4.10% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 6.61% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 1.16% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 1.13% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 3.50% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 2.85% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 0.03% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.50% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 8.03% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 1.58% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 0.04% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 13.34% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 0.45% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 6.09% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 0.65% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 0.48% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 0.32% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 0.46% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 1.00% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 1.13% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 2.45% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 0.22% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.66% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 9.48% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 0.76% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 7.66% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 4.90% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 0.01% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 4.03% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 0.28% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 2.26% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 0.48% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 1.30% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 2.69% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 0.87% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 12.08% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 1.09% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 5.66% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 0.35% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 2.02% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 0.44% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 0.08% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 0.52% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 0.89% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 2.43% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 0.95% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 0.51% compared to the last run.
---
Report generated on: 2026-02-02T08:13:38.644309
