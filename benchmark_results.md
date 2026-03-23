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
| tinyxxd | 64 | 0.91 |  |
| tinyxxd | 64 | 0.81 | -r |
| tinyxxd | 64 | 4.99 | -b |
| tinyxxd | 64 | 1.65 | -r -b |
| tinyxxd | 64 | 1.10 |  |
| tinyxxd | 64 | 0.96 | -p |
| tinyxxd | 64 | 4.90 | -i |
| tinyxxd | 64 | 1.17 | -e |
| tinyxxd | 64 | 3.52 | -b |
| tinyxxd | 64 | 0.89 | -u |
| tinyxxd | 64 | 1.09 | -E |
| tinyxxd | 64 | 4.14 | -b -i |
| xxd | 64 | 1.48 |  |
| xxd | 64 | 2.58 | -r |
| xxd | 64 | 3.93 | -b |
| xxd | 64 | 4.91 | -r -b |
| xxd | 64 | 1.86 |  |
| xxd | 64 | 1.20 | -p |
| xxd | 64 | 5.25 | -i |
| xxd | 64 | 1.50 | -e |
| xxd | 64 | 2.82 | -b |
| xxd | 64 | 1.44 | -u |
| xxd | 64 | 1.61 | -E |
| xxd | 64 | 5.73 | -b -i |
| tinyxxd | 32 | 0.45 |  |
| tinyxxd | 32 | 0.39 | -r |
| tinyxxd | 32 | 2.18 | -b |
| tinyxxd | 32 | 0.95 | -r -b |
| tinyxxd | 32 | 0.54 |  |
| tinyxxd | 32 | 0.49 | -p |
| tinyxxd | 32 | 2.50 | -i |
| tinyxxd | 32 | 0.58 | -e |
| tinyxxd | 32 | 1.76 | -b |
| tinyxxd | 32 | 0.46 | -u |
| tinyxxd | 32 | 0.54 | -E |
| tinyxxd | 32 | 2.09 | -b -i |
| xxd | 32 | 0.73 |  |
| xxd | 32 | 1.26 | -r |
| xxd | 32 | 2.17 | -b |
| xxd | 32 | 2.38 | -r -b |
| xxd | 32 | 0.80 |  |
| xxd | 32 | 0.60 | -p |
| xxd | 32 | 2.63 | -i |
| xxd | 32 | 0.73 | -e |
| xxd | 32 | 1.41 | -b |
| xxd | 32 | 0.74 | -u |
| xxd | 32 | 0.81 | -E |
| xxd | 32 | 2.95 | -b -i |
| xxd | 16 | 0.36 |  |
| xxd | 16 | 0.63 | -r |
| xxd | 16 | 0.92 | -b |
| xxd | 16 | 1.19 | -r -b |
| xxd | 16 | 0.41 |  |
| xxd | 16 | 0.30 | -p |
| xxd | 16 | 1.33 | -i |
| xxd | 16 | 0.37 | -e |
| xxd | 16 | 0.73 | -b |
| xxd | 16 | 0.36 | -u |
| xxd | 16 | 0.41 | -E |
| xxd | 16 | 1.47 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.20 | -r |
| tinyxxd | 16 | 1.05 | -b |
| tinyxxd | 16 | 0.40 | -r -b |
| tinyxxd | 16 | 0.27 |  |
| tinyxxd | 16 | 0.24 | -p |
| tinyxxd | 16 | 1.24 | -i |
| tinyxxd | 16 | 0.29 | -e |
| tinyxxd | 16 | 0.87 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.02 | -b -i |
| xxd | 8 | 0.18 |  |
| xxd | 8 | 0.33 | -r |
| xxd | 8 | 0.38 | -b |
| xxd | 8 | 0.56 | -r -b |
| xxd | 8 | 0.21 |  |
| xxd | 8 | 0.15 | -p |
| xxd | 8 | 0.66 | -i |
| xxd | 8 | 0.18 | -e |
| xxd | 8 | 0.35 | -b |
| xxd | 8 | 0.18 | -u |
| xxd | 8 | 0.21 | -E |
| xxd | 8 | 0.73 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.10 | -r |
| tinyxxd | 8 | 0.46 | -b |
| tinyxxd | 8 | 0.20 | -r -b |
| tinyxxd | 8 | 0.14 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.62 | -i |
| tinyxxd | 8 | 0.15 | -e |
| tinyxxd | 8 | 0.44 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.14 | -E |
| tinyxxd | 8 | 0.52 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.16 | -r |
| xxd | 4 | 0.20 | -b |
| xxd | 4 | 0.30 | -r -b |
| xxd | 4 | 0.11 |  |
| xxd | 4 | 0.08 | -p |
| xxd | 4 | 0.33 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.23 | -b |
| tinyxxd | 4 | 0.10 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.34 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.12 | -b |
| tinyxxd | 2 | 0.06 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.16 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.04 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
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
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
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
| xxd | 1 | 0.07 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.09 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.10 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 65.88% faster with no flag.
- For sample size 64 MiB, tinyxxd was 218.64% faster with flags '-r'.
- For sample size 64 MiB, xxd was 26.08% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 197.38% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 25.19% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 7.03% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 28.33% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 61.83% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 47.21% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 38.26% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 53.99% faster with no flag.
- For sample size 32 MiB, tinyxxd was 218.96% faster with flags '-r'.
- For sample size 32 MiB, xxd was 10.04% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 149.99% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 22.28% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 25.58% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 60.74% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 49.00% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 41.60% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 55.16% faster with no flag.
- For sample size 16 MiB, tinyxxd was 208.09% faster with flags '-r'.
- For sample size 16 MiB, xxd was 15.99% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 196.03% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 24.55% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 7.62% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 25.06% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 59.50% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 49.17% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 44.32% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 54.00% faster with no flag.
- For sample size 8 MiB, tinyxxd was 221.84% faster with flags '-r'.
- For sample size 8 MiB, xxd was 22.09% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 171.41% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 24.64% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 6.38% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 22.47% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 57.37% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 47.85% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 39.58% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 50.15% faster with no flag.
- For sample size 4 MiB, tinyxxd was 188.85% faster with flags '-r'.
- For sample size 4 MiB, xxd was 19.82% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 182.86% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 23.91% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 20.56% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 55.26% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 45.09% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 40.94% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 43.13% faster with no flag.
- For sample size 2 MiB, tinyxxd was 174.47% faster with flags '-r'.
- For sample size 2 MiB, xxd was 21.25% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 176.88% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 21.77% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 21.27% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 51.43% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 44.05% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 40.41% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 39.94% faster with no flag.
- For sample size 1 MiB, tinyxxd was 165.96% faster with flags '-r'.
- For sample size 1 MiB, xxd was 20.22% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 141.60% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 17.27% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.14% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 19.70% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 48.97% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 37.96% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 38.74% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 31.24% faster than xxd.
- For sample 32 MiB, tinyxxd was 32.91% faster than xxd.
- For sample 16 MiB, tinyxxd was 34.39% faster than xxd.
- For sample 8 MiB, tinyxxd was 31.87% faster than xxd.
- For sample 4 MiB, tinyxxd was 29.75% faster than xxd.
- For sample 2 MiB, tinyxxd was 30.29% faster than xxd.
- For sample 1 MiB, tinyxxd was 27.96% faster than xxd.

