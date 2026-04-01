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
| xxd | 64 | 1.31 |  |
| xxd | 64 | 2.25 | -r |
| xxd | 64 | 4.14 | -b |
| xxd | 64 | 4.35 | -r -b |
| xxd | 64 | 1.47 |  |
| xxd | 64 | 1.12 | -p |
| xxd | 64 | 5.00 | -i |
| xxd | 64 | 1.32 | -e |
| xxd | 64 | 2.65 | -b |
| xxd | 64 | 1.32 | -u |
| xxd | 64 | 1.51 | -E |
| xxd | 64 | 5.75 | -b -i |
| tinyxxd | 64 | 0.60 |  |
| tinyxxd | 64 | 0.97 | -r |
| tinyxxd | 64 | 3.67 | -b |
| tinyxxd | 64 | 1.64 | -r -b |
| tinyxxd | 64 | 0.88 |  |
| tinyxxd | 64 | 0.62 | -p |
| tinyxxd | 64 | 4.72 | -i |
| tinyxxd | 64 | 1.12 | -e |
| tinyxxd | 64 | 2.80 | -b |
| tinyxxd | 64 | 0.58 | -u |
| tinyxxd | 64 | 0.59 | -E |
| tinyxxd | 64 | 3.61 | -b -i |
| tinyxxd | 32 | 0.32 |  |
| tinyxxd | 32 | 0.48 | -r |
| tinyxxd | 32 | 1.83 | -b |
| tinyxxd | 32 | 0.82 | -r -b |
| tinyxxd | 32 | 0.39 |  |
| tinyxxd | 32 | 0.31 | -p |
| tinyxxd | 32 | 2.35 | -i |
| tinyxxd | 32 | 0.55 | -e |
| tinyxxd | 32 | 1.39 | -b |
| tinyxxd | 32 | 0.29 | -u |
| tinyxxd | 32 | 0.30 | -E |
| tinyxxd | 32 | 1.77 | -b -i |
| xxd | 32 | 0.64 |  |
| xxd | 32 | 1.10 | -r |
| xxd | 32 | 1.76 | -b |
| xxd | 32 | 2.23 | -r -b |
| xxd | 32 | 0.75 |  |
| xxd | 32 | 0.53 | -p |
| xxd | 32 | 2.56 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.33 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.73 | -E |
| xxd | 32 | 2.88 | -b -i |
| tinyxxd | 16 | 0.16 |  |
| tinyxxd | 16 | 0.24 | -r |
| tinyxxd | 16 | 0.76 | -b |
| tinyxxd | 16 | 0.41 | -r -b |
| tinyxxd | 16 | 0.19 |  |
| tinyxxd | 16 | 0.16 | -p |
| tinyxxd | 16 | 1.23 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.69 | -b |
| tinyxxd | 16 | 0.15 | -u |
| tinyxxd | 16 | 0.15 | -E |
| tinyxxd | 16 | 0.88 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.55 | -r |
| xxd | 16 | 0.84 | -b |
| xxd | 16 | 1.08 | -r -b |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.27 | -p |
| xxd | 16 | 1.25 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.68 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.36 | -E |
| xxd | 16 | 1.49 | -b -i |
| tinyxxd | 8 | 0.08 |  |
| tinyxxd | 8 | 0.12 | -r |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.21 | -r -b |
| tinyxxd | 8 | 0.10 |  |
| tinyxxd | 8 | 0.08 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.36 | -b |
| tinyxxd | 8 | 0.08 | -u |
| tinyxxd | 8 | 0.08 | -E |
| tinyxxd | 8 | 0.44 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.56 | -r -b |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.62 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.33 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.73 | -b -i |
| tinyxxd | 4 | 0.04 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.10 | -r -b |
| tinyxxd | 4 | 0.05 |  |
| tinyxxd | 4 | 0.04 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.18 | -b |
| tinyxxd | 4 | 0.04 | -u |
| tinyxxd | 4 | 0.04 | -E |
| tinyxxd | 4 | 0.22 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.28 | -r -b |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.32 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.36 | -b -i |
| tinyxxd | 2 | 0.02 |  |
| tinyxxd | 2 | 0.04 | -r |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.05 | -r -b |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.02 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.09 | -b |
| tinyxxd | 2 | 0.02 | -u |
| tinyxxd | 2 | 0.02 | -E |
| tinyxxd | 2 | 0.11 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.14 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.05 | -e |
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
| xxd | 1 | 0.09 | -b -i |
| tinyxxd | 1 | 0.01 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.03 | -r -b |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.01 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.01 | -u |
| tinyxxd | 1 | 0.01 | -E |
| tinyxxd | 1 | 0.06 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 88.63% faster with no flag.
- For sample size 64 MiB, tinyxxd was 132.15% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 165.66% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 80.27% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 5.91% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 18.43% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 126.15% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 157.17% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 59.31% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 96.86% faster with no flag.
- For sample size 32 MiB, tinyxxd was 127.63% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 171.26% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 69.72% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 8.74% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 23.08% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 122.50% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 145.86% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 62.88% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 101.03% faster with no flag.
- For sample size 16 MiB, tinyxxd was 125.47% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 164.36% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 70.63% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 21.33% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 112.87% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 134.43% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 68.05% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 110.85% faster with no flag.
- For sample size 8 MiB, tinyxxd was 135.19% faster with flags '-r'.
- For sample size 8 MiB, xxd was 5.56% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 172.88% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 69.73% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 5.36% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 22.03% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 111.68% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 143.96% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 64.39% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 96.72% faster with no flag.
- For sample size 4 MiB, tinyxxd was 137.48% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 173.74% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 66.47% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 6.82% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 19.34% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 129.06% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 127.29% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 60.64% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 94.73% faster with no flag.
- For sample size 2 MiB, tinyxxd was 108.00% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 165.90% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 59.68% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 5.28% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 18.90% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 95.36% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 117.89% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 63.96% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 82.66% faster with no flag.
- For sample size 1 MiB, tinyxxd was 111.07% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 153.45% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 52.94% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 17.45% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 89.70% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 102.64% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 62.25% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 47.76% faster than xxd.
- For sample 32 MiB, tinyxxd was 46.54% faster than xxd.
- For sample 16 MiB, tinyxxd was 48.15% faster than xxd.
- For sample 8 MiB, tinyxxd was 48.39% faster than xxd.
- For sample 4 MiB, tinyxxd was 49.00% faster than xxd.
- For sample 2 MiB, tinyxxd was 45.35% faster than xxd.
- For sample 1 MiB, tinyxxd was 43.32% faster than xxd.

