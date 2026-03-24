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
| xxd | 64 | 1.17 |  |
| xxd | 64 | 2.11 | -r |
| xxd | 64 | 4.04 | -b |
| xxd | 64 | 3.70 | -r -b |
| xxd | 64 | 1.33 |  |
| xxd | 64 | 0.80 | -p |
| xxd | 64 | 4.16 | -i |
| xxd | 64 | 1.16 | -e |
| xxd | 64 | 2.27 | -b |
| xxd | 64 | 1.16 | -u |
| xxd | 64 | 1.33 | -E |
| xxd | 64 | 4.16 | -b -i |
| tinyxxd | 64 | 0.79 |  |
| tinyxxd | 64 | 0.84 | -r |
| tinyxxd | 64 | 3.70 | -b |
| tinyxxd | 64 | 1.39 | -r -b |
| tinyxxd | 64 | 0.94 |  |
| tinyxxd | 64 | 0.71 | -p |
| tinyxxd | 64 | 4.12 | -i |
| tinyxxd | 64 | 0.93 | -e |
| tinyxxd | 64 | 2.14 | -b |
| tinyxxd | 64 | 0.76 | -u |
| tinyxxd | 64 | 0.96 | -E |
| tinyxxd | 64 | 3.24 | -b -i |
| tinyxxd | 32 | 0.38 |  |
| tinyxxd | 32 | 0.40 | -r |
| tinyxxd | 32 | 1.50 | -b |
| tinyxxd | 32 | 0.70 | -r -b |
| tinyxxd | 32 | 0.44 |  |
| tinyxxd | 32 | 0.36 | -p |
| tinyxxd | 32 | 2.05 | -i |
| tinyxxd | 32 | 0.45 | -e |
| tinyxxd | 32 | 1.06 | -b |
| tinyxxd | 32 | 0.38 | -u |
| tinyxxd | 32 | 0.47 | -E |
| tinyxxd | 32 | 1.63 | -b -i |
| xxd | 32 | 0.57 |  |
| xxd | 32 | 1.08 | -r |
| xxd | 32 | 2.19 | -b |
| xxd | 32 | 1.72 | -r -b |
| xxd | 32 | 0.63 |  |
| xxd | 32 | 0.40 | -p |
| xxd | 32 | 2.08 | -i |
| xxd | 32 | 0.58 | -e |
| xxd | 32 | 1.11 | -b |
| xxd | 32 | 0.57 | -u |
| xxd | 32 | 0.70 | -E |
| xxd | 32 | 2.10 | -b -i |
| xxd | 16 | 0.29 |  |
| xxd | 16 | 0.53 | -r |
| xxd | 16 | 0.66 | -b |
| xxd | 16 | 0.87 | -r -b |
| xxd | 16 | 0.31 |  |
| xxd | 16 | 0.20 | -p |
| xxd | 16 | 1.03 | -i |
| xxd | 16 | 0.29 | -e |
| xxd | 16 | 0.56 | -b |
| xxd | 16 | 0.29 | -u |
| xxd | 16 | 0.35 | -E |
| xxd | 16 | 1.08 | -b -i |
| tinyxxd | 16 | 0.19 |  |
| tinyxxd | 16 | 0.21 | -r |
| tinyxxd | 16 | 0.66 | -b |
| tinyxxd | 16 | 0.39 | -r -b |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.18 | -p |
| tinyxxd | 16 | 1.03 | -i |
| tinyxxd | 16 | 0.22 | -e |
| tinyxxd | 16 | 0.52 | -b |
| tinyxxd | 16 | 0.19 | -u |
| tinyxxd | 16 | 0.24 | -E |
| tinyxxd | 16 | 0.80 | -b -i |
| tinyxxd | 8 | 0.10 |  |
| tinyxxd | 8 | 0.10 | -r |
| tinyxxd | 8 | 0.29 | -b |
| tinyxxd | 8 | 0.20 | -r -b |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.09 | -p |
| tinyxxd | 8 | 0.51 | -i |
| tinyxxd | 8 | 0.11 | -e |
| tinyxxd | 8 | 0.26 | -b |
| tinyxxd | 8 | 0.10 | -u |
| tinyxxd | 8 | 0.12 | -E |
| tinyxxd | 8 | 0.41 | -b -i |
| xxd | 8 | 0.15 |  |
| xxd | 8 | 0.27 | -r |
| xxd | 8 | 0.29 | -b |
| xxd | 8 | 0.43 | -r -b |
| xxd | 8 | 0.16 |  |
| xxd | 8 | 0.10 | -p |
| xxd | 8 | 0.54 | -i |
| xxd | 8 | 0.15 | -e |
| xxd | 8 | 0.28 | -b |
| xxd | 8 | 0.15 | -u |
| xxd | 8 | 0.17 | -E |
| xxd | 8 | 0.52 | -b -i |
| xxd | 4 | 0.08 |  |
| xxd | 4 | 0.13 | -r |
| xxd | 4 | 0.16 | -b |
| xxd | 4 | 0.22 | -r -b |
| xxd | 4 | 0.08 |  |
| xxd | 4 | 0.05 | -p |
| xxd | 4 | 0.26 | -i |
| xxd | 4 | 0.08 | -e |
| xxd | 4 | 0.14 | -b |
| xxd | 4 | 0.07 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.26 | -b -i |
| tinyxxd | 4 | 0.05 |  |
| tinyxxd | 4 | 0.05 | -r |
| tinyxxd | 4 | 0.14 | -b |
| tinyxxd | 4 | 0.09 | -r -b |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.05 | -p |
| tinyxxd | 4 | 0.26 | -i |
| tinyxxd | 4 | 0.06 | -e |
| tinyxxd | 4 | 0.13 | -b |
| tinyxxd | 4 | 0.05 | -u |
| tinyxxd | 4 | 0.06 | -E |
| tinyxxd | 4 | 0.20 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.08 | -b |
| xxd | 2 | 0.11 | -r -b |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.13 | -i |
| xxd | 2 | 0.04 | -e |
| xxd | 2 | 0.07 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.04 | -E |
| xxd | 2 | 0.13 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.07 | -b |
| tinyxxd | 2 | 0.05 | -r -b |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.13 | -i |
| tinyxxd | 2 | 0.03 | -e |
| tinyxxd | 2 | 0.07 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.03 | -E |
| tinyxxd | 2 | 0.10 | -b -i |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.04 | -b |
| xxd | 1 | 0.06 | -r -b |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.07 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.04 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.02 | -E |
| xxd | 1 | 0.07 | -b -i |
| tinyxxd | 1 | 0.01 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.04 | -b |
| tinyxxd | 1 | 0.03 | -r -b |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.01 | -p |
| tinyxxd | 1 | 0.07 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.04 | -b |
| tinyxxd | 1 | 0.01 | -u |
| tinyxxd | 1 | 0.02 | -E |
| tinyxxd | 1 | 0.05 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 44.46% faster with no flag.
- For sample size 64 MiB, tinyxxd was 149.93% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 8.05% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 165.68% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 12.41% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 24.80% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 51.63% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 38.59% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 28.55% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 46.02% faster with no flag.
- For sample size 32 MiB, tinyxxd was 168.05% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 28.99% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 145.74% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 11.77% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 29.02% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 51.33% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 47.33% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 28.86% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 47.37% faster with no flag.
- For sample size 16 MiB, tinyxxd was 156.14% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 124.39% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 12.76% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 29.72% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 48.15% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 45.02% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 34.32% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 44.04% faster with no flag.
- For sample size 8 MiB, tinyxxd was 156.80% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 121.20% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 11.99% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 30.13% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 48.46% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 38.83% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 28.25% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 45.80% faster with no flag.
- For sample size 4 MiB, tinyxxd was 152.59% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 8.87% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 140.84% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 11.74% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 29.75% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 47.22% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 38.00% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 29.39% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 44.82% faster with no flag.
- For sample size 2 MiB, tinyxxd was 145.20% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 7.93% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 137.26% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 11.86% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 28.85% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 43.48% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 34.05% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 27.90% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 39.91% faster with no flag.
- For sample size 1 MiB, tinyxxd was 130.42% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 5.89% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 127.04% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 10.61% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 23.43% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 38.70% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 31.06% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 26.07% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 33.43% faster than xxd.
- For sample 32 MiB, tinyxxd was 39.82% faster than xxd.
- For sample 16 MiB, tinyxxd was 33.34% faster than xxd.
- For sample 8 MiB, tinyxxd was 32.95% faster than xxd.
- For sample 4 MiB, tinyxxd was 34.07% faster than xxd.
- For sample 2 MiB, tinyxxd was 33.29% faster than xxd.
- For sample 1 MiB, tinyxxd was 30.19% faster than xxd.

