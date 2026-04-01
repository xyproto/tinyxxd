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
| xxd | 64 | 1.17 |  |
| xxd | 64 | 2.08 | -r |
| xxd | 64 | 4.02 | -b |
| xxd | 64 | 3.49 | -r -b |
| xxd | 64 | 1.31 |  |
| xxd | 64 | 0.83 | -p |
| xxd | 64 | 4.54 | -i |
| xxd | 64 | 1.19 | -e |
| xxd | 64 | 2.39 | -b |
| xxd | 64 | 1.19 | -u |
| xxd | 64 | 1.34 | -E |
| xxd | 64 | 4.38 | -b -i |
| tinyxxd | 64 | 0.50 |  |
| tinyxxd | 64 | 0.95 | -r |
| tinyxxd | 64 | 3.39 | -b |
| tinyxxd | 64 | 1.43 | -r -b |
| tinyxxd | 64 | 0.60 |  |
| tinyxxd | 64 | 0.51 | -p |
| tinyxxd | 64 | 4.14 | -i |
| tinyxxd | 64 | 0.95 | -e |
| tinyxxd | 64 | 2.08 | -b |
| tinyxxd | 64 | 0.49 | -u |
| tinyxxd | 64 | 0.49 | -E |
| tinyxxd | 64 | 2.79 | -b -i |
| tinyxxd | 32 | 0.28 |  |
| tinyxxd | 32 | 0.48 | -r |
| tinyxxd | 32 | 1.47 | -b |
| tinyxxd | 32 | 0.72 | -r -b |
| tinyxxd | 32 | 0.35 |  |
| tinyxxd | 32 | 0.26 | -p |
| tinyxxd | 32 | 2.10 | -i |
| tinyxxd | 32 | 0.48 | -e |
| tinyxxd | 32 | 1.03 | -b |
| tinyxxd | 32 | 0.26 | -u |
| tinyxxd | 32 | 0.25 | -E |
| tinyxxd | 32 | 1.41 | -b -i |
| xxd | 32 | 0.59 |  |
| xxd | 32 | 1.05 | -r |
| xxd | 32 | 2.83 | -b |
| xxd | 32 | 1.74 | -r -b |
| xxd | 32 | 0.64 |  |
| xxd | 32 | 0.41 | -p |
| xxd | 32 | 2.10 | -i |
| xxd | 32 | 0.60 | -e |
| xxd | 32 | 1.18 | -b |
| xxd | 32 | 0.59 | -u |
| xxd | 32 | 0.67 | -E |
| xxd | 32 | 2.23 | -b -i |
| tinyxxd | 16 | 0.13 |  |
| tinyxxd | 16 | 0.24 | -r |
| tinyxxd | 16 | 0.54 | -b |
| tinyxxd | 16 | 0.36 | -r -b |
| tinyxxd | 16 | 0.15 |  |
| tinyxxd | 16 | 0.13 | -p |
| tinyxxd | 16 | 1.04 | -i |
| tinyxxd | 16 | 0.25 | -e |
| tinyxxd | 16 | 0.51 | -b |
| tinyxxd | 16 | 0.13 | -u |
| tinyxxd | 16 | 0.13 | -E |
| tinyxxd | 16 | 0.70 | -b -i |
| xxd | 16 | 0.29 |  |
| xxd | 16 | 0.53 | -r |
| xxd | 16 | 0.63 | -b |
| xxd | 16 | 0.88 | -r -b |
| xxd | 16 | 0.32 |  |
| xxd | 16 | 0.21 | -p |
| xxd | 16 | 1.09 | -i |
| xxd | 16 | 0.30 | -e |
| xxd | 16 | 0.59 | -b |
| xxd | 16 | 0.29 | -u |
| xxd | 16 | 0.33 | -E |
| xxd | 16 | 1.10 | -b -i |
| xxd | 8 | 0.15 |  |
| xxd | 8 | 0.26 | -r |
| xxd | 8 | 0.33 | -b |
| xxd | 8 | 0.44 | -r -b |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.11 | -p |
| xxd | 8 | 0.57 | -i |
| xxd | 8 | 0.15 | -e |
| xxd | 8 | 0.30 | -b |
| xxd | 8 | 0.15 | -u |
| xxd | 8 | 0.17 | -E |
| xxd | 8 | 0.55 | -b -i |
| tinyxxd | 8 | 0.07 |  |
| tinyxxd | 8 | 0.12 | -r |
| tinyxxd | 8 | 0.29 | -b |
| tinyxxd | 8 | 0.18 | -r -b |
| tinyxxd | 8 | 0.08 |  |
| tinyxxd | 8 | 0.07 | -p |
| tinyxxd | 8 | 0.52 | -i |
| tinyxxd | 8 | 0.12 | -e |
| tinyxxd | 8 | 0.26 | -b |
| tinyxxd | 8 | 0.07 | -u |
| tinyxxd | 8 | 0.07 | -E |
| tinyxxd | 8 | 0.35 | -b -i |
| xxd | 4 | 0.08 |  |
| xxd | 4 | 0.13 | -r |
| xxd | 4 | 0.16 | -b |
| xxd | 4 | 0.24 | -r -b |
| xxd | 4 | 0.08 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.27 | -i |
| xxd | 4 | 0.08 | -e |
| xxd | 4 | 0.15 | -b |
| xxd | 4 | 0.08 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.28 | -b -i |
| tinyxxd | 4 | 0.03 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.14 | -b |
| tinyxxd | 4 | 0.09 | -r -b |
| tinyxxd | 4 | 0.04 |  |
| tinyxxd | 4 | 0.04 | -p |
| tinyxxd | 4 | 0.26 | -i |
| tinyxxd | 4 | 0.06 | -e |
| tinyxxd | 4 | 0.13 | -b |
| tinyxxd | 4 | 0.04 | -u |
| tinyxxd | 4 | 0.04 | -E |
| tinyxxd | 4 | 0.19 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.08 | -b |
| xxd | 2 | 0.11 | -r -b |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.14 | -i |
| xxd | 2 | 0.04 | -e |
| xxd | 2 | 0.08 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.14 | -b -i |
| tinyxxd | 2 | 0.02 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.07 | -b |
| tinyxxd | 2 | 0.05 | -r -b |
| tinyxxd | 2 | 0.02 |  |
| tinyxxd | 2 | 0.02 | -p |
| tinyxxd | 2 | 0.13 | -i |
| tinyxxd | 2 | 0.03 | -e |
| tinyxxd | 2 | 0.07 | -b |
| tinyxxd | 2 | 0.02 | -u |
| tinyxxd | 2 | 0.02 | -E |
| tinyxxd | 2 | 0.09 | -b -i |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.04 | -b |
| xxd | 1 | 0.06 | -r -b |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.07 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.04 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.02 | -E |
| xxd | 1 | 0.07 | -b -i |
| tinyxxd | 1 | 0.01 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.04 | -b |
| tinyxxd | 1 | 0.03 | -r -b |
| tinyxxd | 1 | 0.01 |  |
| tinyxxd | 1 | 0.01 | -p |
| tinyxxd | 1 | 0.07 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.04 | -b |
| tinyxxd | 1 | 0.01 | -u |
| tinyxxd | 1 | 0.01 | -E |
| tinyxxd | 1 | 0.05 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 124.85% faster with no flag.
- For sample size 64 MiB, tinyxxd was 118.24% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 16.98% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 144.29% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 62.06% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 9.70% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 26.19% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 141.59% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 171.34% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 57.01% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 94.44% faster with no flag.
- For sample size 32 MiB, tinyxxd was 120.61% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 60.43% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 141.30% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 59.67% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 25.43% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 132.31% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 164.91% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 57.98% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 120.63% faster with no flag.
- For sample size 16 MiB, tinyxxd was 121.14% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 16.28% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 146.38% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 56.93% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 23.88% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 131.54% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 152.61% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 56.54% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 111.99% faster with no flag.
- For sample size 8 MiB, tinyxxd was 113.59% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 16.33% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 139.11% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 64.44% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 9.83% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 25.52% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 131.93% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 161.89% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 56.04% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 111.55% faster with no flag.
- For sample size 4 MiB, tinyxxd was 110.32% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 14.38% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 159.75% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 55.67% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 24.53% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 97.90% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 138.68% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 48.41% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 103.45% faster with no flag.
- For sample size 2 MiB, tinyxxd was 104.52% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 15.32% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 136.33% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 54.24% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 22.58% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 105.69% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 129.79% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 52.81% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 88.89% faster with no flag.
- For sample size 1 MiB, tinyxxd was 96.92% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 12.67% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 123.56% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 43.84% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 16.83% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 82.62% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 102.80% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 49.05% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 52.33% faster than xxd.
- For sample 32 MiB, tinyxxd was 61.08% faster than xxd.
- For sample 16 MiB, tinyxxd was 52.53% faster than xxd.
- For sample 8 MiB, tinyxxd was 53.16% faster than xxd.
- For sample 4 MiB, tinyxxd was 49.92% faster than xxd.
- For sample 2 MiB, tinyxxd was 48.30% faster than xxd.
- For sample 1 MiB, tinyxxd was 43.50% faster than xxd.

