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
| xxd | 64 | 1.34 |  |
| xxd | 64 | 2.28 | -r |
| xxd | 64 | 4.05 | -b |
| xxd | 64 | 4.59 | -r -b |
| xxd | 64 | 1.73 |  |
| xxd | 64 | 1.07 | -p |
| xxd | 64 | 4.95 | -i |
| xxd | 64 | 1.33 | -e |
| xxd | 64 | 2.66 | -b |
| xxd | 64 | 1.33 | -u |
| xxd | 64 | 1.45 | -E |
| xxd | 64 | 5.94 | -b -i |
| tinyxxd | 64 | 0.89 |  |
| tinyxxd | 64 | 0.85 | -r |
| tinyxxd | 64 | 4.89 | -b |
| tinyxxd | 64 | 1.56 | -r -b |
| tinyxxd | 64 | 1.17 |  |
| tinyxxd | 64 | 0.87 | -p |
| tinyxxd | 64 | 4.72 | -i |
| tinyxxd | 64 | 1.12 | -e |
| tinyxxd | 64 | 3.24 | -b |
| tinyxxd | 64 | 0.87 | -u |
| tinyxxd | 64 | 1.06 | -E |
| tinyxxd | 64 | 4.23 | -b -i |
| xxd | 32 | 0.65 |  |
| xxd | 32 | 1.15 | -r |
| xxd | 32 | 1.75 | -b |
| xxd | 32 | 2.36 | -r -b |
| xxd | 32 | 0.74 |  |
| xxd | 32 | 0.53 | -p |
| xxd | 32 | 2.45 | -i |
| xxd | 32 | 0.65 | -e |
| xxd | 32 | 1.29 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.73 | -E |
| xxd | 32 | 2.91 | -b -i |
| tinyxxd | 32 | 0.46 |  |
| tinyxxd | 32 | 0.43 | -r |
| tinyxxd | 32 | 2.17 | -b |
| tinyxxd | 32 | 0.78 | -r -b |
| tinyxxd | 32 | 0.53 |  |
| tinyxxd | 32 | 0.44 | -p |
| tinyxxd | 32 | 2.36 | -i |
| tinyxxd | 32 | 0.56 | -e |
| tinyxxd | 32 | 1.59 | -b |
| tinyxxd | 32 | 0.48 | -u |
| tinyxxd | 32 | 0.53 | -E |
| tinyxxd | 32 | 2.14 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.21 | -r |
| tinyxxd | 16 | 0.85 | -b |
| tinyxxd | 16 | 0.39 | -r -b |
| tinyxxd | 16 | 0.27 |  |
| tinyxxd | 16 | 0.22 | -p |
| tinyxxd | 16 | 1.16 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.80 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.05 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.60 | -r |
| xxd | 16 | 0.80 | -b |
| xxd | 16 | 1.18 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.27 | -p |
| xxd | 16 | 1.22 | -i |
| xxd | 16 | 0.33 | -e |
| xxd | 16 | 0.65 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.36 | -E |
| xxd | 16 | 1.48 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.58 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.62 | -i |
| xxd | 8 | 0.20 | -e |
| xxd | 8 | 0.33 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.18 | -E |
| xxd | 8 | 0.73 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.43 | -b |
| tinyxxd | 8 | 0.20 | -r -b |
| tinyxxd | 8 | 0.14 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.41 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.14 | -E |
| tinyxxd | 8 | 0.52 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.29 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.08 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.21 | -b |
| tinyxxd | 4 | 0.10 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.27 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.15 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.04 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.05 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.04 | -E |
| tinyxxd | 2 | 0.15 | -b -i |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.08 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.10 | -b -i |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.06 | -b |
| tinyxxd | 1 | 0.03 | -r -b |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |
| tinyxxd | 1 | 0.07 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 49.30% faster with no flag.
- For sample size 64 MiB, tinyxxd was 167.60% faster with flags '-r'.
- For sample size 64 MiB, xxd was 21.21% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 194.67% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 22.09% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 18.88% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 52.58% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 36.34% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 40.60% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 41.46% faster with no flag.
- For sample size 32 MiB, tinyxxd was 168.41% faster with flags '-r'.
- For sample size 32 MiB, xxd was 23.64% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 204.13% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 20.71% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 16.56% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 37.75% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 39.06% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 36.27% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 42.93% faster with no flag.
- For sample size 16 MiB, tinyxxd was 181.35% faster with flags '-r'.
- For sample size 16 MiB, xxd was 12.92% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 200.73% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 20.43% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 5.42% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 18.78% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 47.54% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 33.96% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 41.02% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 41.20% faster with no flag.
- For sample size 8 MiB, tinyxxd was 161.60% faster with flags '-r'.
- For sample size 8 MiB, xxd was 21.20% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 190.78% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 24.38% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 45.22% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 45.92% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 35.22% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 40.32% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 43.25% faster with no flag.
- For sample size 4 MiB, tinyxxd was 164.73% faster with flags '-r'.
- For sample size 4 MiB, xxd was 18.40% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 188.26% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 25.08% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 5.89% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 19.20% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 45.25% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 34.23% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 39.89% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 40.86% faster with no flag.
- For sample size 2 MiB, tinyxxd was 154.52% faster with flags '-r'.
- For sample size 2 MiB, xxd was 19.36% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 176.07% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 22.90% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 7.62% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 16.11% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 42.00% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 28.15% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 27.67% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 36.16% faster with no flag.
- For sample size 1 MiB, tinyxxd was 137.49% faster with flags '-r'.
- For sample size 1 MiB, xxd was 17.60% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 168.19% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 19.92% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 5.93% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 14.48% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 32.65% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 28.15% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 38.04% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 28.46% faster than xxd.
- For sample 32 MiB, tinyxxd was 27.56% faster than xxd.
- For sample 16 MiB, tinyxxd was 33.41% faster than xxd.
- For sample 8 MiB, tinyxxd was 31.30% faster than xxd.
- For sample 4 MiB, tinyxxd was 31.30% faster than xxd.
- For sample 2 MiB, tinyxxd was 27.91% faster than xxd.
- For sample 1 MiB, tinyxxd was 28.07% faster than xxd.

