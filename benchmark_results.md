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
| xxd | 64 | 1.64 |  |
| xxd | 64 | 2.19 | -r |
| xxd | 64 | 5.06 |  |
| xxd | 64 | 4.04 | -r |
| xxd | 64 | 1.54 |  |
| xxd | 64 | 0.96 | -p |
| xxd | 64 | 4.94 | -i |
| xxd | 64 | 1.49 | -e |
| xxd | 64 | 3.55 | -b |
| xxd | 64 | 1.55 | -u |
| xxd | 64 | 1.70 | -E |
| tinyxxd | 64 | 1.32 |  |
| tinyxxd | 64 | 2.06 | -r |
| tinyxxd | 64 | 5.06 |  |
| tinyxxd | 64 | 3.87 | -r |
| tinyxxd | 64 | 2.31 |  |
| tinyxxd | 64 | 0.81 | -p |
| tinyxxd | 64 | 4.87 | -i |
| tinyxxd | 64 | 1.33 | -e |
| tinyxxd | 64 | 3.55 | -b |
| tinyxxd | 64 | 1.29 | -u |
| tinyxxd | 64 | 1.43 | -E |
| tinyxxd | 32 | 0.68 |  |
| tinyxxd | 32 | 1.03 | -r |
| tinyxxd | 32 | 2.25 |  |
| tinyxxd | 32 | 1.84 | -r |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 0.41 | -p |
| tinyxxd | 32 | 2.43 | -i |
| tinyxxd | 32 | 0.66 | -e |
| tinyxxd | 32 | 1.75 | -b |
| tinyxxd | 32 | 0.67 | -u |
| tinyxxd | 32 | 0.71 | -E |
| xxd | 32 | 0.78 |  |
| xxd | 32 | 1.12 | -r |
| xxd | 32 | 3.47 |  |
| xxd | 32 | 1.93 | -r |
| xxd | 32 | 0.77 |  |
| xxd | 32 | 0.48 | -p |
| xxd | 32 | 2.47 | -i |
| xxd | 32 | 0.75 | -e |
| xxd | 32 | 1.77 | -b |
| xxd | 32 | 0.75 | -u |
| xxd | 32 | 0.85 | -E |
| xxd | 16 | 0.39 |  |
| xxd | 16 | 0.55 | -r |
| xxd | 16 | 1.87 |  |
| xxd | 16 | 1.09 | -r |
| xxd | 16 | 0.60 |  |
| xxd | 16 | 0.25 | -p |
| xxd | 16 | 1.22 | -i |
| xxd | 16 | 0.37 | -e |
| xxd | 16 | 0.89 | -b |
| xxd | 16 | 0.37 | -u |
| xxd | 16 | 0.42 | -E |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.52 | -r |
| tinyxxd | 16 | 0.98 |  |
| tinyxxd | 16 | 0.89 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.21 | -i |
| tinyxxd | 16 | 0.33 | -e |
| tinyxxd | 16 | 0.92 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.35 | -E |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.26 | -r |
| tinyxxd | 8 | 0.53 |  |
| tinyxxd | 8 | 0.46 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.60 | -i |
| tinyxxd | 8 | 0.17 | -e |
| tinyxxd | 8 | 0.44 | -b |
| tinyxxd | 8 | 0.17 | -u |
| tinyxxd | 8 | 0.18 | -E |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.32 | -r |
| xxd | 8 | 0.48 |  |
| xxd | 8 | 0.48 | -r |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.45 | -b |
| xxd | 8 | 0.20 | -u |
| xxd | 8 | 0.21 | -E |
| xxd | 4 | 0.11 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.52 |  |
| xxd | 4 | 0.28 | -r |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.10 | -e |
| xxd | 4 | 0.23 | -b |
| xxd | 4 | 0.10 | -u |
| xxd | 4 | 0.11 | -E |
| tinyxxd | 4 | 0.09 |  |
| tinyxxd | 4 | 0.13 | -r |
| tinyxxd | 4 | 0.25 |  |
| tinyxxd | 4 | 0.23 | -r |
| tinyxxd | 4 | 0.09 |  |
| tinyxxd | 4 | 0.05 | -p |
| tinyxxd | 4 | 0.31 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.08 | -u |
| tinyxxd | 4 | 0.09 | -E |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.12 |  |
| xxd | 2 | 0.13 | -r |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.11 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.06 | -E |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.07 | -r |
| tinyxxd | 2 | 0.12 |  |
| tinyxxd | 2 | 0.11 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.03 | -r |
| tinyxxd | 1 | 0.06 |  |
| tinyxxd | 1 | 0.06 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.06 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.03 | -E |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.06 |  |
| xxd | 1 | 0.06 | -r |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.06 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |

