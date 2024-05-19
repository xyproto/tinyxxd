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
| xxd | 64 | 1.38 |  |
| xxd | 64 | 2.25 | -r |
| xxd | 64 | 5.45 |  |
| xxd | 64 | 4.26 | -r |
| xxd | 64 | 1.31 |  |
| xxd | 64 | 0.94 | -p |
| xxd | 64 | 4.99 | -i |
| xxd | 64 | 1.47 | -e |
| xxd | 64 | 2.98 | -b |
| xxd | 64 | 1.34 | -u |
| xxd | 64 | 1.49 | -E |
| tinyxxd | 64 | 1.29 |  |
| tinyxxd | 64 | 2.06 | -r |
| tinyxxd | 64 | 4.51 |  |
| tinyxxd | 64 | 3.91 | -r |
| tinyxxd | 64 | 1.23 |  |
| tinyxxd | 64 | 0.77 | -p |
| tinyxxd | 64 | 4.95 | -i |
| tinyxxd | 64 | 1.38 | -e |
| tinyxxd | 64 | 2.93 | -b |
| tinyxxd | 64 | 1.24 | -u |
| tinyxxd | 64 | 1.39 | -E |
| xxd | 32 | 0.71 |  |
| xxd | 32 | 1.13 | -r |
| xxd | 32 | 1.92 |  |
| xxd | 32 | 2.42 | -r |
| xxd | 32 | 0.69 |  |
| xxd | 32 | 0.47 | -p |
| xxd | 32 | 2.57 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.49 | -b |
| xxd | 32 | 0.68 | -u |
| xxd | 32 | 0.73 | -E |
| tinyxxd | 32 | 0.67 |  |
| tinyxxd | 32 | 1.02 | -r |
| tinyxxd | 32 | 1.97 |  |
| tinyxxd | 32 | 1.85 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.38 | -p |
| tinyxxd | 32 | 2.49 | -i |
| tinyxxd | 32 | 0.66 | -e |
| tinyxxd | 32 | 1.49 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.69 | -E |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.50 | -r |
| tinyxxd | 16 | 0.94 |  |
| tinyxxd | 16 | 0.94 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.19 | -p |
| tinyxxd | 16 | 1.29 | -i |
| tinyxxd | 16 | 0.34 | -e |
| tinyxxd | 16 | 0.74 | -b |
| tinyxxd | 16 | 0.31 | -u |
| tinyxxd | 16 | 0.35 | -E |
| xxd | 16 | 0.35 |  |
| xxd | 16 | 0.57 | -r |
| xxd | 16 | 0.95 |  |
| xxd | 16 | 1.05 | -r |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.22 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.78 | -b |
| xxd | 16 | 0.35 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.41 |  |
| xxd | 8 | 0.53 | -r |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.63 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.25 | -r |
| tinyxxd | 8 | 0.45 |  |
| tinyxxd | 8 | 0.49 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.66 | -i |
| tinyxxd | 8 | 0.17 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.13 | -r |
| tinyxxd | 4 | 0.21 |  |
| tinyxxd | 4 | 0.23 | -r |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.05 | -p |
| tinyxxd | 4 | 0.31 | -i |
| tinyxxd | 4 | 0.09 | -e |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.08 | -u |
| tinyxxd | 4 | 0.09 | -E |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.16 | -r |
| xxd | 4 | 0.21 |  |
| xxd | 4 | 0.27 | -r |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.10 |  |
| xxd | 2 | 0.13 | -r |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.04 | -e |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.07 | -r |
| tinyxxd | 2 | 0.10 |  |
| tinyxxd | 2 | 0.12 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.16 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.04 | -r |
| tinyxxd | 1 | 0.09 |  |
| tinyxxd | 1 | 0.10 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.01 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.03 | -E |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.33 | -r |
| xxd | 1 | 0.14 |  |
| xxd | 1 | 0.21 | -r |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 15.96% faster with no flag.
- For sample size 64 MiB, tinyxxd was 9.16% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 21.86% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 6.56% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 8.17% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 6.99% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 23.44% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 21.65% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 7.84% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 12.59% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 21.20% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 10.99% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 6.53% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 10.09% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 21.17% faster with flags '-p'.
- For sample size 8 MiB, xxd was 5.38% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 6.54% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 6.02% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 16.88% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 20.53% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 6.83% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 13.11% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 20.96% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 40.75% faster with no flag.
- For sample size 1 MiB, tinyxxd was 283.30% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 18.57% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.04% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 18.72% faster with flags '-E'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 8.63% faster than xxd.
- For sample 32 MiB, tinyxxd was 8.03% faster than xxd.
- For sample 16 MiB, tinyxxd was 4.84% faster than xxd.
- For sample 8 MiB, tinyxxd was 2.09% faster than xxd.
- For sample 4 MiB, tinyxxd was 6.92% faster than xxd.
- For sample 2 MiB, tinyxxd was 4.73% faster than xxd.
- For sample 1 MiB, tinyxxd was 91.68% faster than xxd.

### Performance by flag
- tinyxxd was 9.81% faster with no flag.
- tinyxxd was 16.71% faster '-r'.
- tinyxxd was 21.59% faster '-p'.
- tinyxxd was 8.11% faster '-u'.
- tinyxxd was 6.34% faster '-E'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 4.70% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 50.90% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 313.31% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 7.07% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 0.57% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 0.03% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 0.23% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 8.94% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 1.93% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 0.56% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 1.03% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 2.24% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 44.35% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 258.41% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 5.59% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 1.79% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 0.35% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 0.40% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 2.37% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 2.74% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 0.71% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 0.27% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 6.39% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 46.47% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 185.79% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 14.70% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 3.23% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 0.07% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 5.41% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 0.54% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 0.61% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 0.93% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 0.38% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 5.22% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 52.43% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 209.61% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 13.87% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 1.09% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 0.15% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 0.23% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 0.32% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 2.03% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 1.71% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 0.05% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 0.21% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 45.98% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 186.08% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 1.59% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 3.38% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 0.58% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 4.44% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 0.99% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 0.07% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 3.90% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 0.03% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 2.28% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 50.39% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 177.96% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 8.96% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 3.23% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 0.52% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 0.00% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 0.08% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 5.24% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 2.15% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 1.20% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 2.34% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 46.20% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 143.38% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 0.35% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 1.05% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 0.11% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 4.19% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 0.23% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 0.18% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 1.59% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 1.81% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 4.07% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 45.19% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 185.74% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 5.62% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 0.74% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 0.33% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 6.22% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 1.13% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 4.23% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 0.55% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 0.80% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 0.96% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 46.15% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 149.44% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 1.72% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 2.13% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 0.52% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 0.34% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 0.30% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 0.02% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.21% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 0.39% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 4.31% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 39.79% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 144.11% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 0.22% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 1.77% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 0.31% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 0.97% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 2.03% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 0.39% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 0.41% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 0.43% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 2.91% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 69.50% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 133.82% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 44.07% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 0.63% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 1.89% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 1.33% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 0.54% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.50% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 0.59% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 0.19% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 1.94% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 59.66% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 146.62% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 27.09% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 0.86% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 1.36% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 0.17% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 0.52% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 1.09% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 6.44% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 5.82% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 12.52% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 38.53% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 300.03% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 66.33% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 1.46% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 0.02% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 5.99% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 1.36% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 5.19% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 2.43% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 5.31% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 3.60% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 380.09% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 510.98% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 205.47% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 1.61% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 0.79% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 1.97% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 6.41% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 0.86% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 1.39% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 17.37% compared to the last run.
---
Report generated on: 2024-05-19T12:09:15.296956
