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
| xxd | 64 | 1.35 |  |
| xxd | 64 | 2.31 | -r |
| xxd | 64 | 4.45 | -b |
| xxd | 64 | 4.55 | -r -b |
| xxd | 64 | 1.58 |  |
| xxd | 64 | 1.10 | -p |
| xxd | 64 | 5.05 | -i |
| xxd | 64 | 1.37 | -e |
| xxd | 64 | 2.74 | -b |
| xxd | 64 | 1.32 | -u |
| xxd | 64 | 1.50 | -E |
| xxd | 64 | 5.66 | -b -i |
| tinyxxd | 64 | 0.88 |  |
| tinyxxd | 64 | 1.05 | -r |
| tinyxxd | 64 | 5.23 | -b |
| tinyxxd | 64 | 1.67 | -r -b |
| tinyxxd | 64 | 1.11 |  |
| tinyxxd | 64 | 0.90 | -p |
| tinyxxd | 64 | 4.67 | -i |
| tinyxxd | 64 | 1.11 | -e |
| tinyxxd | 64 | 3.33 | -b |
| tinyxxd | 64 | 0.86 | -u |
| tinyxxd | 64 | 1.07 | -E |
| tinyxxd | 64 | 4.14 | -b -i |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.12 | -r |
| xxd | 32 | 1.82 | -b |
| xxd | 32 | 2.38 | -r -b |
| xxd | 32 | 0.76 |  |
| xxd | 32 | 0.56 | -p |
| xxd | 32 | 2.48 | -i |
| xxd | 32 | 0.70 | -e |
| xxd | 32 | 1.40 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.75 | -E |
| xxd | 32 | 2.80 | -b -i |
| tinyxxd | 32 | 0.46 |  |
| tinyxxd | 32 | 0.41 | -r |
| tinyxxd | 32 | 2.22 | -b |
| tinyxxd | 32 | 0.81 | -r -b |
| tinyxxd | 32 | 0.51 |  |
| tinyxxd | 32 | 0.46 | -p |
| tinyxxd | 32 | 2.43 | -i |
| tinyxxd | 32 | 0.56 | -e |
| tinyxxd | 32 | 1.62 | -b |
| tinyxxd | 32 | 0.44 | -u |
| tinyxxd | 32 | 0.52 | -E |
| tinyxxd | 32 | 2.10 | -b -i |
| xxd | 16 | 0.34 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.83 | -b |
| xxd | 16 | 1.16 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.25 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.68 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.41 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.21 | -r |
| tinyxxd | 16 | 0.95 | -b |
| tinyxxd | 16 | 0.41 | -r -b |
| tinyxxd | 16 | 0.26 |  |
| tinyxxd | 16 | 0.23 | -p |
| tinyxxd | 16 | 1.18 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.83 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.03 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.38 | -b |
| xxd | 8 | 0.57 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.64 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.71 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.43 | -b |
| tinyxxd | 8 | 0.21 | -r -b |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.60 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.41 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.13 | -E |
| tinyxxd | 8 | 0.52 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.05 | -r |
| tinyxxd | 4 | 0.26 | -b |
| tinyxxd | 4 | 0.11 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.21 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.29 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.32 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.36 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.08 | -r |
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
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.06 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
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
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 47.15% faster with no flag.
- For sample size 64 MiB, tinyxxd was 121.05% faster with flags '-r'.
- For sample size 64 MiB, xxd was 19.14% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 171.92% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 21.28% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 8.30% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 23.13% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 52.49% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 40.12% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 36.92% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 47.54% faster with no flag.
- For sample size 32 MiB, tinyxxd was 172.68% faster with flags '-r'.
- For sample size 32 MiB, xxd was 19.11% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 191.96% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 20.63% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 23.69% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 49.31% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 43.82% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 33.26% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 47.93% faster with no flag.
- For sample size 16 MiB, tinyxxd was 181.06% faster with flags '-r'.
- For sample size 16 MiB, xxd was 17.60% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 182.84% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 23.03% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 5.92% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 19.61% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 51.69% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 39.82% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 36.71% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 49.39% faster with no flag.
- For sample size 8 MiB, tinyxxd was 178.69% faster with flags '-r'.
- For sample size 8 MiB, xxd was 16.69% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 176.05% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 23.06% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 6.40% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 19.83% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 53.60% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 42.69% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 37.72% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 42.87% faster with no flag.
- For sample size 4 MiB, tinyxxd was 177.70% faster with flags '-r'.
- For sample size 4 MiB, xxd was 27.33% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 164.70% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 21.07% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 6.92% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 18.42% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 51.42% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 41.58% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 37.76% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 43.19% faster with no flag.
- For sample size 2 MiB, tinyxxd was 157.10% faster with flags '-r'.
- For sample size 2 MiB, xxd was 17.24% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 176.87% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 19.10% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 6.98% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 20.45% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 50.58% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 39.14% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 37.57% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 39.18% faster with no flag.
- For sample size 1 MiB, tinyxxd was 143.99% faster with flags '-r'.
- For sample size 1 MiB, xxd was 16.22% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 159.34% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 17.81% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 7.51% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 17.54% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 45.04% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 38.82% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 36.78% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 26.70% faster than xxd.
- For sample 32 MiB, tinyxxd was 28.23% faster than xxd.
- For sample 16 MiB, tinyxxd was 30.61% faster than xxd.
- For sample 8 MiB, tinyxxd was 31.72% faster than xxd.
- For sample 4 MiB, tinyxxd was 27.53% faster than xxd.
- For sample 2 MiB, tinyxxd was 31.17% faster than xxd.
- For sample 1 MiB, tinyxxd was 29.62% faster than xxd.

