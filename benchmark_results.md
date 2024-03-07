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

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| xxd | 64 | 1.63 |  |
| xxd | 64 | 2.26 | -r |
| xxd | 64 | 5.09 |  |
| xxd | 64 | 3.98 | -r |
| xxd | 64 | 1.56 |  |
| xxd | 64 | 0.95 | -p |
| xxd | 64 | 4.83 | -i |
| xxd | 64 | 1.49 | -e |
| xxd | 64 | 3.73 | -b |
| xxd | 64 | 1.58 | -u |
| xxd | 64 | 1.67 | -E |
| tinyxxd | 64 | 1.31 |  |
| tinyxxd | 64 | 2.09 | -r |
| tinyxxd | 64 | 5.10 |  |
| tinyxxd | 64 | 3.93 | -r |
| tinyxxd | 64 | 1.28 |  |
| tinyxxd | 64 | 0.83 | -p |
| tinyxxd | 64 | 4.83 | -i |
| tinyxxd | 64 | 1.33 | -e |
| tinyxxd | 64 | 3.47 | -b |
| tinyxxd | 64 | 1.33 | -u |
| tinyxxd | 64 | 1.42 | -E |
| xxd | 32 | 0.81 |  |
| xxd | 32 | 1.11 | -r |
| xxd | 32 | 2.23 |  |
| xxd | 32 | 2.03 | -r |
| xxd | 32 | 0.76 |  |
| xxd | 32 | 0.48 | -p |
| xxd | 32 | 2.47 | -i |
| xxd | 32 | 0.79 | -e |
| xxd | 32 | 1.76 | -b |
| xxd | 32 | 0.77 | -u |
| xxd | 32 | 0.83 | -E |
| tinyxxd | 32 | 0.65 |  |
| tinyxxd | 32 | 1.04 | -r |
| tinyxxd | 32 | 2.24 |  |
| tinyxxd | 32 | 1.94 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.42 | -p |
| tinyxxd | 32 | 2.45 | -i |
| tinyxxd | 32 | 0.66 | -e |
| tinyxxd | 32 | 1.72 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.71 | -E |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.52 | -r |
| tinyxxd | 16 | 1.06 |  |
| tinyxxd | 16 | 0.94 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.20 | -i |
| tinyxxd | 16 | 0.33 | -e |
| tinyxxd | 16 | 0.87 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.36 | -E |
| xxd | 16 | 0.40 |  |
| xxd | 16 | 0.56 | -r |
| xxd | 16 | 0.99 |  |
| xxd | 16 | 0.95 | -r |
| xxd | 16 | 0.39 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.25 | -i |
| xxd | 16 | 0.38 | -e |
| xxd | 16 | 0.94 | -b |
| xxd | 16 | 0.43 | -u |
| xxd | 16 | 0.43 | -E |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.26 | -r |
| tinyxxd | 8 | 0.47 |  |
| tinyxxd | 8 | 0.47 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.61 | -i |
| tinyxxd | 8 | 0.17 | -e |
| tinyxxd | 8 | 0.44 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.52 |  |
| xxd | 8 | 0.49 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.44 | -b |
| xxd | 8 | 0.20 | -u |
| xxd | 8 | 0.21 | -E |
| tinyxxd | 4 | 0.09 |  |
| tinyxxd | 4 | 0.13 | -r |
| tinyxxd | 4 | 0.24 |  |
| tinyxxd | 4 | 0.24 | -r |
| tinyxxd | 4 | 0.10 |  |
| tinyxxd | 4 | 0.07 | -p |
| tinyxxd | 4 | 0.32 | -i |
| tinyxxd | 4 | 0.09 | -e |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.08 | -u |
| tinyxxd | 4 | 0.09 | -E |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.35 |  |
| xxd | 4 | 0.25 | -r |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.10 | -e |
| xxd | 4 | 0.22 | -b |
| xxd | 4 | 0.10 | -u |
| xxd | 4 | 0.11 | -E |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.07 | -r |
| tinyxxd | 2 | 0.12 |  |
| tinyxxd | 2 | 0.12 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.05 | -e |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.12 |  |
| xxd | 2 | 0.12 | -r |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.11 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.06 | -E |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.04 | -r |
| tinyxxd | 1 | 0.19 |  |
| tinyxxd | 1 | 0.11 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.03 | -e |
| tinyxxd | 1 | 0.06 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.03 | -E |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.11 | -r |
| xxd | 1 | 0.10 |  |
| xxd | 1 | 0.20 | -r |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.06 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 7.72% faster with no flag.
- For sample size 64 MiB, tinyxxd was 15.23% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 11.79% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 7.34% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 18.83% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 17.75% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 7.96% faster with no flag.
- For sample size 32 MiB, tinyxxd was 15.75% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 19.05% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 22.68% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 16.82% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 14.75% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 15.62% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 7.53% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 36.09% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 18.60% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 13.92% faster with no flag.
- For sample size 8 MiB, tinyxxd was 5.66% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 15.26% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 13.64% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 22.67% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 17.20% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 28.44% faster with no flag.
- For sample size 4 MiB, xxd was 5.46% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 18.17% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 14.78% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 13.52% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 8.13% faster with no flag.
- For sample size 2 MiB, tinyxxd was 14.83% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 11.68% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 17.47% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 24.37% faster with flags '-E'.
- For sample size 1 MiB, xxd was 52.48% faster with no flag.
- For sample size 1 MiB, tinyxxd was 112.22% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 12.09% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 11.32% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 15.92% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 7.62% faster with flags '-E'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 6.87% faster than xxd.
- For sample 32 MiB, tinyxxd was 7.27% faster than xxd.
- For sample 16 MiB, tinyxxd was 7.62% faster than xxd.
- For sample 8 MiB, tinyxxd was 8.42% faster than xxd.
- For sample 4 MiB, tinyxxd was 9.85% faster than xxd.
- For sample 2 MiB, tinyxxd was 6.40% faster than xxd.
- For sample 1 MiB, tinyxxd was 15.99% faster than xxd.

