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
| xxd | 64 | 1.31 |  |
| xxd | 64 | 2.29 | -r |
| xxd | 64 | 4.15 | -b |
| xxd | 64 | 4.55 | -r -b |
| xxd | 64 | 1.76 |  |
| xxd | 64 | 1.10 | -p |
| xxd | 64 | 4.86 | -i |
| xxd | 64 | 1.33 | -e |
| xxd | 64 | 2.74 | -b |
| xxd | 64 | 1.32 | -u |
| xxd | 64 | 1.50 | -E |
| xxd | 64 | 5.98 | -b -i |
| tinyxxd | 64 | 0.88 |  |
| tinyxxd | 64 | 0.82 | -r |
| tinyxxd | 64 | 4.18 | -b |
| tinyxxd | 64 | 1.64 | -r -b |
| tinyxxd | 64 | 1.19 |  |
| tinyxxd | 64 | 0.92 | -p |
| tinyxxd | 64 | 4.63 | -i |
| tinyxxd | 64 | 1.09 | -e |
| tinyxxd | 64 | 3.14 | -b |
| tinyxxd | 64 | 0.92 | -u |
| tinyxxd | 64 | 1.06 | -E |
| tinyxxd | 64 | 4.09 | -b -i |
| tinyxxd | 32 | 0.44 |  |
| tinyxxd | 32 | 0.39 | -r |
| tinyxxd | 32 | 2.02 | -b |
| tinyxxd | 32 | 0.86 | -r -b |
| tinyxxd | 32 | 0.55 |  |
| tinyxxd | 32 | 0.45 | -p |
| tinyxxd | 32 | 2.31 | -i |
| tinyxxd | 32 | 0.55 | -e |
| tinyxxd | 32 | 1.57 | -b |
| tinyxxd | 32 | 0.44 | -u |
| tinyxxd | 32 | 0.53 | -E |
| tinyxxd | 32 | 2.03 | -b -i |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.14 | -r |
| xxd | 32 | 3.16 | -b |
| xxd | 32 | 2.39 | -r -b |
| xxd | 32 | 0.75 |  |
| xxd | 32 | 0.55 | -p |
| xxd | 32 | 2.48 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.34 | -b |
| xxd | 32 | 0.67 | -u |
| xxd | 32 | 0.73 | -E |
| xxd | 32 | 3.05 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.59 | -r |
| xxd | 16 | 0.72 | -b |
| xxd | 16 | 1.19 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.27 | -p |
| xxd | 16 | 1.21 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.45 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.21 | -r |
| tinyxxd | 16 | 0.85 | -b |
| tinyxxd | 16 | 0.41 | -r -b |
| tinyxxd | 16 | 0.27 |  |
| tinyxxd | 16 | 0.23 | -p |
| tinyxxd | 16 | 1.16 | -i |
| tinyxxd | 16 | 0.27 | -e |
| tinyxxd | 16 | 0.78 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.29 | -E |
| tinyxxd | 16 | 1.02 | -b -i |
| tinyxxd | 8 | 0.12 |  |
| tinyxxd | 8 | 0.10 | -r |
| tinyxxd | 8 | 0.42 | -b |
| tinyxxd | 8 | 0.21 | -r -b |
| tinyxxd | 8 | 0.14 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.39 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.13 | -E |
| tinyxxd | 8 | 0.51 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.59 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.60 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.33 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.73 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.28 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.30 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.10 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.05 | -r |
| tinyxxd | 4 | 0.21 | -b |
| tinyxxd | 4 | 0.11 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.15 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.05 | -e |
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
| tinyxxd | 2 | 0.13 | -b -i |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.06 | -b |
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
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.10 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 48.00% faster with no flag.
- For sample size 64 MiB, tinyxxd was 178.83% faster with flags '-r'.
- For sample size 64 MiB, xxd was 6.27% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 176.52% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 19.90% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 22.09% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 42.84% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 42.01% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 46.39% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 42.40% faster with no flag.
- For sample size 32 MiB, tinyxxd was 189.66% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 25.38% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 178.45% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 22.81% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 7.27% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 23.77% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 51.24% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 39.21% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 50.22% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 45.70% faster with no flag.
- For sample size 16 MiB, tinyxxd was 186.03% faster with flags '-r'.
- For sample size 16 MiB, xxd was 18.01% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 188.00% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 18.24% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 24.94% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 48.04% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 28.19% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 42.30% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 42.41% faster with no flag.
- For sample size 8 MiB, tinyxxd was 171.86% faster with flags '-r'.
- For sample size 8 MiB, xxd was 17.47% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 181.39% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 21.06% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 22.62% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 49.17% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 38.46% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 42.34% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 43.03% faster with no flag.
- For sample size 4 MiB, tinyxxd was 172.30% faster with flags '-r'.
- For sample size 4 MiB, xxd was 12.29% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 166.26% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 20.28% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 20.42% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 77.11% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 38.27% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 45.80% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 43.53% faster with no flag.
- For sample size 2 MiB, tinyxxd was 167.44% faster with flags '-r'.
- For sample size 2 MiB, xxd was 13.91% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 175.71% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 21.44% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 5.81% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 22.86% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 46.59% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 37.77% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 46.04% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 34.62% faster with no flag.
- For sample size 1 MiB, tinyxxd was 154.77% faster with flags '-r'.
- For sample size 1 MiB, xxd was 19.27% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 155.96% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 17.18% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 5.31% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 14.28% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 40.72% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 35.97% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 43.99% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 33.86% faster than xxd.
- For sample 32 MiB, tinyxxd was 45.04% faster than xxd.
- For sample 16 MiB, tinyxxd was 32.21% faster than xxd.
- For sample 8 MiB, tinyxxd was 31.72% faster than xxd.
- For sample 4 MiB, tinyxxd was 33.99% faster than xxd.
- For sample 2 MiB, tinyxxd was 33.64% faster than xxd.
- For sample 1 MiB, tinyxxd was 28.95% faster than xxd.

