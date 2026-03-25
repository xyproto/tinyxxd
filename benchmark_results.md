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
| tinyxxd | 64 | 0.59 |  |
| tinyxxd | 64 | 0.91 | -r |
| tinyxxd | 64 | 5.00 | -b |
| tinyxxd | 64 | 1.78 | -r -b |
| tinyxxd | 64 | 0.75 |  |
| tinyxxd | 64 | 0.89 | -p |
| tinyxxd | 64 | 4.78 | -i |
| tinyxxd | 64 | 1.09 | -e |
| tinyxxd | 64 | 2.73 | -b |
| tinyxxd | 64 | 0.60 | -u |
| tinyxxd | 64 | 0.61 | -E |
| tinyxxd | 64 | 3.56 | -b -i |
| xxd | 64 | 1.32 |  |
| xxd | 64 | 2.31 | -r |
| xxd | 64 | 3.95 | -b |
| xxd | 64 | 4.74 | -r -b |
| xxd | 64 | 1.66 |  |
| xxd | 64 | 1.10 | -p |
| xxd | 64 | 4.98 | -i |
| xxd | 64 | 1.32 | -e |
| xxd | 64 | 2.68 | -b |
| xxd | 64 | 1.29 | -u |
| xxd | 64 | 1.47 | -E |
| xxd | 64 | 5.58 | -b -i |
| tinyxxd | 32 | 0.31 |  |
| tinyxxd | 32 | 0.45 | -r |
| tinyxxd | 32 | 1.80 | -b |
| tinyxxd | 32 | 0.89 | -r -b |
| tinyxxd | 32 | 0.38 |  |
| tinyxxd | 32 | 0.47 | -p |
| tinyxxd | 32 | 2.34 | -i |
| tinyxxd | 32 | 0.55 | -e |
| tinyxxd | 32 | 1.41 | -b |
| tinyxxd | 32 | 0.30 | -u |
| tinyxxd | 32 | 0.30 | -E |
| tinyxxd | 32 | 1.76 | -b -i |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.14 | -r |
| xxd | 32 | 2.97 | -b |
| xxd | 32 | 2.30 | -r -b |
| xxd | 32 | 0.73 |  |
| xxd | 32 | 0.54 | -p |
| xxd | 32 | 2.49 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.35 | -b |
| xxd | 32 | 0.68 | -u |
| xxd | 32 | 0.76 | -E |
| xxd | 32 | 2.87 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.74 | -b |
| xxd | 16 | 1.12 | -r -b |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.26 | -i |
| xxd | 16 | 0.33 | -e |
| xxd | 16 | 0.70 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.44 | -b -i |
| tinyxxd | 16 | 0.15 |  |
| tinyxxd | 16 | 0.22 | -r |
| tinyxxd | 16 | 0.83 | -b |
| tinyxxd | 16 | 0.45 | -r -b |
| tinyxxd | 16 | 0.19 |  |
| tinyxxd | 16 | 0.23 | -p |
| tinyxxd | 16 | 1.18 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.69 | -b |
| tinyxxd | 16 | 0.15 | -u |
| tinyxxd | 16 | 0.15 | -E |
| tinyxxd | 16 | 0.88 | -b -i |
| tinyxxd | 8 | 0.08 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.37 | -b |
| tinyxxd | 8 | 0.23 | -r -b |
| tinyxxd | 8 | 0.10 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.39 | -b |
| tinyxxd | 8 | 0.08 | -u |
| tinyxxd | 8 | 0.08 | -E |
| tinyxxd | 8 | 0.44 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.59 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.63 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.69 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.28 | -r -b |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.08 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.36 | -b -i |
| tinyxxd | 4 | 0.04 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.11 | -r -b |
| tinyxxd | 4 | 0.05 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.17 | -b |
| tinyxxd | 4 | 0.04 | -u |
| tinyxxd | 4 | 0.04 | -E |
| tinyxxd | 4 | 0.22 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.15 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.18 | -b -i |
| tinyxxd | 2 | 0.02 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.09 | -b |
| tinyxxd | 2 | 0.06 | -r -b |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.09 | -b |
| tinyxxd | 2 | 0.02 | -u |
| tinyxxd | 2 | 0.02 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.08 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b -i |
| tinyxxd | 1 | 0.01 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.03 | -r -b |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.01 | -u |
| tinyxxd | 1 | 0.01 | -E |
| tinyxxd | 1 | 0.06 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 120.96% faster with no flag.
- For sample size 64 MiB, tinyxxd was 152.34% faster with flags '-r'.
- For sample size 64 MiB, xxd was 16.48% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 166.09% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 23.05% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 21.03% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 114.28% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 139.96% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 56.73% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 103.24% faster with no flag.
- For sample size 32 MiB, tinyxxd was 153.65% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 34.65% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 158.92% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 16.16% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 6.25% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 21.82% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 127.13% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 148.48% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 63.10% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 100.54% faster with no flag.
- For sample size 16 MiB, tinyxxd was 157.28% faster with flags '-r'.
- For sample size 16 MiB, xxd was 5.48% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 149.68% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 23.50% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 6.84% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 20.61% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 117.79% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 150.03% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 64.42% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 103.49% faster with no flag.
- For sample size 8 MiB, tinyxxd was 149.58% faster with flags '-r'.
- For sample size 8 MiB, xxd was 8.76% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 161.65% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 18.15% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 5.85% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 18.41% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 120.98% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 137.88% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 54.81% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 92.88% faster with no flag.
- For sample size 4 MiB, tinyxxd was 135.86% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 147.55% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 22.59% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 6.91% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 16.51% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 111.55% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 132.32% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 60.84% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 88.17% faster with no flag.
- For sample size 2 MiB, tinyxxd was 143.91% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 152.99% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 21.39% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 7.03% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 19.80% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 101.42% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 124.31% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 36.06% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 82.22% faster with no flag.
- For sample size 1 MiB, tinyxxd was 121.60% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 147.19% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 17.23% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 18.06% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 82.81% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 102.03% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 56.22% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 38.99% faster than xxd.
- For sample 32 MiB, tinyxxd was 56.69% faster than xxd.
- For sample 16 MiB, tinyxxd was 45.36% faster than xxd.
- For sample 8 MiB, tinyxxd was 43.34% faster than xxd.
- For sample 4 MiB, tinyxxd was 45.40% faster than xxd.
- For sample 2 MiB, tinyxxd was 42.15% faster than xxd.
- For sample 1 MiB, tinyxxd was 41.79% faster than xxd.

