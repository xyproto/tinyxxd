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
| xxd | 64 | 1.40 |  |
| xxd | 64 | 2.52 | -r |
| xxd | 64 | 4.70 | -b |
| xxd | 64 | 4.78 | -r -b |
| xxd | 64 | 1.85 |  |
| xxd | 64 | 1.13 | -p |
| xxd | 64 | 5.26 | -i |
| xxd | 64 | 1.55 | -e |
| xxd | 64 | 2.87 | -b |
| xxd | 64 | 1.44 | -u |
| xxd | 64 | 1.61 | -E |
| xxd | 64 | 5.91 | -b -i |
| tinyxxd | 64 | 0.90 |  |
| tinyxxd | 64 | 0.80 | -r |
| tinyxxd | 64 | 4.66 | -b |
| tinyxxd | 64 | 1.76 | -r -b |
| tinyxxd | 64 | 1.08 |  |
| tinyxxd | 64 | 0.89 | -p |
| tinyxxd | 64 | 4.91 | -i |
| tinyxxd | 64 | 1.17 | -e |
| tinyxxd | 64 | 3.75 | -b |
| tinyxxd | 64 | 0.92 | -u |
| tinyxxd | 64 | 1.06 | -E |
| tinyxxd | 64 | 4.13 | -b -i |
| xxd | 32 | 0.71 |  |
| xxd | 32 | 1.24 | -r |
| xxd | 32 | 1.88 | -b |
| xxd | 32 | 2.24 | -r -b |
| xxd | 32 | 0.81 |  |
| xxd | 32 | 0.60 | -p |
| xxd | 32 | 2.68 | -i |
| xxd | 32 | 0.73 | -e |
| xxd | 32 | 1.41 | -b |
| xxd | 32 | 0.75 | -u |
| xxd | 32 | 0.80 | -E |
| xxd | 32 | 2.95 | -b -i |
| tinyxxd | 32 | 0.44 |  |
| tinyxxd | 32 | 0.40 | -r |
| tinyxxd | 32 | 3.37 | -b |
| tinyxxd | 32 | 0.88 | -r -b |
| tinyxxd | 32 | 0.51 |  |
| tinyxxd | 32 | 0.44 | -p |
| tinyxxd | 32 | 2.47 | -i |
| tinyxxd | 32 | 0.58 | -e |
| tinyxxd | 32 | 1.79 | -b |
| tinyxxd | 32 | 0.43 | -u |
| tinyxxd | 32 | 0.53 | -E |
| tinyxxd | 32 | 2.06 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.20 | -r |
| tinyxxd | 16 | 1.06 | -b |
| tinyxxd | 16 | 0.52 | -r -b |
| tinyxxd | 16 | 0.26 |  |
| tinyxxd | 16 | 0.23 | -p |
| tinyxxd | 16 | 1.22 | -i |
| tinyxxd | 16 | 0.30 | -e |
| tinyxxd | 16 | 0.89 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.26 | -E |
| tinyxxd | 16 | 1.02 | -b -i |
| xxd | 16 | 0.36 |  |
| xxd | 16 | 0.63 | -r |
| xxd | 16 | 0.75 | -b |
| xxd | 16 | 1.15 | -r -b |
| xxd | 16 | 0.40 |  |
| xxd | 16 | 0.30 | -p |
| xxd | 16 | 1.32 | -i |
| xxd | 16 | 0.36 | -e |
| xxd | 16 | 0.74 | -b |
| xxd | 16 | 0.35 | -u |
| xxd | 16 | 0.41 | -E |
| xxd | 16 | 1.47 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.10 | -r |
| tinyxxd | 8 | 0.48 | -b |
| tinyxxd | 8 | 0.22 | -r -b |
| tinyxxd | 8 | 0.14 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.61 | -i |
| tinyxxd | 8 | 0.15 | -e |
| tinyxxd | 8 | 0.45 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.13 | -E |
| tinyxxd | 8 | 0.52 | -b -i |
| xxd | 8 | 0.18 |  |
| xxd | 8 | 0.32 | -r |
| xxd | 8 | 0.38 | -b |
| xxd | 8 | 0.59 | -r -b |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.15 | -p |
| xxd | 8 | 0.66 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.18 | -u |
| xxd | 8 | 0.21 | -E |
| xxd | 8 | 0.78 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.05 | -r |
| tinyxxd | 4 | 0.24 | -b |
| tinyxxd | 4 | 0.12 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.32 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.23 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.29 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.16 | -r |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.30 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.08 | -p |
| xxd | 4 | 0.33 | -i |
| xxd | 4 | 0.10 | -e |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.37 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.15 | -r -b |
| xxd | 2 | 0.06 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.17 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.13 | -b |
| tinyxxd | 2 | 0.06 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.16 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.12 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.04 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.08 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.09 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.03 | -u |
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
| tinyxxd | 1 | 0.06 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |
| tinyxxd | 1 | 0.07 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 63.71% faster with no flag.
- For sample size 64 MiB, tinyxxd was 214.83% faster with flags '-r'.
- For sample size 64 MiB, xxd was 11.11% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 171.54% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 26.97% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 7.11% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 32.83% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 57.02% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 51.98% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 43.25% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 59.73% faster with no flag.
- For sample size 32 MiB, tinyxxd was 208.86% faster with flags '-r'.
- For sample size 32 MiB, xxd was 56.72% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 153.33% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 35.48% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 8.56% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 24.07% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 74.98% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 50.24% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 42.92% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 57.87% faster with no flag.
- For sample size 16 MiB, tinyxxd was 213.28% faster with flags '-r'.
- For sample size 16 MiB, xxd was 31.23% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 122.22% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 34.01% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 7.70% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 21.13% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 63.53% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 57.78% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 44.92% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 55.66% faster with no flag.
- For sample size 8 MiB, tinyxxd was 208.36% faster with flags '-r'.
- For sample size 8 MiB, xxd was 27.29% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 165.12% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 34.13% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 6.83% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 22.83% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 63.99% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 53.60% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 50.67% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 54.35% faster with no flag.
- For sample size 4 MiB, tinyxxd was 199.29% faster with flags '-r'.
- For sample size 4 MiB, xxd was 26.81% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 157.31% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 32.38% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 22.70% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 61.17% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 48.14% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 28.17% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 62.83% faster with no flag.
- For sample size 2 MiB, tinyxxd was 184.34% faster with flags '-r'.
- For sample size 2 MiB, xxd was 26.24% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 151.63% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 31.20% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 21.83% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 59.86% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 50.27% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 41.80% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 47.23% faster with no flag.
- For sample size 1 MiB, tinyxxd was 153.68% faster with flags '-r'.
- For sample size 1 MiB, xxd was 23.09% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 138.42% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 28.11% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 21.17% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 49.18% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 43.72% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 41.87% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 34.56% faster than xxd.
- For sample 32 MiB, tinyxxd was 20.69% faster than xxd.
- For sample 16 MiB, tinyxxd was 28.96% faster than xxd.
- For sample 8 MiB, tinyxxd was 33.07% faster than xxd.
- For sample 4 MiB, tinyxxd was 28.14% faster than xxd.
- For sample 2 MiB, tinyxxd was 30.54% faster than xxd.
- For sample 1 MiB, tinyxxd was 28.40% faster than xxd.

