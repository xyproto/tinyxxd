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
| xxd | 64 | 1.60 |  |
| xxd | 64 | 2.18 | -r |
| xxd | 64 | 5.92 |  |
| xxd | 64 | 3.96 | -r |
| xxd | 64 | 1.53 |  |
| xxd | 64 | 0.95 | -p |
| xxd | 64 | 4.88 | -i |
| xxd | 64 | 1.50 | -e |
| xxd | 64 | 3.56 | -b |
| xxd | 64 | 1.51 | -u |
| xxd | 64 | 1.67 | -E |
| tinyxxd | 64 | 1.29 |  |
| tinyxxd | 64 | 2.12 | -r |
| tinyxxd | 64 | 4.94 |  |
| tinyxxd | 64 | 3.61 | -r |
| tinyxxd | 64 | 1.28 |  |
| tinyxxd | 64 | 0.80 | -p |
| tinyxxd | 64 | 4.83 | -i |
| tinyxxd | 64 | 1.31 | -e |
| tinyxxd | 64 | 3.67 | -b |
| tinyxxd | 64 | 1.26 | -u |
| tinyxxd | 64 | 1.43 | -E |
| xxd | 32 | 0.78 |  |
| xxd | 32 | 1.10 | -r |
| xxd | 32 | 2.24 |  |
| xxd | 32 | 1.92 | -r |
| xxd | 32 | 0.77 |  |
| xxd | 32 | 0.48 | -p |
| xxd | 32 | 2.45 | -i |
| xxd | 32 | 0.78 | -e |
| xxd | 32 | 1.76 | -b |
| xxd | 32 | 0.77 | -u |
| xxd | 32 | 0.83 | -E |
| tinyxxd | 32 | 0.65 |  |
| tinyxxd | 32 | 1.07 | -r |
| tinyxxd | 32 | 2.26 |  |
| tinyxxd | 32 | 1.77 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.40 | -p |
| tinyxxd | 32 | 2.42 | -i |
| tinyxxd | 32 | 0.65 | -e |
| tinyxxd | 32 | 1.75 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.71 | -E |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.55 | -r |
| xxd | 16 | 1.13 |  |
| xxd | 16 | 0.99 | -r |
| xxd | 16 | 0.39 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.22 | -i |
| xxd | 16 | 0.39 | -e |
| xxd | 16 | 0.90 | -b |
| xxd | 16 | 0.40 | -u |
| xxd | 16 | 0.42 | -E |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.51 | -r |
| tinyxxd | 16 | 1.91 |  |
| tinyxxd | 16 | 1.01 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.23 | -p |
| tinyxxd | 16 | 1.21 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.88 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.35 | -E |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.25 | -r |
| tinyxxd | 8 | 0.51 |  |
| tinyxxd | 8 | 0.45 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.61 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.44 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.50 |  |
| xxd | 8 | 0.47 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.45 | -b |
| xxd | 8 | 0.20 | -u |
| xxd | 8 | 0.21 | -E |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.13 | -r |
| tinyxxd | 4 | 0.24 |  |
| tinyxxd | 4 | 0.23 | -r |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.05 | -p |
| tinyxxd | 4 | 0.31 | -i |
| tinyxxd | 4 | 0.09 | -e |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.08 | -u |
| tinyxxd | 4 | 0.10 | -E |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.18 | -r |
| xxd | 4 | 0.45 |  |
| xxd | 4 | 0.35 | -r |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.32 | -i |
| xxd | 4 | 0.10 | -e |
| xxd | 4 | 0.23 | -b |
| xxd | 4 | 0.10 | -u |
| xxd | 4 | 0.11 | -E |
| tinyxxd | 2 | 0.05 |  |
| tinyxxd | 2 | 0.07 | -r |
| tinyxxd | 2 | 0.32 |  |
| tinyxxd | 2 | 0.12 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.16 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
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
| tinyxxd | 1 | 0.03 |  |
| tinyxxd | 1 | 0.04 | -r |
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
| xxd | 1 | 0.07 | -r |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.06 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 20.44% faster with no flag.
- For sample size 64 MiB, tinyxxd was 7.07% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 18.44% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 14.73% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 19.74% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 16.89% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 7.08% faster with no flag.
- For sample size 32 MiB, tinyxxd was 5.83% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 19.92% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 20.18% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 21.98% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 17.22% faster with flags '-E'.
- For sample size 16 MiB, xxd was 34.54% faster with no flag.
- For sample size 16 MiB, tinyxxd was 20.21% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 24.53% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 17.37% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 6.17% faster with no flag.
- For sample size 8 MiB, tinyxxd was 8.97% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 17.96% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 15.16% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 22.53% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 15.98% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 59.22% faster with no flag.
- For sample size 4 MiB, tinyxxd was 51.00% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 17.28% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 15.66% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 21.53% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 12.23% faster with flags '-E'.
- For sample size 2 MiB, xxd was 83.35% faster with no flag.
- For sample size 2 MiB, tinyxxd was 6.25% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 13.66% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 13.90% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 17.81% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 13.76% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 7.47% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 14.21% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 12.31% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 13.78% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 31.33% faster with flags '-E'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 10.22% faster than xxd.
- For sample 32 MiB, tinyxxd was 7.22% faster than xxd.
- For sample size 16 MiB, xxd was 5.63% faster than tinyxxd.
- For sample 8 MiB, tinyxxd was 7.37% faster than xxd.
- For sample 4 MiB, tinyxxd was 30.72% faster than xxd.
- For sample size 2 MiB, xxd was 17.70% faster than tinyxxd.
- For sample 1 MiB, tinyxxd was 6.62% faster than xxd.