### Performance by flag
- tinyxxd was 110.82% faster with no flag.
- tinyxxd was 152.11% faster with flag '-r'.
- tinyxxd was 160.96% faster with flag '-r -b'.
- tinyxxd was 20.91% faster with flag '-p'.
- tinyxxd was 20.81% faster with flag '-e'.
- tinyxxd was 117.68% faster with flag '-u'.
- tinyxxd was 142.22% faster with flag '-E'.
- tinyxxd was 58.89% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 42.74% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 19.81% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 44.87% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 1.35% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 27.60% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 5.69% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 3.37% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 9.16% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 20.94% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 29.41% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 26.17% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 0.50% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 21.39% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 9.46% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 38.94% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 3.60% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 0.93% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 5.62% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 5.37% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 11.26% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 5.90% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 9.17% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 9.52% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 5.46% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 39.71% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 16.70% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 2.86% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 0.44% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 24.51% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 0.40% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 7.55% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 4.47% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 19.40% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 26.93% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 26.95% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 1.26% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 20.19% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 10.13% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 104.43% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 8.85% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 12.06% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 9.58% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 5.69% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 6.89% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 6.88% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 2.92% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 7.95% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 2.38% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 17.42% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 8.57% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 5.25% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 5.62% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 8.24% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 7.85% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 4.33% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 8.63% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 1.32% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 7.86% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 8.51% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 5.11% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 40.72% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 11.84% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 4.48% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 0.23% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 24.93% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 32.92% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 6.85% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 4.54% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 19.97% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 28.65% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 34.60% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 2.58% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 40.05% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 8.95% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 14.70% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 0.64% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 25.92% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 4.00% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 5.35% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 4.48% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 10.47% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 28.79% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 26.42% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 0.66% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 19.51% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 12.24% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 0.20% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 7.60% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 8.95% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 11.51% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 4.95% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 7.19% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 5.35% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 7.48% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 8.97% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 6.01% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 19.35% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 11.10% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 1.03% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 4.02% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 11.18% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 8.14% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 5.55% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 29.96% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 8.97% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 8.77% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 7.87% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 3.56% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 37.99% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 13.00% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 15.78% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 1.35% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 24.83% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 4.79% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 7.61% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 3.72% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 20.76% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 28.41% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 26.30% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 1.74% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 18.04% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 8.19% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 1.73% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 6.09% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 9.82% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 8.87% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 4.51% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 8.56% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 5.08% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 7.19% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 8.90% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 0.09% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 37.19% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 9.68% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 17.83% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 1.85% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 26.02% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 7.36% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 5.24% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 6.87% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 22.62% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 44.96% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 27.87% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 2.42% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 16.92% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 11.15% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 1.09% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 1.81% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 12.36% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 11.06% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 5.69% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 9.72% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 6.41% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 10.31% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 10.14% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 5.55% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 37.48% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 7.80% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 18.10% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 4.65% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 26.05% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 7.22% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 6.45% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 9.03% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 21.32% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 25.62% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 25.97% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 3.89% compared to the last run.
---
Report generated on: 2026-03-25T12:23:13.011273
