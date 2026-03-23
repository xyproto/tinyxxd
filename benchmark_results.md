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
| tinyxxd | 64 | 0.93 |  |
| tinyxxd | 64 | 0.86 | -r |
| tinyxxd | 64 | 4.73 | -b |
| tinyxxd | 64 | 1.74 | -r -b |
| tinyxxd | 64 | 1.14 |  |
| tinyxxd | 64 | 0.97 | -p |
| tinyxxd | 64 | 4.74 | -i |
| tinyxxd | 64 | 1.13 | -e |
| tinyxxd | 64 | 3.24 | -b |
| tinyxxd | 64 | 0.86 | -u |
| tinyxxd | 64 | 1.08 | -E |
| tinyxxd | 64 | 4.33 | -b -i |
| xxd | 64 | 1.34 |  |
| xxd | 64 | 2.23 | -r |
| xxd | 64 | 3.92 | -b |
| xxd | 64 | 4.64 | -r -b |
| xxd | 64 | 1.76 |  |
| xxd | 64 | 1.11 | -p |
| xxd | 64 | 5.03 | -i |
| xxd | 64 | 1.34 | -e |
| xxd | 64 | 2.76 | -b |
| xxd | 64 | 1.33 | -u |
| xxd | 64 | 1.49 | -E |
| xxd | 64 | 5.62 | -b -i |
| tinyxxd | 32 | 0.45 |  |
| tinyxxd | 32 | 0.43 | -r |
| tinyxxd | 32 | 2.07 | -b |
| tinyxxd | 32 | 0.88 | -r -b |
| tinyxxd | 32 | 0.54 |  |
| tinyxxd | 32 | 0.49 | -p |
| tinyxxd | 32 | 2.33 | -i |
| tinyxxd | 32 | 0.57 | -e |
| tinyxxd | 32 | 1.62 | -b |
| tinyxxd | 32 | 0.44 | -u |
| tinyxxd | 32 | 0.53 | -E |
| tinyxxd | 32 | 2.13 | -b -i |
| xxd | 32 | 0.66 |  |
| xxd | 32 | 1.17 | -r |
| xxd | 32 | 3.10 | -b |
| xxd | 32 | 2.38 | -r -b |
| xxd | 32 | 0.76 |  |
| xxd | 32 | 0.53 | -p |
| xxd | 32 | 2.50 | -i |
| xxd | 32 | 0.70 | -e |
| xxd | 32 | 1.36 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.77 | -E |
| xxd | 32 | 2.88 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.22 | -r |
| tinyxxd | 16 | 0.88 | -b |
| tinyxxd | 16 | 0.44 | -r -b |
| tinyxxd | 16 | 0.26 |  |
| tinyxxd | 16 | 0.24 | -p |
| tinyxxd | 16 | 1.24 | -i |
| tinyxxd | 16 | 0.29 | -e |
| tinyxxd | 16 | 0.81 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.07 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.81 | -b |
| xxd | 16 | 1.19 | -r -b |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.27 | -p |
| xxd | 16 | 1.26 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.68 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.40 | -E |
| xxd | 16 | 1.40 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.38 | -b |
| xxd | 8 | 0.60 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.64 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.72 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.43 | -b |
| tinyxxd | 8 | 0.22 | -r -b |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.15 | -e |
| tinyxxd | 8 | 0.41 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.14 | -E |
| tinyxxd | 8 | 0.54 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.29 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.35 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.35 | -b -i |
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
| tinyxxd | 4 | 0.27 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.06 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.04 | -E |
| tinyxxd | 2 | 0.14 | -b -i |
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
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 50.15% faster with no flag.
- For sample size 64 MiB, tinyxxd was 160.00% faster with flags '-r'.
- For sample size 64 MiB, xxd was 19.44% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 166.93% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 14.15% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 5.98% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 18.87% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 55.28% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 37.54% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 29.80% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 44.70% faster with no flag.
- For sample size 32 MiB, tinyxxd was 173.28% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 20.73% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 171.11% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 8.13% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 7.16% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 22.86% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 49.78% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 45.74% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 35.34% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 47.10% faster with no flag.
- For sample size 16 MiB, tinyxxd was 165.95% faster with flags '-r'.
- For sample size 16 MiB, xxd was 13.02% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 172.51% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 12.21% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 18.05% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 53.39% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 47.25% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 31.60% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 49.16% faster with no flag.
- For sample size 8 MiB, tinyxxd was 148.26% faster with flags '-r'.
- For sample size 8 MiB, xxd was 16.02% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 171.46% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 14.90% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 8.40% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 17.40% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 53.34% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 38.36% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 33.83% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 47.35% faster with no flag.
- For sample size 4 MiB, tinyxxd was 152.49% faster with flags '-r'.
- For sample size 4 MiB, xxd was 17.23% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 161.53% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 14.22% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 17.81% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 18.72% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 51.63% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 36.43% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 29.92% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 41.93% faster with no flag.
- For sample size 2 MiB, tinyxxd was 148.22% faster with flags '-r'.
- For sample size 2 MiB, xxd was 18.39% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 158.98% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 14.11% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 16.01% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 45.51% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 33.34% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 28.09% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 34.30% faster with no flag.
- For sample size 1 MiB, tinyxxd was 132.08% faster with flags '-r'.
- For sample size 1 MiB, xxd was 17.11% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 147.12% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 11.50% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 5.95% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 15.85% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 41.31% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 35.61% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 32.34% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 26.47% faster than xxd.
- For sample 32 MiB, tinyxxd was 40.09% faster than xxd.
- For sample 16 MiB, tinyxxd was 29.60% faster than xxd.
- For sample 8 MiB, tinyxxd was 30.67% faster than xxd.
- For sample 4 MiB, tinyxxd was 30.93% faster than xxd.
- For sample 2 MiB, tinyxxd was 27.03% faster than xxd.
- For sample 1 MiB, tinyxxd was 26.62% faster than xxd.

