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
| xxd | 64 | 1.37 |  |
| xxd | 64 | 2.28 | -r |
| xxd | 64 | 4.07 | -b |
| xxd | 64 | 4.72 | -r -b |
| xxd | 64 | 1.75 |  |
| xxd | 64 | 1.06 | -p |
| xxd | 64 | 4.89 | -i |
| xxd | 64 | 1.33 | -e |
| xxd | 64 | 2.74 | -b |
| xxd | 64 | 1.35 | -u |
| xxd | 64 | 1.49 | -E |
| xxd | 64 | 5.95 | -b -i |
| tinyxxd | 64 | 0.90 |  |
| tinyxxd | 64 | 0.87 | -r |
| tinyxxd | 64 | 4.58 | -b |
| tinyxxd | 64 | 1.75 | -r -b |
| tinyxxd | 64 | 1.15 |  |
| tinyxxd | 64 | 0.96 | -p |
| tinyxxd | 64 | 4.69 | -i |
| tinyxxd | 64 | 1.09 | -e |
| tinyxxd | 64 | 3.17 | -b |
| tinyxxd | 64 | 0.86 | -u |
| tinyxxd | 64 | 1.07 | -E |
| tinyxxd | 64 | 4.16 | -b -i |
| xxd | 32 | 0.66 |  |
| xxd | 32 | 1.16 | -r |
| xxd | 32 | 1.78 | -b |
| xxd | 32 | 2.25 | -r -b |
| xxd | 32 | 0.76 |  |
| xxd | 32 | 0.55 | -p |
| xxd | 32 | 2.43 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.33 | -b |
| xxd | 32 | 0.65 | -u |
| xxd | 32 | 0.73 | -E |
| xxd | 32 | 2.98 | -b -i |
| tinyxxd | 32 | 0.44 |  |
| tinyxxd | 32 | 0.43 | -r |
| tinyxxd | 32 | 2.17 | -b |
| tinyxxd | 32 | 0.95 | -r -b |
| tinyxxd | 32 | 0.52 |  |
| tinyxxd | 32 | 0.48 | -p |
| tinyxxd | 32 | 2.31 | -i |
| tinyxxd | 32 | 0.57 | -e |
| tinyxxd | 32 | 1.60 | -b |
| tinyxxd | 32 | 0.45 | -u |
| tinyxxd | 32 | 0.53 | -E |
| tinyxxd | 32 | 2.19 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.22 | -r |
| tinyxxd | 16 | 0.92 | -b |
| tinyxxd | 16 | 0.44 | -r -b |
| tinyxxd | 16 | 0.27 |  |
| tinyxxd | 16 | 0.24 | -p |
| tinyxxd | 16 | 1.16 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.80 | -b |
| tinyxxd | 16 | 0.21 | -u |
| tinyxxd | 16 | 0.26 | -E |
| tinyxxd | 16 | 1.02 | -b -i |
| xxd | 16 | 0.36 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.73 | -b |
| xxd | 16 | 1.18 | -r -b |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.22 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.46 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.43 | -b |
| tinyxxd | 8 | 0.22 | -r -b |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.13 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.42 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.13 | -E |
| tinyxxd | 8 | 0.51 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.59 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.13 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.33 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.74 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.11 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| xxd | 4 | 0.08 |  |
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
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.06 | -r -b |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.03 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.15 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.18 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
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
- For sample size 64 MiB, tinyxxd was 52.59% faster with no flag.
- For sample size 64 MiB, tinyxxd was 163.19% faster with flags '-r'.
- For sample size 64 MiB, xxd was 13.78% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 169.68% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 10.44% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 21.95% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 55.96% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 39.63% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 42.81% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 46.62% faster with no flag.
- For sample size 32 MiB, tinyxxd was 166.43% faster with flags '-r'.
- For sample size 32 MiB, xxd was 21.38% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 136.42% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 15.33% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 19.56% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 44.13% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 37.56% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 36.11% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 49.98% faster with no flag.
- For sample size 16 MiB, tinyxxd was 171.47% faster with flags '-r'.
- For sample size 16 MiB, xxd was 23.03% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 168.20% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 14.55% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 23.18% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 55.22% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 42.28% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 43.24% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 46.36% faster with no flag.
- For sample size 8 MiB, tinyxxd was 165.37% faster with flags '-r'.
- For sample size 8 MiB, xxd was 21.58% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 162.84% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 21.95% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 48.20% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 41.28% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 44.87% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 43.21% faster with no flag.
- For sample size 4 MiB, tinyxxd was 164.98% faster with flags '-r'.
- For sample size 4 MiB, xxd was 18.55% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 151.05% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 12.21% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 15.35% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 52.07% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 39.43% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 42.46% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 41.86% faster with no flag.
- For sample size 2 MiB, tinyxxd was 156.51% faster with flags '-r'.
- For sample size 2 MiB, xxd was 18.81% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 157.39% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 10.43% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 18.29% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 22.16% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 45.92% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 40.12% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 45.60% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 41.92% faster with no flag.
- For sample size 1 MiB, tinyxxd was 112.24% faster with flags '-r'.
- For sample size 1 MiB, xxd was 15.22% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 169.03% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 12.96% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.75% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 18.15% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 44.44% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 39.08% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 44.02% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 30.71% faster than xxd.
- For sample 32 MiB, tinyxxd was 26.04% faster than xxd.
- For sample 16 MiB, tinyxxd was 30.76% faster than xxd.
- For sample 8 MiB, tinyxxd was 30.13% faster than xxd.
- For sample 4 MiB, tinyxxd was 29.65% faster than xxd.
- For sample 2 MiB, tinyxxd was 33.09% faster than xxd.
- For sample 1 MiB, tinyxxd was 31.38% faster than xxd.

