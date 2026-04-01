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
| tinyxxd | 64 | 0.58 |  |
| tinyxxd | 64 | 0.90 | -r |
| tinyxxd | 64 | 4.00 | -b |
| tinyxxd | 64 | 3.96 | -r -b |
| tinyxxd | 64 | 0.84 |  |
| tinyxxd | 64 | 0.62 | -p |
| tinyxxd | 64 | 4.73 | -i |
| tinyxxd | 64 | 1.08 | -e |
| tinyxxd | 64 | 2.74 | -b |
| tinyxxd | 64 | 0.60 | -u |
| tinyxxd | 64 | 0.59 | -E |
| tinyxxd | 64 | 3.56 | -b -i |
| xxd | 64 | 1.30 |  |
| xxd | 64 | 2.28 | -r |
| xxd | 64 | 3.79 | -b |
| xxd | 64 | 4.19 | -r -b |
| xxd | 64 | 1.47 |  |
| xxd | 64 | 1.04 | -p |
| xxd | 64 | 5.01 | -i |
| xxd | 64 | 1.34 | -e |
| xxd | 64 | 2.71 | -b |
| xxd | 64 | 1.33 | -u |
| xxd | 64 | 1.48 | -E |
| xxd | 64 | 5.69 | -b -i |
| tinyxxd | 32 | 0.30 |  |
| tinyxxd | 32 | 0.42 | -r |
| tinyxxd | 32 | 1.81 | -b |
| tinyxxd | 32 | 1.95 | -r -b |
| tinyxxd | 32 | 0.39 |  |
| tinyxxd | 32 | 0.31 | -p |
| tinyxxd | 32 | 2.34 | -i |
| tinyxxd | 32 | 0.55 | -e |
| tinyxxd | 32 | 1.38 | -b |
| tinyxxd | 32 | 0.30 | -u |
| tinyxxd | 32 | 0.30 | -E |
| tinyxxd | 32 | 1.75 | -b -i |
| xxd | 32 | 0.66 |  |
| xxd | 32 | 1.13 | -r |
| xxd | 32 | 3.00 | -b |
| xxd | 32 | 2.14 | -r -b |
| xxd | 32 | 0.74 |  |
| xxd | 32 | 0.53 | -p |
| xxd | 32 | 2.47 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.33 | -b |
| xxd | 32 | 0.68 | -u |
| xxd | 32 | 0.75 | -E |
| xxd | 32 | 2.85 | -b -i |
| tinyxxd | 16 | 0.16 |  |
| tinyxxd | 16 | 0.21 | -r |
| tinyxxd | 16 | 0.75 | -b |
| tinyxxd | 16 | 0.97 | -r -b |
| tinyxxd | 16 | 0.19 |  |
| tinyxxd | 16 | 0.16 | -p |
| tinyxxd | 16 | 1.16 | -i |
| tinyxxd | 16 | 0.27 | -e |
| tinyxxd | 16 | 0.72 | -b |
| tinyxxd | 16 | 0.15 | -u |
| tinyxxd | 16 | 0.15 | -E |
| tinyxxd | 16 | 0.88 | -b -i |
| xxd | 16 | 0.32 |  |
| xxd | 16 | 0.55 | -r |
| xxd | 16 | 0.81 | -b |
| xxd | 16 | 1.12 | -r -b |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.27 | -p |
| xxd | 16 | 1.25 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.66 | -b |
| xxd | 16 | 0.32 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.43 | -b -i |
| tinyxxd | 8 | 0.08 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.39 | -b |
| tinyxxd | 8 | 0.49 | -r -b |
| tinyxxd | 8 | 0.10 |  |
| tinyxxd | 8 | 0.08 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.35 | -b |
| tinyxxd | 8 | 0.08 | -u |
| tinyxxd | 8 | 0.08 | -E |
| tinyxxd | 8 | 0.44 | -b -i |
| xxd | 8 | 0.16 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.53 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.63 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.33 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.18 | -E |
| xxd | 8 | 0.71 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.29 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.32 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.08 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 4 | 0.04 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.25 | -r -b |
| tinyxxd | 4 | 0.05 |  |
| tinyxxd | 4 | 0.04 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.17 | -b |
| tinyxxd | 4 | 0.04 | -u |
| tinyxxd | 4 | 0.04 | -E |
| tinyxxd | 4 | 0.22 | -b -i |
| tinyxxd | 2 | 0.02 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.12 | -b |
| tinyxxd | 2 | 0.13 | -r -b |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.02 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.09 | -b |
| tinyxxd | 2 | 0.02 | -u |
| tinyxxd | 2 | 0.02 | -E |
| tinyxxd | 2 | 0.11 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.14 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
| tinyxxd | 1 | 0.01 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.06 | -r -b |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.01 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.01 | -u |
| tinyxxd | 1 | 0.01 | -E |
| tinyxxd | 1 | 0.06 | -b -i |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.07 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 95.29% faster with no flag.
- For sample size 64 MiB, tinyxxd was 154.19% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 5.78% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 68.05% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 5.94% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 23.92% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 120.47% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 150.30% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 59.90% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 103.69% faster with no flag.
- For sample size 32 MiB, tinyxxd was 166.57% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 35.42% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 9.77% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 68.06% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 5.77% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 20.74% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 127.87% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 146.71% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 62.63% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 100.32% faster with no flag.
- For sample size 16 MiB, tinyxxd was 161.18% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 15.71% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 71.03% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 7.78% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 23.78% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 113.57% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 148.68% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 63.07% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 100.30% faster with no flag.
- For sample size 8 MiB, tinyxxd was 154.76% faster with flags '-r'.
- For sample size 8 MiB, xxd was 5.35% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 8.02% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 68.85% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 7.92% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 22.21% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 113.66% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 133.62% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 61.71% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 99.85% faster with no flag.
- For sample size 4 MiB, tinyxxd was 129.68% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 16.21% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 64.49% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 7.32% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 22.83% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 112.31% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 138.83% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 65.61% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 87.01% faster with no flag.
- For sample size 2 MiB, tinyxxd was 139.98% faster with flags '-r'.
- For sample size 2 MiB, xxd was 17.90% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 11.01% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 58.18% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 20.19% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 96.78% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 123.94% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 65.40% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 76.84% faster with no flag.
- For sample size 1 MiB, tinyxxd was 136.88% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 12.35% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 53.18% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.89% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 20.94% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 85.80% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 106.27% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 62.85% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 30.70% faster than xxd.
- For sample 32 MiB, tinyxxd was 43.40% faster than xxd.
- For sample 16 MiB, tinyxxd was 35.81% faster than xxd.
- For sample 8 MiB, tinyxxd was 32.49% faster than xxd.
- For sample 4 MiB, tinyxxd was 34.85% faster than xxd.
- For sample 2 MiB, tinyxxd was 27.98% faster than xxd.
- For sample 1 MiB, tinyxxd was 32.10% faster than xxd.

