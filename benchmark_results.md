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
| xxd | 64 | 1.52 |  |
| xxd | 64 | 2.09 | -r |
| xxd | 64 | 4.83 |  |
| xxd | 64 | 4.09 | -r |
| xxd | 64 | 1.50 |  |
| xxd | 64 | 0.92 | -p |
| xxd | 64 | 4.87 | -i |
| xxd | 64 | 1.52 | -e |
| xxd | 64 | 3.35 | -b |
| xxd | 64 | 1.55 | -u |
| xxd | 64 | 1.70 | -E |
| xxd | 64 | 5.57 | -b_-i |
| tinyxxd | 64 | 1.30 |  |
| tinyxxd | 64 | 1.99 | -r |
| tinyxxd | 64 | 5.16 |  |
| tinyxxd | 64 | 3.95 | -r |
| tinyxxd | 64 | 1.26 |  |
| tinyxxd | 64 | 0.79 | -p |
| tinyxxd | 64 | 4.95 | -i |
| tinyxxd | 64 | 1.28 | -e |
| tinyxxd | 64 | 2.95 | -b |
| tinyxxd | 64 | 1.27 | -u |
| tinyxxd | 64 | 1.44 | -E |
| tinyxxd | 64 | 4.49 | -b_-i |
| tinyxxd | 32 | 0.67 |  |
| tinyxxd | 32 | 0.99 | -r |
| tinyxxd | 32 | 1.93 |  |
| tinyxxd | 32 | 1.87 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.39 | -p |
| tinyxxd | 32 | 2.42 | -i |
| tinyxxd | 32 | 0.64 | -e |
| tinyxxd | 32 | 1.49 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.71 | -E |
| tinyxxd | 32 | 2.29 | -b_-i |
| xxd | 32 | 0.80 |  |
| xxd | 32 | 1.06 | -r |
| xxd | 32 | 2.62 |  |
| xxd | 32 | 2.00 | -r |
| xxd | 32 | 0.75 |  |
| xxd | 32 | 0.46 | -p |
| xxd | 32 | 2.49 | -i |
| xxd | 32 | 0.76 | -e |
| xxd | 32 | 1.61 | -b |
| xxd | 32 | 0.75 | -u |
| xxd | 32 | 0.82 | -E |
| xxd | 32 | 2.81 | -b_-i |
| xxd | 16 | 0.39 |  |
| xxd | 16 | 0.54 | -r |
| xxd | 16 | 1.37 |  |
| xxd | 16 | 1.00 | -r |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.23 | -p |
| xxd | 16 | 1.22 | -i |
| xxd | 16 | 0.38 | -e |
| xxd | 16 | 0.80 | -b |
| xxd | 16 | 0.39 | -u |
| xxd | 16 | 0.42 | -E |
| xxd | 16 | 1.41 | -b_-i |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.50 | -r |
| tinyxxd | 16 | 0.85 |  |
| tinyxxd | 16 | 0.96 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.19 | -p |
| tinyxxd | 16 | 1.20 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.74 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.36 | -E |
| tinyxxd | 16 | 1.16 | -b_-i |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.25 | -r |
| tinyxxd | 8 | 0.41 |  |
| tinyxxd | 8 | 0.47 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.37 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| tinyxxd | 8 | 0.58 | -b_-i |
| xxd | 8 | 0.32 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 1.06 |  |
| xxd | 8 | 0.64 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.60 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.40 | -b |
| xxd | 8 | 0.19 | -u |
| xxd | 8 | 0.21 | -E |
| xxd | 8 | 0.71 | -b_-i |
| tinyxxd | 4 | 0.09 |  |
| tinyxxd | 4 | 0.14 | -r |
| tinyxxd | 4 | 0.24 |  |
| tinyxxd | 4 | 0.24 | -r |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.05 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.08 | -u |
| tinyxxd | 4 | 0.09 | -E |
| tinyxxd | 4 | 0.28 | -b_-i |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.22 |  |
| xxd | 4 | 0.26 | -r |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.30 | -i |
| xxd | 4 | 0.10 | -e |
| xxd | 4 | 0.20 | -b |
| xxd | 4 | 0.10 | -u |
| xxd | 4 | 0.11 | -E |
| xxd | 4 | 0.36 | -b_-i |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.07 | -r |
| tinyxxd | 2 | 0.10 |  |
| tinyxxd | 2 | 0.12 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.09 | -b |
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
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.18 | -b_-i |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.03 | -r |
| tinyxxd | 1 | 0.05 |  |
| tinyxxd | 1 | 0.06 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.03 | -u |
| tinyxxd | 1 | 0.03 | -E |
| tinyxxd | 1 | 0.09 | -b_-i |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.06 |  |
| xxd | 1 | 0.09 | -r |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b_-i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 16.67% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 18.77% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 13.55% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 21.99% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 18.19% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 24.09% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 29.01% faster with no flag.
- For sample size 32 MiB, tinyxxd was 7.28% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 19.33% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 19.25% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 7.62% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 19.89% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 14.66% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 22.74% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 42.17% faster with no flag.
- For sample size 16 MiB, tinyxxd was 5.33% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 19.07% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 18.71% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 8.96% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 21.31% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 16.99% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 21.52% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 112.69% faster with no flag.
- For sample size 8 MiB, tinyxxd was 29.27% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 19.23% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 19.19% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 8.46% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 18.76% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 13.19% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 21.55% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 18.61% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 20.79% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 7.38% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 17.70% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 14.05% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 26.54% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 11.98% faster with no flag.
- For sample size 2 MiB, tinyxxd was 6.59% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 15.92% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 17.29% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 7.98% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 15.70% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 13.79% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 24.43% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 8.94% faster with no flag.
- For sample size 1 MiB, tinyxxd was 34.44% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 13.61% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 16.70% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 7.65% faster with flags '-b'.
- For sample size 1 MiB, xxd was 27.58% faster with flags '-u'.
- For sample size 1 MiB, xxd was 10.70% faster with flags '-E'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 8.76% faster than xxd.
- For sample 32 MiB, tinyxxd was 15.57% faster than xxd.
- For sample 16 MiB, tinyxxd was 17.44% faster than xxd.
- For sample 8 MiB, tinyxxd was 36.28% faster than xxd.
- For sample 4 MiB, tinyxxd was 10.12% faster than xxd.
- For sample 2 MiB, tinyxxd was 11.16% faster than xxd.
- For sample 1 MiB, tinyxxd was 8.88% faster than xxd.

