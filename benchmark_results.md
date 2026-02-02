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
| tinyxxd | 64 | 0.93 |  |
| tinyxxd | 64 | 0.80 | -r |
| tinyxxd | 64 | 4.54 | -b |
| tinyxxd | 64 | 1.65 | -r -b |
| tinyxxd | 64 | 1.18 |  |
| tinyxxd | 64 | 0.89 | -p |
| tinyxxd | 64 | 4.65 | -i |
| tinyxxd | 64 | 1.12 | -e |
| tinyxxd | 64 | 3.17 | -b |
| tinyxxd | 64 | 0.88 | -u |
| tinyxxd | 64 | 1.08 | -E |
| tinyxxd | 64 | 4.13 | -b -i |
| xxd | 64 | 1.31 |  |
| xxd | 64 | 2.39 | -r |
| xxd | 64 | 3.83 | -b |
| xxd | 64 | 4.71 | -r -b |
| xxd | 64 | 1.74 |  |
| xxd | 64 | 1.05 | -p |
| xxd | 64 | 4.81 | -i |
| xxd | 64 | 1.36 | -e |
| xxd | 64 | 2.68 | -b |
| xxd | 64 | 1.32 | -u |
| xxd | 64 | 1.49 | -E |
| xxd | 64 | 5.85 | -b -i |
| xxd | 32 | 0.66 |  |
| xxd | 32 | 1.18 | -r |
| xxd | 32 | 1.78 | -b |
| xxd | 32 | 2.34 | -r -b |
| xxd | 32 | 0.76 |  |
| xxd | 32 | 0.55 | -p |
| xxd | 32 | 2.44 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.33 | -b |
| xxd | 32 | 0.67 | -u |
| xxd | 32 | 0.73 | -E |
| xxd | 32 | 2.98 | -b -i |
| tinyxxd | 32 | 0.48 |  |
| tinyxxd | 32 | 0.41 | -r |
| tinyxxd | 32 | 2.32 | -b |
| tinyxxd | 32 | 0.82 | -r -b |
| tinyxxd | 32 | 0.53 |  |
| tinyxxd | 32 | 0.45 | -p |
| tinyxxd | 32 | 2.32 | -i |
| tinyxxd | 32 | 0.55 | -e |
| tinyxxd | 32 | 1.57 | -b |
| tinyxxd | 32 | 0.44 | -u |
| tinyxxd | 32 | 0.56 | -E |
| tinyxxd | 32 | 2.05 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.59 | -r |
| xxd | 16 | 0.72 | -b |
| xxd | 16 | 1.14 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.27 | -p |
| xxd | 16 | 1.21 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.36 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.47 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.23 | -r |
| tinyxxd | 16 | 0.95 | -b |
| tinyxxd | 16 | 0.41 | -r -b |
| tinyxxd | 16 | 0.27 |  |
| tinyxxd | 16 | 0.23 | -p |
| tinyxxd | 16 | 1.16 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.78 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.02 | -b -i |
| xxd | 8 | 0.18 |  |
| xxd | 8 | 0.30 | -r |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.57 | -r -b |
| xxd | 8 | 0.21 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.75 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.10 | -r |
| tinyxxd | 8 | 0.42 | -b |
| tinyxxd | 8 | 0.21 | -r -b |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.39 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.13 | -E |
| tinyxxd | 8 | 0.51 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.30 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.05 | -r |
| tinyxxd | 4 | 0.21 | -b |
| tinyxxd | 4 | 0.11 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.05 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.04 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.09 | -r |
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
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.01 | -r |
| tinyxxd | 1 | 0.05 | -b |
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
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.04 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.10 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 44.15% faster with no flag.
- For sample size 64 MiB, tinyxxd was 200.05% faster with flags '-r'.
- For sample size 64 MiB, xxd was 18.51% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 185.65% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 18.39% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 21.51% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 49.51% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 37.93% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 41.52% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 40.09% faster with no flag.
- For sample size 32 MiB, tinyxxd was 186.36% faster with flags '-r'.
- For sample size 32 MiB, xxd was 25.17% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 186.82% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 22.79% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 23.41% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 51.76% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 31.55% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 45.68% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 44.22% faster with no flag.
- For sample size 16 MiB, tinyxxd was 156.12% faster with flags '-r'.
- For sample size 16 MiB, xxd was 24.70% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 177.41% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 20.26% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 22.38% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 59.86% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 40.14% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 43.56% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 58.06% faster with no flag.
- For sample size 8 MiB, tinyxxd was 188.13% faster with flags '-r'.
- For sample size 8 MiB, xxd was 15.39% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 172.24% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 23.92% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 22.70% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 48.21% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 38.50% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 45.99% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 44.69% faster with no flag.
- For sample size 4 MiB, tinyxxd was 183.93% faster with flags '-r'.
- For sample size 4 MiB, xxd was 15.88% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 187.89% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 22.90% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 24.66% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 49.03% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 40.55% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 46.10% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 46.02% faster with no flag.
- For sample size 2 MiB, tinyxxd was 231.15% faster with flags '-r'.
- For sample size 2 MiB, xxd was 19.01% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 175.28% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 18.44% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 20.29% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 45.08% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 38.10% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 44.58% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 36.05% faster with no flag.
- For sample size 1 MiB, tinyxxd was 164.09% faster with flags '-r'.
- For sample size 1 MiB, xxd was 16.31% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 156.80% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 16.29% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 18.49% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 41.51% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 35.62% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 44.24% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 29.98% faster than xxd.
- For sample 32 MiB, tinyxxd was 28.81% faster than xxd.
- For sample 16 MiB, tinyxxd was 29.96% faster than xxd.
- For sample 8 MiB, tinyxxd was 34.18% faster than xxd.
- For sample 4 MiB, tinyxxd was 34.29% faster than xxd.
- For sample 2 MiB, tinyxxd was 33.56% faster than xxd.
- For sample 1 MiB, tinyxxd was 30.27% faster than xxd.

