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
| xxd | 64 | 1.28 |  |
| xxd | 64 | 2.31 | -r |
| xxd | 64 | 4.18 | -b |
| xxd | 64 | 4.45 | -r -b |
| xxd | 64 | 1.79 |  |
| xxd | 64 | 1.10 | -p |
| xxd | 64 | 4.81 | -i |
| xxd | 64 | 1.34 | -e |
| xxd | 64 | 2.72 | -b |
| xxd | 64 | 1.34 | -u |
| xxd | 64 | 1.48 | -E |
| xxd | 64 | 5.85 | -b -i |
| tinyxxd | 64 | 1.02 |  |
| tinyxxd | 64 | 1.30 | -r |
| tinyxxd | 64 | 4.23 | -b |
| tinyxxd | 64 | 2.03 | -r -b |
| tinyxxd | 64 | 1.30 |  |
| tinyxxd | 64 | 0.95 | -p |
| tinyxxd | 64 | 4.68 | -i |
| tinyxxd | 64 | 1.11 | -e |
| tinyxxd | 64 | 3.19 | -b |
| tinyxxd | 64 | 0.99 | -u |
| tinyxxd | 64 | 1.06 | -E |
| tinyxxd | 64 | 4.16 | -b -i |
| tinyxxd | 32 | 0.49 |  |
| tinyxxd | 32 | 0.64 | -r |
| tinyxxd | 32 | 2.03 | -b |
| tinyxxd | 32 | 1.04 | -r -b |
| tinyxxd | 32 | 0.59 |  |
| tinyxxd | 32 | 0.48 | -p |
| tinyxxd | 32 | 2.34 | -i |
| tinyxxd | 32 | 0.55 | -e |
| tinyxxd | 32 | 1.60 | -b |
| tinyxxd | 32 | 0.49 | -u |
| tinyxxd | 32 | 0.54 | -E |
| tinyxxd | 32 | 2.03 | -b -i |
| xxd | 32 | 0.66 |  |
| xxd | 32 | 1.18 | -r |
| xxd | 32 | 3.03 | -b |
| xxd | 32 | 2.40 | -r -b |
| xxd | 32 | 0.77 |  |
| xxd | 32 | 0.55 | -p |
| xxd | 32 | 2.45 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.34 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.75 | -E |
| xxd | 32 | 3.01 | -b -i |
| xxd | 16 | 0.34 |  |
| xxd | 16 | 0.57 | -r |
| xxd | 16 | 0.78 | -b |
| xxd | 16 | 1.23 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.20 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.49 | -b -i |
| tinyxxd | 16 | 0.25 |  |
| tinyxxd | 16 | 0.33 | -r |
| tinyxxd | 16 | 0.85 | -b |
| tinyxxd | 16 | 0.51 | -r -b |
| tinyxxd | 16 | 0.29 |  |
| tinyxxd | 16 | 0.24 | -p |
| tinyxxd | 16 | 1.15 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.81 | -b |
| tinyxxd | 16 | 0.25 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.02 | -b -i |
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
| tinyxxd | 8 | 0.14 | -E |
| tinyxxd | 8 | 0.51 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.57 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.13 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.33 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.74 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.08 | -r |
| tinyxxd | 4 | 0.21 | -b |
| tinyxxd | 4 | 0.16 | -r -b |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.29 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.30 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.08 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.37 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.15 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.04 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
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
| xxd | 1 | 0.02 | -E |
| xxd | 1 | 0.09 | -b -i |
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
- For sample size 64 MiB, tinyxxd was 32.15% faster with no flag.
- For sample size 64 MiB, tinyxxd was 77.57% faster with flags '-r'.
- For sample size 64 MiB, xxd was 7.44% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 119.08% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 15.07% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 20.55% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 34.92% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 39.22% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 40.70% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 33.13% faster with no flag.
- For sample size 32 MiB, tinyxxd was 83.88% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 20.35% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 130.16% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 15.13% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 23.38% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 34.14% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 39.67% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 48.07% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 33.53% faster with no flag.
- For sample size 16 MiB, tinyxxd was 76.74% faster with flags '-r'.
- For sample size 16 MiB, xxd was 15.06% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 141.57% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 15.31% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 22.24% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 32.92% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 36.30% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 45.86% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 29.30% faster with no flag.
- For sample size 8 MiB, tinyxxd was 77.87% faster with flags '-r'.
- For sample size 8 MiB, xxd was 19.02% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 123.96% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 10.44% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 5.45% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 20.29% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 34.53% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 35.81% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 45.46% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 29.07% faster with no flag.
- For sample size 4 MiB, tinyxxd was 79.52% faster with flags '-r'.
- For sample size 4 MiB, xxd was 18.71% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 79.51% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 14.50% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 19.25% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 29.36% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 33.46% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 45.57% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 29.20% faster with no flag.
- For sample size 2 MiB, tinyxxd was 81.20% faster with flags '-r'.
- For sample size 2 MiB, xxd was 16.66% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 124.57% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 14.31% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 7.16% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 22.41% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 44.05% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 33.08% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 44.67% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 29.50% faster with no flag.
- For sample size 1 MiB, tinyxxd was 69.28% faster with flags '-r'.
- For sample size 1 MiB, xxd was 16.80% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 117.18% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 13.86% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 15.96% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 24.99% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 29.58% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 42.82% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 25.45% faster than xxd.
- For sample 32 MiB, tinyxxd was 36.42% faster than xxd.
- For sample 16 MiB, tinyxxd was 27.68% faster than xxd.
- For sample 8 MiB, tinyxxd was 25.19% faster than xxd.
- For sample 4 MiB, tinyxxd was 22.45% faster than xxd.
- For sample 2 MiB, tinyxxd was 26.78% faster than xxd.
- For sample 1 MiB, tinyxxd was 23.94% faster than xxd.

