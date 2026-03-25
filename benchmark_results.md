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
| xxd | 64 | 1.34 |  |
| xxd | 64 | 2.19 | -r |
| xxd | 64 | 4.43 | -b |
| xxd | 64 | 4.59 | -r -b |
| xxd | 64 | 1.66 |  |
| xxd | 64 | 1.08 | -p |
| xxd | 64 | 5.07 | -i |
| xxd | 64 | 1.34 | -e |
| xxd | 64 | 2.73 | -b |
| xxd | 64 | 1.37 | -u |
| xxd | 64 | 1.49 | -E |
| xxd | 64 | 5.71 | -b -i |
| tinyxxd | 64 | 0.88 |  |
| tinyxxd | 64 | 0.80 | -r |
| tinyxxd | 64 | 5.00 | -b |
| tinyxxd | 64 | 1.66 | -r -b |
| tinyxxd | 64 | 1.17 |  |
| tinyxxd | 64 | 0.88 | -p |
| tinyxxd | 64 | 4.79 | -i |
| tinyxxd | 64 | 1.13 | -e |
| tinyxxd | 64 | 3.29 | -b |
| tinyxxd | 64 | 0.83 | -u |
| tinyxxd | 64 | 0.98 | -E |
| tinyxxd | 64 | 3.49 | -b -i |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.11 | -r |
| xxd | 32 | 1.73 | -b |
| xxd | 32 | 2.39 | -r -b |
| xxd | 32 | 0.77 |  |
| xxd | 32 | 0.56 | -p |
| xxd | 32 | 2.56 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.37 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.74 | -E |
| xxd | 32 | 2.85 | -b -i |
| tinyxxd | 32 | 0.43 |  |
| tinyxxd | 32 | 0.46 | -r |
| tinyxxd | 32 | 2.46 | -b |
| tinyxxd | 32 | 0.82 | -r -b |
| tinyxxd | 32 | 0.51 |  |
| tinyxxd | 32 | 0.44 | -p |
| tinyxxd | 32 | 2.32 | -i |
| tinyxxd | 32 | 0.57 | -e |
| tinyxxd | 32 | 1.64 | -b |
| tinyxxd | 32 | 0.43 | -u |
| tinyxxd | 32 | 0.49 | -E |
| tinyxxd | 32 | 1.78 | -b -i |
| xxd | 16 | 0.34 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.75 | -b |
| xxd | 16 | 1.14 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.26 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.69 | -b |
| xxd | 16 | 0.34 | -u |
| xxd | 16 | 0.38 | -E |
| xxd | 16 | 1.45 | -b -i |
| tinyxxd | 16 | 0.21 |  |
| tinyxxd | 16 | 0.20 | -r |
| tinyxxd | 16 | 0.95 | -b |
| tinyxxd | 16 | 0.42 | -r -b |
| tinyxxd | 16 | 0.26 |  |
| tinyxxd | 16 | 0.22 | -p |
| tinyxxd | 16 | 1.17 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.83 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.25 | -E |
| tinyxxd | 16 | 0.86 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.10 | -r |
| tinyxxd | 8 | 0.45 | -b |
| tinyxxd | 8 | 0.21 | -r -b |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.41 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.13 | -E |
| tinyxxd | 8 | 0.43 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.40 | -b |
| xxd | 8 | 0.58 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.63 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.35 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.72 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.20 | -b |
| xxd | 4 | 0.29 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.36 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.11 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.21 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.22 | -b -i |
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
| tinyxxd | 2 | 0.11 | -b -i |
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
| tinyxxd | 1 | 0.06 | -b -i |
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
- For sample size 64 MiB, tinyxxd was 46.51% faster with no flag.
- For sample size 64 MiB, tinyxxd was 173.75% faster with flags '-r'.
- For sample size 64 MiB, xxd was 15.78% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 176.26% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 21.83% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 5.92% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 18.63% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 64.19% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 51.35% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 63.46% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 53.62% faster with no flag.
- For sample size 32 MiB, tinyxxd was 142.40% faster with flags '-r'.
- For sample size 32 MiB, xxd was 32.14% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 189.97% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 26.88% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 10.34% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 18.25% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 54.82% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 52.13% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 60.36% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 53.95% faster with no flag.
- For sample size 16 MiB, tinyxxd was 183.43% faster with flags '-r'.
- For sample size 16 MiB, xxd was 23.98% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 171.83% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 25.51% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 7.68% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 21.79% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 52.15% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 49.57% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 69.56% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 48.56% faster with no flag.
- For sample size 8 MiB, tinyxxd was 186.96% faster with flags '-r'.
- For sample size 8 MiB, xxd was 14.20% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 174.77% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 24.72% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 7.26% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 20.56% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 49.24% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 47.03% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 68.11% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 49.52% faster with no flag.
- For sample size 4 MiB, tinyxxd was 168.91% faster with flags '-r'.
- For sample size 4 MiB, xxd was 15.64% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 160.57% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 24.20% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 6.15% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 20.47% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 54.76% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 48.68% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 66.48% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 40.60% faster with no flag.
- For sample size 2 MiB, tinyxxd was 162.03% faster with flags '-r'.
- For sample size 2 MiB, xxd was 18.69% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 169.24% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 21.14% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 6.15% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 18.05% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 48.70% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 45.33% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 65.71% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 39.97% faster with no flag.
- For sample size 1 MiB, tinyxxd was 151.09% faster with flags '-r'.
- For sample size 1 MiB, xxd was 18.09% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 159.23% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 20.57% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 7.01% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 16.15% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 44.90% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 42.11% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 62.99% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 32.48% faster than xxd.
- For sample 32 MiB, tinyxxd was 30.33% faster than xxd.
- For sample 16 MiB, tinyxxd was 34.80% faster than xxd.
- For sample 8 MiB, tinyxxd was 36.83% faster than xxd.
- For sample 4 MiB, tinyxxd was 35.52% faster than xxd.
- For sample 2 MiB, tinyxxd was 34.04% faster than xxd.
- For sample 1 MiB, tinyxxd was 33.01% faster than xxd.

