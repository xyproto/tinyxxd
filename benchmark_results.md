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
| xxd | 64 | 1.56 |  |
| xxd | 64 | 2.11 | -r |
| xxd | 64 | 4.72 |  |
| xxd | 64 | 4.12 | -r |
| xxd | 64 | 1.50 |  |
| xxd | 64 | 0.92 | -p |
| xxd | 64 | 4.80 | -i |
| xxd | 64 | 1.55 | -e |
| xxd | 64 | 3.28 | -b |
| xxd | 64 | 1.50 | -u |
| xxd | 64 | 1.66 | -E |
| xxd | 64 | 5.84 | -b_-i |
| tinyxxd | 64 | 1.31 |  |
| tinyxxd | 64 | 1.50 | -r |
| tinyxxd | 64 | 4.94 |  |
| tinyxxd | 64 | 3.69 | -r |
| tinyxxd | 64 | 1.24 |  |
| tinyxxd | 64 | 0.79 | -p |
| tinyxxd | 64 | 6.09 | -i |
| tinyxxd | 64 | 1.29 | -e |
| tinyxxd | 64 | 2.97 | -b |
| tinyxxd | 64 | 1.24 | -u |
| tinyxxd | 64 | 1.41 | -E |
| tinyxxd | 64 | 4.55 | -b_-i |
| xxd | 32 | 0.77 |  |
| xxd | 32 | 1.05 | -r |
| xxd | 32 | 2.06 |  |
| xxd | 32 | 2.02 | -r |
| xxd | 32 | 0.77 |  |
| xxd | 32 | 0.46 | -p |
| xxd | 32 | 2.45 | -i |
| xxd | 32 | 0.77 | -e |
| xxd | 32 | 1.60 | -b |
| xxd | 32 | 0.75 | -u |
| xxd | 32 | 0.82 | -E |
| xxd | 32 | 2.84 | -b_-i |
| tinyxxd | 32 | 0.66 |  |
| tinyxxd | 32 | 0.76 | -r |
| tinyxxd | 32 | 2.03 |  |
| tinyxxd | 32 | 1.82 | -r |
| tinyxxd | 32 | 0.62 |  |
| tinyxxd | 32 | 0.40 | -p |
| tinyxxd | 32 | 2.42 | -i |
| tinyxxd | 32 | 0.66 | -e |
| tinyxxd | 32 | 1.50 | -b |
| tinyxxd | 32 | 0.62 | -u |
| tinyxxd | 32 | 0.70 | -E |
| tinyxxd | 32 | 2.24 | -b_-i |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.37 | -r |
| tinyxxd | 16 | 0.85 |  |
| tinyxxd | 16 | 0.92 | -r |
| tinyxxd | 16 | 0.31 |  |
| tinyxxd | 16 | 0.20 | -p |
| tinyxxd | 16 | 1.18 | -i |
| tinyxxd | 16 | 0.33 | -e |
| tinyxxd | 16 | 0.74 | -b |
| tinyxxd | 16 | 0.35 | -u |
| tinyxxd | 16 | 0.36 | -E |
| tinyxxd | 16 | 1.12 | -b_-i |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.53 | -r |
| xxd | 16 | 0.91 |  |
| xxd | 16 | 1.01 | -r |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.23 | -p |
| xxd | 16 | 1.20 | -i |
| xxd | 16 | 0.38 | -e |
| xxd | 16 | 0.81 | -b |
| xxd | 16 | 0.38 | -u |
| xxd | 16 | 0.42 | -E |
| xxd | 16 | 1.42 | -b_-i |
| xxd | 8 | 0.26 |  |
| xxd | 8 | 0.27 | -r |
| xxd | 8 | 0.44 |  |
| xxd | 8 | 0.51 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.40 | -b |
| xxd | 8 | 0.19 | -u |
| xxd | 8 | 0.22 | -E |
| xxd | 8 | 0.73 | -b_-i |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.21 | -r |
| tinyxxd | 8 | 0.95 |  |
| tinyxxd | 8 | 0.46 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.61 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.37 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| tinyxxd | 8 | 0.56 | -b_-i |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.10 | -r |
| tinyxxd | 4 | 0.24 |  |
| tinyxxd | 4 | 0.23 | -r |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.05 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.08 | -u |
| tinyxxd | 4 | 0.09 | -E |
| tinyxxd | 4 | 0.28 | -b_-i |
| xxd | 4 | 0.11 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.23 |  |
| xxd | 4 | 0.26 | -r |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.30 | -i |
| xxd | 4 | 0.10 | -e |
| xxd | 4 | 0.21 | -b |
| xxd | 4 | 0.10 | -u |
| xxd | 4 | 0.11 | -E |
| xxd | 4 | 0.35 | -b_-i |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.05 | -r |
| tinyxxd | 2 | 0.11 |  |
| tinyxxd | 2 | 0.12 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
| tinyxxd | 2 | 0.14 | -b_-i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.11 |  |
| xxd | 2 | 0.13 | -r |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.06 | -E |
| xxd | 2 | 0.18 | -b_-i |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.06 |  |
| xxd | 1 | 0.07 | -r |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b_-i |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.03 | -r |
| tinyxxd | 1 | 0.05 |  |
| tinyxxd | 1 | 0.32 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.03 | -E |
| tinyxxd | 1 | 0.07 | -b_-i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 20.06% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 16.63% faster with flags '-p'.
- For sample size 64 MiB, xxd was 26.82% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 20.18% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 10.15% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 21.42% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 17.77% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 28.43% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 8.69% faster with no flag.
- For sample size 32 MiB, tinyxxd was 18.81% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 16.37% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 16.09% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 7.03% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 21.02% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 16.79% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 26.92% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 11.80% faster with no flag.
- For sample size 16 MiB, tinyxxd was 19.12% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 15.83% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 17.40% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 8.89% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 7.69% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 16.38% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 26.47% faster with flags '-b -i'.
- For sample size 8 MiB, xxd was 43.80% faster with no flag.
- For sample size 8 MiB, tinyxxd was 15.85% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 15.88% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 18.29% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 6.65% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 21.34% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 23.00% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 29.75% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 9.41% faster with no flag.
- For sample size 4 MiB, tinyxxd was 21.28% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 14.69% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 17.17% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 8.54% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 16.23% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 13.25% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 24.06% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 13.00% faster with no flag.
- For sample size 2 MiB, tinyxxd was 17.73% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 14.01% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 18.63% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 7.07% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 19.08% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 15.47% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 23.85% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 12.72% faster with no flag.
- For sample size 1 MiB, xxd was 227.73% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 10.38% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 16.68% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 8.47% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 13.86% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 12.88% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 23.42% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 8.21% faster than xxd.
- For sample 32 MiB, tinyxxd was 13.42% faster than xxd.
- For sample 16 MiB, tinyxxd was 13.92% faster than xxd.
- For sample 8 MiB, tinyxxd was 0.61% faster than xxd.
- For sample 4 MiB, tinyxxd was 13.47% faster than xxd.
- For sample 2 MiB, tinyxxd was 13.61% faster than xxd.
- For sample size 1 MiB, xxd was 35.08% faster than tinyxxd.

