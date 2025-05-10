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
| xxd | 64 | 1.24 |  |
| xxd | 64 | 2.17 | -r |
| xxd | 64 | 4.71 |  |
| xxd | 64 | 4.28 | -r |
| xxd | 64 | 1.16 |  |
| xxd | 64 | 0.93 | -p |
| xxd | 64 | 4.82 | -i |
| xxd | 64 | 1.17 | -e |
| xxd | 64 | 2.73 | -b |
| xxd | 64 | 1.18 | -u |
| xxd | 64 | 1.32 | -E |
| xxd | 64 | 5.38 | -b -i |
| tinyxxd | 64 | 1.16 |  |
| tinyxxd | 64 | 1.62 | -r |
| tinyxxd | 64 | 4.92 |  |
| tinyxxd | 64 | 3.98 | -r |
| tinyxxd | 64 | 1.13 |  |
| tinyxxd | 64 | 0.80 | -p |
| tinyxxd | 64 | 4.71 | -i |
| tinyxxd | 64 | 1.70 | -e |
| tinyxxd | 64 | 3.12 | -b |
| tinyxxd | 64 | 1.13 | -u |
| tinyxxd | 64 | 1.32 | -E |
| tinyxxd | 64 | 4.53 | -b -i |
| xxd | 32 | 0.59 |  |
| xxd | 32 | 1.09 | -r |
| xxd | 32 | 2.92 |  |
| xxd | 32 | 2.13 | -r |
| xxd | 32 | 0.57 |  |
| xxd | 32 | 0.47 | -p |
| xxd | 32 | 2.38 | -i |
| xxd | 32 | 0.58 | -e |
| xxd | 32 | 1.36 | -b |
| xxd | 32 | 0.57 | -u |
| xxd | 32 | 0.67 | -E |
| xxd | 32 | 2.67 | -b -i |
| tinyxxd | 32 | 0.58 |  |
| tinyxxd | 32 | 0.79 | -r |
| tinyxxd | 32 | 2.01 |  |
| tinyxxd | 32 | 1.99 | -r |
| tinyxxd | 32 | 0.56 |  |
| tinyxxd | 32 | 0.43 | -p |
| tinyxxd | 32 | 2.35 | -i |
| tinyxxd | 32 | 0.86 | -e |
| tinyxxd | 32 | 1.55 | -b |
| tinyxxd | 32 | 0.57 | -u |
| tinyxxd | 32 | 0.67 | -E |
| tinyxxd | 32 | 2.24 | -b -i |
| tinyxxd | 16 | 0.30 |  |
| tinyxxd | 16 | 0.39 | -r |
| tinyxxd | 16 | 1.20 |  |
| tinyxxd | 16 | 0.99 | -r |
| tinyxxd | 16 | 0.28 |  |
| tinyxxd | 16 | 0.20 | -p |
| tinyxxd | 16 | 1.19 | -i |
| tinyxxd | 16 | 0.43 | -e |
| tinyxxd | 16 | 0.77 | -b |
| tinyxxd | 16 | 0.28 | -u |
| tinyxxd | 16 | 0.34 | -E |
| tinyxxd | 16 | 1.13 | -b -i |
| xxd | 16 | 0.30 |  |
| xxd | 16 | 0.55 | -r |
| xxd | 16 | 1.24 |  |
| xxd | 16 | 1.06 | -r |
| xxd | 16 | 0.29 |  |
| xxd | 16 | 0.25 | -p |
| xxd | 16 | 1.20 | -i |
| xxd | 16 | 0.30 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.30 | -u |
| xxd | 16 | 0.33 | -E |
| xxd | 16 | 1.34 | -b -i |
| tinyxxd | 8 | 1.19 |  |
| tinyxxd | 8 | 0.20 | -r |
| tinyxxd | 8 | 0.43 |  |
| tinyxxd | 8 | 0.50 | -r |
| tinyxxd | 8 | 0.15 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.60 | -i |
| tinyxxd | 8 | 0.22 | -e |
| tinyxxd | 8 | 0.39 | -b |
| tinyxxd | 8 | 0.14 | -u |
| tinyxxd | 8 | 0.17 | -E |
| tinyxxd | 8 | 0.56 | -b -i |
| xxd | 8 | 0.15 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.42 |  |
| xxd | 8 | 0.58 | -r |
| xxd | 8 | 0.15 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.60 | -i |
| xxd | 8 | 0.15 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.15 | -u |
| xxd | 8 | 0.17 | -E |
| xxd | 8 | 0.67 | -b -i |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.10 | -r |
| tinyxxd | 4 | 0.24 |  |
| tinyxxd | 4 | 0.25 | -r |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.05 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.11 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.07 | -u |
| tinyxxd | 4 | 0.09 | -E |
| tinyxxd | 4 | 0.28 | -b -i |
| xxd | 4 | 0.08 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.20 |  |
| xxd | 4 | 0.27 | -r |
| xxd | 4 | 0.08 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.30 | -i |
| xxd | 4 | 0.08 | -e |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.07 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.34 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.10 |  |
| xxd | 2 | 0.14 | -r |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.04 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.04 | -E |
| xxd | 2 | 0.17 | -b -i |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.05 | -r |
| tinyxxd | 2 | 0.11 |  |
| tinyxxd | 2 | 0.13 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.06 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
| tinyxxd | 2 | 0.15 | -b -i |
| tinyxxd | 1 | 0.50 |  |
| tinyxxd | 1 | 0.03 | -r |
| tinyxxd | 1 | 0.08 |  |
| tinyxxd | 1 | 0.09 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.03 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |
| tinyxxd | 1 | 0.08 | -b -i |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.05 | -r |
| xxd | 1 | 0.14 |  |
| xxd | 1 | 0.21 | -r |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.10 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.02 | -E |
| xxd | 1 | 0.09 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 15.35% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 15.83% faster with flags '-p'.
- For sample size 64 MiB, xxd was 45.13% faster with flags '-e'.
- For sample size 64 MiB, xxd was 14.43% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 18.93% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 29.72% faster with no flag.
- For sample size 32 MiB, tinyxxd was 15.65% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 9.87% faster with flags '-p'.
- For sample size 32 MiB, xxd was 47.08% faster with flags '-e'.
- For sample size 32 MiB, xxd was 14.33% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 19.16% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 16.29% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 24.12% faster with flags '-p'.
- For sample size 16 MiB, xxd was 42.82% faster with flags '-e'.
- For sample size 16 MiB, xxd was 15.20% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 18.41% faster with flags '-b -i'.
- For sample size 8 MiB, xxd was 146.18% faster with no flag.
- For sample size 8 MiB, tinyxxd was 22.04% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 15.19% faster with flags '-p'.
- For sample size 8 MiB, xxd was 44.63% faster with flags '-e'.
- For sample size 8 MiB, xxd was 15.31% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 18.55% faster with flags '-b -i'.
- For sample size 4 MiB, xxd was 11.50% faster with no flag.
- For sample size 4 MiB, tinyxxd was 17.04% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 15.34% faster with flags '-p'.
- For sample size 4 MiB, xxd was 35.42% faster with flags '-e'.
- For sample size 4 MiB, xxd was 11.12% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 18.64% faster with flags '-b -i'.
- For sample size 2 MiB, xxd was 5.32% faster with no flag.
- For sample size 2 MiB, tinyxxd was 15.76% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 11.65% faster with flags '-p'.
- For sample size 2 MiB, xxd was 40.50% faster with flags '-e'.
- For sample size 2 MiB, xxd was 15.44% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 12.81% faster with flags '-b -i'.
- For sample size 1 MiB, xxd was 220.86% faster with no flag.
- For sample size 1 MiB, tinyxxd was 117.25% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 10.36% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 27.13% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 11.69% faster with flags '-e'.
- For sample size 1 MiB, xxd was 8.16% faster with flags '-b'.
- For sample size 1 MiB, xxd was 7.34% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 8.69% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 3.21% faster than xxd.
- For sample 32 MiB, tinyxxd was 9.57% faster than xxd.
- For sample 16 MiB, tinyxxd was 4.21% faster than xxd.
- For sample size 8 MiB, xxd was 23.46% faster than tinyxxd.
- For sample 4 MiB, tinyxxd was 1.80% faster than xxd.
- For sample 2 MiB, tinyxxd was 1.19% faster than xxd.
- For sample size 1 MiB, xxd was 32.00% faster than tinyxxd.