### Performance by flag
- tinyxxd was 32.21% faster with no flag.
- tinyxxd was 79.11% faster with flag '-r'.
- tinyxxd was 123.53% faster with flag '-r -b'.
- tinyxxd was 14.77% faster with flag '-p'.
- tinyxxd was 21.40% faster with flag '-e'.
- tinyxxd was 34.33% faster with flag '-u'.
- tinyxxd was 38.37% faster with flag '-E'.
- tinyxxd was 43.71% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 25.01% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 0.54% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 56.72% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 2.48% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 4.74% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 3.01% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 0.98% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 1.01% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 1.98% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 0.18% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 1.63% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 0.21% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 22.46% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 11.56% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 32.75% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 0.08% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 1.62% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 0.05% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 0.51% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 1.38% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 0.09% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 0.83% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 2.49% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 1.78% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 15.64% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 0.48% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 29.16% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 2.76% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 0.90% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 0.50% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 1.93% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 4.08% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 1.73% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 0.36% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 2.15% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 1.64% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 10.84% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 5.76% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 128.87% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 5.84% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 4.32% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 0.12% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 2.87% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 1.09% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 1.24% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 2.47% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 2.83% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 1.29% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 7.99% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 0.53% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 17.63% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 9.56% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 4.73% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 0.34% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 4.05% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 0.52% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 0.36% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 0.06% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 1.94% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 2.44% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 13.70% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 0.01% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 7.13% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 0.85% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 0.26% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 0.51% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 1.37% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 0.03% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 2.84% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 2.18% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 0.82% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 3.19% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 16.33% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 0.58% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 6.36% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 0.12% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 0.45% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 0.15% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 0.88% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 0.57% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.50% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 0.44% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 1.46% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 0.48% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 11.35% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 0.13% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 8.21% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 1.74% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 0.45% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 3.31% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 0.61% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 1.32% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 0.40% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 2.53% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 0.11% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 1.59% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 14.56% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 0.06% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 7.04% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 23.42% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 1.19% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 0.31% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 0.21% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 2.39% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.47% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 2.43% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 0.69% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 0.48% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 14.33% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 0.61% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 8.71% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 10.08% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 3.58% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 1.12% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 1.45% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 0.36% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 0.80% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 1.41% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 0.95% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 0.40% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 12.12% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 3.61% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 9.34% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 0.15% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 0.15% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 2.17% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 2.17% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 0.90% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 0.57% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 8.20% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 1.82% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 1.69% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 15.66% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 0.01% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 6.50% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 2.22% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 0.30% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 0.76% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 1.69% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 1.79% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 1.08% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 2.23% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 1.10% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.39% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 11.35% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 0.98% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 4.19% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 1.00% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 2.00% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 1.74% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 0.68% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 3.31% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 2.26% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 4.43% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 6.54% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 0.99% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 15.79% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 0.72% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 3.92% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 1.99% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 2.54% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 1.71% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 1.26% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 1.39% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 1.25% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 1.56% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 0.61% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 0.94% compared to the last run.
---
Report generated on: 2026-02-01T19:10:48.196685
