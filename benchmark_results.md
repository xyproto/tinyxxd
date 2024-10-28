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
| xxd | 64 | 1.59 |  |
| xxd | 64 | 2.10 | -r |
| xxd | 64 | 4.76 |  |
| xxd | 64 | 4.20 | -r |
| xxd | 64 | 1.53 |  |
| xxd | 64 | 0.92 | -p |
| xxd | 64 | 4.76 | -i |
| xxd | 64 | 1.55 | -e |
| xxd | 64 | 3.23 | -b |
| xxd | 64 | 1.51 | -u |
| xxd | 64 | 1.64 | -E |
| xxd | 64 | 5.64 | -b -i |
| tinyxxd | 64 | 1.47 |  |
| tinyxxd | 64 | 1.52 | -r |
| tinyxxd | 64 | 4.85 |  |
| tinyxxd | 64 | 3.71 | -r |
| tinyxxd | 64 | 1.24 |  |
| tinyxxd | 64 | 0.79 | -p |
| tinyxxd | 64 | 4.78 | -i |
| tinyxxd | 64 | 1.29 | -e |
| tinyxxd | 64 | 3.00 | -b |
| tinyxxd | 64 | 1.23 | -u |
| tinyxxd | 64 | 1.40 | -E |
| tinyxxd | 64 | 4.54 | -b -i |
| xxd | 32 | 0.79 |  |
| xxd | 32 | 1.05 | -r |
| xxd | 32 | 2.29 |  |
| xxd | 32 | 1.99 | -r |
| xxd | 32 | 0.75 |  |
| xxd | 32 | 0.49 | -p |
| xxd | 32 | 2.41 | -i |
| xxd | 32 | 0.76 | -e |
| xxd | 32 | 1.60 | -b |
| xxd | 32 | 0.75 | -u |
| xxd | 32 | 0.82 | -E |
| xxd | 32 | 2.80 | -b -i |
| tinyxxd | 32 | 0.65 |  |
| tinyxxd | 32 | 0.78 | -r |
| tinyxxd | 32 | 2.08 |  |
| tinyxxd | 32 | 1.84 | -r |
| tinyxxd | 32 | 0.62 |  |
| tinyxxd | 32 | 0.40 | -p |
| tinyxxd | 32 | 2.37 | -i |
| tinyxxd | 32 | 0.65 | -e |
| tinyxxd | 32 | 1.48 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.70 | -E |
| tinyxxd | 32 | 2.24 | -b -i |
| xxd | 16 | 0.40 |  |
| xxd | 16 | 0.53 | -r |
| xxd | 16 | 0.90 |  |
| xxd | 16 | 1.01 | -r |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.23 | -p |
| xxd | 16 | 1.20 | -i |
| xxd | 16 | 0.39 | -e |
| xxd | 16 | 0.82 | -b |
| xxd | 16 | 0.38 | -u |
| xxd | 16 | 0.44 | -E |
| xxd | 16 | 1.44 | -b -i |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.38 | -r |
| tinyxxd | 16 | 0.84 |  |
| tinyxxd | 16 | 0.92 | -r |
| tinyxxd | 16 | 0.31 |  |
| tinyxxd | 16 | 0.20 | -p |
| tinyxxd | 16 | 1.17 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.74 | -b |
| tinyxxd | 16 | 0.31 | -u |
| tinyxxd | 16 | 0.35 | -E |
| tinyxxd | 16 | 1.13 | -b -i |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.44 |  |
| xxd | 8 | 0.56 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.41 | -b |
| xxd | 8 | 0.19 | -u |
| xxd | 8 | 0.21 | -E |
| xxd | 8 | 0.73 | -b -i |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.24 | -r |
| tinyxxd | 8 | 0.80 |  |
| tinyxxd | 8 | 0.55 | -r |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.37 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| tinyxxd | 8 | 0.57 | -b -i |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.13 | -r |
| xxd | 4 | 0.23 |  |
| xxd | 4 | 0.25 | -r |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.30 | -i |
| xxd | 4 | 0.10 | -e |
| xxd | 4 | 0.20 | -b |
| xxd | 4 | 0.10 | -u |
| xxd | 4 | 0.11 | -E |
| xxd | 4 | 0.35 | -b -i |
| tinyxxd | 4 | 0.09 |  |
| tinyxxd | 4 | 0.10 | -r |
| tinyxxd | 4 | 0.21 |  |
| tinyxxd | 4 | 0.23 | -r |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.05 | -p |
| tinyxxd | 4 | 0.32 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.08 | -u |
| tinyxxd | 4 | 0.09 | -E |
| tinyxxd | 4 | 0.28 | -b -i |
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
| xxd | 2 | 0.18 | -b -i |
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
| tinyxxd | 2 | 0.15 | -b -i |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.03 | -r |
| tinyxxd | 1 | 0.06 |  |
| tinyxxd | 1 | 0.06 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.03 | -E |
| tinyxxd | 1 | 0.07 | -b -i |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.06 |  |
| xxd | 1 | 0.24 | -r |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 20.42% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 16.66% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 20.35% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 7.61% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 22.32% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 17.48% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 24.26% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 14.63% faster with no flag.
- For sample size 32 MiB, tinyxxd was 16.45% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 22.97% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 17.55% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 8.16% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 18.96% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 16.28% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 25.13% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 12.77% faster with no flag.
- For sample size 16 MiB, tinyxxd was 18.88% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 15.60% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 19.24% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 10.88% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 21.91% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 24.95% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 27.33% faster with flags '-b -i'.
- For sample size 8 MiB, xxd was 36.08% faster with no flag.
- For sample size 8 MiB, tinyxxd was 6.56% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 12.84% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 18.22% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 8.50% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 20.70% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 16.71% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 26.53% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 15.51% faster with no flag.
- For sample size 4 MiB, tinyxxd was 16.91% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 14.45% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 20.40% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 8.36% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 18.31% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 16.51% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 24.16% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 13.09% faster with no flag.
- For sample size 2 MiB, tinyxxd was 17.29% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 16.24% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 16.60% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 8.06% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 17.85% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 11.26% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 20.33% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 10.57% faster with no flag.
- For sample size 1 MiB, tinyxxd was 217.80% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 10.08% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 16.01% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 8.42% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 16.42% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 14.74% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 25.53% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 12.17% faster than xxd.
- For sample 32 MiB, tinyxxd was 14.44% faster than xxd.
- For sample 16 MiB, tinyxxd was 15.66% faster than xxd.
- For sample 8 MiB, tinyxxd was 1.29% faster than xxd.
- For sample 4 MiB, tinyxxd was 13.22% faster than xxd.
- For sample 2 MiB, tinyxxd was 12.89% faster than xxd.
- For sample 1 MiB, tinyxxd was 49.94% faster than xxd.