### Performance by flag
- tinyxxd was 16.47% faster with flag '-r'.
- tinyxxd was 16.24% faster with flag '-p'.
- xxd was 12.81% faster with flag '-i'.
- tinyxxd was 18.51% faster with flag '-e'.
- tinyxxd was 8.86% faster with flag '-b'.
- tinyxxd was 19.11% faster with flag '-u'.
- tinyxxd was 17.45% faster with flag '-E'.
- tinyxxd was 27.64% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 1.90% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 49.06% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 209.52% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 0.66% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 1.45% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 0.31% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 0.11% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 1.25% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 0.39% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 3.23% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 0.39% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 2.83% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 5.15% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 59.62% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 296.80% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 0.31% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 0.05% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 0.11% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 27.10% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 1.28% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 0.24% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 1.94% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 3.21% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 0.64% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 2.15% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 47.70% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 173.19% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 0.20% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 1.53% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 0.27% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 0.60% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 2.81% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.24% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 0.63% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 0.23% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 1.66% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 5.93% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 58.98% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 227.90% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 1.42% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 0.32% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 0.04% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 0.86% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 1.18% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 0.15% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 0.01% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 2.05% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 3.11% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 4.78% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 59.31% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 167.25% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 0.87% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 1.36% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 0.27% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 0.88% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 1.37% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 0.67% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 12.85% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 1.08% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 1.80% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 2.78% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 47.53% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 143.92% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 0.87% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 1.99% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 0.18% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 0.22% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 0.08% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 1.97% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 3.08% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 1.37% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 1.09% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 28.03% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 54.38% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 117.00% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 13.43% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 6.10% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 3.36% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 0.85% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 0.07% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 2.07% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 0.91% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 6.73% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 4.12% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 8.67% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 55.57% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 501.91% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 0.61% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 0.37% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 0.49% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 0.53% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 0.95% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 0.94% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 0.02% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 0.69% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 8.25% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 4.05% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 58.22% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 192.18% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 0.79% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 0.83% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 5.31% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 0.01% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 1.30% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 1.18% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 2.95% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 2.46% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 0.66% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 18.17% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 43.39% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 140.27% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 0.23% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 0.38% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 2.47% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 1.14% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 0.74% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 1.14% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 35.75% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 1.28% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 0.73% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 4.28% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 57.20% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 148.28% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 0.71% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 1.08% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 0.82% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 0.89% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 0.92% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.49% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 0.27% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 0.68% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 3.76% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 14.89% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 48.99% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 86.39% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 7.13% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 17.12% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 10.76% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 0.39% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 1.92% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 0.55% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 1.77% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 6.03% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 0.71% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 3.70% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 44.06% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 120.57% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 2.32% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 1.08% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 0.76% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 0.15% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 2.42% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 2.28% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 0.57% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 5.06% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 8.56% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 6.44% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 83.52% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 137.62% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 87.67% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 3.52% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 2.65% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 0.37% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 1.77% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 0.65% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 3.71% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 2.77% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 0.67% compared to the last run.
---
Report generated on: 2024-10-23T09:14:31.027495
