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
| xxd | 64 | 4.50 |  |
| xxd | 64 | 4.58 | -r |
| xxd | 64 | 1.32 |  |
| xxd | 64 | 0.94 | -p |
| xxd | 64 | 4.98 | -i |
| xxd | 64 | 1.35 | -e |
| xxd | 64 | 3.04 | -b |
| xxd | 64 | 1.35 | -u |
| xxd | 64 | 1.47 | -E |
| tinyxxd | 64 | 1.29 |  |
| tinyxxd | 64 | 2.08 | -r |
| tinyxxd | 64 | 4.42 |  |
| tinyxxd | 64 | 3.70 | -r |
| tinyxxd | 64 | 1.26 |  |
| tinyxxd | 64 | 0.76 | -p |
| tinyxxd | 64 | 4.94 | -i |
| tinyxxd | 64 | 1.35 | -e |
| tinyxxd | 64 | 3.01 | -b |
| tinyxxd | 64 | 1.23 | -u |
| tinyxxd | 64 | 1.39 | -E |
| tinyxxd | 32 | 0.65 |  |
| tinyxxd | 32 | 1.01 | -r |
| tinyxxd | 32 | 2.32 |  |
| tinyxxd | 32 | 2.15 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.38 | -p |
| tinyxxd | 32 | 2.48 | -i |
| tinyxxd | 32 | 0.67 | -e |
| tinyxxd | 32 | 1.46 | -b |
| tinyxxd | 32 | 0.62 | -u |
| tinyxxd | 32 | 0.69 | -E |
| xxd | 32 | 0.70 |  |
| xxd | 32 | 1.16 | -r |
| xxd | 32 | 3.08 |  |
| xxd | 32 | 2.11 | -r |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 0.47 | -p |
| xxd | 32 | 2.44 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.48 | -b |
| xxd | 32 | 0.69 | -u |
| xxd | 32 | 0.73 | -E |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.50 | -r |
| tinyxxd | 16 | 0.95 |  |
| tinyxxd | 16 | 0.93 | -r |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.19 | -p |
| tinyxxd | 16 | 1.23 | -i |
| tinyxxd | 16 | 0.34 | -e |
| tinyxxd | 16 | 0.74 | -b |
| tinyxxd | 16 | 0.33 | -u |
| tinyxxd | 16 | 0.35 | -E |
| xxd | 16 | 0.35 |  |
| xxd | 16 | 0.57 | -r |
| xxd | 16 | 1.74 |  |
| xxd | 16 | 1.15 | -r |
| xxd | 16 | 0.34 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.22 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.74 | -b |
| xxd | 16 | 0.34 | -u |
| xxd | 16 | 0.37 | -E |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.25 | -r |
| tinyxxd | 8 | 0.45 |  |
| tinyxxd | 8 | 0.46 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.62 | -i |
| tinyxxd | 8 | 0.17 | -e |
| tinyxxd | 8 | 0.37 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| xxd | 8 | 0.24 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.42 |  |
| xxd | 8 | 0.53 | -r |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.65 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.21 |  |
| xxd | 4 | 0.26 | -r |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.09 | -E |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.13 | -r |
| tinyxxd | 4 | 0.34 |  |
| tinyxxd | 4 | 0.24 | -r |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.05 | -p |
| tinyxxd | 4 | 0.31 | -i |
| tinyxxd | 4 | 0.09 | -e |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.08 | -u |
| tinyxxd | 4 | 0.09 | -E |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.07 | -r |
| tinyxxd | 2 | 0.30 |  |
| tinyxxd | 2 | 0.16 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.16 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.09 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.19 | -r |
| xxd | 2 | 0.10 |  |
| xxd | 2 | 0.24 | -r |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.04 | -e |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.03 | -r |
| tinyxxd | 1 | 0.05 |  |
| tinyxxd | 1 | 0.06 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.01 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 |  |
| xxd | 1 | 0.07 | -r |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 18.23% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 22.25% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 9.55% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 6.18% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 23.79% faster with no flag.
- For sample size 32 MiB, tinyxxd was 21.75% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 10.70% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 51.67% faster with no flag.
- For sample size 16 MiB, tinyxxd was 20.78% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 22.54% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 7.52% faster with no flag.
- For sample size 8 MiB, tinyxxd was 13.95% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 21.44% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 5.45% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 7.11% faster with flags '-E'.
- For sample size 4 MiB, xxd was 32.11% faster with no flag.
- For sample size 4 MiB, tinyxxd was 10.22% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 21.54% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 7.05% faster with flags '-u'.
- For sample size 2 MiB, xxd was 98.67% faster with no flag.
- For sample size 2 MiB, tinyxxd was 88.91% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 20.33% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 5.66% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 11.70% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 17.67% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.52% faster with flags '-E'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 6.82% faster than xxd.
- For sample 32 MiB, tinyxxd was 8.66% faster than xxd.
- For sample 16 MiB, tinyxxd was 19.06% faster than xxd.
- For sample 8 MiB, tinyxxd was 7.70% faster than xxd.
- For sample size 4 MiB, xxd was 3.82% faster than tinyxxd.
- For sample 2 MiB, tinyxxd was 1.89% faster than xxd.
- For sample 1 MiB, tinyxxd was 4.24% faster than xxd.

