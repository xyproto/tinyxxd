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
| xxd | 64 | 1.42 |  |
| xxd | 64 | 2.50 | -r |
| xxd | 64 | 4.25 | -b |
| xxd | 64 | 4.74 | -r -b |
| xxd | 64 | 1.66 |  |
| xxd | 64 | 1.20 | -p |
| xxd | 64 | 5.16 | -i |
| xxd | 64 | 1.46 | -e |
| xxd | 64 | 2.83 | -b |
| xxd | 64 | 1.44 | -u |
| xxd | 64 | 1.63 | -E |
| xxd | 64 | 5.66 | -b -i |
| tinyxxd | 64 | 0.86 |  |
| tinyxxd | 64 | 0.77 | -r |
| tinyxxd | 64 | 5.22 | -b |
| tinyxxd | 64 | 1.53 | -r -b |
| tinyxxd | 64 | 1.20 |  |
| tinyxxd | 64 | 0.91 | -p |
| tinyxxd | 64 | 4.91 | -i |
| tinyxxd | 64 | 1.16 | -e |
| tinyxxd | 64 | 3.61 | -b |
| tinyxxd | 64 | 0.88 | -u |
| tinyxxd | 64 | 1.08 | -E |
| tinyxxd | 64 | 4.25 | -b -i |
| xxd | 32 | 0.71 |  |
| xxd | 32 | 1.25 | -r |
| xxd | 32 | 1.88 | -b |
| xxd | 32 | 2.34 | -r -b |
| xxd | 32 | 0.82 |  |
| xxd | 32 | 0.57 | -p |
| xxd | 32 | 2.61 | -i |
| xxd | 32 | 0.73 | -e |
| xxd | 32 | 1.40 | -b |
| xxd | 32 | 0.71 | -u |
| xxd | 32 | 0.80 | -E |
| xxd | 32 | 2.88 | -b -i |
| tinyxxd | 32 | 0.43 |  |
| tinyxxd | 32 | 0.39 | -r |
| tinyxxd | 32 | 2.27 | -b |
| tinyxxd | 32 | 0.77 | -r -b |
| tinyxxd | 32 | 0.52 |  |
| tinyxxd | 32 | 0.45 | -p |
| tinyxxd | 32 | 2.49 | -i |
| tinyxxd | 32 | 0.59 | -e |
| tinyxxd | 32 | 1.83 | -b |
| tinyxxd | 32 | 0.43 | -u |
| tinyxxd | 32 | 0.54 | -E |
| tinyxxd | 32 | 2.08 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.19 | -r |
| tinyxxd | 16 | 1.06 | -b |
| tinyxxd | 16 | 0.39 | -r -b |
| tinyxxd | 16 | 0.26 |  |
| tinyxxd | 16 | 0.23 | -p |
| tinyxxd | 16 | 1.25 | -i |
| tinyxxd | 16 | 0.29 | -e |
| tinyxxd | 16 | 0.90 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.30 | -E |
| tinyxxd | 16 | 1.04 | -b -i |
| xxd | 16 | 0.36 |  |
| xxd | 16 | 0.64 | -r |
| xxd | 16 | 0.85 | -b |
| xxd | 16 | 1.21 | -r -b |
| xxd | 16 | 0.40 |  |
| xxd | 16 | 0.30 | -p |
| xxd | 16 | 1.30 | -i |
| xxd | 16 | 0.36 | -e |
| xxd | 16 | 0.70 | -b |
| xxd | 16 | 0.35 | -u |
| xxd | 16 | 0.41 | -E |
| xxd | 16 | 1.47 | -b -i |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.33 | -r |
| xxd | 8 | 0.39 | -b |
| xxd | 8 | 0.59 | -r -b |
| xxd | 8 | 0.21 |  |
| xxd | 8 | 0.15 | -p |
| xxd | 8 | 0.66 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.18 | -u |
| xxd | 8 | 0.20 | -E |
| xxd | 8 | 0.73 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.10 | -r |
| tinyxxd | 8 | 0.48 | -b |
| tinyxxd | 8 | 0.20 | -r -b |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.62 | -i |
| tinyxxd | 8 | 0.15 | -e |
| tinyxxd | 8 | 0.45 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.14 | -E |
| tinyxxd | 8 | 0.52 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.16 | -r |
| xxd | 4 | 0.20 | -b |
| xxd | 4 | 0.30 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.08 | -p |
| xxd | 4 | 0.33 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.11 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.05 | -r |
| tinyxxd | 4 | 0.24 | -b |
| tinyxxd | 4 | 0.10 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.34 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.23 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.15 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.17 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.06 | -E |
| xxd | 2 | 0.19 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.12 | -b |
| tinyxxd | 2 | 0.05 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.16 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.12 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.04 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.08 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.09 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.03 | -u |
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
| tinyxxd | 1 | 0.06 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |
| tinyxxd | 1 | 0.07 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 49.91% faster with no flag.
- For sample size 64 MiB, tinyxxd was 223.41% faster with flags '-r'.
- For sample size 64 MiB, xxd was 24.72% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 210.02% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 31.88% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 26.08% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 63.15% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 51.14% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 32.97% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 59.73% faster with no flag.
- For sample size 32 MiB, tinyxxd was 221.73% faster with flags '-r'.
- For sample size 32 MiB, xxd was 25.15% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 205.07% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 24.60% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 22.44% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 64.75% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 48.24% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 38.25% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 56.00% faster with no flag.
- For sample size 16 MiB, tinyxxd was 230.27% faster with flags '-r'.
- For sample size 16 MiB, xxd was 25.73% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 209.59% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 31.28% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 24.89% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 61.19% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 35.91% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 40.89% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 67.62% faster with no flag.
- For sample size 8 MiB, tinyxxd was 225.34% faster with flags '-r'.
- For sample size 8 MiB, xxd was 25.55% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 202.14% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 31.24% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 5.61% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 24.43% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 64.70% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 46.84% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 39.55% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 56.79% faster with no flag.
- For sample size 4 MiB, tinyxxd was 202.26% faster with flags '-r'.
- For sample size 4 MiB, xxd was 24.10% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 203.07% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 29.52% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 21.71% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 60.99% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 47.45% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 41.74% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 52.89% faster with no flag.
- For sample size 2 MiB, tinyxxd was 185.66% faster with flags '-r'.
- For sample size 2 MiB, xxd was 23.56% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 191.23% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 26.06% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 5.60% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 22.00% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 54.37% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 46.99% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 40.45% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 46.86% faster with no flag.
- For sample size 1 MiB, tinyxxd was 165.07% faster with flags '-r'.
- For sample size 1 MiB, xxd was 22.92% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 173.43% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 25.65% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.48% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 20.33% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 46.36% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 39.57% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 39.24% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 28.67% faster than xxd.
- For sample 32 MiB, tinyxxd was 30.31% faster than xxd.
- For sample 16 MiB, tinyxxd was 31.53% faster than xxd.
- For sample 8 MiB, tinyxxd was 33.56% faster than xxd.
- For sample 4 MiB, tinyxxd was 30.81% faster than xxd.
- For sample 2 MiB, tinyxxd was 31.48% faster than xxd.
- For sample 1 MiB, tinyxxd was 29.80% faster than xxd.

