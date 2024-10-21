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
| xxd | 64 | 1.66 |  |
| xxd | 64 | 2.16 | -r |
| xxd | 64 | 4.82 |  |
| xxd | 64 | 4.03 | -r |
| xxd | 64 | 1.53 |  |
| xxd | 64 | 0.92 | -p |
| xxd | 64 | 4.80 | -i |
| xxd | 64 | 1.52 | -e |
| xxd | 64 | 3.28 | -b |
| xxd | 64 | 1.52 | -u |
| xxd | 64 | 1.64 | -E |
| xxd | 64 | 5.68 | -b_-i |
| tinyxxd | 64 | 1.34 |  |
| tinyxxd | 64 | 1.52 | -r |
| tinyxxd | 64 | 5.06 |  |
| tinyxxd | 64 | 5.76 | -r |
| tinyxxd | 64 | 1.26 |  |
| tinyxxd | 64 | 0.79 | -p |
| tinyxxd | 64 | 4.78 | -i |
| tinyxxd | 64 | 1.27 | -e |
| tinyxxd | 64 | 2.96 | -b |
| tinyxxd | 64 | 1.29 | -u |
| tinyxxd | 64 | 1.42 | -E |
| tinyxxd | 64 | 4.56 | -b_-i |
| tinyxxd | 32 | 0.67 |  |
| tinyxxd | 32 | 0.74 | -r |
| tinyxxd | 32 | 1.97 |  |
| tinyxxd | 32 | 2.84 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.40 | -p |
| tinyxxd | 32 | 2.48 | -i |
| tinyxxd | 32 | 0.64 | -e |
| tinyxxd | 32 | 1.48 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.70 | -E |
| tinyxxd | 32 | 2.27 | -b_-i |
| xxd | 32 | 0.78 |  |
| xxd | 32 | 1.06 | -r |
| xxd | 32 | 2.18 |  |
| xxd | 32 | 1.99 | -r |
| xxd | 32 | 0.89 |  |
| xxd | 32 | 0.46 | -p |
| xxd | 32 | 2.40 | -i |
| xxd | 32 | 0.76 | -e |
| xxd | 32 | 1.60 | -b |
| xxd | 32 | 0.79 | -u |
| xxd | 32 | 0.81 | -E |
| xxd | 32 | 2.81 | -b_-i |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.37 | -r |
| tinyxxd | 16 | 0.83 |  |
| tinyxxd | 16 | 1.41 | -r |
| tinyxxd | 16 | 0.31 |  |
| tinyxxd | 16 | 0.20 | -p |
| tinyxxd | 16 | 1.18 | -i |
| tinyxxd | 16 | 0.33 | -e |
| tinyxxd | 16 | 0.82 | -b |
| tinyxxd | 16 | 0.33 | -u |
| tinyxxd | 16 | 0.36 | -E |
| tinyxxd | 16 | 1.13 | -b_-i |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.53 | -r |
| xxd | 16 | 0.91 |  |
| xxd | 16 | 1.00 | -r |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.23 | -p |
| xxd | 16 | 1.23 | -i |
| xxd | 16 | 0.38 | -e |
| xxd | 16 | 0.80 | -b |
| xxd | 16 | 0.38 | -u |
| xxd | 16 | 0.41 | -E |
| xxd | 16 | 1.41 | -b_-i |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.27 | -r |
| xxd | 8 | 0.58 |  |
| xxd | 8 | 0.51 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.60 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.40 | -b |
| xxd | 8 | 0.19 | -u |
| xxd | 8 | 0.22 | -E |
| xxd | 8 | 0.74 | -b_-i |
| tinyxxd | 8 | 0.30 |  |
| tinyxxd | 8 | 0.22 | -r |
| tinyxxd | 8 | 0.81 |  |
| tinyxxd | 8 | 0.72 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.37 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| tinyxxd | 8 | 0.57 | -b_-i |
| tinyxxd | 4 | 0.09 |  |
| tinyxxd | 4 | 0.10 | -r |
| tinyxxd | 4 | 0.21 |  |
| tinyxxd | 4 | 0.36 | -r |
| tinyxxd | 4 | 0.09 |  |
| tinyxxd | 4 | 0.05 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.24 | -b |
| tinyxxd | 4 | 0.08 | -u |
| tinyxxd | 4 | 0.09 | -E |
| tinyxxd | 4 | 0.28 | -b_-i |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.22 |  |
| xxd | 4 | 0.25 | -r |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.30 | -i |
| xxd | 4 | 0.10 | -e |
| xxd | 4 | 0.21 | -b |
| xxd | 4 | 0.10 | -u |
| xxd | 4 | 0.11 | -E |
| xxd | 4 | 0.35 | -b_-i |
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
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.18 | -b_-i |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.05 | -r |
| tinyxxd | 2 | 0.10 |  |
| tinyxxd | 2 | 0.18 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
| tinyxxd | 2 | 0.14 | -b_-i |
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
| xxd | 1 | 0.10 | -b_-i |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.03 | -r |
| tinyxxd | 1 | 0.11 |  |
| tinyxxd | 1 | 0.10 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.03 | -E |
| tinyxxd | 1 | 0.07 | -b_-i |

