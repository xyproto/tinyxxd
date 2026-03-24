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
| xxd | 64 | 1.45 |  |
| xxd | 64 | 2.40 | -r |
| xxd | 64 | 4.58 | -b |
| xxd | 64 | 4.95 | -r -b |
| xxd | 64 | 1.63 |  |
| xxd | 64 | 1.17 | -p |
| xxd | 64 | 5.26 | -i |
| xxd | 64 | 1.45 | -e |
| xxd | 64 | 2.84 | -b |
| xxd | 64 | 1.42 | -u |
| xxd | 64 | 1.63 | -E |
| xxd | 64 | 5.98 | -b -i |
| tinyxxd | 64 | 0.87 |  |
| tinyxxd | 64 | 0.79 | -r |
| tinyxxd | 64 | 4.80 | -b |
| tinyxxd | 64 | 1.56 | -r -b |
| tinyxxd | 64 | 1.18 |  |
| tinyxxd | 64 | 0.94 | -p |
| tinyxxd | 64 | 4.91 | -i |
| tinyxxd | 64 | 1.16 | -e |
| tinyxxd | 64 | 3.62 | -b |
| tinyxxd | 64 | 0.89 | -u |
| tinyxxd | 64 | 1.10 | -E |
| tinyxxd | 64 | 4.23 | -b -i |
| xxd | 32 | 0.71 |  |
| xxd | 32 | 1.25 | -r |
| xxd | 32 | 1.92 | -b |
| xxd | 32 | 2.40 | -r -b |
| xxd | 32 | 0.81 |  |
| xxd | 32 | 0.60 | -p |
| xxd | 32 | 2.65 | -i |
| xxd | 32 | 0.72 | -e |
| xxd | 32 | 1.41 | -b |
| xxd | 32 | 0.73 | -u |
| xxd | 32 | 0.81 | -E |
| xxd | 32 | 2.94 | -b -i |
| tinyxxd | 32 | 0.46 |  |
| tinyxxd | 32 | 0.39 | -r |
| tinyxxd | 32 | 2.20 | -b |
| tinyxxd | 32 | 0.76 | -r -b |
| tinyxxd | 32 | 0.52 |  |
| tinyxxd | 32 | 0.47 | -p |
| tinyxxd | 32 | 2.52 | -i |
| tinyxxd | 32 | 0.58 | -e |
| tinyxxd | 32 | 1.81 | -b |
| tinyxxd | 32 | 0.43 | -u |
| tinyxxd | 32 | 0.55 | -E |
| tinyxxd | 32 | 2.15 | -b -i |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.63 | -r |
| xxd | 16 | 0.82 | -b |
| xxd | 16 | 1.17 | -r -b |
| xxd | 16 | 0.41 |  |
| xxd | 16 | 0.29 | -p |
| xxd | 16 | 1.31 | -i |
| xxd | 16 | 0.37 | -e |
| xxd | 16 | 0.71 | -b |
| xxd | 16 | 0.37 | -u |
| xxd | 16 | 0.40 | -E |
| xxd | 16 | 1.47 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.20 | -r |
| tinyxxd | 16 | 1.06 | -b |
| tinyxxd | 16 | 0.38 | -r -b |
| tinyxxd | 16 | 0.26 |  |
| tinyxxd | 16 | 0.24 | -p |
| tinyxxd | 16 | 1.24 | -i |
| tinyxxd | 16 | 0.29 | -e |
| tinyxxd | 16 | 0.90 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.03 | -b -i |
| xxd | 8 | 0.18 |  |
| xxd | 8 | 0.32 | -r |
| xxd | 8 | 0.39 | -b |
| xxd | 8 | 0.59 | -r -b |
| xxd | 8 | 0.21 |  |
| xxd | 8 | 0.15 | -p |
| xxd | 8 | 0.66 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.21 | -u |
| xxd | 8 | 0.21 | -E |
| xxd | 8 | 0.74 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.10 | -r |
| tinyxxd | 8 | 0.48 | -b |
| tinyxxd | 8 | 0.19 | -r -b |
| tinyxxd | 8 | 0.14 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.62 | -i |
| tinyxxd | 8 | 0.15 | -e |
| tinyxxd | 8 | 0.45 | -b |
| tinyxxd | 8 | 0.12 | -u |
| tinyxxd | 8 | 0.14 | -E |
| tinyxxd | 8 | 0.52 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.05 | -r |
| tinyxxd | 4 | 0.24 | -b |
| tinyxxd | 4 | 0.10 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.31 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.23 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.16 | -r |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.30 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.08 | -p |
| xxd | 4 | 0.33 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.11 | -E |
| xxd | 4 | 0.37 | -b -i |
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
| xxd | 2 | 0.22 | -b -i |
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
- For sample size 64 MiB, tinyxxd was 49.80% faster with no flag.
- For sample size 64 MiB, tinyxxd was 205.30% faster with flags '-r'.
- For sample size 64 MiB, xxd was 13.63% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 216.33% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 24.52% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 7.18% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 25.01% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 59.75% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 47.70% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 41.27% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 55.10% faster with no flag.
- For sample size 32 MiB, tinyxxd was 220.14% faster with flags '-r'.
- For sample size 32 MiB, xxd was 20.56% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 214.24% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 28.97% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 23.32% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 68.25% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 46.31% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 36.46% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 63.73% faster with no flag.
- For sample size 16 MiB, tinyxxd was 219.96% faster with flags '-r'.
- For sample size 16 MiB, xxd was 27.66% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 205.03% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 24.47% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 5.77% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 25.49% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 66.30% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 47.72% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 43.21% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 57.04% faster with no flag.
- For sample size 8 MiB, tinyxxd was 216.69% faster with flags '-r'.
- For sample size 8 MiB, xxd was 25.26% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 202.89% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 28.42% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 6.51% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 23.94% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 80.81% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 47.09% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 42.50% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 50.56% faster with no flag.
- For sample size 4 MiB, tinyxxd was 202.46% faster with flags '-r'.
- For sample size 4 MiB, xxd was 25.50% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 187.53% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 26.44% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 5.97% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 22.26% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 59.34% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 44.51% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 40.86% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 46.44% faster with no flag.
- For sample size 2 MiB, tinyxxd was 195.59% faster with flags '-r'.
- For sample size 2 MiB, xxd was 25.71% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 180.55% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 24.42% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 19.87% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 52.29% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 43.80% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 63.65% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 45.58% faster with no flag.
- For sample size 1 MiB, tinyxxd was 163.83% faster with flags '-r'.
- For sample size 1 MiB, xxd was 22.98% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 160.56% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 22.36% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.81% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 19.98% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 31.61% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 40.79% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 40.93% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 33.33% faster than xxd.
- For sample 32 MiB, tinyxxd was 31.71% faster than xxd.
- For sample 16 MiB, tinyxxd was 32.18% faster than xxd.
- For sample 8 MiB, tinyxxd was 33.69% faster than xxd.
- For sample 4 MiB, tinyxxd was 31.12% faster than xxd.
- For sample 2 MiB, tinyxxd was 33.33% faster than xxd.
- For sample 1 MiB, tinyxxd was 28.11% faster than xxd.

