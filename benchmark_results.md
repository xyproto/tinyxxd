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
| xxd | 64 | 1.42 |  |
| xxd | 64 | 2.52 | -r |
| xxd | 64 | 4.49 | -b |
| xxd | 64 | 4.65 | -r -b |
| xxd | 64 | 1.73 |  |
| xxd | 64 | 1.19 | -p |
| xxd | 64 | 5.37 | -i |
| xxd | 64 | 1.44 | -e |
| xxd | 64 | 2.89 | -b |
| xxd | 64 | 1.42 | -u |
| xxd | 64 | 1.65 | -E |
| xxd | 64 | 5.89 | -b -i |
| tinyxxd | 64 | 0.88 |  |
| tinyxxd | 64 | 1.03 | -r |
| tinyxxd | 64 | 5.57 | -b |
| tinyxxd | 64 | 1.53 | -r -b |
| tinyxxd | 64 | 1.34 |  |
| tinyxxd | 64 | 0.93 | -p |
| tinyxxd | 64 | 4.99 | -i |
| tinyxxd | 64 | 1.17 | -e |
| tinyxxd | 64 | 3.60 | -b |
| tinyxxd | 64 | 0.88 | -u |
| tinyxxd | 64 | 1.10 | -E |
| tinyxxd | 64 | 4.23 | -b -i |
| xxd | 32 | 0.71 |  |
| xxd | 32 | 1.25 | -r |
| xxd | 32 | 1.79 | -b |
| xxd | 32 | 2.34 | -r -b |
| xxd | 32 | 0.81 |  |
| xxd | 32 | 0.60 | -p |
| xxd | 32 | 2.61 | -i |
| xxd | 32 | 0.71 | -e |
| xxd | 32 | 1.40 | -b |
| xxd | 32 | 0.73 | -u |
| xxd | 32 | 0.81 | -E |
| xxd | 32 | 2.92 | -b -i |
| tinyxxd | 32 | 0.46 |  |
| tinyxxd | 32 | 0.39 | -r |
| tinyxxd | 32 | 2.30 | -b |
| tinyxxd | 32 | 0.78 | -r -b |
| tinyxxd | 32 | 0.52 |  |
| tinyxxd | 32 | 0.47 | -p |
| tinyxxd | 32 | 2.41 | -i |
| tinyxxd | 32 | 0.65 | -e |
| tinyxxd | 32 | 1.81 | -b |
| tinyxxd | 32 | 0.44 | -u |
| tinyxxd | 32 | 0.54 | -E |
| tinyxxd | 32 | 2.08 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.19 | -r |
| tinyxxd | 16 | 0.98 | -b |
| tinyxxd | 16 | 0.40 | -r -b |
| tinyxxd | 16 | 0.27 |  |
| tinyxxd | 16 | 0.24 | -p |
| tinyxxd | 16 | 1.23 | -i |
| tinyxxd | 16 | 0.29 | -e |
| tinyxxd | 16 | 0.93 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.03 | -b -i |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.63 | -r |
| xxd | 16 | 0.86 | -b |
| xxd | 16 | 1.18 | -r -b |
| xxd | 16 | 0.40 |  |
| xxd | 16 | 0.31 | -p |
| xxd | 16 | 1.31 | -i |
| xxd | 16 | 0.36 | -e |
| xxd | 16 | 0.71 | -b |
| xxd | 16 | 0.36 | -u |
| xxd | 16 | 0.41 | -E |
| xxd | 16 | 1.49 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.10 | -r |
| tinyxxd | 8 | 0.49 | -b |
| tinyxxd | 8 | 0.20 | -r -b |
| tinyxxd | 8 | 0.14 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.62 | -i |
| tinyxxd | 8 | 0.15 | -e |
| tinyxxd | 8 | 0.45 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.14 | -E |
| tinyxxd | 8 | 0.51 | -b -i |
| xxd | 8 | 0.18 |  |
| xxd | 8 | 0.31 | -r |
| xxd | 8 | 0.38 | -b |
| xxd | 8 | 0.60 | -r -b |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.15 | -p |
| xxd | 8 | 0.65 | -i |
| xxd | 8 | 0.18 | -e |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.18 | -u |
| xxd | 8 | 0.20 | -E |
| xxd | 8 | 0.74 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.05 | -r |
| tinyxxd | 4 | 0.25 | -b |
| tinyxxd | 4 | 0.10 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.31 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.23 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.16 | -r |
| xxd | 4 | 0.21 | -b |
| xxd | 4 | 0.30 | -r -b |
| xxd | 4 | 0.11 |  |
| xxd | 4 | 0.08 | -p |
| xxd | 4 | 0.33 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.37 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.15 | -r -b |
| xxd | 2 | 0.06 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.17 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.12 | -b |
| tinyxxd | 2 | 0.05 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.16 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.12 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.04 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
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
| tinyxxd | 1 | 0.07 | -b -i |
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
- For sample size 64 MiB, tinyxxd was 42.24% faster with no flag.
- For sample size 64 MiB, tinyxxd was 144.80% faster with flags '-r'.
- For sample size 64 MiB, xxd was 24.22% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 204.01% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 28.14% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 7.59% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 22.93% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 62.21% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 50.65% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 39.26% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 54.40% faster with no flag.
- For sample size 32 MiB, tinyxxd was 220.75% faster with flags '-r'.
- For sample size 32 MiB, xxd was 28.82% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 200.53% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 28.95% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 8.56% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 10.52% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 66.90% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 49.14% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 40.40% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 57.78% faster with no flag.
- For sample size 16 MiB, tinyxxd was 223.94% faster with flags '-r'.
- For sample size 16 MiB, xxd was 21.43% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 196.15% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 29.44% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 6.31% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 23.39% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 63.05% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 48.55% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 45.04% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 53.93% faster with no flag.
- For sample size 8 MiB, tinyxxd was 213.02% faster with flags '-r'.
- For sample size 8 MiB, xxd was 28.15% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 194.68% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 27.96% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 5.82% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 22.40% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 62.14% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 46.62% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 45.37% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 53.83% faster with no flag.
- For sample size 4 MiB, tinyxxd was 209.78% faster with flags '-r'.
- For sample size 4 MiB, xxd was 23.38% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 199.64% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 27.08% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 6.09% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 23.77% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 58.47% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 44.29% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 42.28% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 53.73% faster with no flag.
- For sample size 2 MiB, tinyxxd was 186.15% faster with flags '-r'.
- For sample size 2 MiB, xxd was 23.62% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 185.56% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 25.02% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 5.37% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 20.49% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 54.56% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 43.18% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 41.65% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 42.90% faster with no flag.
- For sample size 1 MiB, tinyxxd was 170.47% faster with flags '-r'.
- For sample size 1 MiB, xxd was 24.87% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 168.69% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 21.86% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 16.49% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 49.47% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 39.45% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 39.07% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 27.25% faster than xxd.
- For sample 32 MiB, tinyxxd was 29.96% faster than xxd.
- For sample 16 MiB, tinyxxd was 33.73% faster than xxd.
- For sample 8 MiB, tinyxxd was 31.96% faster than xxd.
- For sample 4 MiB, tinyxxd was 32.64% faster than xxd.
- For sample 2 MiB, tinyxxd was 31.19% faster than xxd.
- For sample 1 MiB, tinyxxd was 28.16% faster than xxd.

