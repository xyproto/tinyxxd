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
| tinyxxd | 64 | 0.86 |  |
| tinyxxd | 64 | 0.85 | -r |
| tinyxxd | 64 | 5.87 | -b |
| tinyxxd | 64 | 2.18 | -r -b |
| tinyxxd | 64 | 1.06 |  |
| tinyxxd | 64 | 0.88 | -p |
| tinyxxd | 64 | 4.64 | -i |
| tinyxxd | 64 | 1.16 | -e |
| tinyxxd | 64 | 3.23 | -b |
| tinyxxd | 64 | 0.86 | -u |
| tinyxxd | 64 | 0.84 | -E |
| tinyxxd | 64 | 4.16 | -b -i |
| xxd | 64 | 1.38 |  |
| xxd | 64 | 2.25 | -r |
| xxd | 64 | 4.07 | -b |
| xxd | 64 | 4.55 | -r -b |
| xxd | 64 | 1.77 |  |
| xxd | 64 | 1.12 | -p |
| xxd | 64 | 4.99 | -i |
| xxd | 64 | 1.41 | -e |
| xxd | 64 | 2.77 | -b |
| xxd | 64 | 1.35 | -u |
| xxd | 64 | 1.49 | -E |
| xxd | 64 | 5.71 | -b -i |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.16 | -r |
| xxd | 32 | 1.82 | -b |
| xxd | 32 | 2.24 | -r -b |
| xxd | 32 | 0.81 |  |
| xxd | 32 | 0.56 | -p |
| xxd | 32 | 2.48 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.37 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.75 | -E |
| xxd | 32 | 2.87 | -b -i |
| tinyxxd | 32 | 0.48 |  |
| tinyxxd | 32 | 0.44 | -r |
| tinyxxd | 32 | 3.28 | -b |
| tinyxxd | 32 | 0.93 | -r -b |
| tinyxxd | 32 | 0.50 |  |
| tinyxxd | 32 | 0.44 | -p |
| tinyxxd | 32 | 2.36 | -i |
| tinyxxd | 32 | 0.56 | -e |
| tinyxxd | 32 | 1.66 | -b |
| tinyxxd | 32 | 0.42 | -u |
| tinyxxd | 32 | 0.46 | -E |
| tinyxxd | 32 | 2.08 | -b -i |
| xxd | 16 | 0.34 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.80 | -b |
| xxd | 16 | 1.22 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.26 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.69 | -b |
| xxd | 16 | 0.34 | -u |
| xxd | 16 | 0.41 | -E |
| xxd | 16 | 1.44 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.22 | -r |
| tinyxxd | 16 | 0.86 | -b |
| tinyxxd | 16 | 0.46 | -r -b |
| tinyxxd | 16 | 0.26 |  |
| tinyxxd | 16 | 0.22 | -p |
| tinyxxd | 16 | 1.17 | -i |
| tinyxxd | 16 | 0.29 | -e |
| tinyxxd | 16 | 0.81 | -b |
| tinyxxd | 16 | 0.21 | -u |
| tinyxxd | 16 | 0.22 | -E |
| tinyxxd | 16 | 1.05 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.38 | -b |
| xxd | 8 | 0.58 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.66 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.35 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.70 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.43 | -b |
| tinyxxd | 8 | 0.23 | -r -b |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.15 | -e |
| tinyxxd | 8 | 0.42 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.11 | -E |
| tinyxxd | 8 | 0.52 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.12 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.21 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.06 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.28 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.36 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.16 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.05 | -r |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.06 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.03 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.08 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.02 | -u |
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
- For sample size 64 MiB, tinyxxd was 63.94% faster with no flag.
- For sample size 64 MiB, tinyxxd was 166.02% faster with flags '-r'.
- For sample size 64 MiB, xxd was 33.24% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 108.34% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 26.67% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 7.53% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 21.69% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 56.29% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 77.00% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 37.20% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 50.57% faster with no flag.
- For sample size 32 MiB, tinyxxd was 162.86% faster with flags '-r'.
- For sample size 32 MiB, xxd was 54.97% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 142.00% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 25.95% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 5.27% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 19.37% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 56.20% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 62.03% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 37.50% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 50.77% faster with no flag.
- For sample size 16 MiB, tinyxxd was 163.34% faster with flags '-r'.
- For sample size 16 MiB, xxd was 12.76% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 163.18% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 25.76% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 7.03% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 18.74% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 62.45% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 85.23% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 37.87% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 48.28% faster with no flag.
- For sample size 8 MiB, tinyxxd was 162.76% faster with flags '-r'.
- For sample size 8 MiB, xxd was 18.11% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 147.65% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 25.40% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 12.94% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 14.20% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 61.19% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 71.80% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 35.18% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 45.55% faster with no flag.
- For sample size 4 MiB, tinyxxd was 157.62% faster with flags '-r'.
- For sample size 4 MiB, xxd was 18.64% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 135.85% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 23.87% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 6.59% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 19.80% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 48.68% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 71.53% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 38.65% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 20.69% faster with no flag.
- For sample size 2 MiB, tinyxxd was 68.32% faster with flags '-r'.
- For sample size 2 MiB, xxd was 17.81% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 150.76% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 23.20% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 7.02% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 20.40% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 54.40% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 64.58% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 43.78% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 40.78% faster with no flag.
- For sample size 1 MiB, tinyxxd was 139.22% faster with flags '-r'.
- For sample size 1 MiB, xxd was 16.02% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 135.78% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 20.58% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.86% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 18.30% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 39.83% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 58.47% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 37.23% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 23.47% faster than xxd.
- For sample 32 MiB, tinyxxd was 17.87% faster than xxd.
- For sample 16 MiB, tinyxxd was 34.64% faster than xxd.
- For sample 8 MiB, tinyxxd was 31.94% faster than xxd.
- For sample 4 MiB, tinyxxd was 30.12% faster than xxd.
- For sample 2 MiB, tinyxxd was 27.74% faster than xxd.
- For sample 1 MiB, tinyxxd was 29.53% faster than xxd.

