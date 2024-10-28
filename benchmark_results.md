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
| xxd | 64 | 1.55 |  |
| xxd | 64 | 2.09 | -r |
| xxd | 64 | 4.69 |  |
| xxd | 64 | 4.23 | -r |
| xxd | 64 | 1.51 |  |
| xxd | 64 | 0.98 | -p |
| xxd | 64 | 4.90 | -i |
| xxd | 64 | 1.52 | -e |
| xxd | 64 | 3.26 | -b |
| xxd | 64 | 1.49 | -u |
| xxd | 64 | 1.65 | -E |
| xxd | 64 | 5.63 | -b -i |
| tinyxxd | 64 | 1.28 |  |
| tinyxxd | 64 | 1.50 | -r |
| tinyxxd | 64 | 5.21 |  |
| tinyxxd | 64 | 3.69 | -r |
| tinyxxd | 64 | 1.24 |  |
| tinyxxd | 64 | 0.80 | -p |
| tinyxxd | 64 | 4.79 | -i |
| tinyxxd | 64 | 1.28 | -e |
| tinyxxd | 64 | 2.95 | -b |
| tinyxxd | 64 | 1.23 | -u |
| tinyxxd | 64 | 1.46 | -E |
| tinyxxd | 64 | 4.48 | -b -i |
| xxd | 32 | 0.78 |  |
| xxd | 32 | 1.05 | -r |
| xxd | 32 | 2.01 |  |
| xxd | 32 | 2.05 | -r |
| xxd | 32 | 0.74 |  |
| xxd | 32 | 0.46 | -p |
| xxd | 32 | 2.51 | -i |
| xxd | 32 | 0.78 | -e |
| xxd | 32 | 1.61 | -b |
| xxd | 32 | 0.75 | -u |
| xxd | 32 | 0.83 | -E |
| xxd | 32 | 2.84 | -b -i |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 0.75 | -r |
| tinyxxd | 32 | 1.97 |  |
| tinyxxd | 32 | 1.83 | -r |
| tinyxxd | 32 | 0.62 |  |
| tinyxxd | 32 | 0.40 | -p |
| tinyxxd | 32 | 2.45 | -i |
| tinyxxd | 32 | 0.64 | -e |
| tinyxxd | 32 | 1.49 | -b |
| tinyxxd | 32 | 0.62 | -u |
| tinyxxd | 32 | 0.70 | -E |
| tinyxxd | 32 | 2.25 | -b -i |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.37 | -r |
| tinyxxd | 16 | 0.83 |  |
| tinyxxd | 16 | 0.92 | -r |
| tinyxxd | 16 | 0.31 |  |
| tinyxxd | 16 | 0.20 | -p |
| tinyxxd | 16 | 1.21 | -i |
| tinyxxd | 16 | 0.33 | -e |
| tinyxxd | 16 | 0.74 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.36 | -E |
| tinyxxd | 16 | 1.16 | -b -i |
| xxd | 16 | 0.39 |  |
| xxd | 16 | 0.53 | -r |
| xxd | 16 | 0.91 |  |
| xxd | 16 | 1.00 | -r |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.23 | -p |
| xxd | 16 | 1.24 | -i |
| xxd | 16 | 0.38 | -e |
| xxd | 16 | 0.81 | -b |
| xxd | 16 | 0.38 | -u |
| xxd | 16 | 0.41 | -E |
| xxd | 16 | 1.45 | -b -i |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.44 |  |
| xxd | 8 | 0.51 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.60 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.41 | -b |
| xxd | 8 | 0.19 | -u |
| xxd | 8 | 0.21 | -E |
| xxd | 8 | 0.71 | -b -i |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.25 | -r |
| tinyxxd | 8 | 0.69 |  |
| tinyxxd | 8 | 0.50 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.60 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.39 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.19 | -E |
| tinyxxd | 8 | 0.57 | -b -i |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.23 |  |
| xxd | 4 | 0.28 | -r |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.10 | -e |
| xxd | 4 | 0.20 | -b |
| xxd | 4 | 0.10 | -u |
| xxd | 4 | 0.11 | -E |
| xxd | 4 | 0.35 | -b -i |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.10 | -r |
| tinyxxd | 4 | 0.22 |  |
| tinyxxd | 4 | 0.23 | -r |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.05 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.09 | -u |
| tinyxxd | 4 | 0.09 | -E |
| tinyxxd | 4 | 0.28 | -b -i |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.05 | -r |
| tinyxxd | 2 | 0.11 |  |
| tinyxxd | 2 | 0.12 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
| tinyxxd | 2 | 0.14 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.11 |  |
| xxd | 2 | 0.13 | -r |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.06 | -E |
| xxd | 2 | 0.18 | -b -i |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.06 |  |
| xxd | 1 | 0.07 | -r |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.10 | -b -i |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.03 | -r |
| tinyxxd | 1 | 0.05 |  |
| tinyxxd | 1 | 0.19 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.03 | -E |
| tinyxxd | 1 | 0.07 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 21.94% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 22.73% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 18.73% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 10.23% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 20.75% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 12.77% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 25.76% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 8.76% faster with no flag.
- For sample size 32 MiB, tinyxxd was 20.35% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 14.80% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 21.60% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 7.65% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 20.50% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 17.93% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 26.31% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 14.02% faster with no flag.
- For sample size 16 MiB, tinyxxd was 18.73% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 16.27% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 18.14% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 9.15% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 19.32% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 15.37% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 24.47% faster with flags '-b -i'.
- For sample size 8 MiB, xxd was 23.61% faster with no flag.
- For sample size 8 MiB, tinyxxd was 5.53% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 11.82% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 18.58% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 5.39% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 19.50% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 12.41% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 25.96% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 13.08% faster with no flag.
- For sample size 4 MiB, tinyxxd was 28.53% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 14.56% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 16.68% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 7.64% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 9.01% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 14.99% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 24.30% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 11.22% faster with no flag.
- For sample size 2 MiB, tinyxxd was 17.06% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 14.12% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 17.04% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 8.83% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 17.94% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 15.23% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 24.12% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 12.59% faster with no flag.
- For sample size 1 MiB, xxd was 109.26% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 9.12% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 14.35% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 7.23% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 17.51% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 7.88% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 33.31% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 12.02% faster than xxd.
- For sample 32 MiB, tinyxxd was 14.08% faster than xxd.
- For sample 16 MiB, tinyxxd was 14.63% faster than xxd.
- For sample 8 MiB, tinyxxd was 2.92% faster than xxd.
- For sample 4 MiB, tinyxxd was 15.43% faster than xxd.
- For sample 2 MiB, tinyxxd was 13.31% faster than xxd.
- For sample size 1 MiB, xxd was 10.82% faster than tinyxxd.