### Performance by flag
- tinyxxd was 48.18% faster with no flag.
- tinyxxd was 176.23% faster with flag '-r'.
- xxd was 25.17% faster with flag '-b'.
- tinyxxd was 200.72% faster with flag '-r -b'.
- tinyxxd was 28.34% faster with flag '-p'.
- tinyxxd was 7.45% faster with flag '-i'.
- tinyxxd was 19.54% faster with flag '-e'.
- tinyxxd was 63.09% faster with flag '-u'.
- tinyxxd was 49.31% faster with flag '-E'.
- tinyxxd was 40.77% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 20.91% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 3.19% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 60.06% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 1.83% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 3.31% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 7.20% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 6.74% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 3.88% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 2.98% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 6.44% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 9.33% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 5.51% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 25.68% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 29.05% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 70.63% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 10.56% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 13.81% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 1.81% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 4.90% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 5.46% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 10.37% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 2.53% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 6.68% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 1.91% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 6.39% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 6.47% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 30.36% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 2.04% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 6.38% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 7.88% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 5.59% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 5.77% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 2.34% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 8.80% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 7.63% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 0.26% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 10.05% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 3.07% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 38.06% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd improved by 4.46% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 1.99% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 2.96% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 2.21% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 14.94% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 8.91% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 0.55% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 3.91% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 2.13% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 15.96% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 11.02% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 21.70% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 2.48% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 2.16% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 3.16% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 5.32% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 4.74% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 14.83% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 0.47% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 5.80% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 0.24% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 4.33% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 8.61% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 25.77% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 2.47% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 3.33% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 8.37% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 4.54% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 6.36% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 2.81% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 7.25% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 7.22% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 3.91% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 15.15% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 3.01% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 21.37% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 3.47% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 1.89% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 2.94% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 4.75% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 3.21% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 11.92% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 2.94% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 3.74% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 1.68% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 5.88% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 9.92% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 11.55% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 5.48% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 6.97% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 8.19% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 3.87% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 6.78% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 4.10% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 8.19% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 8.86% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 3.80% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 14.44% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 15.47% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 22.00% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 6.15% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 1.27% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 3.43% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 3.96% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 3.60% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 11.81% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 0.49% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 4.53% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.46% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 5.82% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 10.15% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 17.64% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 6.40% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 7.68% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 7.97% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 4.42% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 7.06% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 2.02% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 6.57% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 6.66% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 2.29% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 3.88% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 5.84% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 7.79% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 1.65% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 7.66% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 10.48% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 4.18% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 6.47% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.79% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 6.67% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 7.32% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 0.25% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 17.04% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 3.08% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 16.22% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 6.47% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 1.77% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 2.19% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 5.02% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 0.01% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 12.14% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 0.42% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 4.90% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 0.68% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 8.74% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 7.43% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 16.17% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 7.39% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 1.39% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 3.17% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 5.09% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 4.02% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 10.30% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 1.29% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 2.36% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 0.37% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 5.27% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 6.71% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 7.36% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 2.45% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 5.31% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 4.50% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 1.40% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 2.65% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 1.65% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 4.42% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 6.83% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 2.18% compared to the last run.
---
Report generated on: 2026-03-24T09:30:02.028997
