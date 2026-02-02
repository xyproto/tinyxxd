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
| xxd | 64 | 1.38 |  |
| xxd | 64 | 2.28 | -r |
| xxd | 64 | 4.11 | -b |
| xxd | 64 | 4.72 | -r -b |
| xxd | 64 | 1.68 |  |
| xxd | 64 | 1.08 | -p |
| xxd | 64 | 4.90 | -i |
| xxd | 64 | 1.36 | -e |
| xxd | 64 | 2.69 | -b |
| xxd | 64 | 1.31 | -u |
| xxd | 64 | 1.46 | -E |
| xxd | 64 | 5.99 | -b -i |
| tinyxxd | 64 | 1.01 |  |
| tinyxxd | 64 | 0.93 | -r |
| tinyxxd | 64 | 4.25 | -b |
| tinyxxd | 64 | 2.03 | -r -b |
| tinyxxd | 64 | 1.43 |  |
| tinyxxd | 64 | 0.94 | -p |
| tinyxxd | 64 | 4.63 | -i |
| tinyxxd | 64 | 1.07 | -e |
| tinyxxd | 64 | 3.23 | -b |
| tinyxxd | 64 | 1.00 | -u |
| tinyxxd | 64 | 1.09 | -E |
| tinyxxd | 64 | 4.18 | -b -i |
| xxd | 32 | 0.66 |  |
| xxd | 32 | 1.18 | -r |
| xxd | 32 | 1.78 | -b |
| xxd | 32 | 2.35 | -r -b |
| xxd | 32 | 0.75 |  |
| xxd | 32 | 0.55 | -p |
| xxd | 32 | 2.44 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.37 | -b |
| xxd | 32 | 0.67 | -u |
| xxd | 32 | 0.73 | -E |
| xxd | 32 | 2.97 | -b -i |
| tinyxxd | 32 | 0.51 |  |
| tinyxxd | 32 | 0.46 | -r |
| tinyxxd | 32 | 2.27 | -b |
| tinyxxd | 32 | 1.01 | -r -b |
| tinyxxd | 32 | 0.59 |  |
| tinyxxd | 32 | 0.49 | -p |
| tinyxxd | 32 | 2.32 | -i |
| tinyxxd | 32 | 0.57 | -e |
| tinyxxd | 32 | 1.60 | -b |
| tinyxxd | 32 | 0.50 | -u |
| tinyxxd | 32 | 0.55 | -E |
| tinyxxd | 32 | 2.04 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.74 | -b |
| xxd | 16 | 1.18 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.22 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.68 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.49 | -b -i |
| tinyxxd | 16 | 0.25 |  |
| tinyxxd | 16 | 0.23 | -r |
| tinyxxd | 16 | 0.92 | -b |
| tinyxxd | 16 | 0.51 | -r -b |
| tinyxxd | 16 | 0.29 |  |
| tinyxxd | 16 | 0.23 | -p |
| tinyxxd | 16 | 1.16 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.79 | -b |
| tinyxxd | 16 | 0.25 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.02 | -b -i |
| xxd | 8 | 0.18 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.59 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.13 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.74 | -b -i |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.12 | -r |
| tinyxxd | 8 | 0.42 | -b |
| tinyxxd | 8 | 0.26 | -r -b |
| tinyxxd | 8 | 0.15 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.40 | -b |
| tinyxxd | 8 | 0.12 | -u |
| tinyxxd | 8 | 0.14 | -E |
| tinyxxd | 8 | 0.51 | -b -i |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.18 | -r |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.13 | -r -b |
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
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
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
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.15 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.04 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
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

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 25.29% faster with no flag.
- For sample size 64 MiB, tinyxxd was 146.30% faster with flags '-r'.
- For sample size 64 MiB, xxd was 9.99% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 132.66% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 14.86% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 5.81% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 27.33% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 30.53% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 33.86% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 43.36% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 28.18% faster with no flag.
- For sample size 32 MiB, tinyxxd was 155.36% faster with flags '-r'.
- For sample size 32 MiB, xxd was 22.95% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 132.34% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 12.58% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 19.54% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 34.31% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 33.86% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 45.52% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 31.27% faster with no flag.
- For sample size 16 MiB, tinyxxd was 146.12% faster with flags '-r'.
- For sample size 16 MiB, xxd was 21.42% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 132.76% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 18.26% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 20.06% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 32.44% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 35.12% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 46.42% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 35.48% faster with no flag.
- For sample size 8 MiB, tinyxxd was 147.22% faster with flags '-r'.
- For sample size 8 MiB, xxd was 16.22% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 130.11% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 13.62% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 23.47% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 34.57% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 37.46% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 44.70% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 26.45% faster with no flag.
- For sample size 4 MiB, xxd was 24.77% faster with flags '-r'.
- For sample size 4 MiB, xxd was 17.89% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 120.94% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 16.34% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 22.79% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 30.90% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 33.63% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 44.84% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 27.13% faster with no flag.
- For sample size 2 MiB, tinyxxd was 143.85% faster with flags '-r'.
- For sample size 2 MiB, xxd was 17.08% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 125.07% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 16.98% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 21.79% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 32.30% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 31.85% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 45.82% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 25.80% faster with no flag.
- For sample size 1 MiB, tinyxxd was 130.98% faster with flags '-r'.
- For sample size 1 MiB, xxd was 17.14% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 114.43% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 15.47% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 5.65% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 20.93% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 31.26% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 32.56% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 36.08% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 27.81% faster than xxd.
- For sample 32 MiB, tinyxxd was 24.91% faster than xxd.
- For sample 16 MiB, tinyxxd was 27.25% faster than xxd.
- For sample 8 MiB, tinyxxd was 28.66% faster than xxd.
- For sample 4 MiB, tinyxxd was 17.41% faster than xxd.
- For sample 2 MiB, tinyxxd was 27.30% faster than xxd.
- For sample 1 MiB, tinyxxd was 24.99% faster than xxd.

