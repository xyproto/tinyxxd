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
| xxd | 64 | 2.33 | -r |
| xxd | 64 | 4.08 | -b |
| xxd | 64 | 4.56 | -r -b |
| xxd | 64 | 1.71 |  |
| xxd | 64 | 1.07 | -p |
| xxd | 64 | 4.86 | -i |
| xxd | 64 | 1.32 | -e |
| xxd | 64 | 2.67 | -b |
| xxd | 64 | 1.34 | -u |
| xxd | 64 | 1.45 | -E |
| xxd | 64 | 5.84 | -b -i |
| tinyxxd | 64 | 1.00 |  |
| tinyxxd | 64 | 1.47 | -r |
| tinyxxd | 64 | 5.03 | -b |
| tinyxxd | 64 | 2.03 | -r -b |
| tinyxxd | 64 | 1.32 |  |
| tinyxxd | 64 | 0.95 | -p |
| tinyxxd | 64 | 4.65 | -i |
| tinyxxd | 64 | 1.09 | -e |
| tinyxxd | 64 | 3.19 | -b |
| tinyxxd | 64 | 1.00 | -u |
| tinyxxd | 64 | 1.09 | -E |
| tinyxxd | 64 | 4.09 | -b -i |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.12 | -r |
| xxd | 32 | 1.77 | -b |
| xxd | 32 | 2.27 | -r -b |
| xxd | 32 | 0.74 |  |
| xxd | 32 | 0.55 | -p |
| xxd | 32 | 2.39 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.33 | -b |
| xxd | 32 | 0.64 | -u |
| xxd | 32 | 0.73 | -E |
| xxd | 32 | 2.97 | -b -i |
| tinyxxd | 32 | 0.52 |  |
| tinyxxd | 32 | 0.65 | -r |
| tinyxxd | 32 | 2.06 | -b |
| tinyxxd | 32 | 1.02 | -r -b |
| tinyxxd | 32 | 0.58 |  |
| tinyxxd | 32 | 0.47 | -p |
| tinyxxd | 32 | 2.29 | -i |
| tinyxxd | 32 | 0.57 | -e |
| tinyxxd | 32 | 1.57 | -b |
| tinyxxd | 32 | 0.49 | -u |
| tinyxxd | 32 | 0.55 | -E |
| tinyxxd | 32 | 2.07 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.78 | -b |
| xxd | 16 | 1.13 | -r -b |
| xxd | 16 | 0.36 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.25 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.66 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.36 | -E |
| xxd | 16 | 1.45 | -b -i |
| tinyxxd | 16 | 0.24 |  |
| tinyxxd | 16 | 0.33 | -r |
| tinyxxd | 16 | 1.01 | -b |
| tinyxxd | 16 | 0.51 | -r -b |
| tinyxxd | 16 | 0.29 |  |
| tinyxxd | 16 | 0.24 | -p |
| tinyxxd | 16 | 1.17 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.79 | -b |
| tinyxxd | 16 | 0.25 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.05 | -b -i |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.16 | -r |
| tinyxxd | 8 | 0.43 | -b |
| tinyxxd | 8 | 0.26 | -r -b |
| tinyxxd | 8 | 0.15 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.40 | -b |
| tinyxxd | 8 | 0.13 | -u |
| tinyxxd | 8 | 0.13 | -E |
| tinyxxd | 8 | 0.51 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.58 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.33 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.73 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.08 | -r |
| tinyxxd | 4 | 0.21 | -b |
| tinyxxd | 4 | 0.13 | -r -b |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| xxd | 4 | 0.08 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.32 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.08 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.04 | -r |
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
| xxd | 2 | 0.07 | -r |
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
| xxd | 1 | 0.10 | -b -i |
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
- For sample size 64 MiB, tinyxxd was 32.60% faster with no flag.
- For sample size 64 MiB, tinyxxd was 57.90% faster with flags '-r'.
- For sample size 64 MiB, xxd was 21.71% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 124.84% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 11.76% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 20.99% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 33.57% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 33.58% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 42.90% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 28.12% faster with no flag.
- For sample size 32 MiB, tinyxxd was 73.04% faster with flags '-r'.
- For sample size 32 MiB, xxd was 17.20% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 123.47% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 15.57% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 17.06% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 30.44% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 32.91% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 43.79% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 29.91% faster with no flag.
- For sample size 16 MiB, tinyxxd was 77.71% faster with flags '-r'.
- For sample size 16 MiB, xxd was 24.17% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 122.37% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 15.50% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 6.97% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 21.57% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 29.95% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 34.81% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 37.85% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 28.45% faster with no flag.
- For sample size 8 MiB, tinyxxd was 79.14% faster with flags '-r'.
- For sample size 8 MiB, xxd was 20.23% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 128.21% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 14.04% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 5.73% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 19.41% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 31.78% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 37.95% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 43.87% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 32.46% faster with no flag.
- For sample size 4 MiB, tinyxxd was 80.51% faster with flags '-r'.
- For sample size 4 MiB, xxd was 18.64% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 146.38% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 12.89% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 5.69% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 16.82% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 34.41% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 35.68% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 45.69% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 26.25% faster with no flag.
- For sample size 2 MiB, tinyxxd was 74.91% faster with flags '-r'.
- For sample size 2 MiB, xxd was 17.56% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 119.26% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 11.03% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 19.14% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 30.17% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 34.05% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 41.71% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 27.48% faster with no flag.
- For sample size 1 MiB, tinyxxd was 69.74% faster with flags '-r'.
- For sample size 1 MiB, xxd was 15.75% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 115.01% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 13.89% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 18.27% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 32.83% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 39.49% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 45.61% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 21.09% faster than xxd.
- For sample 32 MiB, tinyxxd was 23.39% faster than xxd.
- For sample 16 MiB, tinyxxd was 22.24% faster than xxd.
- For sample 8 MiB, tinyxxd was 25.08% faster than xxd.
- For sample 4 MiB, tinyxxd was 27.74% faster than xxd.
- For sample 2 MiB, tinyxxd was 23.70% faster than xxd.
- For sample 1 MiB, tinyxxd was 24.97% faster than xxd.

