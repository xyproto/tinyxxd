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
| tinyxxd | 64 | 1.30 |  |
| tinyxxd | 64 | 2.09 | -r |
| tinyxxd | 64 | 4.91 |  |
| tinyxxd | 64 | 4.25 | -r |
| tinyxxd | 64 | 1.28 |  |
| tinyxxd | 64 | 1.01 | -p |
| tinyxxd | 64 | 4.67 | -i |
| tinyxxd | 64 | 1.73 | -e |
| tinyxxd | 64 | 3.11 | -b |
| tinyxxd | 64 | 1.26 | -u |
| tinyxxd | 64 | 1.43 | -E |
| tinyxxd | 64 | 4.30 | -b -i |
| xxd | 64 | 1.33 |  |
| xxd | 64 | 2.27 | -r |
| xxd | 64 | 3.78 |  |
| xxd | 64 | 4.51 | -r |
| xxd | 64 | 1.30 |  |
| xxd | 64 | 1.02 | -p |
| xxd | 64 | 4.83 | -i |
| xxd | 64 | 1.32 | -e |
| xxd | 64 | 2.66 | -b |
| xxd | 64 | 1.30 | -u |
| xxd | 64 | 1.46 | -E |
| xxd | 64 | 5.85 | -b -i |
| tinyxxd | 32 | 0.67 |  |
| tinyxxd | 32 | 1.02 | -r |
| tinyxxd | 32 | 1.98 |  |
| tinyxxd | 32 | 2.06 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.51 | -p |
| tinyxxd | 32 | 2.31 | -i |
| tinyxxd | 32 | 0.88 | -e |
| tinyxxd | 32 | 1.52 | -b |
| tinyxxd | 32 | 0.65 | -u |
| tinyxxd | 32 | 0.72 | -E |
| tinyxxd | 32 | 2.13 | -b -i |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.18 | -r |
| xxd | 32 | 2.46 |  |
| xxd | 32 | 2.26 | -r |
| xxd | 32 | 0.65 |  |
| xxd | 32 | 0.52 | -p |
| xxd | 32 | 2.49 | -i |
| xxd | 32 | 0.66 | -e |
| xxd | 32 | 1.29 | -b |
| xxd | 32 | 0.65 | -u |
| xxd | 32 | 0.75 | -E |
| xxd | 32 | 2.92 | -b -i |
| tinyxxd | 16 | 0.35 |  |
| tinyxxd | 16 | 0.51 | -r |
| tinyxxd | 16 | 1.03 |  |
| tinyxxd | 16 | 1.03 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.26 | -p |
| tinyxxd | 16 | 1.18 | -i |
| tinyxxd | 16 | 0.43 | -e |
| tinyxxd | 16 | 0.77 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.36 | -E |
| tinyxxd | 16 | 1.08 | -b -i |
| xxd | 16 | 0.35 |  |
| xxd | 16 | 0.68 | -r |
| xxd | 16 | 0.74 |  |
| xxd | 16 | 1.17 | -r |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.26 | -p |
| xxd | 16 | 1.19 | -i |
| xxd | 16 | 0.33 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.45 | -b -i |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.25 | -r |
| tinyxxd | 8 | 0.43 |  |
| tinyxxd | 8 | 0.52 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.13 | -p |
| tinyxxd | 8 | 0.61 | -i |
| tinyxxd | 8 | 0.22 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| tinyxxd | 8 | 0.54 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.37 |  |
| xxd | 8 | 0.59 | -r |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.13 | -p |
| xxd | 8 | 0.62 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.35 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.75 | -b -i |
| xxd | 4 | 0.36 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.19 |  |
| xxd | 4 | 0.29 | -r |
| xxd | 4 | 0.08 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.08 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 4 | 0.09 |  |
| tinyxxd | 4 | 0.14 | -r |
| tinyxxd | 4 | 0.21 |  |
| tinyxxd | 4 | 0.26 | -r |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.07 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.11 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.08 | -u |
| tinyxxd | 4 | 0.09 | -E |
| tinyxxd | 4 | 0.28 | -b -i |
| xxd | 2 | 0.51 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.22 |  |
| xxd | 2 | 0.15 | -r |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.04 | -e |
| xxd | 2 | 0.08 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.07 | -r |
| tinyxxd | 2 | 0.11 |  |
| tinyxxd | 2 | 0.13 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.06 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
| tinyxxd | 2 | 0.14 | -b -i |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.03 | -r |
| tinyxxd | 1 | 0.05 |  |
| tinyxxd | 1 | 0.07 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.03 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |
| tinyxxd | 1 | 0.07 | -b -i |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 |  |
| xxd | 1 | 0.07 | -r |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.04 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b -i |