### Performance by flag
- tinyxxd was 61.03% faster with no flag.
- tinyxxd was 211.01% faster with flag '-r'.
- xxd was 25.80% faster with flag '-b'.
- tinyxxd was 158.45% faster with flag '-r -b'.
- tinyxxd was 30.71% faster with flag '-p'.
- tinyxxd was 7.37% faster with flag '-i'.
- tinyxxd was 27.87% faster with flag '-e'.
- tinyxxd was 62.68% faster with flag '-u'.
- tinyxxd was 52.13% faster with flag '-E'.
- tinyxxd was 43.27% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 4.96% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 19.48% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 106.93% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 29.15% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 38.90% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 41.81% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 26.29% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 33.59% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 26.30% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 24.09% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 21.57% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 42.10% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 4.35% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 5.15% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 117.08% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 26.37% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 14.84% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 25.56% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 19.12% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 25.51% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 74.90% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 19.83% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 10.85% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 27.52% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 13.29% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 14.92% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 68.82% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 30.45% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 29.37% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 51.13% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 28.86% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 25.39% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 27.07% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 30.70% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 14.63% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 40.23% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 0.69% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 0.27% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 217.82% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 26.54% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 17.52% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 24.68% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 20.65% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 30.39% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 68.70% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 13.03% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 12.42% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 26.43% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 0.28% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 3.41% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 103.94% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 34.32% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 20.30% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 26.61% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 19.43% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 32.69% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 72.03% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 10.59% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 9.56% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 26.21% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 13.92% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 18.14% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 34.57% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 33.02% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 28.05% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 50.47% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 27.62% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 23.91% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 32.66% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 22.07% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 19.21% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 36.17% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 0.66% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 1.18% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 81.84% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 14.35% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 22.55% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 25.83% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 19.16% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 31.84% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 72.77% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 11.22% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 10.77% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 27.18% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 14.32% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 18.66% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 33.43% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 37.05% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 28.43% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 50.71% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 22.30% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 24.44% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 25.57% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 22.86% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 22.56% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 49.41% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 3.26% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 0.23% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 80.06% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 29.27% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 21.95% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 26.71% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 20.12% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 32.51% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 69.80% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 13.49% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 13.36% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 42.38% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 15.10% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 18.76% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 36.05% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 38.11% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 28.95% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 50.12% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 25.57% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 25.31% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 26.76% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 24.24% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 21.69% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 41.04% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 18.40% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 19.20% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 37.59% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 36.06% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 42.14% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 49.75% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 27.38% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 26.10% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 27.70% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 26.56% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 24.78% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 41.81% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 4.62% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 2.79% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 88.35% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 28.29% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 23.96% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 27.68% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 22.62% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 33.36% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 73.51% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 13.60% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 11.31% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 27.91% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 20.68% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 18.66% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 35.69% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 33.83% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 31.04% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 48.36% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 26.89% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 30.24% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 29.74% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 27.16% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 24.37% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 41.40% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 7.79% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 7.78% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 76.02% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 27.45% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 23.63% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 28.09% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 21.11% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 32.66% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 68.95% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 18.22% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 13.41% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 25.65% compared to the last run.
---
Report generated on: 2026-03-25T00:17:08.823242
