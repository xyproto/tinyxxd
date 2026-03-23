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
| tinyxxd | 64 | 0.79 | -r |
| tinyxxd | 64 | 4.64 | -b |
| tinyxxd | 64 | 1.63 | -r -b |
| tinyxxd | 64 | 1.10 |  |
| tinyxxd | 64 | 0.90 | -p |
| tinyxxd | 64 | 4.77 | -i |
| tinyxxd | 64 | 1.11 | -e |
| tinyxxd | 64 | 3.23 | -b |
| tinyxxd | 64 | 0.86 | -u |
| tinyxxd | 64 | 1.04 | -E |
| tinyxxd | 64 | 4.15 | -b -i |
| xxd | 64 | 1.34 |  |
| xxd | 64 | 2.26 | -r |
| xxd | 64 | 4.14 | -b |
| xxd | 64 | 4.52 | -r -b |
| xxd | 64 | 1.77 |  |
| xxd | 64 | 1.11 | -p |
| xxd | 64 | 4.97 | -i |
| xxd | 64 | 1.78 | -e |
| xxd | 64 | 2.77 | -b |
| xxd | 64 | 1.32 | -u |
| xxd | 64 | 1.48 | -E |
| xxd | 64 | 5.72 | -b -i |
| tinyxxd | 32 | 0.42 |  |
| tinyxxd | 32 | 0.40 | -r |
| tinyxxd | 32 | 1.98 | -b |
| tinyxxd | 32 | 0.82 | -r -b |
| tinyxxd | 32 | 0.51 |  |
| tinyxxd | 32 | 0.45 | -p |
| tinyxxd | 32 | 2.37 | -i |
| tinyxxd | 32 | 0.60 | -e |
| tinyxxd | 32 | 1.61 | -b |
| tinyxxd | 32 | 0.43 | -u |
| tinyxxd | 32 | 0.51 | -E |
| tinyxxd | 32 | 2.06 | -b -i |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.16 | -r |
| xxd | 32 | 2.03 | -b |
| xxd | 32 | 2.33 | -r -b |
| xxd | 32 | 0.76 |  |
| xxd | 32 | 0.56 | -p |
| xxd | 32 | 2.54 | -i |
| xxd | 32 | 0.66 | -e |
| xxd | 32 | 1.38 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.75 | -E |
| xxd | 32 | 2.94 | -b -i |
| xxd | 16 | 0.34 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.86 | -b |
| xxd | 16 | 1.19 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.25 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.68 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.41 | -b -i |
| tinyxxd | 16 | 0.24 |  |
| tinyxxd | 16 | 0.21 | -r |
| tinyxxd | 16 | 0.99 | -b |
| tinyxxd | 16 | 0.41 | -r -b |
| tinyxxd | 16 | 0.27 |  |
| tinyxxd | 16 | 0.23 | -p |
| tinyxxd | 16 | 1.19 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.81 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.26 | -E |
| tinyxxd | 16 | 1.03 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.10 | -r |
| tinyxxd | 8 | 0.44 | -b |
| tinyxxd | 8 | 0.21 | -r -b |
| tinyxxd | 8 | 0.14 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.40 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.13 | -E |
| tinyxxd | 8 | 0.53 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.41 | -b |
| xxd | 8 | 0.57 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.63 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.72 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.30 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.32 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.36 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.21 | -b |
| tinyxxd | 4 | 0.11 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
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
| xxd | 1 | 0.03 |  |
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
- For sample size 64 MiB, tinyxxd was 58.87% faster with no flag.
- For sample size 64 MiB, tinyxxd was 186.84% faster with flags '-r'.
- For sample size 64 MiB, xxd was 13.98% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 177.77% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 23.16% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 60.27% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 54.41% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 42.22% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 37.85% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 52.45% faster with no flag.
- For sample size 32 MiB, tinyxxd was 189.78% faster with flags '-r'.
- For sample size 32 MiB, xxd was 5.46% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 184.95% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 22.88% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 7.44% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 9.86% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 53.60% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 44.82% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 42.53% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 41.23% faster with no flag.
- For sample size 16 MiB, tinyxxd was 179.19% faster with flags '-r'.
- For sample size 16 MiB, xxd was 16.51% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 190.14% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 21.14% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 5.65% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 22.23% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 52.58% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 40.78% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 36.76% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 43.52% faster with no flag.
- For sample size 8 MiB, tinyxxd was 180.90% faster with flags '-r'.
- For sample size 8 MiB, xxd was 10.79% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 172.95% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 21.48% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 6.47% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 21.68% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 55.15% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 44.37% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 36.75% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 47.97% faster with no flag.
- For sample size 4 MiB, tinyxxd was 148.26% faster with flags '-r'.
- For sample size 4 MiB, xxd was 15.31% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 185.66% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 20.98% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 5.85% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 20.55% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 49.74% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 44.08% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 37.90% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 46.40% faster with no flag.
- For sample size 2 MiB, tinyxxd was 147.44% faster with flags '-r'.
- For sample size 2 MiB, xxd was 15.91% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 175.65% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 18.38% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 5.63% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 18.81% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 47.42% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 37.42% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 35.15% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 43.81% faster with no flag.
- For sample size 1 MiB, tinyxxd was 144.23% faster with flags '-r'.
- For sample size 1 MiB, xxd was 13.16% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 167.07% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 20.25% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 8.00% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 18.77% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 40.26% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 34.31% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 36.41% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 32.36% faster than xxd.
- For sample 32 MiB, tinyxxd was 34.93% faster than xxd.
- For sample 16 MiB, tinyxxd was 30.73% faster than xxd.
- For sample 8 MiB, tinyxxd was 32.52% faster than xxd.
- For sample 4 MiB, tinyxxd was 32.17% faster than xxd.
- For sample 2 MiB, tinyxxd was 30.46% faster than xxd.
- For sample 1 MiB, tinyxxd was 31.17% faster than xxd.

