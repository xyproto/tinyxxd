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
| xxd | 64 | 1.62 |  |
| xxd | 64 | 2.17 | -r |
| xxd | 64 | 4.74 |  |
| xxd | 64 | 4.04 | -r |
| xxd | 64 | 1.49 |  |
| xxd | 64 | 0.92 | -p |
| xxd | 64 | 4.83 | -i |
| xxd | 64 | 1.52 | -e |
| xxd | 64 | 3.31 | -b |
| xxd | 64 | 1.52 | -u |
| xxd | 64 | 1.64 | -E |
| xxd | 64 | 5.62 | -b_-i |
| tinyxxd | 64 | 1.29 |  |
| tinyxxd | 64 | 1.50 | -r |
| tinyxxd | 64 | 5.04 |  |
| tinyxxd | 64 | 3.69 | -r |
| tinyxxd | 64 | 1.24 |  |
| tinyxxd | 64 | 0.79 | -p |
| tinyxxd | 64 | 4.77 | -i |
| tinyxxd | 64 | 1.28 | -e |
| tinyxxd | 64 | 2.97 | -b |
| tinyxxd | 64 | 1.26 | -u |
| tinyxxd | 64 | 1.45 | -E |
| tinyxxd | 64 | 4.52 | -b_-i |
| xxd | 32 | 0.78 |  |
| xxd | 32 | 1.05 | -r |
| xxd | 32 | 2.47 |  |
| xxd | 32 | 2.01 | -r |
| xxd | 32 | 0.76 |  |
| xxd | 32 | 0.46 | -p |
| xxd | 32 | 2.41 | -i |
| xxd | 32 | 0.76 | -e |
| xxd | 32 | 1.60 | -b |
| xxd | 32 | 0.74 | -u |
| xxd | 32 | 0.82 | -E |
| xxd | 32 | 2.83 | -b_-i |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 0.75 | -r |
| tinyxxd | 32 | 2.57 |  |
| tinyxxd | 32 | 1.83 | -r |
| tinyxxd | 32 | 0.62 |  |
| tinyxxd | 32 | 0.40 | -p |
| tinyxxd | 32 | 2.43 | -i |
| tinyxxd | 32 | 0.64 | -e |
| tinyxxd | 32 | 1.49 | -b |
| tinyxxd | 32 | 0.62 | -u |
| tinyxxd | 32 | 0.71 | -E |
| tinyxxd | 32 | 2.24 | -b_-i |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.37 | -r |
| tinyxxd | 16 | 0.84 |  |
| tinyxxd | 16 | 0.92 | -r |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.20 | -p |
| tinyxxd | 16 | 1.19 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.74 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.35 | -E |
| tinyxxd | 16 | 1.12 | -b_-i |
| xxd | 16 | 0.58 |  |
| xxd | 16 | 0.53 | -r |
| xxd | 16 | 0.90 |  |
| xxd | 16 | 1.01 | -r |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.23 | -p |
| xxd | 16 | 1.21 | -i |
| xxd | 16 | 0.39 | -e |
| xxd | 16 | 0.85 | -b |
| xxd | 16 | 0.39 | -u |
| xxd | 16 | 0.41 | -E |
| xxd | 16 | 1.41 | -b_-i |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.19 | -r |
| tinyxxd | 8 | 0.41 |  |
| tinyxxd | 8 | 0.46 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.17 | -e |
| tinyxxd | 8 | 0.37 | -b |
| tinyxxd | 8 | 0.18 | -u |
| tinyxxd | 8 | 0.18 | -E |
| tinyxxd | 8 | 0.57 | -b_-i |
| xxd | 8 | 0.73 |  |
| xxd | 8 | 0.30 | -r |
| xxd | 8 | 0.76 |  |
| xxd | 8 | 0.50 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.20 | -e |
| xxd | 8 | 0.46 | -b |
| xxd | 8 | 0.19 | -u |
| xxd | 8 | 0.21 | -E |
| xxd | 8 | 0.70 | -b_-i |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.25 |  |
| xxd | 4 | 0.25 | -r |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.30 | -i |
| xxd | 4 | 0.10 | -e |
| xxd | 4 | 0.20 | -b |
| xxd | 4 | 0.10 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.35 | -b_-i |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.10 | -r |
| tinyxxd | 4 | 0.21 |  |
| tinyxxd | 4 | 0.23 | -r |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.05 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.08 | -u |
| tinyxxd | 4 | 0.09 | -E |
| tinyxxd | 4 | 0.28 | -b_-i |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.05 | -r |
| tinyxxd | 2 | 0.11 |  |
| tinyxxd | 2 | 0.12 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
| tinyxxd | 2 | 0.14 | -b_-i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.11 |  |
| xxd | 2 | 0.13 | -r |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.06 | -E |
| xxd | 2 | 0.18 | -b_-i |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.06 |  |
| xxd | 1 | 0.07 | -r |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b_-i |
| tinyxxd | 1 | 0.03 |  |
| tinyxxd | 1 | 0.03 | -r |
| tinyxxd | 1 | 0.05 |  |
| tinyxxd | 1 | 0.21 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.03 | -E |
| tinyxxd | 1 | 0.07 | -b_-i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 19.78% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 16.07% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 19.23% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 11.53% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 20.31% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 12.90% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 24.52% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 18.87% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 16.04% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 19.53% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 7.82% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 19.17% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 16.28% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 26.49% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 23.32% faster with no flag.
- For sample size 16 MiB, tinyxxd was 19.08% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 15.63% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 19.91% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 14.71% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 22.38% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 15.63% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 25.40% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 127.38% faster with no flag.
- For sample size 8 MiB, tinyxxd was 23.29% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 15.73% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 17.01% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 22.68% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 10.23% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 17.92% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 22.19% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 21.90% faster with no flag.
- For sample size 4 MiB, tinyxxd was 18.70% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 14.43% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 18.20% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 8.11% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 20.45% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 14.54% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 24.58% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 11.81% faster with no flag.
- For sample size 2 MiB, tinyxxd was 17.85% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 14.42% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 17.93% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 8.62% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 16.47% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 17.02% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 24.47% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 10.23% faster with no flag.
- For sample size 1 MiB, xxd was 124.35% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 10.83% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 17.11% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 6.67% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 17.11% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 24.46% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 24.83% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 12.23% faster than xxd.
- For sample 32 MiB, tinyxxd was 11.92% faster than xxd.
- For sample 16 MiB, tinyxxd was 17.47% faster than xxd.
- For sample 8 MiB, tinyxxd was 39.63% faster than xxd.
- For sample 4 MiB, tinyxxd was 15.65% faster than xxd.
- For sample 2 MiB, tinyxxd was 13.90% faster than xxd.
- For sample size 1 MiB, xxd was 15.89% faster than tinyxxd.

