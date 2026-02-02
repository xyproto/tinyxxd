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
| tinyxxd | 64 | 1.10 |  |
| tinyxxd | 64 | 1.31 | -r |
| tinyxxd | 64 | 4.67 | -b |
| tinyxxd | 64 | 2.05 | -r -b |
| tinyxxd | 64 | 1.29 |  |
| tinyxxd | 64 | 0.95 | -p |
| tinyxxd | 64 | 4.68 | -i |
| tinyxxd | 64 | 1.11 | -e |
| tinyxxd | 64 | 3.20 | -b |
| tinyxxd | 64 | 1.03 | -u |
| tinyxxd | 64 | 1.10 | -E |
| tinyxxd | 64 | 4.12 | -b -i |
| xxd | 64 | 1.31 |  |
| xxd | 64 | 2.31 | -r |
| xxd | 64 | 4.38 | -b |
| xxd | 64 | 4.83 | -r -b |
| xxd | 64 | 1.66 |  |
| xxd | 64 | 1.10 | -p |
| xxd | 64 | 4.86 | -i |
| xxd | 64 | 1.34 | -e |
| xxd | 64 | 2.72 | -b |
| xxd | 64 | 1.33 | -u |
| xxd | 64 | 1.48 | -E |
| xxd | 64 | 5.78 | -b -i |
| tinyxxd | 32 | 0.50 |  |
| tinyxxd | 32 | 0.65 | -r |
| tinyxxd | 32 | 2.04 | -b |
| tinyxxd | 32 | 1.02 | -r -b |
| tinyxxd | 32 | 0.58 |  |
| tinyxxd | 32 | 0.47 | -p |
| tinyxxd | 32 | 2.30 | -i |
| tinyxxd | 32 | 0.55 | -e |
| tinyxxd | 32 | 1.61 | -b |
| tinyxxd | 32 | 0.60 | -u |
| tinyxxd | 32 | 0.54 | -E |
| tinyxxd | 32 | 2.04 | -b -i |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.14 | -r |
| xxd | 32 | 3.18 | -b |
| xxd | 32 | 2.36 | -r -b |
| xxd | 32 | 0.74 |  |
| xxd | 32 | 0.55 | -p |
| xxd | 32 | 2.40 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.34 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.75 | -E |
| xxd | 32 | 2.98 | -b -i |
| xxd | 16 | 0.34 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.74 | -b |
| xxd | 16 | 1.13 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.27 | -p |
| xxd | 16 | 1.20 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.49 | -b -i |
| tinyxxd | 16 | 0.25 |  |
| tinyxxd | 16 | 0.33 | -r |
| tinyxxd | 16 | 0.99 | -b |
| tinyxxd | 16 | 0.51 | -r -b |
| tinyxxd | 16 | 0.29 |  |
| tinyxxd | 16 | 0.23 | -p |
| tinyxxd | 16 | 1.16 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.80 | -b |
| tinyxxd | 16 | 0.25 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.02 | -b -i |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.16 | -r |
| tinyxxd | 8 | 0.43 | -b |
| tinyxxd | 8 | 0.26 | -r -b |
| tinyxxd | 8 | 0.15 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.40 | -b |
| tinyxxd | 8 | 0.13 | -u |
| tinyxxd | 8 | 0.14 | -E |
| tinyxxd | 8 | 0.51 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.39 | -b |
| xxd | 8 | 0.58 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.16 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.73 | -b -i |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.08 | -r |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.13 | -r -b |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| xxd | 4 | 0.08 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.28 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.08 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.38 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.15 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.04 | -r |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.07 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.04 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.03 | -r -b |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.07 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |
| tinyxxd | 1 | 0.07 | -b -i |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.07 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.04 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.10 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 24.77% faster with no flag.
- For sample size 64 MiB, tinyxxd was 76.58% faster with flags '-r'.
- For sample size 64 MiB, xxd was 10.79% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 136.03% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 16.74% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 20.90% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 28.69% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 33.99% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 40.43% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 30.75% faster with no flag.
- For sample size 32 MiB, tinyxxd was 75.14% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 23.90% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 131.38% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 18.06% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 23.35% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 10.44% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 37.96% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 45.92% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 31.80% faster with no flag.
- For sample size 16 MiB, tinyxxd was 75.43% faster with flags '-r'.
- For sample size 16 MiB, xxd was 27.45% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 119.93% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 14.11% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 20.33% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 31.87% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 35.78% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 45.66% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 30.15% faster with no flag.
- For sample size 8 MiB, tinyxxd was 80.07% faster with flags '-r'.
- For sample size 8 MiB, xxd was 15.21% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 125.92% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 17.32% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 5.92% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 19.01% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 30.38% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 36.07% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 42.39% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 27.31% faster with no flag.
- For sample size 4 MiB, tinyxxd was 75.80% faster with flags '-r'.
- For sample size 4 MiB, xxd was 18.66% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 115.07% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 12.99% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 19.47% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 32.84% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 36.95% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 45.24% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 30.55% faster with no flag.
- For sample size 2 MiB, tinyxxd was 72.76% faster with flags '-r'.
- For sample size 2 MiB, xxd was 18.48% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 126.13% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 18.42% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 6.44% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 23.59% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 30.71% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 36.86% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 44.00% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 27.54% faster with no flag.
- For sample size 1 MiB, tinyxxd was 72.48% faster with flags '-r'.
- For sample size 1 MiB, xxd was 17.91% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 118.56% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 15.85% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.09% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 18.88% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 48.36% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 33.60% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 43.35% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 24.47% faster than xxd.
- For sample 32 MiB, tinyxxd was 35.28% faster than xxd.
- For sample 16 MiB, tinyxxd was 22.42% faster than xxd.
- For sample 8 MiB, tinyxxd was 25.94% faster than xxd.
- For sample 4 MiB, tinyxxd was 24.20% faster than xxd.
- For sample 2 MiB, tinyxxd was 25.88% faster than xxd.
- For sample 1 MiB, tinyxxd was 25.33% faster than xxd.

