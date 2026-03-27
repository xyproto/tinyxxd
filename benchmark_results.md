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
| xxd | 64 | 1.32 |  |
| xxd | 64 | 2.24 | -r |
| xxd | 64 | 4.03 | -b |
| xxd | 64 | 4.50 | -r -b |
| xxd | 64 | 1.52 |  |
| xxd | 64 | 1.08 | -p |
| xxd | 64 | 4.97 | -i |
| xxd | 64 | 1.32 | -e |
| xxd | 64 | 2.68 | -b |
| xxd | 64 | 1.29 | -u |
| xxd | 64 | 1.47 | -E |
| xxd | 64 | 5.67 | -b -i |
| tinyxxd | 64 | 0.63 |  |
| tinyxxd | 64 | 0.88 | -r |
| tinyxxd | 64 | 3.96 | -b |
| tinyxxd | 64 | 1.50 | -r -b |
| tinyxxd | 64 | 0.83 |  |
| tinyxxd | 64 | 0.62 | -p |
| tinyxxd | 64 | 4.85 | -i |
| tinyxxd | 64 | 1.10 | -e |
| tinyxxd | 64 | 2.76 | -b |
| tinyxxd | 64 | 0.62 | -u |
| tinyxxd | 64 | 0.59 | -E |
| tinyxxd | 64 | 3.59 | -b -i |
| xxd | 32 | 0.66 |  |
| xxd | 32 | 1.08 | -r |
| xxd | 32 | 1.53 | -b |
| xxd | 32 | 2.15 | -r -b |
| xxd | 32 | 0.74 |  |
| xxd | 32 | 0.54 | -p |
| xxd | 32 | 2.50 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.34 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.74 | -E |
| xxd | 32 | 2.84 | -b -i |
| tinyxxd | 32 | 0.31 |  |
| tinyxxd | 32 | 0.44 | -r |
| tinyxxd | 32 | 2.09 | -b |
| tinyxxd | 32 | 0.75 | -r -b |
| tinyxxd | 32 | 0.38 |  |
| tinyxxd | 32 | 0.31 | -p |
| tinyxxd | 32 | 2.35 | -i |
| tinyxxd | 32 | 0.56 | -e |
| tinyxxd | 32 | 1.39 | -b |
| tinyxxd | 32 | 0.31 | -u |
| tinyxxd | 32 | 0.31 | -E |
| tinyxxd | 32 | 1.77 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.57 | -r |
| xxd | 16 | 0.72 | -b |
| xxd | 16 | 1.11 | -r -b |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.26 | -p |
| xxd | 16 | 1.25 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.40 | -E |
| xxd | 16 | 1.49 | -b -i |
| tinyxxd | 16 | 0.15 |  |
| tinyxxd | 16 | 0.22 | -r |
| tinyxxd | 16 | 0.82 | -b |
| tinyxxd | 16 | 0.38 | -r -b |
| tinyxxd | 16 | 0.20 |  |
| tinyxxd | 16 | 0.16 | -p |
| tinyxxd | 16 | 1.19 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.69 | -b |
| tinyxxd | 16 | 0.15 | -u |
| tinyxxd | 16 | 0.15 | -E |
| tinyxxd | 16 | 0.88 | -b -i |
| tinyxxd | 8 | 0.08 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.19 | -r -b |
| tinyxxd | 8 | 0.10 |  |
| tinyxxd | 8 | 0.08 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.35 | -b |
| tinyxxd | 8 | 0.08 | -u |
| tinyxxd | 8 | 0.08 | -E |
| tinyxxd | 8 | 0.44 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.59 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.62 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.33 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.74 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.19 | -b |
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
| tinyxxd | 4 | 0.10 | -r -b |
| tinyxxd | 4 | 0.05 |  |
| tinyxxd | 4 | 0.04 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.18 | -b |
| tinyxxd | 4 | 0.04 | -u |
| tinyxxd | 4 | 0.04 | -E |
| tinyxxd | 4 | 0.22 | -b -i |
| tinyxxd | 2 | 0.02 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.09 | -b |
| tinyxxd | 2 | 0.05 | -r -b |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.02 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.09 | -b |
| tinyxxd | 2 | 0.02 | -u |
| tinyxxd | 2 | 0.02 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
| xxd | 2 | 0.05 |  |
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
| xxd | 2 | 0.18 | -b -i |
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
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.07 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 95.08% faster with no flag.
- For sample size 64 MiB, tinyxxd was 155.00% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 199.77% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 73.15% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 20.24% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 108.49% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 150.51% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 57.84% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 101.69% faster with no flag.
- For sample size 32 MiB, tinyxxd was 145.05% faster with flags '-r'.
- For sample size 32 MiB, xxd was 21.12% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 185.47% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 74.44% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 6.53% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 20.72% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 113.55% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 141.51% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 60.62% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 98.94% faster with no flag.
- For sample size 16 MiB, tinyxxd was 153.96% faster with flags '-r'.
- For sample size 16 MiB, xxd was 8.32% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 194.48% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 66.00% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 20.28% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 114.44% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 160.22% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 68.81% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 99.08% faster with no flag.
- For sample size 8 MiB, tinyxxd was 158.86% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 205.88% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 69.47% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 5.37% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 20.85% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 112.76% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 132.90% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 65.98% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 93.82% faster with no flag.
- For sample size 4 MiB, tinyxxd was 147.47% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 180.38% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 66.61% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 6.05% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 14.60% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 104.77% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 128.49% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 64.49% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 93.29% faster with no flag.
- For sample size 2 MiB, tinyxxd was 147.39% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 178.47% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 52.67% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 14.74% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 92.61% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 111.36% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 34.71% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 71.50% faster with no flag.
- For sample size 1 MiB, tinyxxd was 122.52% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 162.58% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 54.51% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 7.18% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 19.25% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 88.74% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 104.09% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 57.46% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 46.36% faster than xxd.
- For sample 32 MiB, tinyxxd was 40.94% faster than xxd.
- For sample 16 MiB, tinyxxd was 48.57% faster than xxd.
- For sample 8 MiB, tinyxxd was 50.31% faster than xxd.
- For sample 4 MiB, tinyxxd was 48.29% faster than xxd.
- For sample 2 MiB, tinyxxd was 41.65% faster than xxd.
- For sample 1 MiB, tinyxxd was 43.58% faster than xxd.

