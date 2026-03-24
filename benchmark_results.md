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
| tinyxxd | 64 | 0.87 |  |
| tinyxxd | 64 | 0.87 | -r |
| tinyxxd | 64 | 4.44 | -b |
| tinyxxd | 64 | 1.63 | -r -b |
| tinyxxd | 64 | 1.17 |  |
| tinyxxd | 64 | 0.88 | -p |
| tinyxxd | 64 | 4.73 | -i |
| tinyxxd | 64 | 1.11 | -e |
| tinyxxd | 64 | 3.27 | -b |
| tinyxxd | 64 | 0.87 | -u |
| tinyxxd | 64 | 1.03 | -E |
| tinyxxd | 64 | 4.14 | -b -i |
| xxd | 64 | 1.36 |  |
| xxd | 64 | 2.32 | -r |
| xxd | 64 | 3.92 | -b |
| xxd | 64 | 4.52 | -r -b |
| xxd | 64 | 1.76 |  |
| xxd | 64 | 1.10 | -p |
| xxd | 64 | 5.03 | -i |
| xxd | 64 | 1.36 | -e |
| xxd | 64 | 2.85 | -b |
| xxd | 64 | 1.32 | -u |
| xxd | 64 | 1.47 | -E |
| xxd | 64 | 5.54 | -b -i |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.13 | -r |
| xxd | 32 | 1.82 | -b |
| xxd | 32 | 2.38 | -r -b |
| xxd | 32 | 0.76 |  |
| xxd | 32 | 0.53 | -p |
| xxd | 32 | 2.47 | -i |
| xxd | 32 | 0.72 | -e |
| xxd | 32 | 1.36 | -b |
| xxd | 32 | 0.67 | -u |
| xxd | 32 | 0.77 | -E |
| xxd | 32 | 2.77 | -b -i |
| tinyxxd | 32 | 0.44 |  |
| tinyxxd | 32 | 0.43 | -r |
| tinyxxd | 32 | 2.14 | -b |
| tinyxxd | 32 | 0.82 | -r -b |
| tinyxxd | 32 | 0.56 |  |
| tinyxxd | 32 | 0.44 | -p |
| tinyxxd | 32 | 2.33 | -i |
| tinyxxd | 32 | 0.57 | -e |
| tinyxxd | 32 | 1.61 | -b |
| tinyxxd | 32 | 0.43 | -u |
| tinyxxd | 32 | 0.51 | -E |
| tinyxxd | 32 | 2.05 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.86 | -b |
| xxd | 16 | 1.19 | -r -b |
| xxd | 16 | 0.40 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.25 | -i |
| xxd | 16 | 0.33 | -e |
| xxd | 16 | 0.68 | -b |
| xxd | 16 | 0.36 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.39 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.21 | -r |
| tinyxxd | 16 | 0.97 | -b |
| tinyxxd | 16 | 0.41 | -r -b |
| tinyxxd | 16 | 0.26 |  |
| tinyxxd | 16 | 0.22 | -p |
| tinyxxd | 16 | 1.25 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.80 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.26 | -E |
| tinyxxd | 16 | 1.03 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.60 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.62 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.72 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.44 | -b |
| tinyxxd | 8 | 0.21 | -r -b |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.41 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.13 | -E |
| tinyxxd | 8 | 0.57 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.11 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.21 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.29 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.36 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.06 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.04 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.15 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.18 | -b -i |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.06 | -b |
| tinyxxd | 1 | 0.03 | -r -b |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.06 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |
| tinyxxd | 1 | 0.07 | -b -i |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.08 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 53.21% faster with no flag.
- For sample size 64 MiB, tinyxxd was 165.83% faster with flags '-r'.
- For sample size 64 MiB, xxd was 13.97% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 177.87% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 24.31% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 6.23% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 23.11% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 51.45% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 42.55% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 33.96% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 43.64% faster with no flag.
- For sample size 32 MiB, tinyxxd was 161.73% faster with flags '-r'.
- For sample size 32 MiB, xxd was 18.20% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 192.32% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 20.30% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 5.96% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 25.57% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 55.58% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 50.49% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 35.13% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 52.54% faster with no flag.
- For sample size 16 MiB, tinyxxd was 177.49% faster with flags '-r'.
- For sample size 16 MiB, xxd was 14.79% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 190.91% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 25.84% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 20.23% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 66.70% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 44.95% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 35.10% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 51.93% faster with no flag.
- For sample size 8 MiB, tinyxxd was 173.91% faster with flags '-r'.
- For sample size 8 MiB, xxd was 18.95% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 188.99% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 23.13% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 6.17% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 19.85% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 51.33% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 42.55% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 26.47% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 44.62% faster with no flag.
- For sample size 4 MiB, tinyxxd was 167.70% faster with flags '-r'.
- For sample size 4 MiB, xxd was 19.06% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 173.23% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 22.79% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 5.79% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 17.19% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 53.31% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 41.26% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 39.68% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 38.28% faster with no flag.
- For sample size 2 MiB, tinyxxd was 157.68% faster with flags '-r'.
- For sample size 2 MiB, xxd was 18.03% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 170.50% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 20.91% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 17.76% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 49.09% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 39.20% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 37.09% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 37.71% faster with no flag.
- For sample size 1 MiB, tinyxxd was 140.61% faster with flags '-r'.
- For sample size 1 MiB, xxd was 16.55% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 161.07% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 19.51% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 5.64% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 16.08% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 39.35% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 35.63% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 36.09% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 30.13% faster than xxd.
- For sample 32 MiB, tinyxxd was 30.10% faster than xxd.
- For sample 16 MiB, tinyxxd was 31.32% faster than xxd.
- For sample 8 MiB, tinyxxd was 30.17% faster than xxd.
- For sample 4 MiB, tinyxxd was 30.89% faster than xxd.
- For sample 2 MiB, tinyxxd was 29.40% faster than xxd.
- For sample 1 MiB, tinyxxd was 28.62% faster than xxd.