### Performance by flag
- tinyxxd was 53.31% faster with no flag.
- tinyxxd was 183.58% faster with flag '-r'.
- xxd was 11.96% faster with flag '-b'.
- tinyxxd was 180.95% faster with flag '-r -b'.
- tinyxxd was 22.54% faster with flag '-p'.
- tinyxxd was 5.50% faster with flag '-i'.
- tinyxxd was 37.37% faster with flag '-e'.
- tinyxxd was 53.59% faster with flag '-u'.
- tinyxxd was 42.72% faster with flag '-E'.
- tinyxxd was 38.76% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 28.63% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 2.28% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 28.50% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 6.40% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 8.54% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 0.52% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 2.90% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 3.88% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 10.39% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 3.33% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 3.52% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 2.48% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 19.43% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 9.29% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 46.19% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 4.67% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 6.61% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 7.10% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 3.60% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 22.18% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 2.07% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 8.51% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 9.22% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 1.10% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 18.81% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 3.11% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 8.21% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 6.60% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 2.02% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 0.28% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 4.97% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 1.83% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 11.74% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 0.57% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 4.93% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 1.14% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 18.72% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 7.13% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 44.76% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 0.43% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 7.33% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 1.65% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 2.55% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 8.63% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 1.74% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 7.31% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 7.13% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 1.92% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 15.72% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 9.10% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 22.59% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 1.70% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 4.47% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 8.32% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 3.71% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 6.02% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 3.33% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 5.44% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 9.05% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 4.04% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 7.75% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 7.53% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 9.90% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 4.89% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 0.39% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 0.64% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 4.64% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 3.98% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 10.33% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 0.11% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 12.19% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 1.14% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 14.22% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 3.76% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 3.90% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 5.84% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 1.44% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 0.20% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 4.73% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 4.37% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 11.11% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 1.87% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 5.12% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 0.11% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 18.87% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 10.41% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 16.36% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 4.39% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 7.90% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 7.62% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 3.96% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 6.48% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 3.36% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 7.56% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 6.72% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 1.89% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 17.25% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 7.09% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 5.43% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 0.42% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 6.44% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 7.88% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 3.33% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 5.39% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 3.51% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 6.82% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 6.72% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 3.31% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 16.89% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 13.12% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 6.15% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 6.54% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 2.81% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 1.38% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 10.31% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 4.48% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 11.06% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 0.18% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 4.54% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.61% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 15.23% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 7.12% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 3.75% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 0.54% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 5.46% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 6.02% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 3.88% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 6.71% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 4.59% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 5.03% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 10.05% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 5.32% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 17.28% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 7.23% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 5.18% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 6.22% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 0.25% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 0.08% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 3.91% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 4.20% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 11.22% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 0.56% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 3.78% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 1.61% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 12.35% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 6.01% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 4.45% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 0.41% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 3.69% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 6.92% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 4.16% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 6.79% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 4.03% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 7.16% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 8.37% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 4.02% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 14.75% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 2.01% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 6.85% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 1.96% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 1.83% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 2.75% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 5.51% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 5.57% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 11.48% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 3.12% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 4.77% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 2.03% compared to the last run.
---
Report generated on: 2026-03-23T18:37:36.282948