### Performance by flag
- tinyxxd was 43.97% faster with no flag.
- tinyxxd was 189.37% faster with flag '-r'.
- xxd was 20.62% faster with flag '-b'.
- tinyxxd was 183.69% faster with flag '-r -b'.
- tinyxxd was 20.21% faster with flag '-p'.
- tinyxxd was 22.22% faster with flag '-e'.
- tinyxxd was 51.13% faster with flag '-u'.
- tinyxxd was 36.66% faster with flag '-E'.
- tinyxxd was 43.31% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 28.09% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 14.80% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 43.10% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 10.31% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 9.24% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 4.24% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 0.12% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 0.85% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 0.23% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 6.46% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 0.38% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 0.87% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 25.67% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 7.58% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 40.70% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 3.32% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 0.97% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 2.69% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 1.55% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 1.03% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 1.73% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 0.45% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 1.77% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 2.48% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 12.75% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 2.11% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 32.77% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 7.11% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 0.45% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 5.97% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 0.62% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 0.43% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.52% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 1.66% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 0.16% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 2.01% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 14.20% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 11.02% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 47.49% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd improved by 9.87% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 5.20% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 3.73% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 0.44% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 0.83% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 0.19% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 4.31% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 4.87% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 0.16% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 11.26% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 0.33% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 7.90% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 2.14% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 0.53% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 4.30% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 4.66% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 0.13% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 0.07% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 7.68% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 0.75% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 0.54% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 20.05% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 0.58% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 19.78% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 9.97% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 4.56% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 4.30% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 0.57% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 0.53% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 0.63% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 3.98% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 0.39% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 0.84% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 5.36% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 2.98% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 9.40% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 4.57% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 10.26% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 1.05% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 0.64% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 1.11% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 0.01% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 0.61% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 0.15% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 2.72% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 18.67% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 12.12% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 6.31% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 9.20% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 3.05% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 3.49% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 0.41% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 0.13% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 0.30% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 24.20% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 0.40% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 0.30% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 10.54% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 5.17% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 10.16% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 4.68% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 0.87% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 1.11% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 0.34% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 2.06% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 0.25% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 0.74% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 1.72% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 0.21% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 17.92% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 10.25% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 5.30% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 9.93% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 3.58% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 4.05% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 1.39% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 1.17% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.97% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 4.56% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 1.71% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.10% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 13.76% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 12.67% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 4.96% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 10.30% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 1.74% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 2.30% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 0.34% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 0.11% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 3.55% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 4.77% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 1.57% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.01% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 0.81% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 19.69% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 6.54% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 0.49% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 1.01% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 3.30% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 0.59% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 0.72% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 0.03% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 0.03% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 1.23% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 0.38% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 13.77% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 10.71% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 4.45% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 7.07% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 1.57% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 1.71% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 0.52% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 0.92% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 0.70% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 2.33% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 0.28% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 0.24% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 12.70% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 0.94% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 7.20% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 1.58% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 1.91% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 1.90% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 0.23% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 0.86% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 0.49% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 1.71% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 0.76% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 0.26% compared to the last run.
---
Report generated on: 2026-02-02T15:07:17.931407
