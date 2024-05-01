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

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| xxd | 64 | 1.38 |  |
| xxd | 64 | 2.22 | -r |
| xxd | 64 | 4.82 |  |
| xxd | 64 | 3.83 | -r |
| xxd | 64 | 1.32 |  |
| xxd | 64 | 0.96 | -p |
| xxd | 64 | 4.88 | -i |
| xxd | 64 | 1.30 | -e |
| xxd | 64 | 3.12 | -b |
| xxd | 64 | 1.32 | -u |
| xxd | 64 | 1.45 | -E |
| tinyxxd | 64 | 1.10 |  |
| tinyxxd | 64 | 2.25 | -r |
| tinyxxd | 64 | 4.98 |  |
| tinyxxd | 64 | 3.63 | -r |
| tinyxxd | 64 | 1.06 |  |
| tinyxxd | 64 | 0.83 | -p |
| tinyxxd | 64 | 4.82 | -i |
| tinyxxd | 64 | 1.12 | -e |
| tinyxxd | 64 | 2.96 | -b |
| tinyxxd | 64 | 1.07 | -u |
| tinyxxd | 64 | 1.23 | -E |
| tinyxxd | 32 | 0.56 |  |
| tinyxxd | 32 | 1.04 | -r |
| tinyxxd | 32 | 1.94 |  |
| tinyxxd | 32 | 1.88 | -r |
| tinyxxd | 32 | 0.54 |  |
| tinyxxd | 32 | 0.42 | -p |
| tinyxxd | 32 | 2.39 | -i |
| tinyxxd | 32 | 0.56 | -e |
| tinyxxd | 32 | 1.44 | -b |
| tinyxxd | 32 | 0.54 | -u |
| tinyxxd | 32 | 0.67 | -E |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.25 | -r |
| xxd | 32 | 2.10 |  |
| xxd | 32 | 2.00 | -r |
| xxd | 32 | 0.65 |  |
| xxd | 32 | 0.48 | -p |
| xxd | 32 | 2.46 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.51 | -b |
| xxd | 32 | 0.67 | -u |
| xxd | 32 | 0.73 | -E |
| xxd | 16 | 0.35 |  |
| xxd | 16 | 0.55 | -r |
| xxd | 16 | 0.93 |  |
| xxd | 16 | 0.99 | -r |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.22 | -i |
| xxd | 16 | 0.33 | -e |
| xxd | 16 | 0.78 | -b |
| xxd | 16 | 0.34 | -u |
| xxd | 16 | 0.39 | -E |
| tinyxxd | 16 | 0.29 |  |
| tinyxxd | 16 | 0.52 | -r |
| tinyxxd | 16 | 0.85 |  |
| tinyxxd | 16 | 0.91 | -r |
| tinyxxd | 16 | 0.27 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.22 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.72 | -b |
| tinyxxd | 16 | 0.27 | -u |
| tinyxxd | 16 | 0.31 | -E |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.49 |  |
| xxd | 8 | 0.49 | -r |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.16 | -e |
| xxd | 8 | 0.38 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.18 | -E |
| tinyxxd | 8 | 0.15 |  |
| tinyxxd | 8 | 0.25 | -r |
| tinyxxd | 8 | 0.43 |  |
| tinyxxd | 8 | 0.46 | -r |
| tinyxxd | 8 | 0.14 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.61 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.14 | -u |
| tinyxxd | 8 | 0.16 | -E |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.48 |  |
| xxd | 4 | 0.34 | -r |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.46 | -i |
| xxd | 4 | 0.08 | -e |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.13 | -r |
| tinyxxd | 4 | 0.20 |  |
| tinyxxd | 4 | 0.24 | -r |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.31 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.18 | -b |
| tinyxxd | 4 | 0.07 | -u |
| tinyxxd | 4 | 0.08 | -E |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.11 |  |
| xxd | 2 | 0.12 | -r |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.04 | -e |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.05 | -E |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.07 | -r |
| tinyxxd | 2 | 0.10 |  |
| tinyxxd | 2 | 0.12 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.09 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.04 | -E |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.06 |  |
| xxd | 1 | 0.06 | -r |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.04 | -r |
| tinyxxd | 1 | 0.05 |  |
| tinyxxd | 1 | 0.06 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 5.46% faster with no flag.
- For sample size 64 MiB, tinyxxd was 15.46% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 16.73% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 5.55% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 23.50% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 18.27% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 12.86% faster with no flag.
- For sample size 32 MiB, tinyxxd was 10.91% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 15.23% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 20.80% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 24.14% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 9.14% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 14.27% faster with no flag.
- For sample size 16 MiB, tinyxxd was 8.23% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 15.18% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 15.45% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 9.13% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 29.26% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 26.97% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 15.35% faster with no flag.
- For sample size 8 MiB, tinyxxd was 7.53% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 14.81% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 14.75% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 24.55% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 16.30% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 88.76% faster with no flag.
- For sample size 4 MiB, tinyxxd was 32.48% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 14.22% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 49.46% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 14.61% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 20.64% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 18.23% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 10.64% faster with no flag.
- For sample size 2 MiB, tinyxxd was 7.28% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 13.34% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 14.51% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 21.24% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 15.53% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 10.77% faster with no flag.
- For sample size 1 MiB, tinyxxd was 6.56% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 10.10% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.53% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 15.04% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 11.21% faster with flags '-E'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 6.28% faster than xxd.
- For sample 32 MiB, tinyxxd was 10.16% faster than xxd.
- For sample 16 MiB, tinyxxd was 10.77% faster than xxd.
- For sample 8 MiB, tinyxxd was 8.52% faster than xxd.
- For sample 4 MiB, tinyxxd was 42.67% faster than xxd.
- For sample 2 MiB, tinyxxd was 8.22% faster than xxd.
- For sample 1 MiB, tinyxxd was 6.70% faster than xxd.

