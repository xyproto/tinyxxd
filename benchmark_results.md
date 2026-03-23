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
| tinyxxd | 64 | 0.90 |  |
| tinyxxd | 64 | 0.90 | -r |
| tinyxxd | 64 | 5.50 | -b |
| tinyxxd | 64 | 1.74 | -r -b |
| tinyxxd | 64 | 1.20 |  |
| tinyxxd | 64 | 0.97 | -p |
| tinyxxd | 64 | 4.70 | -i |
| tinyxxd | 64 | 1.14 | -e |
| tinyxxd | 64 | 3.25 | -b |
| tinyxxd | 64 | 0.88 | -u |
| tinyxxd | 64 | 1.07 | -E |
| tinyxxd | 64 | 4.29 | -b -i |
| xxd | 64 | 1.37 |  |
| xxd | 64 | 2.25 | -r |
| xxd | 64 | 4.21 | -b |
| xxd | 64 | 4.75 | -r -b |
| xxd | 64 | 1.67 |  |
| xxd | 64 | 1.07 | -p |
| xxd | 64 | 5.03 | -i |
| xxd | 64 | 1.35 | -e |
| xxd | 64 | 2.76 | -b |
| xxd | 64 | 1.35 | -u |
| xxd | 64 | 1.52 | -E |
| xxd | 64 | 5.61 | -b -i |
| tinyxxd | 32 | 0.45 |  |
| tinyxxd | 32 | 0.43 | -r |
| tinyxxd | 32 | 2.08 | -b |
| tinyxxd | 32 | 0.90 | -r -b |
| tinyxxd | 32 | 0.54 |  |
| tinyxxd | 32 | 0.48 | -p |
| tinyxxd | 32 | 2.36 | -i |
| tinyxxd | 32 | 0.57 | -e |
| tinyxxd | 32 | 1.62 | -b |
| tinyxxd | 32 | 0.44 | -u |
| tinyxxd | 32 | 0.53 | -E |
| tinyxxd | 32 | 2.15 | -b -i |
| xxd | 32 | 0.66 |  |
| xxd | 32 | 1.14 | -r |
| xxd | 32 | 2.05 | -b |
| xxd | 32 | 2.35 | -r -b |
| xxd | 32 | 0.77 |  |
| xxd | 32 | 0.56 | -p |
| xxd | 32 | 2.53 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.37 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.74 | -E |
| xxd | 32 | 2.84 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.88 | -b |
| xxd | 16 | 1.14 | -r -b |
| xxd | 16 | 0.39 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.29 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.68 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.43 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.22 | -r |
| tinyxxd | 16 | 0.98 | -b |
| tinyxxd | 16 | 0.43 | -r -b |
| tinyxxd | 16 | 0.26 |  |
| tinyxxd | 16 | 0.24 | -p |
| tinyxxd | 16 | 1.16 | -i |
| tinyxxd | 16 | 0.30 | -e |
| tinyxxd | 16 | 0.82 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.26 | -E |
| tinyxxd | 16 | 1.09 | -b -i |
| tinyxxd | 8 | 0.12 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.45 | -b |
| tinyxxd | 8 | 0.22 | -r -b |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.13 | -p |
| tinyxxd | 8 | 0.60 | -i |
| tinyxxd | 8 | 0.15 | -e |
| tinyxxd | 8 | 0.41 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.15 | -E |
| tinyxxd | 8 | 0.54 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.60 | -r -b |
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
| tinyxxd | 4 | 0.23 | -b |
| tinyxxd | 4 | 0.11 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.07 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.21 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.27 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.16 | -r |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.29 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.32 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.36 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.06 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.04 | -E |
| tinyxxd | 2 | 0.14 | -b -i |
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
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 44.62% faster with no flag.
- For sample size 64 MiB, tinyxxd was 151.45% faster with flags '-r'.
- For sample size 64 MiB, xxd was 25.44% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 173.24% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 10.87% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 7.03% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 18.29% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 54.52% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 41.50% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 30.68% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 45.54% faster with no flag.
- For sample size 32 MiB, tinyxxd was 165.27% faster with flags '-r'.
- For sample size 32 MiB, xxd was 8.41% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 162.07% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 15.04% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 7.33% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 17.88% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 50.89% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 39.98% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 32.21% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 49.53% faster with no flag.
- For sample size 16 MiB, tinyxxd was 160.24% faster with flags '-r'.
- For sample size 16 MiB, xxd was 15.83% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 162.59% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 15.55% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 10.59% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 11.55% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 52.91% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 42.34% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 31.77% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 28.30% faster with no flag.
- For sample size 8 MiB, tinyxxd was 163.40% faster with flags '-r'.
- For sample size 8 MiB, xxd was 20.66% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 167.26% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 12.81% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 5.36% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 18.20% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 50.79% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 29.14% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 34.14% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 45.94% faster with no flag.
- For sample size 4 MiB, tinyxxd was 184.28% faster with flags '-r'.
- For sample size 4 MiB, xxd was 20.55% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 156.15% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 13.35% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 8.23% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 18.13% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 47.85% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 38.57% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 34.26% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 36.75% faster with no flag.
- For sample size 2 MiB, tinyxxd was 146.86% faster with flags '-r'.
- For sample size 2 MiB, xxd was 18.25% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 151.97% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 11.25% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 5.66% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 14.54% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 44.49% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 36.68% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 31.99% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 37.53% faster with no flag.
- For sample size 1 MiB, tinyxxd was 131.84% faster with flags '-r'.
- For sample size 1 MiB, xxd was 17.29% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 146.89% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 11.98% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 7.90% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 13.90% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 41.98% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 33.91% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 32.40% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 24.17% faster than xxd.
- For sample 32 MiB, tinyxxd was 30.29% faster than xxd.
- For sample 16 MiB, tinyxxd was 29.28% faster than xxd.
- For sample 8 MiB, tinyxxd was 26.92% faster than xxd.
- For sample 4 MiB, tinyxxd was 29.53% faster than xxd.
- For sample 2 MiB, tinyxxd was 27.07% faster than xxd.
- For sample 1 MiB, tinyxxd was 27.21% faster than xxd.

