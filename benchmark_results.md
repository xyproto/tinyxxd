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
| tinyxxd | 64 | 0.84 |  |
| tinyxxd | 64 | 0.80 | -r |
| tinyxxd | 64 | 5.89 | -b |
| tinyxxd | 64 | 1.71 | -r -b |
| tinyxxd | 64 | 1.18 |  |
| tinyxxd | 64 | 0.91 | -p |
| tinyxxd | 64 | 4.76 | -i |
| tinyxxd | 64 | 1.11 | -e |
| tinyxxd | 64 | 3.27 | -b |
| tinyxxd | 64 | 0.86 | -u |
| tinyxxd | 64 | 1.03 | -E |
| tinyxxd | 64 | 4.15 | -b -i |
| xxd | 64 | 1.34 |  |
| xxd | 64 | 2.44 | -r |
| xxd | 64 | 4.03 | -b |
| xxd | 64 | 4.73 | -r -b |
| xxd | 64 | 1.79 |  |
| xxd | 64 | 1.11 | -p |
| xxd | 64 | 5.03 | -i |
| xxd | 64 | 1.38 | -e |
| xxd | 64 | 2.81 | -b |
| xxd | 64 | 1.34 | -u |
| xxd | 64 | 1.51 | -E |
| xxd | 64 | 5.58 | -b -i |
| tinyxxd | 32 | 0.44 |  |
| tinyxxd | 32 | 0.40 | -r |
| tinyxxd | 32 | 2.06 | -b |
| tinyxxd | 32 | 0.82 | -r -b |
| tinyxxd | 32 | 0.51 |  |
| tinyxxd | 32 | 0.45 | -p |
| tinyxxd | 32 | 2.35 | -i |
| tinyxxd | 32 | 0.56 | -e |
| tinyxxd | 32 | 1.66 | -b |
| tinyxxd | 32 | 0.44 | -u |
| tinyxxd | 32 | 0.52 | -E |
| tinyxxd | 32 | 2.04 | -b -i |
| xxd | 32 | 0.68 |  |
| xxd | 32 | 1.17 | -r |
| xxd | 32 | 3.10 | -b |
| xxd | 32 | 2.30 | -r -b |
| xxd | 32 | 0.76 |  |
| xxd | 32 | 0.56 | -p |
| xxd | 32 | 2.47 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.37 | -b |
| xxd | 32 | 0.67 | -u |
| xxd | 32 | 0.75 | -E |
| xxd | 32 | 2.92 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.77 | -b |
| xxd | 16 | 1.15 | -r -b |
| xxd | 16 | 0.39 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.25 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.69 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.38 | -E |
| xxd | 16 | 1.44 | -b -i |
| tinyxxd | 16 | 0.26 |  |
| tinyxxd | 16 | 0.22 | -r |
| tinyxxd | 16 | 0.87 | -b |
| tinyxxd | 16 | 0.41 | -r -b |
| tinyxxd | 16 | 0.26 |  |
| tinyxxd | 16 | 0.23 | -p |
| tinyxxd | 16 | 1.17 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.81 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.26 | -E |
| tinyxxd | 16 | 1.03 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.10 | -r |
| tinyxxd | 8 | 0.43 | -b |
| tinyxxd | 8 | 0.21 | -r -b |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.40 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.13 | -E |
| tinyxxd | 8 | 0.52 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.63 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.63 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.71 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.11 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.20 | -b |
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
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.04 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
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
| xxd | 2 | 0.19 | -b -i |
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
- For sample size 64 MiB, tinyxxd was 55.06% faster with no flag.
- For sample size 64 MiB, tinyxxd was 206.16% faster with flags '-r'.
- For sample size 64 MiB, xxd was 33.80% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 176.99% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 21.70% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 5.73% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 24.80% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 56.26% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 47.00% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 34.51% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 51.77% faster with no flag.
- For sample size 32 MiB, tinyxxd was 191.99% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 20.25% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 181.40% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 23.06% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 20.11% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 52.56% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 44.00% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 43.03% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 37.91% faster with no flag.
- For sample size 16 MiB, tinyxxd was 165.39% faster with flags '-r'.
- For sample size 16 MiB, xxd was 15.40% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 181.86% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 23.22% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 7.10% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 21.51% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 52.75% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 46.58% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 39.24% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 47.20% faster with no flag.
- For sample size 8 MiB, tinyxxd was 176.20% faster with flags '-r'.
- For sample size 8 MiB, xxd was 18.02% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 200.94% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 21.75% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 6.71% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 18.31% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 54.28% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 39.74% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 37.69% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 45.67% faster with no flag.
- For sample size 4 MiB, tinyxxd was 137.73% faster with flags '-r'.
- For sample size 4 MiB, xxd was 17.53% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 164.29% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 21.74% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 5.62% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 19.77% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 49.43% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 41.42% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 38.45% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 40.16% faster with no flag.
- For sample size 2 MiB, tinyxxd was 162.03% faster with flags '-r'.
- For sample size 2 MiB, xxd was 15.22% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 171.59% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 15.65% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 6.22% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 13.16% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 44.29% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 39.95% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 42.25% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 40.00% faster with no flag.
- For sample size 1 MiB, tinyxxd was 134.61% faster with flags '-r'.
- For sample size 1 MiB, xxd was 15.67% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 155.08% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 20.32% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 8.64% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 18.05% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 44.99% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 33.62% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 35.60% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 24.94% faster than xxd.
- For sample 32 MiB, tinyxxd was 42.19% faster than xxd.
- For sample 16 MiB, tinyxxd was 31.87% faster than xxd.
- For sample 8 MiB, tinyxxd was 32.97% faster than xxd.
- For sample 4 MiB, tinyxxd was 29.83% faster than xxd.
- For sample 2 MiB, tinyxxd was 31.18% faster than xxd.
- For sample 1 MiB, tinyxxd was 29.50% faster than xxd.