### Performance by flag
- tinyxxd was 59.67% faster with no flag.
- tinyxxd was 215.22% faster with flag '-r'.
- xxd was 20.04% faster with flag '-b'.
- tinyxxd was 181.12% faster with flag '-r -b'.
- tinyxxd was 24.15% faster with flag '-p'.
- tinyxxd was 6.15% faster with flag '-i'.
- tinyxxd was 26.39% faster with flag '-e'.
- tinyxxd was 60.44% faster with flag '-u'.
- tinyxxd was 47.73% faster with flag '-E'.
- tinyxxd was 40.06% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 19.47% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 0.81% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 54.65% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 6.13% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 2.58% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 1.49% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 1.52% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 1.17% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 8.90% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 6.71% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 0.30% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 0.86% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 18.40% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 12.25% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 41.30% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 3.24% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 3.06% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 12.63% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 4.37% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 9.49% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 1.54% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 9.54% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 4.44% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 1.76% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 16.25% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 2.46% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 34.89% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 8.91% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 1.21% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 3.91% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 4.54% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 2.47% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 8.78% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 0.91% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 0.01% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 1.61% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 4.42% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 8.50% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 58.27% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 5.22% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 4.84% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 7.83% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 5.39% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 7.64% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 3.20% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 12.67% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 8.62% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 1.95% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 14.59% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 9.54% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 34.32% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 1.18% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 1.69% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 8.32% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 5.88% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 7.12% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 6.26% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 7.47% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 8.97% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 2.26% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 16.90% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 0.60% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 29.86% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 7.92% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 0.05% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 2.22% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 4.52% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 3.64% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 7.69% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 0.96% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 4.18% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 1.04% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 6.09% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 14.03% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 11.43% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 3.48% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 7.38% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 7.76% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 5.54% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 6.12% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 2.40% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 6.11% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 8.46% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 2.14% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 16.69% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 1.09% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 13.41% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 7.00% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 0.38% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 2.00% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 4.50% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 3.60% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 8.38% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 1.76% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 0.11% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 1.23% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 4.11% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 7.29% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 13.69% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 1.26% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 7.14% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 10.50% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 5.06% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 6.40% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 3.71% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 7.45% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 8.73% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 3.09% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 16.90% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 2.71% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 12.40% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 8.70% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 0.03% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 0.07% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 13.13% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 3.15% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 7.13% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.48% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 0.52% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 7.33% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 13.96% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 0.17% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 12.19% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 7.44% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 0.79% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 1.59% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 5.74% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 0.85% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 5.80% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 0.95% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 1.27% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 1.61% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 7.06% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 4.25% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 10.08% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 0.42% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 5.11% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 7.72% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 5.05% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 6.03% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 2.94% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 6.14% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 7.70% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 2.73% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 11.46% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 3.55% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 11.27% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 4.19% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 1.18% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 1.19% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 3.46% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 2.05% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 8.53% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 0.51% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 0.38% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 1.27% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 4.57% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 8.51% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 3.69% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 6.95% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 5.52% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 5.49% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 3.92% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 6.46% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 7.93% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 3.27% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 1.87% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 1.61% compared to the last run.
---
Report generated on: 2026-03-23T09:44:45.256146