### Performance by flag
- tinyxxd was 49.86% faster with no flag.
- tinyxxd was 164.59% faster with flag '-r'.
- xxd was 17.32% faster with flag '-b'.
- tinyxxd was 159.40% faster with flag '-r -b'.
- tinyxxd was 11.88% faster with flag '-p'.
- tinyxxd was 21.24% faster with flag '-e'.
- tinyxxd was 51.90% faster with flag '-u'.
- tinyxxd was 39.54% faster with flag '-E'.
- tinyxxd was 41.27% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 22.18% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 0.36% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 48.38% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 3.68% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 0.41% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 4.11% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 0.66% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 0.18% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 0.28% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 1.97% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 0.39% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 0.59% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 24.82% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 5.56% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 45.70% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 6.31% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 3.94% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 4.10% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 1.17% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 0.29% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 0.84% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 6.61% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 1.30% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 1.90% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 12.20% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 1.33% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 33.11% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 6.18% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 0.44% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 0.37% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 1.71% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 0.11% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.65% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 2.10% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 1.18% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 2.38% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 20.19% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 10.17% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 38.38% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 10.50% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 5.23% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 6.88% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 0.29% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 3.64% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 2.15% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 2.73% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 0.01% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 7.74% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 16.47% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 3.93% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 17.53% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 6.58% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 0.17% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 7.17% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 0.12% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 0.63% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 2.51% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 4.51% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 9.52% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 0.22% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 5.96% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 1.37% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 8.71% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 0.75% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 1.78% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 3.82% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 0.82% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 0.79% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 0.87% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 0.13% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 0.43% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 0.88% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 19.97% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 5.19% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 8.18% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 6.52% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 3.45% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 10.02% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 0.53% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 6.80% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 0.14% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 2.12% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 0.41% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 11.74% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 2.68% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 8.49% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 0.50% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 0.37% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 4.87% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 1.54% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 0.02% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 0.07% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 0.80% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 0.13% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 2.20% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 16.03% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 3.98% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 7.69% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 6.85% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 2.57% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 8.55% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 1.13% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 4.48% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.37% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 3.67% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 0.70% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 0.44% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 12.56% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 1.19% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 0.63% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 0.74% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 0.73% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 1.26% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 0.61% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 0.08% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 6.15% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 17.29% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 0.13% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 1.86% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 13.37% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 4.98% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 7.96% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 7.25% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 2.41% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 6.50% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 4.03% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 0.17% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 2.19% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 0.24% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 1.95% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 0.89% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 12.00% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 0.69% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 5.57% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 0.12% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 1.30% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 3.15% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 16.30% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 0.74% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 0.73% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 0.22% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 0.27% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 0.59% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 7.86% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 2.86% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 10.09% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 9.94% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 2.77% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 1.65% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 0.81% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 1.56% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 1.55% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 0.43% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 0.88% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 0.72% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 14.82% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 16.60% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 5.20% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 4.60% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 1.48% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 5.45% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 0.56% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 1.77% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 0.80% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 2.99% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 1.37% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 0.70% compared to the last run.
---
Report generated on: 2026-02-02T15:24:51.974599
