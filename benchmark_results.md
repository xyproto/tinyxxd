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
| tinyxxd | 64 | 1.07 |  |
| tinyxxd | 64 | 0.90 | -r |
| tinyxxd | 64 | 4.63 | -b |
| tinyxxd | 64 | 1.85 | -r -b |
| tinyxxd | 64 | 1.25 |  |
| tinyxxd | 64 | 0.95 | -p |
| tinyxxd | 64 | 4.70 | -i |
| tinyxxd | 64 | 1.10 | -e |
| tinyxxd | 64 | 3.22 | -b |
| tinyxxd | 64 | 0.98 | -u |
| tinyxxd | 64 | 1.09 | -E |
| tinyxxd | 64 | 4.11 | -b -i |
| xxd | 64 | 1.32 |  |
| xxd | 64 | 2.56 | -r |
| xxd | 64 | 4.13 | -b |
| xxd | 64 | 4.79 | -r -b |
| xxd | 64 | 1.67 |  |
| xxd | 64 | 1.08 | -p |
| xxd | 64 | 4.81 | -i |
| xxd | 64 | 1.35 | -e |
| xxd | 64 | 2.69 | -b |
| xxd | 64 | 1.32 | -u |
| xxd | 64 | 1.47 | -E |
| xxd | 64 | 5.90 | -b -i |
| tinyxxd | 32 | 0.49 |  |
| tinyxxd | 32 | 0.45 | -r |
| tinyxxd | 32 | 2.05 | -b |
| tinyxxd | 32 | 0.93 | -r -b |
| tinyxxd | 32 | 0.61 |  |
| tinyxxd | 32 | 0.48 | -p |
| tinyxxd | 32 | 2.32 | -i |
| tinyxxd | 32 | 0.55 | -e |
| tinyxxd | 32 | 1.61 | -b |
| tinyxxd | 32 | 0.50 | -u |
| tinyxxd | 32 | 0.54 | -E |
| tinyxxd | 32 | 2.04 | -b -i |
| xxd | 32 | 0.70 |  |
| xxd | 32 | 1.16 | -r |
| xxd | 32 | 2.17 | -b |
| xxd | 32 | 2.40 | -r -b |
| xxd | 32 | 0.75 |  |
| xxd | 32 | 0.55 | -p |
| xxd | 32 | 2.47 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.36 | -b |
| xxd | 32 | 0.67 | -u |
| xxd | 32 | 0.73 | -E |
| xxd | 32 | 2.93 | -b -i |
| tinyxxd | 16 | 0.25 |  |
| tinyxxd | 16 | 0.23 | -r |
| tinyxxd | 16 | 0.92 | -b |
| tinyxxd | 16 | 0.46 | -r -b |
| tinyxxd | 16 | 0.29 |  |
| tinyxxd | 16 | 0.24 | -p |
| tinyxxd | 16 | 1.17 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.80 | -b |
| tinyxxd | 16 | 0.26 | -u |
| tinyxxd | 16 | 0.28 | -E |
| tinyxxd | 16 | 1.03 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.56 | -r |
| xxd | 16 | 0.83 | -b |
| xxd | 16 | 1.18 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.22 | -i |
| xxd | 16 | 0.36 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.49 | -b -i |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.59 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.75 | -b -i |
| tinyxxd | 8 | 0.12 |  |
| tinyxxd | 8 | 0.12 | -r |
| tinyxxd | 8 | 0.42 | -b |
| tinyxxd | 8 | 0.23 | -r -b |
| tinyxxd | 8 | 0.15 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.40 | -b |
| tinyxxd | 8 | 0.13 | -u |
| tinyxxd | 8 | 0.14 | -E |
| tinyxxd | 8 | 0.51 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.30 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.30 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.21 | -b |
| tinyxxd | 4 | 0.12 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.09 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.15 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
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
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.03 | -r -b |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |
| tinyxxd | 1 | 0.07 | -b -i |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.08 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.04 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.02 | -E |
| xxd | 1 | 0.09 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 29.08% faster with no flag.
- For sample size 64 MiB, tinyxxd was 184.42% faster with flags '-r'.
- For sample size 64 MiB, xxd was 15.05% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 158.86% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 13.92% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 22.40% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 34.91% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 34.30% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 43.55% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 31.48% faster with no flag.
- For sample size 32 MiB, tinyxxd was 157.05% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 158.26% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 14.84% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 6.48% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 22.38% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 35.01% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 35.39% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 43.21% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 30.18% faster with no flag.
- For sample size 16 MiB, tinyxxd was 147.08% faster with flags '-r'.
- For sample size 16 MiB, xxd was 14.96% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 153.32% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 15.18% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 29.08% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 24.73% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 32.88% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 44.79% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 42.13% faster with no flag.
- For sample size 8 MiB, tinyxxd was 138.19% faster with flags '-r'.
- For sample size 8 MiB, xxd was 16.12% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 153.19% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 14.74% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 20.10% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 31.79% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 35.67% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 45.75% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 32.42% faster with no flag.
- For sample size 4 MiB, tinyxxd was 144.39% faster with flags '-r'.
- For sample size 4 MiB, xxd was 15.84% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 156.94% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 15.62% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 35.29% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 32.90% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 44.93% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 31.20% faster with no flag.
- For sample size 2 MiB, tinyxxd was 139.46% faster with flags '-r'.
- For sample size 2 MiB, xxd was 15.95% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 142.03% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 14.60% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 19.98% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 29.89% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 31.91% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 45.16% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 25.25% faster with no flag.
- For sample size 1 MiB, tinyxxd was 138.14% faster with flags '-r'.
- For sample size 1 MiB, xxd was 19.05% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 138.35% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 5.96% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 15.91% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 26.82% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 29.51% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 44.53% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 28.03% faster than xxd.
- For sample 32 MiB, tinyxxd was 31.79% faster than xxd.
- For sample 16 MiB, tinyxxd was 28.63% faster than xxd.
- For sample 8 MiB, tinyxxd was 29.98% faster than xxd.
- For sample 4 MiB, tinyxxd was 27.27% faster than xxd.
- For sample 2 MiB, tinyxxd was 28.07% faster than xxd.
- For sample 1 MiB, tinyxxd was 25.39% faster than xxd.