### Performance by flag
- tinyxxd was 97.09% faster with no flag.
- tinyxxd was 151.93% faster with flag '-r'.
- xxd was 6.38% faster with flag '-b'.
- tinyxxd was 194.57% faster with flag '-r -b'.
- tinyxxd was 71.52% faster with flag '-p'.
- tinyxxd was 20.10% faster with flag '-e'.
- tinyxxd was 110.13% faster with flag '-u'.
- tinyxxd was 146.27% faster with flag '-E'.
- tinyxxd was 60.17% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 2.53% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 6.15% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 80.01% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 23.34% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 17.48% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 35.76% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 19.35% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 14.33% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 19.61% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 9.13% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 11.06% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 34.52% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 0.84% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 11.45% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 91.92% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 0.88% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 33.39% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 24.27% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 17.21% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 23.78% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 33.68% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 29.34% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 22.40% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 30.28% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 2.92% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 2.08% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 34.43% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 24.44% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 15.53% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 36.44% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 21.05% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 15.64% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 17.94% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 14.09% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 12.34% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 36.47% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 5.74% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 4.51% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 98.97% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd improved by 1.04% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 30.33% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 25.53% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 14.70% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 25.08% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 32.73% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 24.57% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 26.81% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 28.64% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 4.40% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 5.43% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 28.14% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 26.95% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 17.25% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 30.17% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 19.80% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 14.79% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 19.32% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 14.23% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 20.91% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 42.67% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 2.85% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 2.88% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 59.62% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 0.89% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 34.69% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 24.22% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 16.38% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 25.47% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 35.90% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 28.53% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 28.42% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 29.18% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 3.41% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 4.01% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 35.49% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 4.06% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 33.06% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 25.74% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 14.62% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 13.48% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 25.56% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 25.36% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 28.87% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 18.38% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 2.92% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 7.65% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 27.49% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 24.68% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 16.24% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 34.26% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 19.71% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 16.19% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 18.18% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 14.31% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 11.36% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 41.08% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 3.77% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 5.56% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 28.77% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 23.63% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 16.22% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 34.32% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 18.83% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 17.88% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 18.52% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 12.44% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 4.88% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 34.97% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 6.30% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 3.78% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 40.06% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 1.75% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 31.88% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 23.57% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 13.50% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 33.33% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 32.56% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 26.18% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 25.48% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 29.51% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 7.22% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 5.27% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 40.16% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 1.42% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 28.59% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 25.04% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 14.29% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 23.08% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 34.45% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 26.46% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 28.94% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 52.08% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 9.02% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 7.18% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 25.74% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 26.60% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 16.25% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 25.76% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 18.33% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 12.85% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 17.58% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 13.07% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 11.76% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 35.88% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 12.58% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 3.64% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 37.87% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 2.73% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 28.28% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 19.99% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 11.27% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 15.52% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 30.82% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 8.72% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 26.96% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 8.76% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 1.58% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 2.07% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 25.86% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 26.66% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 10.62% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 28.93% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 16.03% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 12.07% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 19.29% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 13.89% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 10.73% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 35.25% compared to the last run.
---
Report generated on: 2026-03-27T17:03:03.555375