### Performance by flag
- tinyxxd was 7.59% faster with no flag.
- tinyxxd was 5.55% faster '-r'.
- tinyxxd was 14.44% faster '-p'.
- tinyxxd was 14.40% faster '-e'.
- tinyxxd was 5.40% faster '-b'.
- tinyxxd was 21.95% faster '-u'.
- tinyxxd was 17.46% faster '-E'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 5.65% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 44.04% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 230.68% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 1.50% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 1.38% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 0.20% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 2.37% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 0.18% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 4.89% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 1.88% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 1.85% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 43.50% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 46.04% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 120.86% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 1.46% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 44.66% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 2.69% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 0.64% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 0.66% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 2.18% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 2.93% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 0.58% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 4.65% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 42.34% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 189.64% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 5.27% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 0.98% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 0.47% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 0.24% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 4.79% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.46% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 2.48% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 2.09% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 2.60% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 43.29% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 251.68% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 5.66% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 1.09% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 2.47% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 0.77% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 0.44% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 1.66% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 5.99% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 0.18% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 2.70% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 41.69% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 233.55% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 5.00% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 0.22% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 2.75% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 1.29% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 0.91% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 4.98% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 1.33% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 1.29% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 34.02% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 48.95% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 63.69% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 13.60% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 36.02% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 1.55% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 2.42% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 1.97% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 5.63% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 15.97% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 2.54% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 1.98% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 43.70% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 190.44% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 2.39% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 1.47% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 2.24% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 0.45% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 1.21% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.51% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 2.98% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 0.31% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 2.12% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 41.93% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 166.54% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 1.66% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 1.73% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 0.09% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 0.88% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 0.38% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 1.47% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 0.89% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 0.89% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 0.15% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 41.82% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 183.06% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 5.64% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 23.09% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 23.93% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 4.05% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 4.03% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 1.24% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 0.39% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 2.34% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 5.65% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 48.94% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 257.19% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 11.77% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 1.40% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 3.28% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 0.92% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 2.42% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 2.41% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 3.07% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 0.86% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 0.98% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 41.51% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 174.19% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 5.42% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 3.04% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 1.91% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 0.01% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 2.24% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.17% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 2.19% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 1.81% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 0.64% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 42.34% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 137.37% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 2.85% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 1.05% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 0.01% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 0.54% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 0.81% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 0.65% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 0.01% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 8.46% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 2.66% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 36.81% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 672.41% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 87.37% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 1.23% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 4.04% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 0.70% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 8.25% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 2.75% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 0.58% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 6.32% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 4.68% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 81.01% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 256.45% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 219.09% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 0.19% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 2.32% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 0.60% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 3.05% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 0.90% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 2.54% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 3.54% compared to the last run.
---
Report generated on: 2024-03-07T13:47:20.948044
