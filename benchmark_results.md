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
| tinyxxd | 64 | 0.64 |  |
| tinyxxd | 64 | 0.96 | -r |
| tinyxxd | 64 | 4.47 | -b |
| tinyxxd | 64 | 1.60 | -r -b |
| tinyxxd | 64 | 0.83 |  |
| tinyxxd | 64 | 0.62 | -p |
| tinyxxd | 64 | 4.68 | -i |
| tinyxxd | 64 | 1.09 | -e |
| tinyxxd | 64 | 2.73 | -b |
| tinyxxd | 64 | 0.59 | -u |
| tinyxxd | 64 | 0.62 | -E |
| tinyxxd | 64 | 3.58 | -b -i |
| xxd | 64 | 1.31 |  |
| xxd | 64 | 2.19 | -r |
| xxd | 64 | 3.59 | -b |
| xxd | 64 | 4.22 | -r -b |
| xxd | 64 | 1.54 |  |
| xxd | 64 | 1.08 | -p |
| xxd | 64 | 4.97 | -i |
| xxd | 64 | 1.34 | -e |
| xxd | 64 | 2.69 | -b |
| xxd | 64 | 1.30 | -u |
| xxd | 64 | 1.47 | -E |
| xxd | 64 | 5.76 | -b -i |
| tinyxxd | 32 | 0.29 |  |
| tinyxxd | 32 | 0.48 | -r |
| tinyxxd | 32 | 1.76 | -b |
| tinyxxd | 32 | 0.81 | -r -b |
| tinyxxd | 32 | 0.38 |  |
| tinyxxd | 32 | 0.31 | -p |
| tinyxxd | 32 | 2.36 | -i |
| tinyxxd | 32 | 0.55 | -e |
| tinyxxd | 32 | 1.37 | -b |
| tinyxxd | 32 | 0.29 | -u |
| tinyxxd | 32 | 0.30 | -E |
| tinyxxd | 32 | 1.76 | -b -i |
| xxd | 32 | 0.65 |  |
| xxd | 32 | 1.14 | -r |
| xxd | 32 | 2.99 | -b |
| xxd | 32 | 2.19 | -r -b |
| xxd | 32 | 0.74 |  |
| xxd | 32 | 0.54 | -p |
| xxd | 32 | 2.48 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.32 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.73 | -E |
| xxd | 32 | 2.98 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.57 | -r |
| xxd | 16 | 0.79 | -b |
| xxd | 16 | 1.07 | -r -b |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.27 | -p |
| xxd | 16 | 1.24 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.69 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.50 | -b -i |
| tinyxxd | 16 | 0.15 |  |
| tinyxxd | 16 | 0.24 | -r |
| tinyxxd | 16 | 0.73 | -b |
| tinyxxd | 16 | 0.40 | -r -b |
| tinyxxd | 16 | 0.19 |  |
| tinyxxd | 16 | 0.16 | -p |
| tinyxxd | 16 | 1.18 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.69 | -b |
| tinyxxd | 16 | 0.15 | -u |
| tinyxxd | 16 | 0.15 | -E |
| tinyxxd | 16 | 0.88 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.56 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.63 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.33 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.73 | -b -i |
| tinyxxd | 8 | 0.08 |  |
| tinyxxd | 8 | 0.17 | -r |
| tinyxxd | 8 | 0.37 | -b |
| tinyxxd | 8 | 0.20 | -r -b |
| tinyxxd | 8 | 0.10 |  |
| tinyxxd | 8 | 0.08 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.35 | -b |
| tinyxxd | 8 | 0.08 | -u |
| tinyxxd | 8 | 0.08 | -E |
| tinyxxd | 8 | 0.44 | -b -i |
| tinyxxd | 4 | 0.04 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.10 | -r -b |
| tinyxxd | 4 | 0.05 |  |
| tinyxxd | 4 | 0.04 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.18 | -b |
| tinyxxd | 4 | 0.04 | -u |
| tinyxxd | 4 | 0.04 | -E |
| tinyxxd | 4 | 0.22 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.27 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 2 | 0.02 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.10 | -b |
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
| xxd | 2 | 0.08 | -r |
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
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.07 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.10 | -b -i |
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

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 93.70% faster with no flag.
- For sample size 64 MiB, tinyxxd was 126.82% faster with flags '-r'.
- For sample size 64 MiB, xxd was 14.64% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 162.74% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 73.11% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 6.10% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 22.29% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 121.25% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 138.89% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 60.92% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 108.92% faster with no flag.
- For sample size 32 MiB, tinyxxd was 136.13% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 37.59% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 169.91% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 73.14% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 5.51% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 22.33% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 124.39% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 138.04% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 69.50% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 104.46% faster with no flag.
- For sample size 16 MiB, tinyxxd was 132.90% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 166.76% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 72.61% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 22.48% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 118.53% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 138.56% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 69.63% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 102.24% faster with no flag.
- For sample size 8 MiB, tinyxxd was 64.10% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 174.41% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 70.61% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 8.45% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 24.28% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 111.59% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 132.12% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 65.72% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 100.52% faster with no flag.
- For sample size 4 MiB, tinyxxd was 131.08% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 155.90% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 61.76% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 7.36% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 20.76% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 112.41% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 134.70% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 65.56% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 90.85% faster with no flag.
- For sample size 2 MiB, tinyxxd was 128.63% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 160.84% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 54.01% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 6.05% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 18.77% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 94.01% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 117.70% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 64.28% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 80.13% faster with no flag.
- For sample size 1 MiB, tinyxxd was 106.99% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 152.53% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 53.74% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 7.63% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 18.25% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 86.46% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 109.50% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 62.05% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 40.25% faster than xxd.
- For sample 32 MiB, tinyxxd was 60.23% faster than xxd.
- For sample 16 MiB, tinyxxd was 50.87% faster than xxd.
- For sample 8 MiB, tinyxxd was 46.63% faster than xxd.
- For sample 4 MiB, tinyxxd was 47.53% faster than xxd.
- For sample 2 MiB, tinyxxd was 45.83% faster than xxd.
- For sample 1 MiB, tinyxxd was 44.13% faster than xxd.