### Performance by flag
- tinyxxd was 13.08% faster with no flag.
- tinyxxd was 17.92% faster with flag '-r'.
- tinyxxd was 15.84% faster with flag '-p'.
- tinyxxd was 19.17% faster with flag '-e'.
- tinyxxd was 11.50% faster with flag '-b'.
- tinyxxd was 19.50% faster with flag '-u'.
- tinyxxd was 14.61% faster with flag '-E'.
- tinyxxd was 24.98% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 8.43% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 46.27% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 216.68% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 0.06% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 0.37% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 0.04% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 0.91% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 1.25% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 1.67% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 1.38% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 0.43% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 0.47% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 4.20% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 59.55% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 306.29% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 0.34% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 0.31% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 4.00% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 0.43% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 0.21% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 0.13% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 0.20% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 2.18% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 0.38% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 4.20% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 52.43% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 229.73% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 8.85% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 0.95% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 0.04% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 10.48% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 0.78% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 1.96% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 0.04% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 0.05% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 0.59% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 3.84% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 59.21% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 313.47% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 0.83% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 0.22% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 0.31% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 3.00% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 0.09% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 8.59% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 0.59% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 0.66% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 1.16% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 6.62% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 59.44% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 169.82% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 0.21% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 4.92% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 0.62% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 0.74% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 0.45% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 0.48% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 1.28% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 0.71% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 4.84% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 52.97% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 49.03% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 139.35% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 3.69% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 0.00% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 0.09% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 1.31% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 6.23% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 4.26% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 1.47% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 6.15% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 5.88% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 3.36% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 59.52% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 160.39% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 1.78% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 0.57% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 0.23% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 0.05% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 2.86% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 0.75% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 8.83% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 0.15% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 2.05% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 280.29% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 41.22% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 297.37% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 1.94% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 0.95% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 0.48% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 0.85% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 1.25% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 12.22% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 1.11% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 1.86% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 0.91% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 5.74% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 45.86% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 163.26% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 0.25% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 1.70% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 1.55% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 3.12% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 0.83% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 0.02% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 0.73% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 1.00% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 0.11% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 3.81% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 58.07% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 155.41% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 0.44% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 1.56% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 1.20% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 0.08% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.47% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.26% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 0.36% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 0.68% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 3.85% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 58.33% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 145.60% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 0.75% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 0.45% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 0.78% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 0.70% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 0.60% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 4.00% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 1.55% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 0.93% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.08% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 4.82% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 45.52% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 123.46% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 0.14% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 0.07% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 0.13% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 0.17% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 0.16% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.90% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 1.19% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 1.21% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 0.22% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 6.01% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 79.89% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 119.49% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 62.04% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 1.41% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 0.68% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 0.40% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 1.03% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 0.12% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 1.91% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 11.08% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 0.80% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 9.36% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 53.65% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 136.78% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 237.85% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 3.18% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 1.46% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 4.89% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 1.29% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 0.66% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 21.49% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 4.78% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 11.54% compared to the last run.
---
Report generated on: 2024-10-21T13:14:33.373678
