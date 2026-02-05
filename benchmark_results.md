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
| xxd | 64 | 1.33 |  |
| xxd | 64 | 2.26 | -r |
| xxd | 64 | 4.05 | -b |
| xxd | 64 | 4.46 | -r -b |
| xxd | 64 | 1.75 |  |
| xxd | 64 | 1.09 | -p |
| xxd | 64 | 4.90 | -i |
| xxd | 64 | 1.33 | -e |
| xxd | 64 | 2.72 | -b |
| xxd | 64 | 1.32 | -u |
| xxd | 64 | 1.50 | -E |
| xxd | 64 | 5.94 | -b -i |
| tinyxxd | 64 | 0.87 |  |
| tinyxxd | 64 | 0.86 | -r |
| tinyxxd | 64 | 4.47 | -b |
| tinyxxd | 64 | 1.58 | -r -b |
| tinyxxd | 64 | 1.10 |  |
| tinyxxd | 64 | 0.92 | -p |
| tinyxxd | 64 | 4.66 | -i |
| tinyxxd | 64 | 1.14 | -e |
| tinyxxd | 64 | 3.21 | -b |
| tinyxxd | 64 | 0.90 | -u |
| tinyxxd | 64 | 1.06 | -E |
| tinyxxd | 64 | 4.09 | -b -i |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.16 | -r |
| xxd | 32 | 1.78 | -b |
| xxd | 32 | 2.36 | -r -b |
| xxd | 32 | 0.75 |  |
| xxd | 32 | 0.55 | -p |
| xxd | 32 | 2.42 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.34 | -b |
| xxd | 32 | 0.65 | -u |
| xxd | 32 | 0.73 | -E |
| xxd | 32 | 2.96 | -b -i |
| tinyxxd | 32 | 0.46 |  |
| tinyxxd | 32 | 0.42 | -r |
| tinyxxd | 32 | 2.26 | -b |
| tinyxxd | 32 | 0.80 | -r -b |
| tinyxxd | 32 | 0.51 |  |
| tinyxxd | 32 | 0.45 | -p |
| tinyxxd | 32 | 2.29 | -i |
| tinyxxd | 32 | 0.59 | -e |
| tinyxxd | 32 | 1.60 | -b |
| tinyxxd | 32 | 0.48 | -u |
| tinyxxd | 32 | 0.52 | -E |
| tinyxxd | 32 | 2.12 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.21 | -r |
| tinyxxd | 16 | 0.92 | -b |
| tinyxxd | 16 | 0.40 | -r -b |
| tinyxxd | 16 | 0.26 |  |
| tinyxxd | 16 | 0.23 | -p |
| tinyxxd | 16 | 1.16 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.82 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.03 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.88 | -b |
| xxd | 16 | 1.11 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.26 | -p |
| xxd | 16 | 1.22 | -i |
| xxd | 16 | 0.33 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.49 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.56 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.62 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.73 | -b -i |
| tinyxxd | 8 | 0.12 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.42 | -b |
| tinyxxd | 8 | 0.20 | -r -b |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.40 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.13 | -E |
| tinyxxd | 8 | 0.52 | -b -i |
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
| xxd | 4 | 0.38 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.21 | -b |
| tinyxxd | 4 | 0.10 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.32 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.26 | -b -i |
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
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.14 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
| xxd | 1 | 0.03 |  |
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
| xxd | 1 | 0.10 | -b -i |
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
- For sample size 64 MiB, tinyxxd was 56.79% faster with no flag.
- For sample size 64 MiB, tinyxxd was 163.77% faster with flags '-r'.
- For sample size 64 MiB, xxd was 13.36% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 182.46% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 18.40% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 16.43% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 47.26% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 41.66% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 45.03% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 45.66% faster with no flag.
- For sample size 32 MiB, tinyxxd was 172.96% faster with flags '-r'.
- For sample size 32 MiB, xxd was 23.63% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 197.15% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 23.06% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 5.82% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 13.69% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 37.31% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 40.76% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 39.19% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 49.24% faster with no flag.
- For sample size 16 MiB, tinyxxd was 177.74% faster with flags '-r'.
- For sample size 16 MiB, xxd was 12.82% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 179.69% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 16.12% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 20.95% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 53.44% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 39.13% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 45.31% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 42.54% faster with no flag.
- For sample size 8 MiB, tinyxxd was 165.65% faster with flags '-r'.
- For sample size 8 MiB, xxd was 16.79% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 175.40% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 19.41% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 6.91% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 22.76% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 58.08% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 42.81% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 42.09% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 45.00% faster with no flag.
- For sample size 4 MiB, tinyxxd was 162.40% faster with flags '-r'.
- For sample size 4 MiB, xxd was 15.95% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 186.11% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 18.43% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 21.98% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 49.20% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 40.28% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 44.60% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 39.94% faster with no flag.
- For sample size 2 MiB, tinyxxd was 151.91% faster with flags '-r'.
- For sample size 2 MiB, xxd was 17.24% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 165.86% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 18.64% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 19.76% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 47.72% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 35.72% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 43.08% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 38.54% faster with no flag.
- For sample size 1 MiB, tinyxxd was 136.41% faster with flags '-r'.
- For sample size 1 MiB, xxd was 14.67% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 162.94% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 16.73% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 20.58% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 35.03% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 28.02% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 39.98% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 31.42% faster than xxd.
- For sample 32 MiB, tinyxxd was 28.38% faster than xxd.
- For sample 16 MiB, tinyxxd was 32.71% faster than xxd.
- For sample 8 MiB, tinyxxd was 32.14% faster than xxd.
- For sample 4 MiB, tinyxxd was 30.61% faster than xxd.
- For sample 2 MiB, tinyxxd was 30.13% faster than xxd.
- For sample 1 MiB, tinyxxd was 29.28% faster than xxd.