### Performance by flag
- tinyxxd was 11.90% faster with no flag.
- tinyxxd was 15.37% faster '-r'.
- tinyxxd was 22.01% faster '-p'.
- tinyxxd was 8.69% faster '-u'.
- tinyxxd was 5.71% faster '-E'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 5.17% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 50.80% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 243.68% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 0.16% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 0.82% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 0.08% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 0.65% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 0.73% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 0.71% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 0.29% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 0.48% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 4.35% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 44.47% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 258.31% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 1.36% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 1.93% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 0.09% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 1.05% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 2.19% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 1.36% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 3.55% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 2.61% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 3.14% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 45.60% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 269.65% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 15.78% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 1.29% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 0.05% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 1.50% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 0.28% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 0.14% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 0.29% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 5.42% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 5.08% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 45.33% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 363.44% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 0.40% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 0.89% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 0.02% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 1.42% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 1.15% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.18% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 4.24% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 0.19% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 2.45% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 46.05% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 202.81% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 0.31% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 4.52% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 0.69% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 0.76% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 0.47% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 2.37% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 1.14% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 1.69% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 3.50% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 48.00% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 419.40% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 5.20% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 2.36% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 0.61% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 2.16% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 0.17% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 0.37% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 3.14% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 0.70% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 4.27% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 48.62% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 187.26% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 5.76% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 0.72% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 0.15% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 0.08% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 0.43% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 3.92% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 0.53% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 0.66% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 41.68% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 45.84% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 150.11% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 0.91% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 0.66% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 0.25% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 5.31% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 0.34% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 0.38% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 1.13% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 2.42% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 1.36% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 54.22% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 139.31% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 15.29% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 0.15% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 0.25% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 3.10% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 4.14% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 2.16% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 0.16% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 3.14% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 3.14% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 43.91% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 323.11% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 2.19% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 2.99% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 0.12% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 0.45% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 0.29% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 0.96% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 0.35% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 6.01% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 44.86% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 639.74% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 37.60% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 2.48% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 0.93% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 0.41% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 1.19% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.97% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 1.13% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 1.61% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 5.04% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 41.20% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 139.54% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 79.79% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 2.40% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 0.91% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 0.42% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 0.49% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.96% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 1.50% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 1.47% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 3.63% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 44.13% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 136.48% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 1.47% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 1.25% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 1.80% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 0.41% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 1.46% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 2.28% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 3.67% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 1.43% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 2.68% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 44.40% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 128.97% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 0.41% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 1.48% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 1.98% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 1.07% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 0.81% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 0.39% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 0.09% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 0.29% compared to the last run.
---
Report generated on: 2024-05-19T11:57:36.746106