### Performance by flag
- tinyxxd was 50.82% faster with no flag.
- tinyxxd was 191.09% faster with flag '-r'.
- xxd was 14.28% faster with flag '-b'.
- tinyxxd was 179.46% faster with flag '-r -b'.
- tinyxxd was 22.11% faster with flag '-p'.
- tinyxxd was 5.83% faster with flag '-i'.
- tinyxxd was 22.34% faster with flag '-e'.
- tinyxxd was 54.19% faster with flag '-u'.
- tinyxxd was 45.27% faster with flag '-E'.
- tinyxxd was 37.69% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 23.43% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 0.83% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 82.13% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 5.06% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 7.27% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 1.13% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 0.17% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 0.26% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 0.97% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 0.05% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 0.96% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 0.03% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 24.42% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 7.62% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 45.63% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 4.77% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 1.37% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 0.07% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 1.17% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 22.34% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 1.36% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 1.25% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 2.38% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 2.45% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 14.47% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 0.16% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 27.55% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 0.02% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 0.24% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 0.17% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 0.54% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 7.03% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 3.21% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 1.77% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 1.53% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 1.05% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 10.18% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 0.93% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 125.51% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 1.23% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 0.01% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 0.02% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 2.72% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 1.64% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.36% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 1.09% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 0.95% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 0.71% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 12.35% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 0.47% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 12.85% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 3.01% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 1.81% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 1.74% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 0.31% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 0.90% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 1.08% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 0.29% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 2.37% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 1.81% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 1.49% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 5.69% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 8.01% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 0.16% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 0.71% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 0.02% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 1.67% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 0.32% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 0.10% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 0.40% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 1.68% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 0.00% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 17.73% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 1.04% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 7.16% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 0.71% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 0.82% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 0.13% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 0.89% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 1.48% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 0.27% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 0.18% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 1.99% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 1.23% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 11.02% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 2.70% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 6.91% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 11.03% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 0.67% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 0.35% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 0.66% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 1.34% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 0.69% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 0.38% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 1.29% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 0.55% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 13.53% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 4.87% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 8.72% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 2.54% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 3.01% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 0.47% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 0.19% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 0.77% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.49% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 0.40% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 1.72% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 0.21% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 11.20% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 0.42% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 7.21% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 5.13% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 0.69% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 1.10% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 0.41% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 0.12% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 1.79% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 0.19% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 0.17% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 0.61% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 11.93% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 3.59% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 7.97% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 1.39% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 3.94% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 0.86% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 1.52% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 5.08% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.53% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 1.63% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 0.07% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.34% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 10.01% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 2.10% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 7.55% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 0.10% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 0.62% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 1.46% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 0.97% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 0.08% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 4.16% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 0.53% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 1.92% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 4.90% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 8.26% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 0.97% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 7.62% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 0.18% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 0.64% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 1.85% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 1.86% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 2.20% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 2.53% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 3.52% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 2.20% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 0.71% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 9.55% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 5.11% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 8.48% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 4.89% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 1.56% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 1.79% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 1.26% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 2.82% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 2.61% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 0.15% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 2.72% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 1.31% compared to the last run.
---
Report generated on: 2026-03-23T20:42:43.947121