### Performance by flag
- tinyxxd was 18.68% faster with no flag.
- tinyxxd was 6.89% faster with flag '-r'.
- tinyxxd was 17.81% faster with flag '-p'.
- tinyxxd was 18.93% faster with flag '-e'.
- tinyxxd was 10.81% faster with flag '-b'.
- tinyxxd was 20.34% faster with flag '-u'.
- tinyxxd was 16.33% faster with flag '-E'.
- tinyxxd was 23.13% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 1.75% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 48.78% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 222.61% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 0.02% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 0.16% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 6.77% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 1.02% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 0.19% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 3.28% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 1.69% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 2.93% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 0.22% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 2.71% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 47.92% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 308.71% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 3.31% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 0.57% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 2.46% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 3.39% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 0.01% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 1.04% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 0.83% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 0.40% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 0.05% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 5.90% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 47.05% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 206.60% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 0.33% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 0.15% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 0.07% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 0.16% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 1.38% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 0.09% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 5.51% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 0.51% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 1.75% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 6.12% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 47.92% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 247.70% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 1.70% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 0.30% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 0.06% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 2.31% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 0.58% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 0.08% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 0.82% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 0.58% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 0.67% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 3.45% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 45.52% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 265.89% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 0.07% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 0.85% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 0.06% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 2.03% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 0.11% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 2.14% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 0.67% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 6.93% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 0.40% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 1.98% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 46.02% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 164.21% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 2.94% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 0.73% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 0.23% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 1.60% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 0.23% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 1.47% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 0.23% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 1.50% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 2.99% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 47.80% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 156.56% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 1.97% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 0.50% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 0.75% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 1.37% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 0.17% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 2.57% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 0.40% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 2.32% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 3.52% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 66.19% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 41.35% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 456.60% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 27.28% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 0.63% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 0.27% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 0.48% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 0.04% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 0.19% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 0.45% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 0.60% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 0.10% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 3.35% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 42.87% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 186.07% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 1.09% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 0.65% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 1.91% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 0.49% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 0.26% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.75% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.69% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 0.86% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.21% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 7.81% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 46.89% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 127.28% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 0.09% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 0.81% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 0.99% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 0.57% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 0.14% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 3.04% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 0.97% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 0.39% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 1.53% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 3.19% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 46.27% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 141.42% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 1.14% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 1.96% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 1.04% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 1.08% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 1.72% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 1.56% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 0.90% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 1.24% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.55% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 2.52% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 47.68% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 124.89% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 3.23% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 0.31% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 0.71% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 0.19% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 34.03% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 0.65% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 0.91% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 0.50% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 0.37% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 4.70% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 44.67% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 133.48% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 0.81% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 1.08% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 0.57% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 1.01% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 2.01% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 2.83% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 48.29% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 10.97% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 17.96% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 5.05% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 71.70% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 112.66% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 28.96% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 1.04% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 2.67% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 0.73% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 1.27% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 2.68% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 0.42% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 1.89% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 1.79% compared to the last run.
---
Report generated on: 2024-10-21T10:58:21.809823
