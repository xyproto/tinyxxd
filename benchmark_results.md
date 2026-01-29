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
| xxd | 64 | 1.36 |  |
| xxd | 64 | 2.26 | -r |
| xxd | 64 | 4.06 | -b |
| xxd | 64 | 4.72 | -r -b |
| xxd | 64 | 1.75 |  |
| xxd | 64 | 1.10 | -p |
| xxd | 64 | 4.92 | -i |
| xxd | 64 | 1.35 | -e |
| xxd | 64 | 2.73 | -b |
| xxd | 64 | 1.32 | -u |
| xxd | 64 | 1.48 | -E |
| xxd | 64 | 5.84 | -b -i |
| tinyxxd | 64 | 1.01 |  |
| tinyxxd | 64 | 1.43 | -r |
| tinyxxd | 64 | 4.56 | -b |
| tinyxxd | 64 | 2.04 | -r -b |
| tinyxxd | 64 | 1.26 |  |
| tinyxxd | 64 | 0.92 | -p |
| tinyxxd | 64 | 4.74 | -i |
| tinyxxd | 64 | 1.10 | -e |
| tinyxxd | 64 | 3.24 | -b |
| tinyxxd | 64 | 1.00 | -u |
| tinyxxd | 64 | 1.10 | -E |
| tinyxxd | 64 | 4.10 | -b -i |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.15 | -r |
| xxd | 32 | 1.81 | -b |
| xxd | 32 | 2.34 | -r -b |
| xxd | 32 | 0.76 |  |
| xxd | 32 | 0.55 | -p |
| xxd | 32 | 2.47 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.33 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.73 | -E |
| xxd | 32 | 2.92 | -b -i |
| tinyxxd | 32 | 0.51 |  |
| tinyxxd | 32 | 0.71 | -r |
| tinyxxd | 32 | 3.14 | -b |
| tinyxxd | 32 | 0.99 | -r -b |
| tinyxxd | 32 | 0.58 |  |
| tinyxxd | 32 | 0.45 | -p |
| tinyxxd | 32 | 2.30 | -i |
| tinyxxd | 32 | 0.55 | -e |
| tinyxxd | 32 | 1.60 | -b |
| tinyxxd | 32 | 0.50 | -u |
| tinyxxd | 32 | 0.59 | -E |
| tinyxxd | 32 | 2.09 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.57 | -r |
| xxd | 16 | 0.82 | -b |
| xxd | 16 | 1.20 | -r -b |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.22 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.49 | -b -i |
| tinyxxd | 16 | 0.25 |  |
| tinyxxd | 16 | 0.36 | -r |
| tinyxxd | 16 | 1.02 | -b |
| tinyxxd | 16 | 0.50 | -r -b |
| tinyxxd | 16 | 0.29 |  |
| tinyxxd | 16 | 0.23 | -p |
| tinyxxd | 16 | 1.15 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.80 | -b |
| tinyxxd | 16 | 0.25 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.02 | -b -i |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.18 | -r |
| tinyxxd | 8 | 0.43 | -b |
| tinyxxd | 8 | 0.25 | -r -b |
| tinyxxd | 8 | 0.15 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.40 | -b |
| tinyxxd | 8 | 0.13 | -u |
| tinyxxd | 8 | 0.14 | -E |
| tinyxxd | 8 | 0.51 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.61 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.75 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.28 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.08 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.38 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.09 | -r |
| tinyxxd | 4 | 0.21 | -b |
| tinyxxd | 4 | 0.13 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.05 | -r |
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
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.08 | -r |
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
| xxd | 1 | 0.09 | -b -i |
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

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 37.20% faster with no flag.
- For sample size 64 MiB, tinyxxd was 58.44% faster with flags '-r'.
- For sample size 64 MiB, xxd was 14.63% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 131.01% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 19.28% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 23.09% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 32.55% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 34.42% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 42.40% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 30.95% faster with no flag.
- For sample size 32 MiB, tinyxxd was 62.05% faster with flags '-r'.
- For sample size 32 MiB, xxd was 50.94% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 135.60% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 20.83% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 7.39% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 22.94% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 31.41% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 23.93% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 39.80% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 29.71% faster with no flag.
- For sample size 16 MiB, tinyxxd was 60.54% faster with flags '-r'.
- For sample size 16 MiB, xxd was 22.21% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 140.92% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 20.75% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 5.76% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 22.33% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 32.46% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 34.32% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 45.96% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 28.77% faster with no flag.
- For sample size 8 MiB, tinyxxd was 64.62% faster with flags '-r'.
- For sample size 8 MiB, xxd was 20.40% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 142.06% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 15.31% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 21.74% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 34.39% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 32.85% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 45.35% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 30.91% faster with no flag.
- For sample size 4 MiB, tinyxxd was 60.73% faster with flags '-r'.
- For sample size 4 MiB, xxd was 17.71% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 118.61% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 19.97% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 19.91% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 32.50% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 31.85% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 45.71% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 26.41% faster with no flag.
- For sample size 2 MiB, tinyxxd was 62.62% faster with flags '-r'.
- For sample size 2 MiB, xxd was 19.83% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 122.59% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 17.99% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 15.97% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 31.12% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 31.25% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 44.97% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 26.65% faster with no flag.
- For sample size 1 MiB, tinyxxd was 56.06% faster with flags '-r'.
- For sample size 1 MiB, xxd was 17.57% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 118.76% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 16.97% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 18.68% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 30.47% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 32.25% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 36.74% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 24.22% faster than xxd.
- For sample 32 MiB, tinyxxd was 14.61% faster than xxd.
- For sample 16 MiB, tinyxxd was 24.43% faster than xxd.
- For sample 8 MiB, tinyxxd was 25.21% faster than xxd.
- For sample 4 MiB, tinyxxd was 24.49% faster than xxd.
- For sample 2 MiB, tinyxxd was 23.65% faster than xxd.
- For sample 1 MiB, tinyxxd was 22.08% faster than xxd.