### Performance by flag
- tinyxxd was 49.97% faster with no flag.
- tinyxxd was 166.40% faster with flag '-r'.
- xxd was 15.61% faster with flag '-b'.
- tinyxxd was 183.40% faster with flag '-r -b'.
- tinyxxd was 23.26% faster with flag '-p'.
- tinyxxd was 5.34% faster with flag '-i'.
- tinyxxd was 22.82% faster with flag '-e'.
- tinyxxd was 54.27% faster with flag '-u'.
- tinyxxd was 44.65% faster with flag '-E'.
- tinyxxd was 34.12% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 20.75% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 1.22% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 35.10% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 2.06% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 5.97% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 0.11% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 0.41% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 0.22% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 0.54% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 1.38% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 2.98% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 0.45% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 17.55% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 5.19% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 43.03% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 1.00% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 7.11% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 2.62% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 0.19% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 0.93% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 3.83% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 2.02% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 4.14% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 3.72% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 13.45% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 3.09% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 34.10% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 2.09% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 2.56% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 4.78% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 0.84% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 7.04% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 0.09% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 0.52% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 0.64% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 5.38% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 14.50% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 1.16% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 31.27% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd improved by 0.30% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 9.08% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 0.30% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 1.48% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 3.23% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 1.22% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 1.06% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 1.30% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 1.05% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 12.60% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 0.69% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 26.16% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 2.30% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 5.12% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 1.17% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 0.55% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 2.92% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 1.52% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 7.69% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 0.26% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 3.67% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 19.49% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 3.54% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 19.49% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 2.66% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 2.86% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 0.87% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 6.39% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 1.71% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 1.32% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 0.24% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 1.85% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 0.77% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 10.81% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 1.22% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 7.38% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 0.30% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 1.18% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 1.37% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 1.58% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 1.66% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 0.06% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 0.46% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 0.32% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 0.85% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 19.52% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 2.85% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 8.07% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 0.84% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 3.27% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 0.15% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 2.72% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 0.37% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.37% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 1.20% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 0.85% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 9.35% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 15.32% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 0.16% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 6.12% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 0.88% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 0.37% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 0.86% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 0.49% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 1.65% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 1.02% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 1.90% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 0.06% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 1.11% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 11.30% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 0.67% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 5.93% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 2.45% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 1.53% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 0.40% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 1.67% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 1.55% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 0.71% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 1.43% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 0.53% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 3.82% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 12.35% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 1.46% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 6.72% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 1.16% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 0.94% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 1.57% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 2.78% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 1.22% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.33% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 2.25% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 1.46% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 0.78% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 12.27% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 3.86% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 7.11% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 0.28% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 1.53% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 0.26% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 0.47% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 1.27% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 0.01% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 0.38% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 0.03% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 0.36% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 9.65% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 0.44% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 6.30% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 0.77% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 2.01% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 1.06% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 0.59% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 1.96% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 1.53% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 0.95% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 1.69% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 0.33% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 9.83% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 0.02% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 3.90% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 1.22% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 0.31% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 24.65% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 7.84% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 22.26% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 2.25% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 0.53% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 3.66% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 0.25% compared to the last run.
---
Report generated on: 2026-03-24T12:20:07.387505