### Performance by flag
- tinyxxd was 53.15% faster with no flag.
- tinyxxd was 210.84% faster with flag '-r'.
- xxd was 18.08% faster with flag '-b'.
- tinyxxd was 211.46% faster with flag '-r -b'.
- tinyxxd was 25.91% faster with flag '-p'.
- tinyxxd was 6.28% faster with flag '-i'.
- tinyxxd was 24.35% faster with flag '-e'.
- tinyxxd was 63.55% faster with flag '-u'.
- tinyxxd was 47.07% faster with flag '-E'.
- tinyxxd was 40.69% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 8.75% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 3.78% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 67.14% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 8.84% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 2.98% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 6.39% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 4.10% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 6.09% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 3.59% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 8.02% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 8.63% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 5.55% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 21.39% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 24.86% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 44.25% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 6.44% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 6.80% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 3.61% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 5.18% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 4.49% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 8.64% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 3.11% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 3.05% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 2.30% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 5.97% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 11.12% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 37.26% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 1.05% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 6.40% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 7.71% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 6.72% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 3.42% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 0.75% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 9.71% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 8.38% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 5.01% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 10.36% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 5.35% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 35.92% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd improved by 6.12% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 2.83% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 0.74% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 3.96% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 3.72% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 11.83% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 2.63% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 6.55% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 2.55% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 0.58% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 8.51% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 20.06% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 0.81% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 7.85% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 4.11% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 4.99% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 7.94% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 3.45% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 9.99% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 8.58% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 4.20% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 16.48% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 4.68% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 26.96% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 6.52% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 0.27% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 2.90% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 5.14% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 2.89% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 7.69% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 0.32% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 2.77% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 0.53% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 5.74% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 9.18% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 12.43% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 3.24% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 6.95% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 7.88% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 3.80% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 7.66% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 3.53% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 24.90% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 7.76% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 3.42% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 15.35% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 3.92% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 17.66% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 5.91% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 1.99% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 3.38% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 3.69% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 4.10% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 11.26% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 6.11% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 4.53% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 0.05% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 16.46% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 0.13% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 17.41% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 3.69% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 0.40% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 2.84% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 5.56% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 3.86% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 10.02% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 1.27% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 6.00% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 0.39% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 6.27% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 8.78% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 11.39% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 4.62% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 6.29% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 7.40% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 4.63% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 7.23% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 4.70% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 6.57% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 8.19% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 2.65% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 10.24% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 5.04% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 18.46% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 2.51% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 4.32% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 4.50% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 6.90% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 5.42% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 11.78% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 2.00% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 4.73% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.22% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 6.63% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 9.17% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 11.33% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 1.21% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 5.65% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 9.17% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 4.13% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 4.91% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 3.88% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 3.16% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 8.24% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 18.70% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 3.96% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 8.57% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 11.92% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 5.21% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 5.63% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 7.30% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 4.38% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 6.37% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 6.45% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 4.73% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 7.89% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 2.52% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 11.12% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 0.40% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 17.17% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 5.65% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 2.39% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 3.31% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 5.07% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 4.20% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 12.01% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 15.42% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 6.38% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 0.50% compared to the last run.
---
Report generated on: 2026-03-24T09:41:31.734100
