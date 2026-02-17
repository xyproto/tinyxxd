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
| tinyxxd | 64 | 0.90 |  |
| tinyxxd | 64 | 0.83 | -r |
| tinyxxd | 64 | 4.80 | -b |
| tinyxxd | 64 | 1.56 | -r -b |
| tinyxxd | 64 | 1.16 |  |
| tinyxxd | 64 | 0.88 | -p |
| tinyxxd | 64 | 4.79 | -i |
| tinyxxd | 64 | 1.13 | -e |
| tinyxxd | 64 | 3.34 | -b |
| tinyxxd | 64 | 0.90 | -u |
| tinyxxd | 64 | 1.08 | -E |
| tinyxxd | 64 | 4.28 | -b -i |
| xxd | 64 | 1.35 |  |
| xxd | 64 | 2.36 | -r |
| xxd | 64 | 3.87 | -b |
| xxd | 64 | 4.79 | -r -b |
| xxd | 64 | 1.75 |  |
| xxd | 64 | 1.07 | -p |
| xxd | 64 | 4.98 | -i |
| xxd | 64 | 1.37 | -e |
| xxd | 64 | 2.71 | -b |
| xxd | 64 | 1.33 | -u |
| xxd | 64 | 1.47 | -E |
| xxd | 64 | 5.84 | -b -i |
| tinyxxd | 32 | 0.46 |  |
| tinyxxd | 32 | 0.42 | -r |
| tinyxxd | 32 | 2.08 | -b |
| tinyxxd | 32 | 0.83 | -r -b |
| tinyxxd | 32 | 0.54 |  |
| tinyxxd | 32 | 0.44 | -p |
| tinyxxd | 32 | 2.36 | -i |
| tinyxxd | 32 | 0.57 | -e |
| tinyxxd | 32 | 1.62 | -b |
| tinyxxd | 32 | 0.45 | -u |
| tinyxxd | 32 | 0.54 | -E |
| tinyxxd | 32 | 2.14 | -b -i |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.19 | -r |
| xxd | 32 | 3.12 | -b |
| xxd | 32 | 2.30 | -r -b |
| xxd | 32 | 0.74 |  |
| xxd | 32 | 0.56 | -p |
| xxd | 32 | 2.52 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.33 | -b |
| xxd | 32 | 0.67 | -u |
| xxd | 32 | 0.74 | -E |
| xxd | 32 | 2.91 | -b -i |
| xxd | 16 | 0.34 |  |
| xxd | 16 | 0.59 | -r |
| xxd | 16 | 0.72 | -b |
| xxd | 16 | 1.23 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.25 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.45 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.22 | -r |
| tinyxxd | 16 | 0.97 | -b |
| tinyxxd | 16 | 0.39 | -r -b |
| tinyxxd | 16 | 0.27 |  |
| tinyxxd | 16 | 0.22 | -p |
| tinyxxd | 16 | 1.19 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.85 | -b |
| tinyxxd | 16 | 0.23 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.06 | -b -i |
| tinyxxd | 8 | 0.12 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.44 | -b |
| tinyxxd | 8 | 0.20 | -r -b |
| tinyxxd | 8 | 0.14 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.41 | -b |
| tinyxxd | 8 | 0.12 | -u |
| tinyxxd | 8 | 0.14 | -E |
| tinyxxd | 8 | 0.53 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.59 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.62 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.33 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.74 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.11 | -r -b |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.27 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.29 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.05 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.04 | -E |
| tinyxxd | 2 | 0.14 | -b -i |
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
| xxd | 2 | 0.19 | -b -i |
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
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |
| tinyxxd | 1 | 0.07 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 50.92% faster with no flag.
- For sample size 64 MiB, tinyxxd was 183.58% faster with flags '-r'.
- For sample size 64 MiB, xxd was 23.69% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 206.63% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 21.54% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 20.87% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 46.73% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 37.01% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 36.20% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 41.67% faster with no flag.
- For sample size 32 MiB, tinyxxd was 184.64% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 20.25% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 176.62% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 25.94% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 6.79% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 19.73% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 48.03% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 35.46% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 36.03% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 44.63% faster with no flag.
- For sample size 16 MiB, tinyxxd was 172.45% faster with flags '-r'.
- For sample size 16 MiB, xxd was 30.66% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 211.58% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 24.24% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 20.25% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 47.48% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 33.90% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 35.96% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 39.05% faster with no flag.
- For sample size 8 MiB, tinyxxd was 165.11% faster with flags '-r'.
- For sample size 8 MiB, xxd was 20.35% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 197.48% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 24.76% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 7.00% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 19.51% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 48.75% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 36.83% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 39.67% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 33.51% faster with no flag.
- For sample size 4 MiB, tinyxxd was 171.54% faster with flags '-r'.
- For sample size 4 MiB, xxd was 21.57% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 155.19% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 22.85% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 6.10% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 18.19% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 43.78% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 33.42% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 39.17% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 35.90% faster with no flag.
- For sample size 2 MiB, tinyxxd was 167.51% faster with flags '-r'.
- For sample size 2 MiB, xxd was 21.05% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 184.81% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 20.58% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 7.23% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 22.71% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 41.52% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 33.49% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 39.53% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 38.64% faster with no flag.
- For sample size 1 MiB, tinyxxd was 151.96% faster with flags '-r'.
- For sample size 1 MiB, xxd was 17.77% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 173.35% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 20.53% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.77% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 17.56% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 40.11% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 32.46% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 38.95% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 28.16% faster than xxd.
- For sample 32 MiB, tinyxxd was 39.93% faster than xxd.
- For sample 16 MiB, tinyxxd was 28.33% faster than xxd.
- For sample 8 MiB, tinyxxd was 31.15% faster than xxd.
- For sample 4 MiB, tinyxxd was 28.45% faster than xxd.
- For sample 2 MiB, tinyxxd was 30.18% faster than xxd.
- For sample 1 MiB, tinyxxd was 29.64% faster than xxd.