### Performance by flag
- tinyxxd was 18.57% faster with flag '-r'.
- tinyxxd was 18.66% faster with flag '-p'.
- tinyxxd was 19.23% faster with flag '-e'.
- tinyxxd was 8.99% faster with flag '-b'.
- tinyxxd was 19.92% faster with flag '-u'.
- tinyxxd was 14.40% faster with flag '-E'.
- tinyxxd was 25.73% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 1.07% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 50.17% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 205.96% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 0.68% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 1.75% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 6.93% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 3.10% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 1.63% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 0.77% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 1.26% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 0.41% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 0.24% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 3.83% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 59.63% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 321.41% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 0.50% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 0.06% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 1.65% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 0.26% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 0.29% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 1.62% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 4.60% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 1.44% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 3.47% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 47.12% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 168.01% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 2.81% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 1.04% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 5.45% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 3.85% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 2.53% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 0.58% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 0.55% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 1.74% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 1.39% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 3.47% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 59.17% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 217.31% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 0.42% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 0.31% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 1.27% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 3.21% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 0.89% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 1.06% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 1.82% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 0.32% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 0.44% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 3.54% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 59.22% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 164.56% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 0.19% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 0.56% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 0.22% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 3.60% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 0.57% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 0.76% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 1.64% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 1.30% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 3.14% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 3.73% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 47.26% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 143.36% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 0.87% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 0.92% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 0.36% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 3.71% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 0.37% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 2.31% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 0.53% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 6.46% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 0.82% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 3.12% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 49.63% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 129.96% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 9.17% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 0.91% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 0.75% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 0.72% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 0.31% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 0.00% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 0.07% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 0.67% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 1.66% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 3.26% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 54.86% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 300.36% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 10.19% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 5.95% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 1.67% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 0.53% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 0.00% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 2.95% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 0.93% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 4.52% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 1.21% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 2.96% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 41.53% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 137.17% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 10.16% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 0.63% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 0.40% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 2.30% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 2.10% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 1.27% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 1.88% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 0.29% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 0.02% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 3.63% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 58.04% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 165.97% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 0.86% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 0.68% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 0.50% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 4.61% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 1.02% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 0.61% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 10.57% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 1.03% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.08% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 5.08% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 56.90% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 150.41% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 0.32% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 3.12% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 1.12% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 0.30% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 0.23% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 0.97% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 0.59% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 4.44% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 3.36% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 2.99% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 45.36% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 124.84% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 0.38% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 0.01% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 0.72% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 0.62% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 0.61% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 0.27% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 0.51% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 1.02% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 0.31% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 4.05% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 84.39% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 119.18% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 71.75% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 0.12% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 1.43% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 0.82% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 0.23% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 0.70% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 2.23% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 1.28% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 7.31% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 5.40% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 53.41% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 133.39% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 213.38% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 0.75% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 2.32% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 0.24% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 1.68% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 0.40% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 1.28% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 5.00% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 1.05% compared to the last run.
---
Report generated on: 2024-10-28T15:20:54.586790