### Performance by flag
- tinyxxd was 113.97% faster with no flag.
- tinyxxd was 118.17% faster with flag '-r'.
- tinyxxd was 27.55% faster with flag '-b'.
- tinyxxd was 143.63% faster with flag '-r -b'.
- tinyxxd was 60.39% faster with flag '-p'.
- tinyxxd was 6.17% faster with flag '-i'.
- tinyxxd was 25.44% faster with flag '-e'.
- tinyxxd was 134.26% faster with flag '-u'.
- tinyxxd was 163.89% faster with flag '-E'.
- tinyxxd was 56.71% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 20.51% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 7.37% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 51.53% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 19.79% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 11.41% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 26.37% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 9.21% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 9.73% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 10.04% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 10.14% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 10.91% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 23.77% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 42.88% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 1.46% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 21.23% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 12.77% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 31.34% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 18.10% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 12.34% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 15.28% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 25.74% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 15.89% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 15.56% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 22.65% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 27.40% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 1.51% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 5.87% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd improved by 12.04% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 9.97% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 17.40% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 10.72% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 13.38% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 25.48% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 13.53% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 14.12% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 20.37% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 21.54% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 4.55% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 113.14% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 21.75% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 14.69% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 22.29% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 17.92% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 11.73% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 10.89% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 9.72% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 7.47% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 22.76% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 34.86% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 2.50% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 22.17% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 12.14% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 21.71% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 16.90% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 15.07% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 11.65% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 25.89% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 17.33% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 14.85% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 20.69% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 21.87% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 4.37% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 6.04% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 18.12% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 13.77% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 23.57% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 12.54% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 9.79% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 12.12% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 10.08% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 8.24% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 26.12% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 26.68% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 9.09% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 0.15% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 22.23% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 14.99% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 20.32% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 7.93% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 10.53% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 9.01% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 8.65% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 7.96% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 24.90% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 28.55% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 0.11% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 19.54% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 11.24% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 16.94% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 17.76% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 11.68% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 13.02% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 26.08% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 16.63% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 14.26% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 20.88% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 17.59% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 9.43% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 17.65% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 15.85% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 11.65% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 21.62% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 14.27% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 8.48% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 20.74% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 18.40% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 8.96% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 23.05% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 32.17% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 2.26% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 25.39% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 11.31% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 18.69% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 16.18% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 10.95% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 12.30% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 28.17% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 5.56% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 13.31% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 16.71% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 16.36% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 6.66% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 2.39% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 19.60% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 10.42% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 19.81% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 13.27% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 7.44% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 8.99% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 7.00% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 7.86% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 23.13% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 24.10% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 5.07% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 21.41% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 9.54% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 13.99% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 16.99% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 9.97% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 10.22% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 22.31% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 11.67% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 12.63% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 17.53% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 12.44% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 4.12% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 1.19% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 19.21% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 9.49% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 17.38% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 11.67% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 7.86% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 6.73% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 5.45% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 6.42% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 22.87% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 22.43% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 2.76% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 16.46% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 8.41% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 11.86% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 12.16% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 10.34% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 7.37% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 20.03% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 1.79% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 6.50% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 16.04% compared to the last run.
---
Report generated on: 2026-04-01T13:20:43.945086