### Performance by flag
- tinyxxd was 54.34% faster with no flag.
- tinyxxd was 221.94% faster with flag '-r'.
- xxd was 24.94% faster with flag '-b'.
- tinyxxd was 207.33% faster with flag '-r -b'.
- tinyxxd was 29.70% faster with flag '-p'.
- tinyxxd was 24.63% faster with flag '-e'.
- tinyxxd was 63.00% faster with flag '-u'.
- tinyxxd was 47.75% faster with flag '-E'.
- tinyxxd was 36.13% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 13.11% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 16.14% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 90.55% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 37.50% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 31.96% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 50.86% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 23.30% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 24.72% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 26.71% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 25.91% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 21.11% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 36.00% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 5.79% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 2.96% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 129.62% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 11.24% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 32.30% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 29.15% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 18.64% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 30.65% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 58.60% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 21.41% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 12.16% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 30.06% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 10.63% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 10.33% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 67.43% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 31.99% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 28.29% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 42.19% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 25.11% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 25.10% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 25.05% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 24.28% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 21.53% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 39.05% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 1.28% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 6.52% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 98.57% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 11.11% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 21.90% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 29.00% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 20.87% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 32.31% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 59.63% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 19.70% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 14.62% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 26.26% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 4.86% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 5.02% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 85.34% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 12.61% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 25.75% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 28.65% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 21.41% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 17.78% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 57.95% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 15.21% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 28.06% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 30.32% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 12.87% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 19.51% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 45.17% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 40.18% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 26.73% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 50.41% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 25.70% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 25.17% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 19.70% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 22.67% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 22.84% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 41.99% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 27.34% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 22.59% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 37.61% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 36.57% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 29.26% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 49.83% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 25.12% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 25.01% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 26.51% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 24.44% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 21.41% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 40.45% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 3.66% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 3.05% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 67.52% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 10.01% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 23.86% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 28.59% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 21.34% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 30.81% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 58.84% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 18.88% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 15.80% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 29.63% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 16.42% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 17.61% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 38.38% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 37.45% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 29.06% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 46.83% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 21.74% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 23.39% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 25.50% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 24.02% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 22.15% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 40.55% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 4.56% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 2.66% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 66.05% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 8.85% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 25.14% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 28.66% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 29.53% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 30.54% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 58.36% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 19.35% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 15.82% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 29.15% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 15.05% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 17.23% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 36.80% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 32.32% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 27.56% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 44.64% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 25.61% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 24.98% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 27.16% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 22.40% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 24.74% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 42.48% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 3.81% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 0.14% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 65.45% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 8.35% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 21.66% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 24.67% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 20.73% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 29.01% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 59.07% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 19.36% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 15.02% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 29.93% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 15.41% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 15.91% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 35.07% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 35.84% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 24.98% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 44.38% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 21.80% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 24.42% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 25.52% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 24.64% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 21.96% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 41.40% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 6.63% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 4.84% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 63.59% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 13.38% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 21.47% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 25.28% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 20.49% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 31.58% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 56.69% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 23.91% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 15.56% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 29.85% compared to the last run.
---
Report generated on: 2026-03-23T16:50:22.703127