### Performance by flag
- tinyxxd was 56.21% faster with no flag.
- tinyxxd was 161.58% faster with flag '-r'.
- xxd was 34.65% faster with flag '-b'.
- tinyxxd was 126.38% faster with flag '-r -b'.
- tinyxxd was 26.08% faster with flag '-p'.
- tinyxxd was 7.19% faster with flag '-i'.
- tinyxxd was 20.15% faster with flag '-e'.
- tinyxxd was 56.88% faster with flag '-u'.
- tinyxxd was 73.16% faster with flag '-E'.
- tinyxxd was 37.38% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 20.06% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 5.90% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 56.60% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 24.00% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 2.07% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 0.52% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 5.39% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 0.95% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 13.80% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 6.08% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 20.90% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 0.82% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 25.17% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 10.52% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 41.93% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 4.86% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 4.22% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 0.75% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 5.02% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 9.26% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 3.56% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 6.52% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 7.88% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 3.44% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 17.58% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 6.61% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 28.79% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 0.13% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 0.50% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 7.15% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 7.45% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 7.26% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 3.38% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 11.57% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 6.89% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 2.79% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 6.42% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 9.73% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 83.42% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 4.82% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 1.47% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 0.12% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 4.55% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 3.62% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 7.35% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 0.94% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 13.67% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 1.04% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 15.86% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 7.62% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 7.67% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 5.41% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 5.63% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 7.06% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 4.84% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 6.02% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 7.17% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 2.48% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 1.04% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 2.04% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 16.87% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 9.90% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 4.15% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 11.00% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 2.21% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 0.97% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 4.25% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 4.13% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 8.93% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 1.83% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 15.71% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 2.97% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 16.69% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 7.87% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 5.76% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 2.60% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 5.31% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 7.13% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 0.73% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 7.02% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 2.92% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 3.92% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 6.43% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 10.37% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 18.60% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 8.12% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 4.66% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 4.26% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 2.42% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 0.66% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 4.72% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 0.01% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 8.04% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 2.25% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 16.34% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 0.10% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 17.17% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 8.71% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 2.76% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 2.77% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 1.85% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 0.78% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 6.51% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 4.44% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 9.21% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 1.08% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 19.58% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 10.02% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 15.76% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 6.43% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 4.93% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 5.80% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 5.77% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 7.16% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 4.28% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 6.70% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 2.69% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 6.76% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 6.88% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 2.66% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 21.95% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 7.38% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 4.16% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 2.36% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 13.89% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 7.09% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 5.22% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 6.99% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 4.07% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 5.66% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 7.28% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 0.97% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 22.90% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 56.46% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 2.60% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 2.71% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 0.09% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 1.05% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 7.32% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 5.89% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 9.94% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 2.33% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 15.34% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.42% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 14.22% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 7.07% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 0.35% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 0.94% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 6.89% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 7.97% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 4.70% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 8.05% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 4.13% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 7.44% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 6.09% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 2.80% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 14.04% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 1.45% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 5.06% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 2.07% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 3.66% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 2.23% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 7.18% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 5.82% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 10.34% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 1.25% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 14.83% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 0.48% compared to the last run.
---
Report generated on: 2026-03-25T00:49:30.788937