### Performance by flag
- tinyxxd was 11.06% faster with no flag.
- tinyxxd was 6.84% faster '-r'.
- tinyxxd was 15.19% faster '-p'.
- tinyxxd was 17.24% faster '-e'.
- tinyxxd was 5.34% faster '-b'.
- tinyxxd was 24.23% faster '-u'.
- tinyxxd was 16.67% faster '-E'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 8.25% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 45.29% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 276.70% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 5.60% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 3.39% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 0.88% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 0.56% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 1.93% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 6.50% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 5.99% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 0.94% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 3.53% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 37.90% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 369.28% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 0.32% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 0.19% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 0.40% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 0.38% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 1.35% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 1.75% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 1.22% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 0.54% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 5.16% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 41.71% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 264.81% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 5.18% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 1.43% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 1.66% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 7.55% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 0.40% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 2.83% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 9.77% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 2.83% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 36.19% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 223.04% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 2.27% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 0.59% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 0.10% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 0.22% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 4.37% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 1.39% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 0.58% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 0.15% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 9.22% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 43.51% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 188.55% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 1.47% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 3.39% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 0.57% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 0.88% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 0.16% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 4.75% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 4.95% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 7.66% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 9.44% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 42.36% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 217.99% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 1.22% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 2.58% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 0.54% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 0.92% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 1.28% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 2.70% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 1.48% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 0.20% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 0.71% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 41.73% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 193.11% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 3.48% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 1.74% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 0.43% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 0.69% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 1.04% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 1.42% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 1.54% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 0.35% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 9.38% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 46.06% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 219.02% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 2.27% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 4.89% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 0.30% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 2.33% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 9.91% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 0.01% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 1.37% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 1.36% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 3.54% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 41.06% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 458.47% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 41.15% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 3.77% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 1.04% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 50.58% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 0.23% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 3.70% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 0.59% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 0.99% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 5.44% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 43.40% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 195.68% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 4.94% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 1.34% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 1.38% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 1.32% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 0.17% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.85% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 0.99% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 0.70% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 3.52% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 71.33% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 139.40% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 51.91% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 1.82% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 1.24% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 1.21% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 1.49% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.82% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 3.14% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 0.53% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 5.01% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 43.42% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 183.37% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 0.06% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 2.53% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 0.00% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 0.37% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 0.63% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.78% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 2.21% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 1.20% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 4.37% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 39.43% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 127.81% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 0.40% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 1.81% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 1.44% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 0.30% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 0.00% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 0.29% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 3.41% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 0.74% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 5.16% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 41.14% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 164.30% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 1.96% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 2.33% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 4.45% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 1.05% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 7.48% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 1.76% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 2.12% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 1.49% compared to the last run.
---
Report generated on: 2024-05-01T17:30:08.775112