## Performance Summaries
- For sample size 64 MiB, xxd was 5.48% faster with no flag.
- For sample size 64 MiB, tinyxxd was 18.57% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 12.73% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 20.06% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 19.28% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 40.61% faster with no flag.
- For sample size 32 MiB, tinyxxd was 6.02% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 18.05% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 14.11% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 12.53% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 19.10% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 74.97% faster with no flag.
- For sample size 16 MiB, tinyxxd was 16.70% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 19.75% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 14.42% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 15.79% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 17.16% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 11.58% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 17.94% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 15.45% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 20.08% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 16.53% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 70.46% faster with no flag.
- For sample size 4 MiB, tinyxxd was 18.60% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 21.50% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 20.03% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 18.87% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 17.18% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 8.30% faster with no flag.
- For sample size 2 MiB, tinyxxd was 9.30% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 17.04% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 15.11% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 14.88% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 16.74% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 6.15% faster with no flag.
- For sample size 1 MiB, tinyxxd was 7.24% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 13.97% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 16.94% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 19.63% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 18.61% faster with flags '-E'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 2.78% faster than xxd.
- For sample 32 MiB, tinyxxd was 15.88% faster than xxd.
- For sample 16 MiB, tinyxxd was 25.60% faster than xxd.
- For sample 8 MiB, tinyxxd was 7.18% faster than xxd.
- For sample 4 MiB, tinyxxd was 26.75% faster than xxd.
- For sample 2 MiB, tinyxxd was 7.59% faster than xxd.
- For sample 1 MiB, tinyxxd was 7.34% faster than xxd.

### Performance by flag
- tinyxxd was 16.55% faster with no flag.
- tinyxxd was 7.56% faster '-r'.
- tinyxxd was 18.57% faster '-p'.
- tinyxxd was 13.77% faster '-e'.
- tinyxxd was 17.46% faster '-u'.
- tinyxxd was 18.68% faster '-E'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 9.26% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 46.09% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 236.67% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 0.61% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 2.45% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 0.78% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 1.59% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 1.15% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 8.93% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 0.75% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 2.12% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 4.39% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 46.26% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 299.34% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 0.73% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 82.31% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 0.30% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 0.04% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 2.32% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 8.27% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 1.83% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 0.22% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 6.73% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 51.69% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 254.66% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 13.94% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 0.37% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 0.53% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 0.97% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 1.50% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 0.23% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 5.50% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 0.62% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 2.87% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 41.78% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 359.75% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 0.49% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 2.28% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 0.13% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 1.66% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 1.17% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 1.53% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 0.19% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 1.25% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 0.84% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 42.04% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 386.74% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 15.62% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 57.02% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 1.76% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 0.04% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 0.01% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 0.91% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 2.81% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 0.27% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 4.75% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 41.93% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 210.43% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 0.15% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 0.57% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 1.03% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 0.92% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 1.07% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 3.09% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 1.05% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 0.28% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 2.95% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 43.12% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 226.62% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 2.04% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 0.89% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 0.21% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 0.32% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 0.07% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 9.83% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 2.76% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 11.08% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 4.39% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 37.98% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 153.47% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 5.40% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 2.43% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 0.50% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 0.50% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 0.95% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 0.51% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 0.08% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 0.48% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 9.35% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 43.01% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 430.64% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 9.40% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 1.08% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 4.49% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 0.16% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 5.74% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 1.59% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 2.14% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 1.64% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 2.51% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 41.30% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 203.96% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 0.04% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 2.09% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 0.27% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 2.18% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 0.15% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.39% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 1.99% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 0.34% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 3.96% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 61.20% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 139.68% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 32.56% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 0.10% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 1.35% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 0.06% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 1.56% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.87% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 1.75% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 0.41% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 3.00% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 42.15% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 183.87% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 0.57% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 2.28% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 0.90% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 0.49% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 0.57% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.31% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 4.60% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 0.42% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 6.99% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 93.34% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 140.04% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 88.71% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 8.61% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 6.26% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 4.54% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 1.60% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 0.02% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 0.59% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 1.15% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 1.60% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 60.91% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 131.32% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 35.16% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 0.12% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 1.50% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 0.61% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 2.40% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 1.52% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 4.91% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 5.06% compared to the last run.
---
Report generated on: 2024-03-07T12:39:26.941357