### Performance by flag
- tinyxxd was 44.14% faster with no flag.
- tinyxxd was 157.46% faster with flag '-r'.
- xxd was 19.39% faster with flag '-b'.
- tinyxxd was 167.50% faster with flag '-r -b'.
- tinyxxd was 12.73% faster with flag '-p'.
- tinyxxd was 7.47% faster with flag '-i'.
- tinyxxd was 17.18% faster with flag '-e'.
- tinyxxd was 52.64% faster with flag '-u'.
- tinyxxd was 40.12% faster with flag '-E'.
- tinyxxd was 31.57% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 20.77% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 4.29% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 69.63% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 0.01% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 4.83% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 0.69% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 0.93% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 0.99% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 0.29% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 2.08% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 0.86% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 0.89% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 22.28% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 0.86% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 52.76% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 2.37% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 5.59% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 3.55% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 0.05% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 0.50% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 0.01% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 1.58% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 1.99% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 0.22% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 17.20% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 0.62% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 28.40% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 2.38% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 0.49% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 0.46% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 1.38% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 0.56% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 0.22% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 0.34% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 0.57% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 0.75% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 12.85% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 2.33% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 50.18% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 1.03% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 0.40% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 5.91% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 1.54% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 3.52% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 0.87% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 0.39% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 3.41% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 1.58% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 10.81% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 0.58% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 28.70% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 3.94% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 4.14% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 3.02% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 2.55% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 0.83% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 0.25% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 0.03% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 5.75% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 2.03% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 15.11% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 1.60% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 21.31% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 0.31% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 1.38% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 0.05% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 6.31% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 6.71% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 1.47% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 0.34% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 2.51% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 1.89% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 12.21% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 3.32% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 10.37% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 1.56% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 24.37% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 1.66% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 1.33% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 0.69% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 1.30% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 2.93% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 6.43% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 0.27% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 12.63% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 2.58% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 7.23% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 0.01% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 0.19% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 0.20% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 1.52% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 0.02% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 0.49% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 1.21% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 0.66% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 0.51% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 15.10% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 2.86% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 9.56% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 2.07% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 1.31% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 1.26% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 0.03% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 0.47% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 1.07% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 2.85% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 0.96% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.82% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 12.83% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 9.37% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 6.02% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 0.03% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 3.44% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 0.49% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 8.17% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 0.03% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 0.05% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 0.29% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 0.59% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 2.50% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 9.37% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 0.78% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 6.91% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 2.08% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 3.05% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 2.04% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 1.38% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 1.60% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 1.60% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 3.13% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 2.82% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 0.11% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 10.17% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 0.23% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 8.02% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 0.69% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 0.13% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 0.51% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 0.59% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 0.31% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.39% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 2.40% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 0.38% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 3.16% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 13.47% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 3.37% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 4.63% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 0.62% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 0.93% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 0.95% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 0.09% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 2.47% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 0.39% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 0.50% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 3.00% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 0.59% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 10.22% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 3.27% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 7.66% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 0.52% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 0.84% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 1.39% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 1.93% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 0.75% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 0.01% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 0.02% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 1.71% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 0.63% compared to the last run.
---
Report generated on: 2026-03-23T15:03:27.971646
