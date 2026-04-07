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
| tinyxxd | 64 | 0.61 |  |
| tinyxxd | 64 | 0.84 | -r |
| tinyxxd | 64 | 3.89 | -b |
| tinyxxd | 64 | 4.18 | -r -b |
| tinyxxd | 64 | 0.84 |  |
| tinyxxd | 64 | 0.62 | -p |
| tinyxxd | 64 | 4.77 | -i |
| tinyxxd | 64 | 1.09 | -e |
| tinyxxd | 64 | 2.78 | -b |
| tinyxxd | 64 | 0.60 | -u |
| tinyxxd | 64 | 0.58 | -E |
| tinyxxd | 64 | 3.50 | -b -i |
| xxd | 64 | 1.30 |  |
| xxd | 64 | 2.24 | -r |
| xxd | 64 | 3.87 | -b |
| xxd | 64 | 4.46 | -r -b |
| xxd | 64 | 1.73 |  |
| xxd | 64 | 1.01 | -p |
| xxd | 64 | 4.93 | -i |
| xxd | 64 | 1.34 | -e |
| xxd | 64 | 2.70 | -b |
| xxd | 64 | 1.30 | -u |
| xxd | 64 | 1.46 | -E |
| xxd | 64 | 5.72 | -b -i |
| xxd | 32 | 0.65 |  |
| xxd | 32 | 1.13 | -r |
| xxd | 32 | 1.78 | -b |
| xxd | 32 | 2.14 | -r -b |
| xxd | 32 | 0.74 |  |
| xxd | 32 | 0.54 | -p |
| xxd | 32 | 2.51 | -i |
| xxd | 32 | 0.69 | -e |
| xxd | 32 | 1.33 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.74 | -E |
| xxd | 32 | 2.95 | -b -i |
| tinyxxd | 32 | 0.32 |  |
| tinyxxd | 32 | 0.44 | -r |
| tinyxxd | 32 | 1.95 | -b |
| tinyxxd | 32 | 1.95 | -r -b |
| tinyxxd | 32 | 0.38 |  |
| tinyxxd | 32 | 0.31 | -p |
| tinyxxd | 32 | 2.36 | -i |
| tinyxxd | 32 | 0.55 | -e |
| tinyxxd | 32 | 1.37 | -b |
| tinyxxd | 32 | 0.30 | -u |
| tinyxxd | 32 | 0.30 | -E |
| tinyxxd | 32 | 1.76 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.57 | -r |
| xxd | 16 | 0.75 | -b |
| xxd | 16 | 1.12 | -r -b |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.27 | -p |
| xxd | 16 | 1.24 | -i |
| xxd | 16 | 0.33 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.32 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.47 | -b -i |
| tinyxxd | 16 | 0.15 |  |
| tinyxxd | 16 | 0.22 | -r |
| tinyxxd | 16 | 0.81 | -b |
| tinyxxd | 16 | 0.97 | -r -b |
| tinyxxd | 16 | 0.20 |  |
| tinyxxd | 16 | 0.16 | -p |
| tinyxxd | 16 | 1.22 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.69 | -b |
| tinyxxd | 16 | 0.15 | -u |
| tinyxxd | 16 | 0.15 | -E |
| tinyxxd | 16 | 0.88 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.54 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.63 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.33 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.74 | -b -i |
| tinyxxd | 8 | 0.08 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.49 | -r -b |
| tinyxxd | 8 | 0.10 |  |
| tinyxxd | 8 | 0.08 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.34 | -b |
| tinyxxd | 8 | 0.08 | -u |
| tinyxxd | 8 | 0.08 | -E |
| tinyxxd | 8 | 0.44 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.28 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 4 | 0.04 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.25 | -r -b |
| tinyxxd | 4 | 0.05 |  |
| tinyxxd | 4 | 0.04 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.17 | -b |
| tinyxxd | 4 | 0.04 | -u |
| tinyxxd | 4 | 0.04 | -E |
| tinyxxd | 4 | 0.22 | -b -i |
| tinyxxd | 2 | 0.02 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.13 | -r -b |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.02 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.09 | -b |
| tinyxxd | 2 | 0.02 | -u |
| tinyxxd | 2 | 0.02 | -E |
| tinyxxd | 2 | 0.11 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.14 | -r -b |
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
| xxd | 1 | 0.07 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.10 | -b -i |
| tinyxxd | 1 | 0.01 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.07 | -r -b |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.01 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.01 | -u |
| tinyxxd | 1 | 0.01 | -E |
| tinyxxd | 1 | 0.06 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 109.89% faster with no flag.
- For sample size 64 MiB, tinyxxd was 165.56% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 6.63% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 63.13% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 23.40% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 117.33% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 150.05% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 63.47% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 98.57% faster with no flag.
- For sample size 32 MiB, tinyxxd was 159.75% faster with flags '-r'.
- For sample size 32 MiB, xxd was 6.33% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 9.65% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 72.61% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 6.13% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 26.21% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 119.51% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 142.06% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 67.88% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 100.78% faster with no flag.
- For sample size 16 MiB, tinyxxd was 157.25% faster with flags '-r'.
- For sample size 16 MiB, xxd was 5.72% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 15.13% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 72.71% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 21.61% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 120.52% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 148.25% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 68.08% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 97.76% faster with no flag.
- For sample size 8 MiB, tinyxxd was 155.28% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 10.27% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 68.89% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 8.68% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 24.28% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 117.59% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 134.61% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 67.31% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 99.86% faster with no flag.
- For sample size 4 MiB, tinyxxd was 133.31% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 14.78% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 65.88% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 6.57% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 22.24% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 109.76% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 137.54% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 66.14% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 81.74% faster with no flag.
- For sample size 2 MiB, tinyxxd was 145.53% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 13.69% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 61.17% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 20.60% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 97.40% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 119.61% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 65.56% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 80.00% faster with no flag.
- For sample size 1 MiB, tinyxxd was 125.38% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 7.76% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 54.48% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.39% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 18.92% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 76.77% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 96.94% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 61.37% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 31.96% faster than xxd.
- For sample 32 MiB, tinyxxd was 32.35% faster than xxd.
- For sample 16 MiB, tinyxxd was 33.15% faster than xxd.
- For sample 8 MiB, tinyxxd was 34.94% faster than xxd.
- For sample 4 MiB, tinyxxd was 34.74% faster than xxd.
- For sample 2 MiB, tinyxxd was 33.20% faster than xxd.
- For sample 1 MiB, tinyxxd was 30.59% faster than xxd.