### Performance by flag
- tinyxxd was 30.70% faster with no flag.
- tinyxxd was 167.34% faster with flag '-r'.
- xxd was 12.11% faster with flag '-b'.
- tinyxxd was 157.14% faster with flag '-r -b'.
- tinyxxd was 14.35% faster with flag '-p'.
- tinyxxd was 22.16% faster with flag '-e'.
- tinyxxd was 33.23% faster with flag '-u'.
- tinyxxd was 34.35% faster with flag '-E'.
- tinyxxd was 43.84% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 18.34% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 31.49% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 41.75% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 7.74% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 4.27% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 7.35% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 1.03% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 0.18% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 1.30% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 3.44% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 0.86% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 0.08% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 25.69% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 9.27% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 51.73% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 3.96% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 6.42% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 1.29% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 1.32% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 0.18% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 1.14% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 1.51% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 0.80% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 0.28% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 15.21% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 31.55% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 28.73% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd improved by 7.81% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 5.30% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 5.83% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 1.32% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 0.39% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 1.08% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 0.50% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 4.54% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 2.21% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 8.57% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 5.11% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 62.38% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 5.80% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 2.61% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 0.11% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 1.49% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 1.31% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 1.87% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 0.89% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 3.03% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 1.75% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 14.62% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 32.70% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 14.68% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 7.24% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 1.67% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 7.13% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 2.36% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 0.01% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 0.65% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 7.59% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 2.66% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 0.79% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 14.33% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 0.48% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 23.81% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 0.27% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 0.03% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 0.34% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 1.22% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 4.93% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 0.25% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 0.16% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 0.58% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 2.62% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 4.69% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 4.26% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 11.05% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 0.73% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 0.50% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 3.51% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 0.56% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 1.28% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 0.23% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 0.49% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 0.57% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 2.40% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 16.72% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 29.37% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 4.81% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 8.05% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 1.05% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 6.56% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 1.18% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 1.17% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.84% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 0.24% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 0.79% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 0.15% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 11.53% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 1.02% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 7.63% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 4.73% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 4.33% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 0.01% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 1.01% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 0.46% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 2.42% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 2.98% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 0.80% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 0.34% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 11.22% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 32.75% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 5.49% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 7.42% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 0.80% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 7.20% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 3.31% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 20.04% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 0.09% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.45% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 1.37% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 1.51% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 9.45% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 0.96% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 7.34% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 1.03% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 0.40% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 0.05% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 1.36% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 1.36% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 3.02% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 0.63% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 0.01% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 0.21% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 15.28% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 29.10% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 4.42% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 6.86% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 1.01% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 6.18% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 0.78% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 1.89% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 0.54% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 0.50% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 0.47% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.32% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 8.64% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 29.78% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 4.84% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 6.47% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 1.32% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 8.29% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 0.85% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 0.20% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 0.25% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 0.62% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 0.59% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 0.72% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 7.67% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 0.48% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 4.03% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 2.86% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 1.69% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 5.19% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 1.43% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 2.52% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 3.06% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 3.32% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 2.11% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 0.47% compared to the last run.
---
Report generated on: 2026-02-02T11:02:13.298677
