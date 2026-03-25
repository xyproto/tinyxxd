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
| xxd | 64 | 1.15 |  |
| xxd | 64 | 2.11 | -r |
| xxd | 64 | 4.10 | -b |
| xxd | 64 | 3.65 | -r -b |
| xxd | 64 | 1.29 |  |
| xxd | 64 | 0.79 | -p |
| xxd | 64 | 4.16 | -i |
| xxd | 64 | 1.16 | -e |
| xxd | 64 | 2.24 | -b |
| xxd | 64 | 1.19 | -u |
| xxd | 64 | 1.32 | -E |
| xxd | 64 | 4.22 | -b -i |
| tinyxxd | 64 | 0.48 |  |
| tinyxxd | 64 | 0.99 | -r |
| tinyxxd | 64 | 3.65 | -b |
| tinyxxd | 64 | 1.52 | -r -b |
| tinyxxd | 64 | 0.62 |  |
| tinyxxd | 64 | 0.50 | -p |
| tinyxxd | 64 | 4.14 | -i |
| tinyxxd | 64 | 0.89 | -e |
| tinyxxd | 64 | 2.06 | -b |
| tinyxxd | 64 | 0.48 | -u |
| tinyxxd | 64 | 0.48 | -E |
| tinyxxd | 64 | 2.76 | -b -i |
| xxd | 32 | 0.57 |  |
| xxd | 32 | 1.06 | -r |
| xxd | 32 | 1.55 | -b |
| xxd | 32 | 1.72 | -r -b |
| xxd | 32 | 0.64 |  |
| xxd | 32 | 0.40 | -p |
| xxd | 32 | 2.07 | -i |
| xxd | 32 | 0.58 | -e |
| xxd | 32 | 1.14 | -b |
| xxd | 32 | 0.57 | -u |
| xxd | 32 | 0.66 | -E |
| xxd | 32 | 2.08 | -b -i |
| tinyxxd | 32 | 0.24 |  |
| tinyxxd | 32 | 0.46 | -r |
| tinyxxd | 32 | 1.82 | -b |
| tinyxxd | 32 | 0.76 | -r -b |
| tinyxxd | 32 | 0.29 |  |
| tinyxxd | 32 | 0.25 | -p |
| tinyxxd | 32 | 2.05 | -i |
| tinyxxd | 32 | 0.45 | -e |
| tinyxxd | 32 | 1.05 | -b |
| tinyxxd | 32 | 0.25 | -u |
| tinyxxd | 32 | 0.24 | -E |
| tinyxxd | 32 | 1.37 | -b -i |
| tinyxxd | 16 | 0.12 |  |
| tinyxxd | 16 | 0.23 | -r |
| tinyxxd | 16 | 0.56 | -b |
| tinyxxd | 16 | 0.38 | -r -b |
| tinyxxd | 16 | 0.15 |  |
| tinyxxd | 16 | 0.13 | -p |
| tinyxxd | 16 | 1.02 | -i |
| tinyxxd | 16 | 0.22 | -e |
| tinyxxd | 16 | 0.51 | -b |
| tinyxxd | 16 | 0.12 | -u |
| tinyxxd | 16 | 0.12 | -E |
| tinyxxd | 16 | 0.68 | -b -i |
| xxd | 16 | 0.29 |  |
| xxd | 16 | 0.54 | -r |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.88 | -r -b |
| xxd | 16 | 0.32 |  |
| xxd | 16 | 0.20 | -p |
| xxd | 16 | 1.04 | -i |
| xxd | 16 | 0.29 | -e |
| xxd | 16 | 0.56 | -b |
| xxd | 16 | 0.29 | -u |
| xxd | 16 | 0.33 | -E |
| xxd | 16 | 1.04 | -b -i |
| xxd | 8 | 0.15 |  |
| xxd | 8 | 0.27 | -r |
| xxd | 8 | 0.32 | -b |
| xxd | 8 | 0.47 | -r -b |
| xxd | 8 | 0.16 |  |
| xxd | 8 | 0.10 | -p |
| xxd | 8 | 0.52 | -i |
| xxd | 8 | 0.15 | -e |
| xxd | 8 | 0.28 | -b |
| xxd | 8 | 0.15 | -u |
| xxd | 8 | 0.17 | -E |
| xxd | 8 | 0.52 | -b -i |
| tinyxxd | 8 | 0.06 |  |
| tinyxxd | 8 | 0.12 | -r |
| tinyxxd | 8 | 0.28 | -b |
| tinyxxd | 8 | 0.20 | -r -b |
| tinyxxd | 8 | 0.08 |  |
| tinyxxd | 8 | 0.07 | -p |
| tinyxxd | 8 | 0.52 | -i |
| tinyxxd | 8 | 0.13 | -e |
| tinyxxd | 8 | 0.28 | -b |
| tinyxxd | 8 | 0.06 | -u |
| tinyxxd | 8 | 0.06 | -E |
| tinyxxd | 8 | 0.38 | -b -i |
| xxd | 4 | 0.08 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.15 | -b |
| xxd | 4 | 0.22 | -r -b |
| xxd | 4 | 0.08 |  |
| xxd | 4 | 0.05 | -p |
| xxd | 4 | 0.26 | -i |
| xxd | 4 | 0.08 | -e |
| xxd | 4 | 0.14 | -b |
| xxd | 4 | 0.08 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.27 | -b -i |
| tinyxxd | 4 | 0.03 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.14 | -b |
| tinyxxd | 4 | 0.10 | -r -b |
| tinyxxd | 4 | 0.04 |  |
| tinyxxd | 4 | 0.03 | -p |
| tinyxxd | 4 | 0.26 | -i |
| tinyxxd | 4 | 0.06 | -e |
| tinyxxd | 4 | 0.13 | -b |
| tinyxxd | 4 | 0.03 | -u |
| tinyxxd | 4 | 0.03 | -E |
| tinyxxd | 4 | 0.17 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.08 | -b |
| xxd | 2 | 0.11 | -r -b |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.13 | -i |
| xxd | 2 | 0.04 | -e |
| xxd | 2 | 0.07 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.04 | -E |
| xxd | 2 | 0.13 | -b -i |
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
| tinyxxd | 1 | 0.02 | -E |
| tinyxxd | 1 | 0.05 | -b -i |
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

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 121.43% faster with no flag.
- For sample size 64 MiB, tinyxxd was 112.72% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 10.88% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 140.91% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 58.50% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 30.18% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 147.11% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 176.08% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 52.87% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 126.66% faster with no flag.
- For sample size 32 MiB, tinyxxd was 129.25% faster with flags '-r'.
- For sample size 32 MiB, xxd was 6.43% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 127.00% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 60.49% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 30.57% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 133.16% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 172.61% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 51.41% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 122.37% faster with no flag.
- For sample size 16 MiB, tinyxxd was 133.95% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 15.49% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 129.91% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 58.41% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 31.47% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 141.30% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 176.41% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 52.85% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 124.41% faster with no flag.
- For sample size 8 MiB, tinyxxd was 130.84% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 7.47% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 135.38% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 58.72% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 18.02% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 133.32% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 169.50% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 39.27% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 119.80% faster with no flag.
- For sample size 4 MiB, tinyxxd was 125.57% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 9.41% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 122.83% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 53.28% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 29.62% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 129.79% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 173.38% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 57.83% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 110.79% faster with no flag.
- For sample size 2 MiB, tinyxxd was 118.66% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 8.79% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 116.84% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 51.80% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 25.15% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 115.43% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 143.85% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 50.78% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 95.77% faster with no flag.
- For sample size 1 MiB, tinyxxd was 110.08% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 112.97% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 43.79% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 22.93% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 80.17% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 34.62% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 26.63% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 47.43% faster than xxd.
- For sample 32 MiB, tinyxxd was 41.48% faster than xxd.
- For sample 16 MiB, tinyxxd was 52.07% faster than xxd.
- For sample 8 MiB, tinyxxd was 46.85% faster than xxd.
- For sample 4 MiB, tinyxxd was 50.33% faster than xxd.
- For sample 2 MiB, tinyxxd was 46.82% faster than xxd.
- For sample 1 MiB, tinyxxd was 36.07% faster than xxd.