### Performance by flag
- tinyxxd was 27.35% faster with no flag.
- tinyxxd was 132.74% faster with flag '-r'.
- xxd was 15.20% faster with flag '-b'.
- tinyxxd was 131.77% faster with flag '-r -b'.
- tinyxxd was 14.70% faster with flag '-p'.
- tinyxxd was 5.27% faster with flag '-i'.
- tinyxxd was 23.83% faster with flag '-e'.
- tinyxxd was 32.01% faster with flag '-u'.
- tinyxxd was 34.20% faster with flag '-E'.
- tinyxxd was 44.38% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 17.29% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 10.99% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 52.71% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 1.49% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 0.82% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 0.57% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 1.74% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 0.89% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 0.19% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 0.67% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 0.42% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 1.49% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 18.83% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 2.78% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 31.91% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 9.60% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 14.13% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 1.39% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 1.52% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 3.01% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 0.11% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 2.67% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 0.09% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 1.63% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 12.23% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 1.36% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 31.23% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 2.10% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 0.88% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 0.36% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 1.30% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 0.27% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 0.60% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 0.48% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 0.54% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 1.64% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 15.88% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 2.03% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 41.41% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 8.82% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 3.94% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 1.64% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 0.20% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 2.65% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 0.38% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 0.04% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 0.60% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 12.92% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 3.31% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 10.08% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 0.47% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 0.54% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 0.14% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 0.41% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 4.81% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 0.91% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 1.26% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 1.15% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 0.09% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 15.19% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 3.71% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 15.82% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 9.34% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 1.46% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 2.47% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 0.70% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 2.35% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 1.02% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 7.01% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 0.53% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 1.21% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 5.51% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 3.71% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 8.57% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 0.35% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 0.82% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 3.60% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 1.18% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 1.22% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 0.48% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 0.80% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 2.18% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 1.21% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 14.64% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 0.08% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 4.54% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 9.64% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 0.54% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 2.65% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 0.35% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 3.91% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 1.31% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 1.29% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 0.84% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 0.49% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 10.87% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 207.86% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 8.11% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 10.47% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 2.33% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 1.73% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 4.85% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 18.43% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 0.67% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 0.75% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 0.13% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.13% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 15.86% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 0.96% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 7.27% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 5.01% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 5.85% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 1.13% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 0.66% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 1.05% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 1.25% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 2.52% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 0.42% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 0.20% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 10.80% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 0.70% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 4.41% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 8.52% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 1.80% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 2.66% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 1.03% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 3.09% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 1.18% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 1.84% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 0.66% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.45% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 11.57% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 1.12% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 3.69% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 0.91% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 1.64% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 0.64% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 0.53% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 1.62% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 3.20% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 0.02% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 0.71% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 10.77% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 2.66% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 4.78% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 8.86% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 0.60% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 3.66% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 2.11% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 2.45% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 0.35% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 1.31% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 0.61% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 5.48% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 8.47% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 0.43% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 7.92% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 2.07% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 2.89% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 4.99% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 1.68% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 1.78% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 2.08% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 4.85% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 2.98% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 0.69% compared to the last run.
---
Report generated on: 2026-02-02T14:18:43.808395