### Performance by flag
- tinyxxd was 5.70% faster with no flag.
- tinyxxd was 19.70% faster with flag '-r'.
- tinyxxd was 17.70% faster with flag '-p'.
- tinyxxd was 19.27% faster with flag '-e'.
- tinyxxd was 8.25% faster with flag '-b'.
- tinyxxd was 21.05% faster with flag '-u'.
- tinyxxd was 17.91% faster with flag '-E'.
- tinyxxd was 24.95% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 3.18% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 48.45% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 209.65% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 3.37% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 0.30% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 0.37% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 1.65% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 1.48% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 0.32% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 0.14% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 0.10% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 0.55% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 12.55% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 58.87% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 271.89% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 0.21% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 5.14% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 8.06% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 0.86% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 0.02% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 0.65% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 3.45% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 0.42% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 1.60% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 5.15% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 47.24% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 205.46% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 0.10% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 0.18% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 5.64% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 2.67% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 0.62% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 2.36% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 0.60% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 0.44% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 0.88% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 3.46% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 57.53% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 232.79% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 0.06% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 0.28% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 0.16% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 0.77% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 0.85% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 0.71% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 0.24% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 0.16% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 2.73% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 3.24% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 47.55% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 132.50% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 0.17% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 3.17% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 0.45% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 0.62% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 1.22% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 3.03% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 2.07% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 8.65% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 1.43% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 3.42% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 58.75% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 170.39% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 0.03% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 0.66% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 0.27% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 1.53% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 0.87% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 0.70% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 0.24% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 0.61% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 1.74% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 4.54% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 48.00% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 136.09% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 2.25% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 1.77% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 0.63% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 1.42% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 0.11% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 1.17% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 0.32% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 0.63% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 3.37% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 3.38% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 49.31% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 404.82% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 18.44% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 9.67% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 2.54% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 0.28% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 0.25% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.36% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 14.37% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 0.64% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 2.04% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 3.52% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 46.83% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 135.91% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 0.18% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 0.01% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 0.91% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 0.16% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 0.27% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 0.30% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 1.86% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 0.78% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 0.01% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 4.06% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 57.17% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 152.53% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 0.31% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 0.66% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 0.98% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 6.30% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 0.11% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.50% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.73% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 1.88% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 9.95% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 3.91% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 45.72% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 126.78% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 0.38% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 0.71% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 2.79% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 11.69% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 0.67% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.24% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 1.65% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 0.69% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 0.19% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 3.04% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 56.79% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 144.78% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 0.60% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 1.06% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 0.25% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 1.35% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 0.08% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.17% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 1.36% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 4.88% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 3.92% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 7.04% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 55.69% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 142.73% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 0.86% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 2.33% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 3.42% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 0.56% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 0.86% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 0.99% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 2.23% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 1.40% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 14.67% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 4.88% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 81.52% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 112.10% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 11.18% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 0.21% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 0.69% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 0.12% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 0.43% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 2.26% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 1.09% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 0.03% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 1.16% compared to the last run.
---
Report generated on: 2024-10-28T08:00:40.420267