### Performance by flag
- tinyxxd was 99.15% faster with no flag.
- tinyxxd was 124.32% faster with flag '-r'.
- tinyxxd was 165.45% faster with flag '-r -b'.
- tinyxxd was 71.94% faster with flag '-p'.
- tinyxxd was 6.03% faster with flag '-i'.
- tinyxxd was 22.30% faster with flag '-e'.
- tinyxxd was 119.83% faster with flag '-u'.
- tinyxxd was 137.36% faster with flag '-E'.
- tinyxxd was 64.66% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd slowed down by 6.99% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 0.93% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 114.97% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 12.46% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 37.53% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 22.14% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 13.08% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 15.65% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 31.52% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 19.68% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 24.48% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 28.31% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 0.14% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 4.90% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 50.69% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 20.96% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 18.02% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 30.46% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 9.37% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 12.08% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 12.76% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 9.61% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 9.59% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 31.51% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 17.09% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 1.45% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 70.43% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 12.03% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 8.92% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 20.54% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 12.13% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 15.15% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 32.73% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 14.61% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 20.01% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 24.76% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 2.66% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 8.59% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 153.06% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 25.31% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 16.39% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 30.70% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 18.33% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 12.31% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 11.24% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 10.70% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 7.84% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 33.86% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 1.76% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 7.91% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 33.15% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 22.03% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 14.65% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 31.30% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 13.46% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 11.61% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 15.97% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 11.58% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 10.34% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 36.42% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 2.89% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 2.46% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 42.30% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 12.71% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 27.33% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 19.37% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 12.76% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 12.89% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 34.15% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 18.22% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 16.84% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 25.89% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 3.58% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 7.99% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 17.87% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 27.47% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 8.12% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 26.09% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 9.85% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 14.00% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 9.81% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 10.06% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 8.51% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 33.51% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 6.44% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 40.55% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 40.55% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 11.07% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 20.58% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 21.54% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 11.24% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 15.14% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 32.01% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 20.63% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 22.43% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 25.71% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 1.60% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 0.32% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 41.47% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 13.15% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 21.47% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 21.20% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 11.03% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 13.99% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 32.13% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 4.71% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 12.25% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 20.25% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 2.72% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 9.52% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 19.55% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 11.47% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 16.88% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 25.95% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 15.92% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 10.54% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 11.25% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 12.39% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 10.38% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 34.14% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 1.08% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 3.46% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 38.23% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 12.78% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 23.42% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 20.87% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 11.12% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 11.92% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 28.02% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 14.72% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 15.70% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 22.17% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 0.27% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 7.91% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 17.88% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 24.48% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 13.99% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 20.69% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 16.19% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 8.45% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 9.97% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 8.20% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 9.61% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 31.34% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 1.55% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 5.04% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 15.31% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 24.06% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 11.13% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 20.34% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 15.64% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 10.01% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 10.04% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 7.38% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 8.88% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 30.35% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 2.09% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 0.07% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 33.81% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 9.83% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 15.20% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 12.60% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 9.55% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 8.69% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 26.97% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 5.17% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 5.40% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 19.89% compared to the last run.
---
Report generated on: 2026-04-01T14:37:57.663485