### Performance by flag
- tinyxxd was 49.15% faster with no flag.
- tinyxxd was 166.57% faster with flag '-r'.
- xxd was 20.52% faster with flag '-b'.
- tinyxxd was 178.22% faster with flag '-r -b'.
- tinyxxd was 23.80% faster with flag '-p'.
- tinyxxd was 7.34% faster with flag '-i'.
- tinyxxd was 19.08% faster with flag '-e'.
- tinyxxd was 58.49% faster with flag '-u'.
- tinyxxd was 50.74% faster with flag '-E'.
- tinyxxd was 63.83% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 21.66% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 4.22% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 98.79% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 33.00% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 3.09% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 39.74% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 22.32% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 16.50% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 22.27% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 19.88% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 13.98% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 36.43% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 10.11% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 7.20% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 135.63% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 20.06% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 19.91% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 39.25% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 16.13% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 24.96% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 54.89% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 7.76% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 23.81% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 32.25% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 5.03% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 4.87% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 56.61% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 38.78% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 21.43% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 48.27% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 19.02% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 16.33% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 23.84% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 16.61% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 11.59% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 37.57% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 6.50% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 8.67% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 136.65% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 16.80% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 10.91% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 39.63% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 13.80% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 21.92% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 57.39% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 13.31% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 21.31% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 33.81% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 8.57% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 8.23% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 33.99% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 31.96% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 23.16% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 46.41% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 22.03% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 18.87% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 22.19% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 16.73% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 14.08% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 40.43% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 3.85% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 3.31% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 83.70% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 18.44% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 19.87% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 39.25% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 14.36% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 14.21% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 59.41% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 15.53% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 25.24% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 31.89% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 3.71% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 4.64% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 66.94% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 17.79% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 20.42% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 25.02% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 14.68% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 23.42% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 53.41% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 16.99% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 23.86% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 30.40% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 7.52% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 10.25% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 43.65% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 32.00% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 19.34% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 46.18% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 22.18% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 17.80% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 23.64% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 11.33% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 12.39% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 37.91% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 9.16% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 9.40% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 38.46% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 29.65% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 22.89% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 45.28% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 18.80% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 18.79% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 23.57% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 16.78% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 15.94% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 38.22% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 0.10% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 3.52% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 66.68% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 11.01% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 23.45% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 38.57% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 13.46% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 22.32% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 58.14% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 10.75% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 25.59% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 31.59% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 8.01% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 2.42% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 66.21% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 19.70% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 22.36% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 40.35% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 14.99% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 26.07% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 56.90% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 15.08% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 25.81% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 30.80% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 8.32% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 10.41% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 31.36% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 36.74% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 20.62% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 44.01% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 20.52% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 18.22% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 22.92% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 17.46% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 16.06% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 38.00% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 10.31% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 0.32% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 63.41% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 21.95% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 24.47% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 36.72% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 15.60% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 25.43% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 55.86% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 15.68% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 26.34% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 31.87% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 8.94% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 11.41% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 30.18% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 36.93% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 22.63% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 43.18% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 20.39% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 21.82% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 24.30% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 20.38% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 18.86% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 38.40% compared to the last run.
---
Report generated on: 2026-03-25T09:03:18.498751