### Performance by flag
- tinyxxd was 45.64% faster with no flag.
- tinyxxd was 168.52% faster with flag '-r'.
- xxd was 20.70% faster with flag '-b'.
- tinyxxd was 196.79% faster with flag '-r -b'.
- tinyxxd was 21.78% faster with flag '-p'.
- tinyxxd was 19.87% faster with flag '-e'.
- tinyxxd was 46.97% faster with flag '-u'.
- tinyxxd was 36.35% faster with flag '-E'.
- tinyxxd was 39.27% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 21.85% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 1.59% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 53.73% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 4.26% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 0.84% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 2.90% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 0.04% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 0.89% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 1.00% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 2.69% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 0.72% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 0.23% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 20.21% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 1.83% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 52.28% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 0.70% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 5.75% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 0.18% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 1.24% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 0.05% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 0.73% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 2.93% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 1.19% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 1.57% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 12.10% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 0.58% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 34.45% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 6.58% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 0.58% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 5.99% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 2.67% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 1.80% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.47% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 1.14% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 0.71% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 1.70% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 16.04% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 0.26% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 37.47% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 0.12% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 2.82% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 0.29% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 0.30% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 0.73% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 0.59% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 9.05% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 0.11% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 14.43% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 0.61% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 6.98% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 0.07% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 1.83% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 0.49% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 1.43% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 0.17% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 0.12% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 0.72% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 0.08% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 0.20% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 10.31% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 3.31% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 24.51% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 1.49% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 3.40% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 3.26% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 0.43% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 0.32% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 1.55% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 0.84% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 0.25% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 0.22% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 11.90% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 2.79% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 8.73% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 4.81% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 1.78% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 0.56% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 1.14% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 22.56% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 0.55% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 0.14% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 0.19% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 2.87% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 15.47% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 0.48% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 7.20% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 0.13% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 0.16% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 0.54% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 1.87% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 0.24% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 2.32% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 0.36% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 0.54% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 0.71% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 9.28% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 0.90% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 9.81% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 0.73% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 1.16% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 0.49% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 1.13% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 0.45% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 1.61% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 0.11% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 0.01% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 1.97% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 14.47% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 0.63% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 5.79% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 0.48% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 1.06% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 0.56% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 0.38% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 0.06% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.56% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.93% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 0.20% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 0.77% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 9.68% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 1.90% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 8.64% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 2.79% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 0.32% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 0.74% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 0.51% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 0.14% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 2.23% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 1.21% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 0.35% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 0.98% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 14.03% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 3.41% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 5.57% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 1.16% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 0.57% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 0.00% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 0.65% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 2.39% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 1.32% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 1.78% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 4.93% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 9.94% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 8.13% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 0.01% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 5.18% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 5.24% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 0.96% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 0.09% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 1.46% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 0.40% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 3.67% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 0.55% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 0.75% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 1.66% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 11.04% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 2.68% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 5.88% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 0.44% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 0.82% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 1.05% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 2.49% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 0.44% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 1.17% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 3.65% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 2.82% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 1.23% compared to the last run.
---
Report generated on: 2026-02-25T09:22:46.204424