## Performance Summaries
- For sample size 64 MiB, xxd was 17.52% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 16.42% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 19.59% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 10.89% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 17.91% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 15.10% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 24.58% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 18.16% faster with no flag.
- For sample size 32 MiB, xxd was 17.32% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 16.06% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 19.21% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 7.57% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 26.14% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 16.27% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 23.60% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 13.35% faster with no flag.
- For sample size 16 MiB, xxd was 15.97% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 16.94% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 17.53% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 14.50% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 13.34% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 25.38% faster with flags '-b -i'.
- For sample size 8 MiB, xxd was 32.07% faster with no flag.
- For sample size 8 MiB, xxd was 20.44% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 15.33% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 19.46% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 7.90% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 21.15% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 21.18% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 30.63% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 8.58% faster with no flag.
- For sample size 4 MiB, xxd was 17.52% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 15.86% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 17.94% faster with flags '-e'.
- For sample size 4 MiB, xxd was 17.78% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 19.58% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 16.17% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 24.30% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 12.53% faster with no flag.
- For sample size 2 MiB, xxd was 17.72% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 13.10% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 16.05% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 5.96% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 17.48% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 14.73% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 23.62% faster with flags '-b -i'.
- For sample size 1 MiB, xxd was 36.05% faster with no flag.
- For sample size 1 MiB, xxd was 20.30% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 11.40% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 14.14% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 13.26% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 15.61% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 18.65% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 33.53% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 4.79% faster than xxd.
- For sample 32 MiB, tinyxxd was 7.08% faster than xxd.
- For sample 16 MiB, tinyxxd was 5.99% faster than xxd.
- For sample size 8 MiB, xxd was 3.28% faster than tinyxxd.
- For sample 4 MiB, tinyxxd was 2.82% faster than xxd.
- For sample 2 MiB, tinyxxd was 5.49% faster than xxd.
- For sample size 1 MiB, xxd was 2.87% faster than tinyxxd.

### Performance by flag
- tinyxxd was 5.79% faster with no flag.
- xxd was 17.49% faster with flag '-r'.
- tinyxxd was 16.20% faster with flag '-p'.
- tinyxxd was 19.06% faster with flag '-e'.
- tinyxxd was 7.04% faster with flag '-b'.
- tinyxxd was 19.72% faster with flag '-u'.
- tinyxxd was 15.61% faster with flag '-E'.
- tinyxxd was 24.86% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 8.02% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 46.69% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 213.84% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 0.49% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 0.59% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 0.26% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 0.08% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 0.02% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 1.28% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 1.82% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 1.62% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 1.77% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 4.50% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 63.61% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 295.21% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 38.11% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 1.19% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 0.79% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 0.79% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 0.31% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 0.24% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 15.14% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 3.51% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 1.57% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 3.96% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 60.28% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 206.81% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 52.51% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 2.45% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 2.26% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 4.26% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 2.29% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 2.53% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 2.34% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 3.34% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 0.52% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 5.75% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 48.25% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 193.43% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 2.89% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 20.41% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 0.14% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 3.64% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 0.76% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.03% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 4.80% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 0.77% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 1.81% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 1.98% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 61.44% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 157.75% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 45.60% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 2.71% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 2.47% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 0.25% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 1.59% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 10.85% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 1.18% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 0.51% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 0.70% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 2.61% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 47.20% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 142.73% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 0.73% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 0.64% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 0.79% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 3.17% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 0.57% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 0.16% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 38.87% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 3.04% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 3.55% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 1.38% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 49.16% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 199.11% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 2.19% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 2.07% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 0.14% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 0.08% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 0.00% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 1.01% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 2.62% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 0.72% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 4.85% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 85.25% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 54.69% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 393.17% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 48.02% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 2.29% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 3.17% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 11.17% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 0.14% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.00% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 2.22% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 3.40% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 5.03% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 1.49% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 60.01% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 152.88% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 49.95% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 3.89% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 1.41% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 0.13% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 0.35% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 12.80% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 6.03% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 3.87% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 0.05% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 2.27% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 51.04% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 127.55% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 9.03% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 0.34% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 0.29% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 0.13% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 0.45% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 0.64% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 1.06% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 0.95% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 0.31% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 2.59% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 45.97% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 124.45% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 0.09% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 0.76% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 2.11% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 0.04% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 3.02% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 1.54% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 0.51% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 1.19% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 0.60% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 0.10% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 58.21% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 137.73% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 50.63% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 2.28% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 2.18% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 1.29% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 0.68% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.70% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 2.79% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 3.63% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 3.53% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 48.90% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 112.92% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 7.89% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 0.69% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 2.86% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 0.65% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 1.89% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 3.98% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 0.03% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 0.02% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 1.54% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 1.03% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 86.75% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 338.52% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 53.02% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 2.20% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 0.64% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 0.11% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 2.24% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 0.89% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 2.92% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 1.47% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 0.09% compared to the last run.
---
Report generated on: 2024-10-21T12:49:24.628423