### Performance by flag
- tinyxxd was 33.75% faster with no flag.
- tinyxxd was 60.12% faster with flag '-r'.
- xxd was 24.95% faster with flag '-b'.
- tinyxxd was 133.44% faster with flag '-r -b'.
- tinyxxd was 19.57% faster with flag '-p'.
- tinyxxd was 22.60% faster with flag '-e'.
- tinyxxd was 32.33% faster with flag '-u'.
- tinyxxd was 31.39% faster with flag '-E'.
- tinyxxd was 42.46% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 20.40% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 36.04% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 73.86% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 54.90% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 28.54% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 19.40% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 18.01% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 16.90% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 13.60% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 6.12% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 33.39% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 19.30% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 24.29% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 100.28% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 49.04% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 25.01% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 16.10% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 24.73% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 42.25% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 15.40% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 10.15% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 26.66% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 18.70% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 35.02% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 53.37% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 36.21% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 29.17% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 19.34% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 17.24% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 13.14% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 10.69% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 11.60% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 34.73% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 19.60% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 24.44% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 172.88% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 37.35% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 26.83% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 11.99% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 25.36% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 38.73% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 14.83% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 18.39% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 28.73% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 17.77% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 34.68% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 42.69% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 31.97% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 28.76% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 18.42% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 14.44% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 16.73% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 14.84% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 8.52% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 38.37% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 17.17% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 23.79% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 77.89% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 38.49% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 26.53% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 14.04% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 21.00% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 38.79% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 16.41% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 9.76% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 25.33% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 18.14% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 24.92% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 51.80% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 37.32% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 28.00% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 15.19% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 16.78% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 40.76% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 16.12% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 9.87% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 23.07% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 16.63% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 33.87% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 24.90% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 31.35% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 24.81% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 16.86% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 17.26% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 18.38% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 18.73% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 13.15% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 33.20% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 17.10% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 33.79% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 27.07% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 32.08% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 27.81% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 17.58% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 16.15% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 17.71% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 16.16% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 7.73% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 34.05% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 16.19% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 23.32% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 47.99% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 35.71% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 24.80% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 14.35% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 22.95% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 40.89% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 15.15% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 10.30% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 26.80% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 12.73% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 24.08% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 49.00% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 25.84% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 25.44% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 13.66% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 26.17% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 42.61% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 15.94% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 9.98% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 26.92% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 16.44% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 32.39% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 23.20% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 29.15% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 26.75% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 17.84% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 12.97% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 15.27% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 10.22% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 10.92% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 33.51% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 11.44% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 33.76% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 5.27% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 20.40% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 25.60% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 15.26% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 15.86% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 1.79% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 12.59% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 7.23% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 32.35% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 14.55% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 22.69% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 45.92% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 29.26% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 21.26% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 14.07% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 18.07% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 39.49% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 10.96% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 7.24% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 28.99% compared to the last run.
---
Report generated on: 2026-01-29T00:22:32.798422