## Performance Summaries
- For sample size 64 MiB, xxd was 17.01% faster with no flag.
- For sample size 64 MiB, tinyxxd was 6.83% faster with flags '-r'.
- For sample size 64 MiB, xxd was 30.62% faster with flags '-e'.
- For sample size 64 MiB, xxd was 16.62% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 35.94% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 14.70% faster with no flag.
- For sample size 32 MiB, tinyxxd was 11.21% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 7.60% faster with flags '-i'.
- For sample size 32 MiB, xxd was 32.65% faster with flags '-e'.
- For sample size 32 MiB, xxd was 17.79% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 36.98% faster with flags '-b -i'.
- For sample size 16 MiB, xxd was 20.51% faster with no flag.
- For sample size 16 MiB, tinyxxd was 20.57% faster with flags '-r'.
- For sample size 16 MiB, xxd was 29.34% faster with flags '-e'.
- For sample size 16 MiB, xxd was 14.90% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 33.98% faster with flags '-b -i'.
- For sample size 8 MiB, xxd was 8.41% faster with no flag.
- For sample size 8 MiB, tinyxxd was 14.06% faster with flags '-r'.
- For sample size 8 MiB, xxd was 25.36% faster with flags '-e'.
- For sample size 8 MiB, xxd was 9.81% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 39.68% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 66.25% faster with no flag.
- For sample size 4 MiB, tinyxxd was 9.66% faster with flags '-r'.
- For sample size 4 MiB, xxd was 28.08% faster with flags '-e'.
- For sample size 4 MiB, xxd was 18.16% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 34.44% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 302.62% faster with no flag.
- For sample size 2 MiB, tinyxxd was 14.48% faster with flags '-r'.
- For sample size 2 MiB, xxd was 29.10% faster with flags '-e'.
- For sample size 2 MiB, xxd was 17.67% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 41.83% faster with flags '-b -i'.
- For sample size 1 MiB, xxd was 7.57% faster with no flag.
- For sample size 1 MiB, tinyxxd was 10.65% faster with flags '-r'.
- For sample size 1 MiB, xxd was 26.50% faster with flags '-e'.
- For sample size 1 MiB, xxd was 17.08% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 33.42% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 0.86% faster than xxd.
- For sample 32 MiB, tinyxxd was 9.19% faster than xxd.
- For sample 16 MiB, tinyxxd was 3.05% faster than xxd.
- For sample 8 MiB, tinyxxd was 5.31% faster than xxd.
- For sample 4 MiB, tinyxxd was 18.42% faster than xxd.
- For sample 2 MiB, tinyxxd was 67.84% faster than xxd.
- For sample 1 MiB, tinyxxd was 3.32% faster than xxd.

### Performance by flag
- tinyxxd was 10.31% faster with flag '-r'.
- xxd was 30.48% faster with flag '-e'.
- xxd was 16.30% faster with flag '-b'.
- tinyxxd was 36.21% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd slowed down by 5.55% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 44.42% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 298.43% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 12.83% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 3.61% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 1.86% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 0.32% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 1.05% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 2.14% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 2.64% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 2.96% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 4.61% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 1.74% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 52.42% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 189.19% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 5.28% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 0.71% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 2.97% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 0.35% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 1.47% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 0.83% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 0.66% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 14.43% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 1.26% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 9.24% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 45.37% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 221.39% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 10.03% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 2.22% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 1.57% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 0.47% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 1.10% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 0.67% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 5.73% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 3.92% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 2.79% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 1.48% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 51.67% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 274.82% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 7.24% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 1.74% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 3.74% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 3.35% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 1.46% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 1.35% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 0.53% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 1.90% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 0.52% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 12.24% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 45.80% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 233.85% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 10.59% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 3.42% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 1.64% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 0.77% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 0.56% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 0.88% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 0.88% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 5.91% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 4.11% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 4.70% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 42.43% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 122.65% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 1.01% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 0.52% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 0.18% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 3.43% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 0.38% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 3.15% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 3.64% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 2.12% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 1.79% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 8.10% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 45.48% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 175.55% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 11.32% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 2.68% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 1.59% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 3.23% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 1.17% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 1.86% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 2.05% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 2.66% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 4.96% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 2.17% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 48.45% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 125.46% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 3.43% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 0.46% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 2.88% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 2.04% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 0.11% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 5.47% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 1.68% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 4.19% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 3.83% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 328.14% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 51.46% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 119.70% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 4.30% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 0.21% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 0.84% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 0.93% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 1.76% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 0.82% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 1.44% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 1.94% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 3.02% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 6.40% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 45.57% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 166.97% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 2.39% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 1.78% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 1.45% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 0.62% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 0.95% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 1.97% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 1.19% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 3.16% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 6.52% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 1083.18% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 48.27% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 408.28% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 3.78% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 0.90% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 0.04% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 0.11% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 0.52% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 0.63% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 0.61% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 0.29% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 2.09% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 4.64% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 44.28% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 155.05% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 10.21% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 1.42% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 2.88% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 0.70% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 1.05% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 0.03% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 1.52% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 3.68% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 3.98% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 8.72% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 44.11% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 147.10% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 10.10% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 1.72% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 1.35% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 0.22% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 0.46% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 1.21% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 2.26% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 1.24% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 0.82% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 2.08% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 49.15% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 106.15% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 3.36% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 1.06% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 0.68% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 0.23% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 0.94% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 0.19% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 0.28% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 0.63% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 1.93% compared to the last run.
---
Report generated on: 2025-11-26T12:38:56.982919