### Performance by flag
- tinyxxd was 45.17% faster with no flag.
- tinyxxd was 155.37% faster with flag '-r'.
- tinyxxd was 12.43% faster with flag '-b'.
- tinyxxd was 150.47% faster with flag '-r -b'.
- tinyxxd was 12.22% faster with flag '-p'.
- tinyxxd was 26.99% faster with flag '-e'.
- tinyxxd was 50.49% faster with flag '-u'.
- tinyxxd was 41.42% faster with flag '-E'.
- tinyxxd was 29.32% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 33.75% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 9.13% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 42.01% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 18.09% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 24.51% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 27.50% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 17.21% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 14.83% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 20.21% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 12.03% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 10.01% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 24.95% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 32.37% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 3.35% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 13.07% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 14.33% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 19.16% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 19.83% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 12.96% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 15.98% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 34.40% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 12.13% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 7.43% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 21.79% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 31.34% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 6.66% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 6.93% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd improved by 14.29% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 22.19% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 19.65% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 12.22% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 21.89% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 34.29% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 11.49% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 7.20% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 20.27% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 24.75% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 4.41% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 61.36% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 27.95% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 17.64% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 25.34% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 15.80% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 19.74% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 18.13% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 13.90% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 9.15% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 23.97% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 26.58% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 8.51% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 1.53% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 26.97% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 20.80% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 28.17% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 17.42% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 12.60% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 17.40% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 19.91% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 7.40% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 22.02% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 26.29% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 0.88% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 17.58% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 5.33% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 15.96% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 19.84% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 17.67% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 18.99% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 34.95% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 9.88% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 7.44% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 21.57% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 23.22% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 3.01% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 29.12% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 5.62% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 14.86% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 20.34% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 12.35% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 19.45% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 35.30% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 10.94% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 9.62% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 28.50% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 24.24% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 9.06% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 14.86% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 27.76% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 18.11% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 27.55% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 14.07% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 12.54% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 17.68% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 12.63% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 11.99% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 27.49% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 24.19% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 9.64% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 10.42% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 25.76% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 19.23% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 28.25% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 16.74% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 13.39% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 18.51% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 13.82% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 11.61% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 27.17% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 27.62% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 4.23% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 33.05% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 15.77% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 19.03% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 21.14% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 11.56% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 21.77% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 34.64% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 10.26% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 9.52% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 21.38% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 22.29% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 9.45% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 15.30% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 27.16% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 17.31% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 28.15% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 17.16% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 13.78% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 18.31% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 15.20% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 13.49% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 27.35% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 27.76% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 4.84% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 33.68% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 16.95% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 20.91% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 22.34% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 14.51% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 21.20% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 36.18% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 11.88% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 10.17% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 22.13% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 22.78% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 10.86% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 17.11% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 27.16% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 20.18% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 28.42% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 17.53% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 17.45% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 20.41% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 16.44% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 15.80% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 27.57% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 27.15% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 6.91% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 33.53% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 16.24% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 19.35% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 22.66% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 12.30% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 22.37% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 35.82% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 16.05% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 12.86% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 21.82% compared to the last run.
---
Report generated on: 2026-03-24T23:34:38.857441
