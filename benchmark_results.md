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
| xxd | 64 | 1.38 |  |
| xxd | 64 | 2.38 | -r |
| xxd | 64 | 4.27 | -b |
| xxd | 64 | 4.65 | -r -b |
| xxd | 64 | 1.64 |  |
| xxd | 64 | 1.16 | -p |
| xxd | 64 | 5.16 | -i |
| xxd | 64 | 1.41 | -e |
| xxd | 64 | 2.78 | -b |
| xxd | 64 | 1.39 | -u |
| xxd | 64 | 1.58 | -E |
| xxd | 64 | 5.98 | -b -i |
| tinyxxd | 64 | 0.67 |  |
| tinyxxd | 64 | 0.98 | -r |
| tinyxxd | 64 | 3.67 | -b |
| tinyxxd | 64 | 1.56 | -r -b |
| tinyxxd | 64 | 0.81 |  |
| tinyxxd | 64 | 0.60 | -p |
| tinyxxd | 64 | 4.92 | -i |
| tinyxxd | 64 | 1.16 | -e |
| tinyxxd | 64 | 2.95 | -b |
| tinyxxd | 64 | 0.63 | -u |
| tinyxxd | 64 | 0.67 | -E |
| tinyxxd | 64 | 3.58 | -b -i |
| tinyxxd | 32 | 0.32 |  |
| tinyxxd | 32 | 0.49 | -r |
| tinyxxd | 32 | 1.87 | -b |
| tinyxxd | 32 | 0.78 | -r -b |
| tinyxxd | 32 | 0.42 |  |
| tinyxxd | 32 | 0.30 | -p |
| tinyxxd | 32 | 2.49 | -i |
| tinyxxd | 32 | 0.60 | -e |
| tinyxxd | 32 | 1.46 | -b |
| tinyxxd | 32 | 0.32 | -u |
| tinyxxd | 32 | 0.32 | -E |
| tinyxxd | 32 | 1.77 | -b -i |
| xxd | 32 | 0.69 |  |
| xxd | 32 | 1.23 | -r |
| xxd | 32 | 2.82 | -b |
| xxd | 32 | 2.21 | -r -b |
| xxd | 32 | 0.78 |  |
| xxd | 32 | 0.58 | -p |
| xxd | 32 | 2.60 | -i |
| xxd | 32 | 0.73 | -e |
| xxd | 32 | 1.38 | -b |
| xxd | 32 | 0.69 | -u |
| xxd | 32 | 0.80 | -E |
| xxd | 32 | 3.07 | -b -i |
| xxd | 16 | 0.35 |  |
| xxd | 16 | 0.60 | -r |
| xxd | 16 | 0.74 | -b |
| xxd | 16 | 1.15 | -r -b |
| xxd | 16 | 0.39 |  |
| xxd | 16 | 0.29 | -p |
| xxd | 16 | 1.31 | -i |
| xxd | 16 | 0.38 | -e |
| xxd | 16 | 0.69 | -b |
| xxd | 16 | 0.35 | -u |
| xxd | 16 | 0.40 | -E |
| xxd | 16 | 1.48 | -b -i |
| tinyxxd | 16 | 0.16 |  |
| tinyxxd | 16 | 0.25 | -r |
| tinyxxd | 16 | 0.94 | -b |
| tinyxxd | 16 | 0.39 | -r -b |
| tinyxxd | 16 | 0.21 |  |
| tinyxxd | 16 | 0.15 | -p |
| tinyxxd | 16 | 1.22 | -i |
| tinyxxd | 16 | 0.29 | -e |
| tinyxxd | 16 | 0.74 | -b |
| tinyxxd | 16 | 0.16 | -u |
| tinyxxd | 16 | 0.16 | -E |
| tinyxxd | 16 | 0.88 | -b -i |
| tinyxxd | 8 | 0.08 |  |
| tinyxxd | 8 | 0.13 | -r |
| tinyxxd | 8 | 0.39 | -b |
| tinyxxd | 8 | 0.20 | -r -b |
| tinyxxd | 8 | 0.10 |  |
| tinyxxd | 8 | 0.08 | -p |
| tinyxxd | 8 | 0.62 | -i |
| tinyxxd | 8 | 0.15 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.08 | -u |
| tinyxxd | 8 | 0.08 | -E |
| tinyxxd | 8 | 0.44 | -b -i |
| xxd | 8 | 0.18 |  |
| xxd | 8 | 0.31 | -r |
| xxd | 8 | 0.40 | -b |
| xxd | 8 | 0.58 | -r -b |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.15 | -p |
| xxd | 8 | 0.65 | -i |
| xxd | 8 | 0.18 | -e |
| xxd | 8 | 0.35 | -b |
| xxd | 8 | 0.18 | -u |
| xxd | 8 | 0.20 | -E |
| xxd | 8 | 0.77 | -b -i |
| tinyxxd | 4 | 0.04 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.10 | -r -b |
| tinyxxd | 4 | 0.05 |  |
| tinyxxd | 4 | 0.04 | -p |
| tinyxxd | 4 | 0.31 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.18 | -b |
| tinyxxd | 4 | 0.04 | -u |
| tinyxxd | 4 | 0.04 | -E |
| tinyxxd | 4 | 0.22 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.16 | -r |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.29 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.08 | -p |
| xxd | 4 | 0.33 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.38 | -b -i |
| tinyxxd | 2 | 0.02 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.05 | -r -b |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.02 | -p |
| tinyxxd | 2 | 0.16 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.09 | -b |
| tinyxxd | 2 | 0.02 | -u |
| tinyxxd | 2 | 0.02 | -E |
| tinyxxd | 2 | 0.11 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.14 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.17 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
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
| xxd | 1 | 0.09 | -b -i |
| tinyxxd | 1 | 0.01 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.03 | -r -b |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.01 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.01 | -E |
| tinyxxd | 1 | 0.07 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 104.27% faster with no flag.
- For sample size 64 MiB, tinyxxd was 142.32% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 6.49% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 197.81% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 93.96% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 21.36% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 120.25% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 137.18% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 67.10% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 100.37% faster with no flag.
- For sample size 32 MiB, tinyxxd was 149.05% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 26.23% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 181.27% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 95.64% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 22.53% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 115.76% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 153.43% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 73.86% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 101.95% faster with no flag.
- For sample size 16 MiB, tinyxxd was 142.66% faster with flags '-r'.
- For sample size 16 MiB, xxd was 16.70% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 195.43% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 94.54% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 6.95% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 32.19% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 116.11% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 146.41% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 68.85% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 97.96% faster with no flag.
- For sample size 8 MiB, tinyxxd was 145.30% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 192.18% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 92.11% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 21.05% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 115.98% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 139.66% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 74.99% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 95.72% faster with no flag.
- For sample size 4 MiB, tinyxxd was 140.73% faster with flags '-r'.
- For sample size 4 MiB, xxd was 5.30% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 185.37% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 85.22% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 5.57% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 22.30% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 108.50% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 133.86% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 67.36% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 82.73% faster with no flag.
- For sample size 2 MiB, tinyxxd was 137.02% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 173.43% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 78.76% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 21.77% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 99.01% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 124.62% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 66.96% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 81.57% faster with no flag.
- For sample size 1 MiB, tinyxxd was 118.46% faster with flags '-r'.
- For sample size 1 MiB, xxd was 7.14% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 165.68% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 67.97% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.61% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 20.69% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 62.30% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 100.66% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 42.10% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 52.15% faster than xxd.
- For sample 32 MiB, tinyxxd was 57.98% faster than xxd.
- For sample 16 MiB, tinyxxd was 46.93% faster than xxd.
- For sample 8 MiB, tinyxxd was 51.48% faster than xxd.
- For sample 4 MiB, tinyxxd was 48.79% faster than xxd.
- For sample 2 MiB, tinyxxd was 48.01% faster than xxd.
- For sample 1 MiB, tinyxxd was 40.20% faster than xxd.