### Performance by flag
- tinyxxd was 46.17% faster with no flag.
- tinyxxd was 180.26% faster with flag '-r'.
- xxd was 10.98% faster with flag '-b'.
- tinyxxd was 196.34% faster with flag '-r -b'.
- tinyxxd was 23.20% faster with flag '-p'.
- tinyxxd was 20.33% faster with flag '-e'.
- tinyxxd was 47.03% faster with flag '-u'.
- tinyxxd was 36.00% faster with flag '-E'.
- tinyxxd was 36.52% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 26.23% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 10.17% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 45.02% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 0.20% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 4.94% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 1.70% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 0.68% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 0.70% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 0.71% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 0.65% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 0.07% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 0.15% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 14.17% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 2.21% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 44.11% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 5.04% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 10.92% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 0.51% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 1.63% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 2.92% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 0.78% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 0.64% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 0.78% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 1.37% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 18.14% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 8.76% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 28.48% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 6.71% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 5.15% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 2.24% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 0.23% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 1.70% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 0.29% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 0.36% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 0.68% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 0.63% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 11.29% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 1.57% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 131.86% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 2.36% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 1.75% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 0.07% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 1.83% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 1.30% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 1.33% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 0.90% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 0.90% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 0.82% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 9.85% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 1.42% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 7.72% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 1.49% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 0.20% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 1.33% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 0.80% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 0.20% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 0.44% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 0.06% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 1.39% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 0.99% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 17.08% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 9.80% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 19.46% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 0.40% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 0.15% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 2.27% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 1.44% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 0.35% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 4.77% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 5.91% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 5.71% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 0.07% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 14.78% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 9.44% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 7.12% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 0.87% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 1.11% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 2.30% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 0.00% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 6.22% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 0.76% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 0.61% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 0.28% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 0.77% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 12.75% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 3.54% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 10.44% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 4.32% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 3.02% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 0.81% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 0.83% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 0.58% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 0.78% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 2.01% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 0.00% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 0.04% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 15.06% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 8.48% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 7.98% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 12.24% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 7.74% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 1.97% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 1.35% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 1.69% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.04% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 0.72% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 0.32% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 0.39% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 11.07% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 3.56% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 6.60% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 2.84% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 0.12% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 0.71% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 14.18% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 0.02% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 0.28% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 0.03% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 0.88% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 0.21% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 12.70% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 7.84% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 5.34% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 0.51% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 1.43% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 3.67% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 0.03% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 0.02% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.72% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 1.52% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 1.69% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 0.51% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 12.70% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 0.62% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 5.30% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 1.01% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 2.04% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 3.36% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 0.95% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 2.74% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 0.76% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 1.72% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 0.95% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 0.20% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 10.62% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 2.21% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 6.97% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 0.84% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 2.18% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 1.82% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 0.63% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 0.90% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 1.57% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 2.62% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 0.42% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 0.04% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 13.73% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 6.89% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 3.58% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 0.93% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 1.98% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 2.70% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 0.92% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 1.71% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 0.15% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 3.26% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 1.47% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 0.01% compared to the last run.
---
Report generated on: 2026-02-17T11:07:03.798920
