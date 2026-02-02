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
| xxd | 64 | 1.35 |  |
| xxd | 64 | 2.35 | -r |
| xxd | 64 | 4.09 | -b |
| xxd | 64 | 4.61 | -r -b |
| xxd | 64 | 1.78 |  |
| xxd | 64 | 1.10 | -p |
| xxd | 64 | 4.88 | -i |
| xxd | 64 | 1.35 | -e |
| xxd | 64 | 2.72 | -b |
| xxd | 64 | 1.30 | -u |
| xxd | 64 | 1.48 | -E |
| xxd | 64 | 5.92 | -b -i |
| tinyxxd | 64 | 1.06 |  |
| tinyxxd | 64 | 1.32 | -r |
| tinyxxd | 64 | 4.92 | -b |
| tinyxxd | 64 | 2.01 | -r -b |
| tinyxxd | 64 | 1.31 |  |
| tinyxxd | 64 | 0.89 | -p |
| tinyxxd | 64 | 4.65 | -i |
| tinyxxd | 64 | 1.10 | -e |
| tinyxxd | 64 | 3.27 | -b |
| tinyxxd | 64 | 1.01 | -u |
| tinyxxd | 64 | 1.09 | -E |
| tinyxxd | 64 | 4.11 | -b -i |
| xxd | 32 | 0.66 |  |
| xxd | 32 | 1.11 | -r |
| xxd | 32 | 1.77 | -b |
| xxd | 32 | 2.27 | -r -b |
| xxd | 32 | 0.77 |  |
| xxd | 32 | 0.55 | -p |
| xxd | 32 | 2.43 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.33 | -b |
| xxd | 32 | 0.67 | -u |
| xxd | 32 | 0.76 | -E |
| xxd | 32 | 2.98 | -b -i |
| tinyxxd | 32 | 0.50 |  |
| tinyxxd | 32 | 0.66 | -r |
| tinyxxd | 32 | 3.23 | -b |
| tinyxxd | 32 | 1.01 | -r -b |
| tinyxxd | 32 | 0.58 |  |
| tinyxxd | 32 | 0.45 | -p |
| tinyxxd | 32 | 2.35 | -i |
| tinyxxd | 32 | 0.55 | -e |
| tinyxxd | 32 | 1.59 | -b |
| tinyxxd | 32 | 0.50 | -u |
| tinyxxd | 32 | 0.57 | -E |
| tinyxxd | 32 | 2.09 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.56 | -r |
| xxd | 16 | 0.88 | -b |
| xxd | 16 | 1.18 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.21 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.46 | -b -i |
| tinyxxd | 16 | 0.25 |  |
| tinyxxd | 16 | 0.34 | -r |
| tinyxxd | 16 | 0.95 | -b |
| tinyxxd | 16 | 0.50 | -r -b |
| tinyxxd | 16 | 0.29 |  |
| tinyxxd | 16 | 0.22 | -p |
| tinyxxd | 16 | 1.19 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.80 | -b |
| tinyxxd | 16 | 0.25 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.02 | -b -i |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.17 | -r |
| tinyxxd | 8 | 0.44 | -b |
| tinyxxd | 8 | 0.25 | -r -b |
| tinyxxd | 8 | 0.15 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.40 | -b |
| tinyxxd | 8 | 0.13 | -u |
| tinyxxd | 8 | 0.14 | -E |
| tinyxxd | 8 | 0.51 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.59 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.13 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.76 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.29 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.30 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.08 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.09 | -r |
| tinyxxd | 4 | 0.21 | -b |
| tinyxxd | 4 | 0.13 | -r -b |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.07 | -r |
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
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.08 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.04 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b -i |
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
- For sample size 64 MiB, tinyxxd was 32.30% faster with no flag.
- For sample size 64 MiB, tinyxxd was 78.32% faster with flags '-r'.
- For sample size 64 MiB, xxd was 20.10% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 129.72% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 23.89% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 21.96% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 28.34% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 36.55% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 44.07% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 32.42% faster with no flag.
- For sample size 32 MiB, tinyxxd was 67.40% faster with flags '-r'.
- For sample size 32 MiB, xxd was 55.34% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 125.03% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 21.66% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 24.49% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 33.15% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 33.29% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 42.55% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 33.14% faster with no flag.
- For sample size 16 MiB, tinyxxd was 65.50% faster with flags '-r'.
- For sample size 16 MiB, xxd was 12.84% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 135.61% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 23.82% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 23.01% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 34.42% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 37.21% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 42.21% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 28.55% faster with no flag.
- For sample size 8 MiB, tinyxxd was 75.73% faster with flags '-r'.
- For sample size 8 MiB, xxd was 19.46% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 131.12% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 18.12% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 5.77% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 23.08% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 32.11% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 35.96% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 49.11% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 30.68% faster with no flag.
- For sample size 4 MiB, tinyxxd was 66.03% faster with flags '-r'.
- For sample size 4 MiB, xxd was 15.75% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 127.12% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 23.96% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 22.08% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 30.79% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 35.80% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 43.24% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 30.20% faster with no flag.
- For sample size 2 MiB, tinyxxd was 71.42% faster with flags '-r'.
- For sample size 2 MiB, xxd was 18.41% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 123.14% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 21.62% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 20.61% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 31.36% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 32.55% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 44.99% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 29.13% faster with no flag.
- For sample size 1 MiB, tinyxxd was 66.43% faster with flags '-r'.
- For sample size 1 MiB, xxd was 16.00% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 129.49% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 21.01% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 18.67% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 30.36% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 31.52% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 42.82% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 23.20% faster than xxd.
- For sample 32 MiB, tinyxxd was 13.50% faster than xxd.
- For sample 16 MiB, tinyxxd was 25.57% faster than xxd.
- For sample 8 MiB, tinyxxd was 26.35% faster than xxd.
- For sample 4 MiB, tinyxxd was 25.42% faster than xxd.
- For sample 2 MiB, tinyxxd was 25.10% faster than xxd.
- For sample 1 MiB, tinyxxd was 25.28% faster than xxd.