### Performance by flag
- tinyxxd was 101.69% faster with no flag.
- tinyxxd was 143.86% faster with flag '-r'.
- tinyxxd was 7.77% faster with flag '-b'.
- tinyxxd was 191.88% faster with flag '-r -b'.
- tinyxxd was 93.46% faster with flag '-p'.
- tinyxxd was 23.01% faster with flag '-e'.
- tinyxxd was 116.81% faster with flag '-u'.
- tinyxxd was 141.67% faster with flag '-E'.
- tinyxxd was 69.27% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 9.07% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 6.44% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 59.68% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 3.25% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 7.96% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 7.47% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 3.79% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 6.53% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 3.98% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 7.14% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 7.68% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 5.43% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 19.69% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 12.01% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 33.16% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 3.93% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 2.20% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 4.05% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 1.43% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 5.55% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 7.12% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 1.42% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 13.73% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 0.42% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 16.39% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 11.49% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 34.36% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 4.35% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 8.98% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 4.67% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 6.28% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 7.29% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 4.74% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 3.76% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 3.32% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 0.02% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 6.59% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 13.30% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 110.02% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 2.82% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 6.32% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 6.91% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 4.10% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 8.90% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 2.98% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 4.84% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 8.42% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 8.27% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 4.38% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 6.76% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 10.18% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 3.48% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 4.73% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 11.86% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 4.51% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 13.51% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 3.00% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 4.44% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 1.67% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 0.39% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 19.92% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 11.73% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 34.76% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 3.15% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 4.05% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 4.55% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 2.77% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 3.29% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 6.06% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 3.64% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 3.84% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 0.42% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 16.49% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 12.06% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 11.80% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 3.58% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 4.73% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 4.84% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 4.78% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 4.56% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 7.50% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 5.21% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 3.08% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 1.02% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 6.39% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 6.19% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 20.07% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 1.05% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 4.95% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 7.87% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 4.47% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 4.74% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 4.47% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 6.80% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 6.07% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 4.35% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 15.51% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 10.81% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 14.06% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 2.96% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 3.69% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 3.63% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 7.18% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 2.52% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 4.71% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 4.08% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 4.80% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 0.11% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 6.45% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 7.79% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 10.01% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 4.80% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 5.62% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 7.14% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 6.69% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 4.03% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 4.60% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 5.98% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 7.26% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 1.86% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 10.12% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 13.41% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 10.70% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 3.01% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 9.39% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 2.78% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 6.47% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 2.33% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 4.08% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 2.94% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 0.47% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 14.72% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 5.52% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 8.66% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 12.73% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 1.15% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 4.60% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 13.84% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 6.82% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 8.60% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 10.21% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 6.36% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 6.77% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 5.70% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 2.86% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 9.99% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 9.08% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 3.58% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 7.30% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 7.72% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 5.74% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 8.70% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 3.32% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 4.29% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 8.43% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 0.78% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 10.83% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 12.04% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 10.01% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 2.37% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 2.67% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 0.91% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 6.31% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 7.41% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 10.07% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 21.28% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 10.28% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 11.68% compared to the last run.
---
Report generated on: 2026-04-01T10:45:17.894448