### Performance by flag
- tinyxxd was 51.30% faster with no flag.
- tinyxxd was 167.36% faster with flag '-r'.
- xxd was 16.13% faster with flag '-b'.
- tinyxxd was 185.02% faster with flag '-r -b'.
- tinyxxd was 19.31% faster with flag '-p'.
- tinyxxd was 16.93% faster with flag '-e'.
- tinyxxd was 45.98% faster with flag '-u'.
- tinyxxd was 40.90% faster with flag '-E'.
- tinyxxd was 43.28% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 24.18% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 0.28% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 50.58% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 4.62% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 0.16% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 2.18% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 0.27% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 3.97% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 1.17% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 0.04% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 0.87% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 2.39% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 26.49% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 3.10% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 40.35% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 1.01% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 6.47% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 2.77% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 1.69% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 3.15% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 0.65% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 1.97% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 2.64% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 0.75% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 11.44% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 0.58% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 33.26% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 3.74% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 0.95% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 4.11% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 0.74% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 0.29% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.19% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 0.77% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 1.87% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 8.61% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 11.75% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 2.75% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 42.86% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 0.46% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 2.39% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 0.42% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 0.75% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 3.43% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 1.16% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 12.03% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 1.83% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 3.01% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 21.83% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 0.90% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 16.60% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 2.16% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 5.43% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 0.07% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 0.78% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 0.15% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 4.02% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 1.69% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 0.44% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 0.17% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 10.55% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 0.14% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 29.42% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 7.28% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 3.18% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 5.55% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 1.03% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 0.78% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 0.73% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 0.69% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 1.28% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 2.80% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 10.31% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 0.63% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 0.95% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 0.19% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 1.19% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 1.85% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 1.33% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 0.12% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 7.59% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 3.44% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 1.67% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 0.03% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 6.49% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 2.40% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 5.80% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 1.59% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 1.10% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 0.60% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 0.99% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 0.53% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 0.93% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 0.61% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 1.09% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 0.20% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 8.60% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 0.82% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 8.90% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 0.74% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 0.51% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 1.16% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 1.46% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 0.81% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 0.96% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 0.24% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 1.10% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 0.81% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 13.92% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 2.48% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 5.98% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 0.09% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 0.51% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 1.16% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 9.64% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 1.08% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.78% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 1.16% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 0.00% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 0.15% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 11.75% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 2.53% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 6.46% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 0.85% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 3.21% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 3.49% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 1.96% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 2.65% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.96% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 3.51% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 1.18% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 1.37% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 8.25% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 1.55% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 7.77% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 2.04% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 2.46% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 1.97% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 2.25% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 2.14% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 0.60% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 1.89% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 1.03% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 2.46% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 3.24% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 16.81% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 8.65% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 2.41% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 4.05% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 3.10% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 1.91% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 3.27% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 2.62% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 1.25% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 2.41% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 2.16% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 9.93% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 6.10% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 6.14% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 3.25% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 6.32% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 4.92% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 0.19% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 2.55% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 9.77% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 7.07% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 7.70% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 2.50% compared to the last run.
---
Report generated on: 2026-02-05T14:29:06.953975