### Performance by flag
- tinyxxd was 17.11% faster with flag '-r'.
- tinyxxd was 15.13% faster with flag '-p'.
- xxd was 44.07% faster with flag '-e'.
- xxd was 14.40% faster with flag '-b'.
- tinyxxd was 18.69% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 6.39% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 48.93% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 305.31% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 0.64% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 0.53% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 0.34% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 0.20% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 0.58% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 1.16% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 1.84% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 0.38% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 3.72% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 3.09% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 58.67% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 337.10% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 1.59% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 0.72% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 1.57% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 0.73% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 0.67% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 1.47% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 2.08% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 0.51% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 8.32% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 1.64% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 49.03% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 402.12% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 0.52% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 2.15% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 3.39% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 1.09% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 1.07% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 0.36% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 0.64% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 1.10% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 1.28% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 0.69% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 60.43% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 249.32% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 0.82% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 2.66% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 4.54% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 2.26% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 0.30% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 2.50% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 1.42% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 1.07% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 1.36% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 6.08% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 60.25% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 321.72% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 0.02% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 1.37% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 0.22% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 1.11% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 0.00% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 1.81% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 3.01% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 2.07% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 0.18% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 4.39% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 48.71% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 329.86% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 0.42% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 2.31% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 7.00% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 0.42% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 1.61% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 0.49% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 3.70% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 0.11% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 1.57% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 721.29% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 59.53% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 194.09% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 0.60% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 0.50% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 0.30% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 0.77% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 0.98% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.25% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 0.73% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 0.36% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 1.11% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 4.18% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 48.86% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 186.81% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 7.14% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 0.41% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 0.44% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 5.95% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 0.27% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 2.36% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 7.71% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 7.83% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 0.43% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 6.86% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 60.29% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 219.79% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 1.96% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 1.85% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 0.48% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 1.49% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 0.28% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 0.03% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.82% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 0.72% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 4.23% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 3.29% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 48.27% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 159.62% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 0.46% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 0.56% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 0.57% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 1.13% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 4.96% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 3.02% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 0.53% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 0.52% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 0.18% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 6.78% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 46.94% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 142.16% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 0.26% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 0.96% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 1.48% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 1.28% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 0.57% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 1.47% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 2.35% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 3.79% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 0.55% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 3.31% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 74.13% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 161.43% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 38.33% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 6.21% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 0.21% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 1.72% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 2.49% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 3.90% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 0.65% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 1.72% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 3.41% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 2194.70% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 55.52% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 274.10% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 32.67% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 1.61% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 1.36% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 0.20% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 2.74% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 0.23% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 10.68% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 1.13% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 11.91% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 0.36% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 30.68% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 545.98% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 192.12% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 2.09% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 5.13% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 24.12% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 49.90% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 5.86% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 2.43% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 2.92% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 2.40% compared to the last run.
---
Report generated on: 2025-05-10T16:40:02.035981