### Performance by flag
- tinyxxd was 27.56% faster with no flag.
- tinyxxd was 76.17% faster with flag '-r'.
- tinyxxd was 131.21% faster with flag '-r -b'.
- tinyxxd was 16.67% faster with flag '-p'.
- tinyxxd was 21.30% faster with flag '-e'.
- tinyxxd was 24.36% faster with flag '-u'.
- tinyxxd was 35.47% faster with flag '-E'.
- tinyxxd was 42.82% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 11.42% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 0.31% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 46.28% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 1.04% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 3.92% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 3.72% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 0.23% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 2.59% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 0.25% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 3.84% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 0.27% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 3.06% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 19.30% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 0.85% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 64.31% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 2.53% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 1.64% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 1.92% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 0.71% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 0.11% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 1.82% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 0.14% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 1.09% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 0.58% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 14.10% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 4.31% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 28.26% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd improved by 3.22% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 0.28% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 2.18% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 1.04% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 2.08% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 1.06% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 20.68% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 1.26% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 1.25% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 10.07% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 1.95% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 139.21% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 1.54% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 0.16% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 3.73% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 1.23% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 2.66% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 0.47% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 0.41% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 0.95% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 2.69% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 10.38% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 4.06% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 10.29% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 4.39% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 0.38% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 0.90% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 1.40% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 0.57% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 0.12% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 0.10% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 0.11% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 0.19% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 13.60% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 1.55% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 24.76% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 0.77% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 0.52% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 1.73% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 3.41% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 0.83% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 0.22% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 1.57% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 1.76% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 0.34% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 13.29% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 0.88% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 8.09% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 0.10% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 1.34% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 2.01% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 0.65% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 1.10% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 1.16% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 0.70% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 2.37% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 0.26% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 11.87% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 0.84% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 2.66% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 0.19% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 1.42% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 0.17% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 0.41% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 0.86% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 11.40% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 0.98% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 0.35% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 1.45% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 12.58% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 1.56% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 6.07% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 0.61% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 0.76% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 1.86% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 0.23% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 1.60% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 1.02% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.70% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 0.29% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 0.65% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 11.56% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 0.57% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 6.32% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 1.81% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 0.59% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 3.25% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 0.61% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 1.01% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 0.45% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 0.38% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 0.38% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 0.20% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 8.51% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 0.95% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 7.63% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 3.45% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 3.37% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 5.46% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 2.46% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 2.31% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.74% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 2.20% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 1.70% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 0.18% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 11.56% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 2.01% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 5.46% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 0.88% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 0.32% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 2.07% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 0.24% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 0.36% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 2.54% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 1.10% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 0.23% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 0.91% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 8.20% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 0.43% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 4.47% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 0.09% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 1.10% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 1.52% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 0.04% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 0.63% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 2.74% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 3.16% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 0.58% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 0.60% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 10.63% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 0.41% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 6.93% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 5.56% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 0.83% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 4.87% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 0.89% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 0.35% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 0.53% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 17.95% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 0.03% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 0.41% compared to the last run.
---
Report generated on: 2026-02-02T08:56:22.230553