### Performance by flag
- tinyxxd was 98.11% faster with no flag.
- tinyxxd was 156.78% faster with flag '-r'.
- tinyxxd was 6.38% faster with flag '-b'.
- tinyxxd was 8.61% faster with flag '-r -b'.
- tinyxxd was 68.02% faster with flag '-p'.
- tinyxxd was 6.29% faster with flag '-i'.
- tinyxxd was 22.86% faster with flag '-e'.
- tinyxxd was 119.92% faster with flag '-u'.
- tinyxxd was 146.76% faster with flag '-E'.
- tinyxxd was 61.38% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 25.50% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 6.89% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 48.44% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 3.12% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 7.44% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 0.41% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 0.10% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 1.00% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 1.59% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 3.68% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 2.77% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 1.44% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 15.33% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 2.35% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 41.01% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 2.96% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 4.35% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 0.65% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 0.58% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 0.48% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 0.70% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 1.27% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 0.63% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 0.03% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 21.16% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 1.60% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 33.40% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 1.25% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 0.84% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 5.50% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 2.71% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 1.46% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 1.76% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 0.07% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 0.21% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 0.57% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 11.72% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 0.57% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 127.24% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 2.87% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 0.78% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 0.47% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 0.65% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 0.44% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 0.79% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 3.99% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 1.91% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 0.14% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 21.65% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 5.16% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 9.13% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 0.04% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 3.52% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 0.19% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 0.55% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 0.12% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 4.82% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 1.24% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 0.24% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 1.55% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 12.09% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 3.15% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 21.78% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 0.93% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 0.11% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 3.51% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 1.36% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 0.57% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 0.61% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 0.14% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 0.05% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 2.40% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 24.09% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 2.24% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 12.18% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 1.27% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 1.72% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 0.44% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 1.67% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 1.12% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 0.44% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 0.93% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 0.65% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 1.01% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 12.72% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 3.15% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 7.89% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 7.21% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 0.03% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 0.77% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 0.74% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 1.23% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 1.33% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 1.23% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 1.94% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 2.07% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 10.60% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 1.61% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 8.91% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 5.11% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 1.20% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 2.01% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 0.80% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 7.24% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 14.39% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 0.36% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 1.37% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 0.73% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 21.84% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 11.27% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 5.74% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 0.27% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 2.85% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 1.39% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 2.79% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 1.19% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 0.43% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 3.34% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 6.79% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.74% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 15.45% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 0.64% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 34.14% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 2.25% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 1.69% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 2.21% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 0.61% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 0.73% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 0.51% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 0.93% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 0.01% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 1.25% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 12.51% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 0.07% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 4.87% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 1.74% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 2.08% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 4.79% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 0.70% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 0.92% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 0.97% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 1.22% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 1.73% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 0.07% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 16.92% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 3.03% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 4.83% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 0.04% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 4.02% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 0.87% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 0.63% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 2.18% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 0.37% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 1.12% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 0.25% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 1.27% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 11.81% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 0.07% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 5.19% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 0.29% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 1.65% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 2.70% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 1.30% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 1.68% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 0.28% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 1.53% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 2.55% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 0.70% compared to the last run.
---
Report generated on: 2026-04-01T21:43:00.122119