### Performance by flag
- tinyxxd was 122.49% faster with no flag.
- tinyxxd was 120.86% faster with flag '-r'.
- tinyxxd was 6.52% faster with flag '-b'.
- tinyxxd was 134.42% faster with flag '-r -b'.
- tinyxxd was 58.52% faster with flag '-p'.
- tinyxxd was 29.41% faster with flag '-e'.
- tinyxxd was 139.96% faster with flag '-u'.
- tinyxxd was 171.56% faster with flag '-E'.
- tinyxxd was 51.44% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 30.56% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 8.58% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 53.13% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 22.94% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 22.25% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 27.80% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 16.37% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 12.27% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 16.46% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 8.46% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 10.23% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 24.46% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 35.93% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 8.45% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 33.97% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 14.89% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 17.41% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 43.95% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 13.43% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 18.44% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 24.38% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 20.62% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 21.97% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 22.55% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 21.75% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 7.24% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 14.93% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 25.02% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 13.17% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 26.79% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 16.99% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 13.28% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 15.78% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 15.92% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 12.64% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 27.36% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 36.78% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 2.63% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 28.86% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd improved by 14.48% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 23.65% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 47.01% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 12.62% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 19.10% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 25.56% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 18.10% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 20.37% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 21.75% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 36.19% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 2.75% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 19.55% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 14.81% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 23.61% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 43.52% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 13.10% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 19.37% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 26.26% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 19.53% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 18.57% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 22.14% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 21.18% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 6.57% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 3.82% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 21.55% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 13.77% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 27.56% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 16.91% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 12.11% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 19.21% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 10.84% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 9.98% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 27.62% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 21.51% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 3.07% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 7.04% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 20.28% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 14.28% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 24.28% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 16.71% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 11.49% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 16.50% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 13.10% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 10.42% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 23.92% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 34.99% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 4.80% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 28.67% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 11.38% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 22.03% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 43.64% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 12.62% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 11.19% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 28.13% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 17.69% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 20.93% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 15.43% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 18.61% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 4.00% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 11.27% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 21.57% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 11.46% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 26.96% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 16.16% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 11.10% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 16.00% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 9.65% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 5.63% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 23.66% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 35.22% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 0.38% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 21.11% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 12.87% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 22.15% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 41.59% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 11.51% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 20.09% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 23.78% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 16.83% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 19.80% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 22.21% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 18.00% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 8.25% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 12.48% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 26.10% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 12.28% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 25.57% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 17.35% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 12.20% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 16.41% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 11.93% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 10.59% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 26.33% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 32.26% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 2.35% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 19.89% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 13.79% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 20.98% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 40.47% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 12.64% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 15.96% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 23.68% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 17.66% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 17.75% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 33.53% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 26.71% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 0.23% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 17.25% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 12.60% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 19.17% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 37.27% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 11.74% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 12.73% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 22.81% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 8.97% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 35.44% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 6.94% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 17.74% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 4.98% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 11.68% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 24.70% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 7.47% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 23.05% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 13.80% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 9.13% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 15.42% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 10.28% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 9.75% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 24.57% compared to the last run.
---
Report generated on: 2026-03-25T13:28:12.344301