### Performance by flag
- tinyxxd was 30.77% faster with no flag.
- tinyxxd was 66.08% faster with flag '-r'.
- xxd was 20.62% faster with flag '-b'.
- tinyxxd was 124.91% faster with flag '-r -b'.
- tinyxxd was 13.37% faster with flag '-p'.
- tinyxxd was 19.75% faster with flag '-e'.
- tinyxxd was 32.18% faster with flag '-u'.
- tinyxxd was 33.96% faster with flag '-E'.
- tinyxxd was 42.62% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 22.21% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 2.75% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 49.49% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 3.28% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 2.51% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 2.73% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 1.27% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 2.21% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 2.32% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 1.02% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 2.06% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 0.02% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 21.01% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 3.10% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 55.52% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 0.62% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 4.76% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 3.81% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 1.83% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 0.51% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 1.45% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 0.26% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 1.45% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 0.33% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 12.20% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 2.88% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 33.06% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 3.08% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 3.07% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 0.20% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 3.32% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 0.82% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.56% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 2.44% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 0.21% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 1.87% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 10.78% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 9.05% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 28.81% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 2.18% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 0.46% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 4.34% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 0.21% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 4.16% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 1.43% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 1.71% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 6.95% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 0.95% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 12.30% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 0.64% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 17.17% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 6.17% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 2.02% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 0.29% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 2.17% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 0.30% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 0.99% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 1.16% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 1.88% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 2.57% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 17.35% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 9.08% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 26.14% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 1.66% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 1.81% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 4.24% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 1.01% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 0.32% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 0.63% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 0.76% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 2.24% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 3.16% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 15.35% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 8.13% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 7.20% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 1.57% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 1.54% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 3.78% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 1.78% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 0.14% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.21% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 0.01% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 3.54% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 0.77% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 11.78% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 0.02% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 6.45% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 4.25% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 0.25% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 2.64% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 0.75% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 1.78% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 1.50% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 1.93% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 0.16% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 1.78% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 14.53% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 9.79% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 5.00% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 2.59% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 0.21% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 5.00% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 0.77% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 1.51% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 1.04% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 1.43% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 3.59% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.79% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 11.97% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 1.31% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 5.91% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 15.62% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 2.92% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 1.20% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 0.15% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 1.10% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 0.66% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 0.01% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 0.79% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 0.81% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 10.58% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 7.53% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 3.50% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 2.49% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 0.81% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 4.46% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 0.64% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 1.15% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 1.68% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 0.11% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 2.27% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 0.31% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 10.76% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 0.54% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 7.60% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 0.96% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 1.32% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 1.70% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 0.93% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 1.56% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.54% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 0.84% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 0.18% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 1.95% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 8.09% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 0.83% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 8.11% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 1.02% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 3.53% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 1.94% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 1.08% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 0.25% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 1.13% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 1.51% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 3.12% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 3.04% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 11.72% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 7.30% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 4.57% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 2.78% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 1.91% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 4.70% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 0.63% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 0.60% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 1.15% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 0.29% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 2.23% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 3.24% compared to the last run.
---
Report generated on: 2026-01-29T10:41:58.556210