### Performance by flag
- tinyxxd was 47.19% faster with no flag.
- tinyxxd was 144.69% faster with flag '-r'.
- xxd was 19.00% faster with flag '-b'.
- tinyxxd was 178.22% faster with flag '-r -b'.
- tinyxxd was 21.37% faster with flag '-p'.
- tinyxxd was 6.22% faster with flag '-i'.
- tinyxxd was 22.36% faster with flag '-e'.
- tinyxxd was 51.51% faster with flag '-u'.
- tinyxxd was 41.18% faster with flag '-E'.
- tinyxxd was 36.05% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 22.45% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 8.12% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 53.90% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 2.16% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 8.62% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 8.09% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 5.90% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 4.81% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 5.31% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 7.40% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 9.43% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 3.80% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 34.16% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 1.75% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 45.23% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 9.39% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 17.35% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 2.89% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 6.52% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 4.96% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 7.57% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 1.50% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 2.63% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 2.15% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 17.28% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 10.21% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 29.74% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 1.35% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 6.25% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 7.10% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 5.01% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 2.45% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.28% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 8.86% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 7.71% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 4.37% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 12.42% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 5.62% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 22.19% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 4.33% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 2.71% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 0.69% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 0.94% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 12.84% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 10.59% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 1.87% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 4.30% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 0.75% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 16.34% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 8.10% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 17.95% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 1.87% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 5.55% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 7.80% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 4.77% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 5.92% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 3.25% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 6.73% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 8.78% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 5.40% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 17.89% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 5.92% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 2.86% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 2.75% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 2.31% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 2.99% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 4.42% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 2.95% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 10.24% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 0.26% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 3.08% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 0.36% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 17.41% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 6.67% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 5.97% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 4.22% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 5.24% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 7.16% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 2.09% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 5.67% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 3.03% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 7.81% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 6.59% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 3.62% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 19.46% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 4.82% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 4.05% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 2.25% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 2.38% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 3.46% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 2.62% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 3.65% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 10.03% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 2.68% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 4.02% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 1.74% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 15.77% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 1.50% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 11.62% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 5.96% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 1.75% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 2.44% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 4.47% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 2.62% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 9.27% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.94% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 5.18% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 0.68% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 17.14% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 9.02% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 5.23% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 6.40% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 7.34% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 7.05% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 3.73% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 6.82% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 3.33% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 5.35% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 6.96% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 2.52% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 16.73% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 6.71% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 3.20% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 1.94% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 6.76% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 8.53% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 3.99% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 5.38% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 4.04% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 3.75% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 7.41% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 2.51% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 13.14% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 3.84% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 3.89% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 5.14% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 2.17% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 3.98% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 5.43% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 5.35% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 10.25% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 1.21% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 4.72% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 0.37% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 13.25% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 2.02% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 3.98% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 5.53% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 1.59% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 2.95% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 5.46% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 4.87% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 9.30% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 2.75% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 5.30% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 0.20% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 14.78% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 7.96% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 4.12% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 1.86% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 4.94% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 6.18% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 3.04% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 4.02% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 3.21% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 5.63% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 5.73% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 1.84% compared to the last run.
---
Report generated on: 2026-03-24T09:37:14.016550