### Performance by flag
- tinyxxd was 93.83% faster with no flag.
- tinyxxd was 129.90% faster with flag '-r'.
- tinyxxd was 167.52% faster with flag '-r -b'.
- tinyxxd was 74.59% faster with flag '-p'.
- tinyxxd was 6.00% faster with flag '-i'.
- tinyxxd was 20.21% faster with flag '-e'.
- tinyxxd was 121.70% faster with flag '-u'.
- tinyxxd was 148.17% faster with flag '-E'.
- tinyxxd was 61.74% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 20.09% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 5.67% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 48.86% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 6.51% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 9.88% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 3.12% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 2.97% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 6.16% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 4.72% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 4.77% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 4.84% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 3.91% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 26.14% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 1.54% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 24.14% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 4.80% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 8.15% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 4.23% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 3.98% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 3.84% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 5.22% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 7.26% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 12.24% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 0.79% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 22.96% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 1.85% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 25.62% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 4.72% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 7.03% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 5.43% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 5.71% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 7.36% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 4.86% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 7.45% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 6.86% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 0.09% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 17.68% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 10.29% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 27.03% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 0.99% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 4.77% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 8.54% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 1.73% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 6.95% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 3.91% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 4.56% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 9.64% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 6.23% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 24.98% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 2.19% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 3.36% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 4.29% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 6.45% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 5.39% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 0.42% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 4.07% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 5.62% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 4.71% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 3.62% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 0.76% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 15.01% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 9.12% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 21.16% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 6.67% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 3.58% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 7.56% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 4.73% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 11.95% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 2.44% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 6.14% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 8.30% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 0.28% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 25.16% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 1.94% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 0.66% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 3.64% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 6.28% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 4.48% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 4.85% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 5.75% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 5.63% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 4.93% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 8.02% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 0.87% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 14.11% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 5.98% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 3.69% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 3.20% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 3.09% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 7.70% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 4.58% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 4.99% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 4.32% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 6.82% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 6.37% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 5.24% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 25.43% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 4.06% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 1.12% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 2.69% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 5.95% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 3.18% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 6.16% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 4.64% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.16% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 6.45% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 4.29% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.79% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 16.15% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 5.35% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 1.49% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 1.50% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 7.75% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 7.27% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 5.04% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 6.95% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 7.35% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 2.78% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 6.98% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 4.77% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 25.10% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 4.77% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 2.65% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 1.51% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 12.31% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 2.86% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 7.09% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 4.53% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 4.19% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 5.21% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 4.79% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 1.35% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 14.33% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 8.06% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 3.07% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 1.29% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 4.65% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 8.12% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 7.00% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 6.78% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 9.24% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 6.95% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 7.64% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 3.12% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 14.81% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 7.14% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 0.57% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 3.82% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 6.66% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 7.45% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 6.97% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 9.52% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 5.75% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 6.56% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 9.01% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 1.21% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 20.51% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 3.89% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 5.77% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 0.82% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 5.45% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 1.64% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 4.17% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 7.03% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 10.79% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 20.05% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 9.90% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 11.37% compared to the last run.
---
Report generated on: 2026-04-01T12:36:45.930341