### Performance by flag
- tinyxxd was 32.09% faster with no flag.
- tinyxxd was 73.14% faster with flag '-r'.
- xxd was 27.55% faster with flag '-b'.
- tinyxxd was 129.17% faster with flag '-r -b'.
- tinyxxd was 22.88% faster with flag '-p'.
- tinyxxd was 22.75% faster with flag '-e'.
- tinyxxd was 30.68% faster with flag '-u'.
- tinyxxd was 35.61% faster with flag '-E'.
- tinyxxd was 43.74% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 18.48% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 1.52% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 50.61% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 4.66% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 7.57% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 0.61% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 0.42% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 0.60% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 0.26% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 2.24% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 0.28% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 2.36% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 17.48% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 0.53% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 53.79% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 2.05% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 1.60% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 6.35% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 0.70% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 0.28% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 2.09% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 1.97% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 1.60% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 0.23% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 11.25% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 2.60% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 32.31% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 3.65% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 3.13% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 0.18% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 1.23% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 0.18% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.14% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 0.92% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 1.32% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 0.15% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 14.23% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 1.90% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 100.95% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd improved by 0.93% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 0.24% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 2.78% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 2.04% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 0.75% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 1.04% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 16.29% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 4.86% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 2.21% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 11.45% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 3.70% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 32.74% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 4.53% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 0.90% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 3.32% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 0.36% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 1.40% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 0.29% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 0.49% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 0.36% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 2.18% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 14.97% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 2.08% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 19.08% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 2.43% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 0.12% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 4.77% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 3.18% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 0.80% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 1.03% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 2.38% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 0.69% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 0.19% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 12.92% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 1.98% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 8.65% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 1.50% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 1.00% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 3.98% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 0.04% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 0.99% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 0.26% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 0.07% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 0.83% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 0.08% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 10.36% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 0.48% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 10.03% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 0.76% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 0.02% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 3.33% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 0.10% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 2.40% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 0.22% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 1.40% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 0.91% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 4.81% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 9.21% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 1.05% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 8.20% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 3.45% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 1.97% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 4.83% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 1.52% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 0.81% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 2.06% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 0.24% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 0.55% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 0.19% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 13.77% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 7.00% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 6.24% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 2.05% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 0.63% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 4.45% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 0.20% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 1.34% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.18% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 1.33% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 1.41% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 1.21% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 10.69% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 0.29% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 7.09% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 2.69% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 0.81% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 1.19% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 0.03% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 2.87% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 0.36% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 0.32% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 1.37% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 0.52% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 13.06% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 0.49% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 3.96% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 1.38% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 2.29% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 3.79% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 1.53% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 0.47% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 1.33% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 0.81% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 1.84% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.17% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 7.19% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 0.13% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 7.94% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 4.48% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 1.78% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 0.55% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 0.35% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 0.33% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 0.99% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 13.96% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 0.09% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 1.04% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 9.24% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 3.50% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 3.00% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 0.49% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 0.08% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 4.79% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 1.59% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 0.51% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 2.12% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 2.08% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 1.49% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 0.67% compared to the last run.
---
Report generated on: 2026-02-02T09:18:38.787503