### Performance by flag
- tinyxxd was 104.07% faster with no flag.
- tinyxxd was 160.46% faster with flag '-r'.
- tinyxxd was 8.98% faster with flag '-r -b'.
- tinyxxd was 67.05% faster with flag '-p'.
- tinyxxd was 23.81% faster with flag '-e'.
- tinyxxd was 117.18% faster with flag '-u'.
- tinyxxd was 145.15% faster with flag '-E'.
- tinyxxd was 65.51% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 27.68% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 6.15% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 41.98% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 5.59% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 0.32% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 0.77% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 0.85% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 1.44% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 0.78% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 1.73% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 1.62% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 11.77% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 1.95% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 42.88% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 6.44% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 17.98% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 2.62% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 1.65% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 0.43% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 0.26% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 2.20% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 1.83% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 0.58% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 12.06% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 0.12% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 34.14% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 0.00% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 0.56% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 2.47% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 1.35% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 4.15% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 0.26% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 3.10% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 1.48% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 3.45% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 16.65% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 2.75% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 40.74% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 0.11% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 1.03% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 0.24% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 1.00% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 0.37% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 1.10% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 0.59% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 0.41% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 0.22% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 11.07% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 2.29% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 13.54% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 0.17% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 0.30% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 0.77% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 1.43% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 0.88% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 0.93% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 0.35% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 0.57% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 2.85% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 21.44% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 3.85% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 12.62% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 0.33% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 2.84% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 0.20% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 5.10% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 0.89% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 3.53% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 2.82% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 0.74% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 0.22% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 11.40% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 3.56% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 9.89% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 1.45% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 1.01% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 0.41% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 0.69% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 2.59% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 0.20% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 1.33% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 0.82% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 3.44% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 18.25% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 3.35% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 8.34% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 0.62% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 0.02% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 0.43% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 0.01% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 0.89% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.93% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 3.11% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 0.40% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 0.02% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 8.64% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 3.07% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 8.72% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 0.71% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 0.56% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 2.70% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 1.13% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 1.38% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 0.73% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 0.57% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 1.03% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 1.09% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 21.65% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 4.58% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 7.32% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 0.52% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 4.44% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 1.84% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 0.43% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 1.87% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.11% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 1.79% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 1.57% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 0.77% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 9.89% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 1.16% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 6.73% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 1.93% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 6.27% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 2.87% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 0.85% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 1.93% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.89% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 1.91% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 3.50% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 1.06% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 8.52% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 1.12% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 8.40% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 0.43% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 2.79% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 4.81% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 0.63% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 2.28% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 1.85% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 2.24% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 1.50% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 1.15% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 4.19% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 1.78% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 7.23% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 2.66% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 3.62% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 2.43% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 1.88% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 3.44% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 2.18% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 2.27% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 1.29% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 1.09% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 10.85% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 6.97% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 6.88% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 1.48% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 3.57% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 1.57% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 2.37% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 5.20% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 1.88% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 7.49% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 6.09% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 2.01% compared to the last run.
---
Report generated on: 2026-04-07T11:31:32.966493