### Performance by flag
- tinyxxd was 48.00% faster with no flag.
- tinyxxd was 162.52% faster with flag '-r'.
- xxd was 6.83% faster with flag '-b'.
- tinyxxd was 168.48% faster with flag '-r -b'.
- tinyxxd was 12.43% faster with flag '-p'.
- tinyxxd was 6.12% faster with flag '-i'.
- tinyxxd was 19.59% faster with flag '-e'.
- tinyxxd was 53.08% faster with flag '-u'.
- tinyxxd was 40.70% faster with flag '-E'.
- tinyxxd was 31.66% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 18.23% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 1.52% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 44.71% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 11.77% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 0.74% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 10.72% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 0.16% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 0.55% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 0.94% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 5.99% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 2.08% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 4.83% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 24.25% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 0.18% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 41.82% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 2.67% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 0.21% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 0.09% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 0.64% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 1.56% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 0.14% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 0.19% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 0.45% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 0.74% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 18.06% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 1.08% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 28.80% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 9.13% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 0.97% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 9.84% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 0.16% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 0.16% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 0.84% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 1.28% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 1.98% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 3.47% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 11.04% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 0.19% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 126.53% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 0.35% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 2.36% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 4.04% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 0.73% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 1.45% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.35% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 0.12% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 1.41% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 2.13% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 17.56% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 0.63% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 8.51% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 10.86% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 0.63% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 9.47% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 4.76% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 0.84% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 0.04% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 3.77% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 0.64% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 3.19% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 12.63% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 0.09% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 19.42% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 0.22% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 2.51% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 0.39% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 0.64% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 0.57% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 0.19% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 0.76% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 1.63% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 3.16% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 10.23% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 3.97% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 9.74% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 4.33% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 1.49% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 0.32% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 1.81% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 0.67% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 0.52% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 0.15% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 1.12% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 0.10% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 19.55% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 3.96% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 5.90% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 10.29% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 3.48% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 9.16% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 11.43% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 1.20% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.02% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 2.04% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 2.70% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 4.34% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 8.48% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 0.43% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 7.86% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 2.09% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 3.33% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 1.45% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 10.50% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 0.78% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 1.39% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 0.99% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 0.12% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 2.15% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 17.82% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 3.85% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 2.31% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 10.43% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 0.33% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 8.66% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 0.08% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 0.16% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 7.19% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 1.74% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 1.76% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 4.57% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 13.54% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 4.57% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 8.65% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 12.08% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 0.21% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 9.04% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 1.46% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.83% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 0.43% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 3.14% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 4.57% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 9.49% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 4.35% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 6.48% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 1.86% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 0.98% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 3.55% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 1.07% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 0.14% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 0.85% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 3.03% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 1.42% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 3.90% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 5.87% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 2.79% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 6.81% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 12.65% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 5.44% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 9.09% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 0.60% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 1.03% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 2.25% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 0.07% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 1.35% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 3.53% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 8.86% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 0.80% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 6.56% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 0.79% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 3.38% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 0.85% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 0.24% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 0.66% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 0.83% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 0.72% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 2.30% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 0.16% compared to the last run.
---
Report generated on: 2026-03-23T14:15:01.296367