### Performance by flag
- tinyxxd was 8.06% faster with no flag.
- tinyxxd was 7.42% faster '-r'.
- tinyxxd was 16.53% faster '-p'.
- tinyxxd was 16.79% faster '-e'.
- tinyxxd was 21.05% faster '-u'.
- tinyxxd was 16.89% faster '-E'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 3.45% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 46.90% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 283.33% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 3.55% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 0.67% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 0.25% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 0.99% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 1.65% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 1.81% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 2.26% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 0.12% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 2.40% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 44.82% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 291.55% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 6.18% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 1.50% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 0.35% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 1.67% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 1.63% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 5.67% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 2.51% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 0.51% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 0.46% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 45.23% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 187.31% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 4.23% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 1.67% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 1.10% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 0.80% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 4.39% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.93% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 5.39% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 1.72% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 2.18% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 39.37% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 256.03% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 0.06% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 0.07% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 0.06% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 1.50% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 0.65% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 0.60% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 0.52% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 0.58% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 1.84% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 44.89% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 199.14% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 0.46% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 2.14% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 0.13% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 0.04% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 3.62% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 1.85% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 0.03% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 4.22% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 2.17% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 42.81% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 498.50% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 14.04% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 0.29% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 13.99% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 0.14% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 1.10% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 0.92% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 0.68% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 0.19% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 3.15% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 43.34% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 216.20% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 0.30% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 0.11% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 0.27% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 3.94% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 0.33% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 0.02% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 0.16% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 0.06% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 1.80% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 43.38% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 155.41% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 7.26% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 0.68% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 0.11% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 0.44% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 0.45% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 0.77% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 3.37% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 0.02% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 2.84% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 57.44% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 191.87% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 25.73% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 0.30% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 0.25% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 0.26% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.02% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.72% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 3.56% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 1.97% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 26.40% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 365.77% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 40.86% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 1.83% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 0.41% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 3.06% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 2.29% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 1.16% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 0.15% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 0.17% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 5.48% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 42.43% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 639.19% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 4.02% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 2.92% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 1.31% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 2.71% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 0.38% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 0.31% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 0.31% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 0.35% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 0.14% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 43.35% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 137.46% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 2.58% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 1.21% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 0.44% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 1.42% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 0.39% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.62% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 1.33% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 2.17% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 16.11% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 43.56% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 161.30% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 2.67% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 0.05% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 0.48% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 2.38% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 1.00% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 1.35% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 0.14% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 0.07% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 0.05% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 41.39% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 124.98% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 1.21% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 2.89% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 0.88% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 2.56% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 1.55% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 3.55% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 1.54% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 9.95% compared to the last run.
---
Report generated on: 2024-02-27T09:22:07.973812