### Performance by flag
- tinyxxd was 45.64% faster with no flag.
- tinyxxd was 181.29% faster with flag '-r'.
- tinyxxd was 178.24% faster with flag '-r -b'.
- tinyxxd was 20.50% faster with flag '-p'.
- tinyxxd was 5.29% faster with flag '-i'.
- tinyxxd was 22.79% faster with flag '-e'.
- tinyxxd was 47.07% faster with flag '-u'.
- tinyxxd was 38.98% faster with flag '-E'.
- tinyxxd was 46.54% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 24.66% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 4.18% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 55.06% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 3.36% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 1.04% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 4.40% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 1.01% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 1.86% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 2.51% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 0.13% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 0.59% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 2.36% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 25.35% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 3.11% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 32.05% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 0.17% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 1.25% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 3.09% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 0.45% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 2.33% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 0.84% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 4.81% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 2.29% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 1.05% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 16.28% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 4.24% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 28.19% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 5.23% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 4.22% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 0.01% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 0.67% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 0.92% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 0.26% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 0.17% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 5.38% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 0.77% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 11.84% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 3.14% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 137.30% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 2.16% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 0.77% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 0.02% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 1.55% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 0.63% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 0.50% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 0.50% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 0.13% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 2.32% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 11.52% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 1.11% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 7.39% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 4.03% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 1.00% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 1.88% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 0.41% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 1.33% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 0.01% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 7.19% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 0.90% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 1.47% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 16.14% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 9.47% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 8.48% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 0.20% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 0.78% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 0.20% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 0.12% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 0.75% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 0.34% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 0.23% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 8.33% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 0.61% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 14.33% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 0.31% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 7.66% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 0.93% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 2.33% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 1.00% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 0.66% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 0.44% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 0.09% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 0.79% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 0.12% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 0.03% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 18.81% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 5.36% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 7.92% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 4.32% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 10.00% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 1.33% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 1.38% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 0.50% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 0.46% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 0.15% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 0.15% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 2.53% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 11.72% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 2.43% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 8.73% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 6.97% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 0.70% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 2.27% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 0.66% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 1.95% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 6.32% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 19.95% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 1.33% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 0.08% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 15.12% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 1.74% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 3.87% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 0.59% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 1.31% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 0.14% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 1.12% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 1.51% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 1.04% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 0.93% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 0.30% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 0.29% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 7.74% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 16.69% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 9.33% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 1.04% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 1.39% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 1.67% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 0.39% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 1.08% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.71% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 0.11% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 0.03% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 0.46% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 14.43% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 3.16% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.43% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 1.20% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 0.80% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 0.84% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 2.63% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 1.03% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 4.46% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 0.92% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 0.21% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.54% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 12.52% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 2.00% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 7.57% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 1.20% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 0.57% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 0.14% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 1.59% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 0.58% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 0.50% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 0.86% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 1.32% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 0.42% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 12.15% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 1.60% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 4.93% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 1.52% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 1.52% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 0.63% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 1.06% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 2.99% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 1.52% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 1.41% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 1.06% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 0.59% compared to the last run.
---
Report generated on: 2026-02-02T15:11:14.148431
