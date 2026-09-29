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
| xxd | 64 | 1.57 |  |
| xxd | 64 | 2.22 | -r |
| xxd | 64 | 4.22 | -b |
| xxd | 64 | 4.26 | -r -b |
| xxd | 64 | 1.83 |  |
| xxd | 64 | 1.06 | -p |
| xxd | 64 | 5.07 | -i |
| xxd | 64 | 1.36 | -e |
| xxd | 64 | 2.97 | -b |
| xxd | 64 | 1.57 | -u |
| xxd | 64 | 1.65 | -E |
| xxd | 64 | 5.55 | -b -i |
| tinyxxd | 64 | 0.60 |  |
| tinyxxd | 64 | 0.84 | -r |
| tinyxxd | 64 | 3.93 | -b |
| tinyxxd | 64 | 3.68 | -r -b |
| tinyxxd | 64 | 0.90 |  |
| tinyxxd | 64 | 0.63 | -p |
| tinyxxd | 64 | 4.70 | -i |
| tinyxxd | 64 | 1.22 | -e |
| tinyxxd | 64 | 2.98 | -b |
| tinyxxd | 64 | 0.61 | -u |
| tinyxxd | 64 | 0.61 | -E |
| tinyxxd | 64 | 3.44 | -b -i |
| tinyxxd | 32 | 0.31 |  |
| tinyxxd | 32 | 0.42 | -r |
| tinyxxd | 32 | 1.77 | -b |
| tinyxxd | 32 | 1.82 | -r -b |
| tinyxxd | 32 | 0.38 |  |
| tinyxxd | 32 | 0.31 | -p |
| tinyxxd | 32 | 2.36 | -i |
| tinyxxd | 32 | 0.59 | -e |
| tinyxxd | 32 | 1.48 | -b |
| tinyxxd | 32 | 0.29 | -u |
| tinyxxd | 32 | 0.30 | -E |
| tinyxxd | 32 | 1.73 | -b -i |
| xxd | 32 | 0.78 |  |
| xxd | 32 | 1.12 | -r |
| xxd | 32 | 3.06 | -b |
| xxd | 32 | 2.42 | -r -b |
| xxd | 32 | 0.87 |  |
| xxd | 32 | 0.57 | -p |
| xxd | 32 | 2.55 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.48 | -b |
| xxd | 32 | 0.79 | -u |
| xxd | 32 | 0.82 | -E |
| xxd | 32 | 2.77 | -b -i |
| tinyxxd | 16 | 0.15 |  |
| tinyxxd | 16 | 0.26 | -r |
| tinyxxd | 16 | 0.79 | -b |
| tinyxxd | 16 | 0.91 | -r -b |
| tinyxxd | 16 | 0.19 |  |
| tinyxxd | 16 | 0.16 | -p |
| tinyxxd | 16 | 1.19 | -i |
| tinyxxd | 16 | 0.30 | -e |
| tinyxxd | 16 | 0.76 | -b |
| tinyxxd | 16 | 0.15 | -u |
| tinyxxd | 16 | 0.15 | -E |
| tinyxxd | 16 | 0.85 | -b -i |
| xxd | 16 | 0.39 |  |
| xxd | 16 | 0.56 | -r |
| xxd | 16 | 0.82 | -b |
| xxd | 16 | 1.13 | -r -b |
| xxd | 16 | 0.43 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.29 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.74 | -b |
| xxd | 16 | 0.40 | -u |
| xxd | 16 | 0.40 | -E |
| xxd | 16 | 1.41 | -b -i |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.40 | -b |
| xxd | 8 | 0.56 | -r -b |
| xxd | 8 | 0.22 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.63 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.20 | -u |
| xxd | 8 | 0.20 | -E |
| xxd | 8 | 0.71 | -b -i |
| tinyxxd | 8 | 0.08 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.40 | -b |
| tinyxxd | 8 | 0.46 | -r -b |
| tinyxxd | 8 | 0.10 |  |
| tinyxxd | 8 | 0.08 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.18 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.08 | -u |
| tinyxxd | 8 | 0.08 | -E |
| tinyxxd | 8 | 0.42 | -b -i |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.20 | -b |
| xxd | 4 | 0.28 | -r -b |
| xxd | 4 | 0.11 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.32 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.10 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.35 | -b -i |
| tinyxxd | 4 | 0.04 |  |
| tinyxxd | 4 | 0.05 | -r |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.23 | -r -b |
| tinyxxd | 4 | 0.05 |  |
| tinyxxd | 4 | 0.04 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.04 | -u |
| tinyxxd | 4 | 0.04 | -E |
| tinyxxd | 4 | 0.21 | -b -i |
| tinyxxd | 2 | 0.02 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.12 | -r -b |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.02 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.02 | -u |
| tinyxxd | 2 | 0.02 | -E |
| tinyxxd | 2 | 0.11 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.14 | -r -b |
| xxd | 2 | 0.06 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.18 | -b -i |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.07 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b -i |
| tinyxxd | 1 | 0.01 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.06 | -r -b |
| tinyxxd | 1 | 0.01 |  |
| tinyxxd | 1 | 0.01 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.01 | -u |
| tinyxxd | 1 | 0.01 | -E |
| tinyxxd | 1 | 0.06 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 127.68% faster with no flag.
- For sample size 64 MiB, tinyxxd was 164.42% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 15.70% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 69.32% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 7.73% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 11.33% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 157.82% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 171.47% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 61.37% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 139.92% faster with no flag.
- For sample size 32 MiB, tinyxxd was 168.62% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 39.47% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 32.81% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 82.25% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 8.14% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 14.33% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 169.35% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 171.52% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 60.51% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 141.19% faster with no flag.
- For sample size 16 MiB, tinyxxd was 120.62% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 23.42% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 78.67% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 8.25% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 13.94% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 162.28% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 173.14% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 66.34% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 140.95% faster with no flag.
- For sample size 8 MiB, tinyxxd was 166.29% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 21.68% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 77.45% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 5.97% faster with flags '-i'.
- For sample size 8 MiB, xxd was 7.70% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 155.31% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 164.31% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 66.55% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 138.68% faster with no flag.
- For sample size 4 MiB, tinyxxd was 159.46% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 22.21% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 75.44% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 8.39% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 14.40% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 156.27% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 162.86% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 65.66% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 124.28% faster with no flag.
- For sample size 2 MiB, tinyxxd was 163.08% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 23.19% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 68.76% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 7.84% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 14.17% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 140.87% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 150.88% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 64.96% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 120.11% faster with no flag.
- For sample size 1 MiB, tinyxxd was 145.97% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 21.49% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 65.57% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.55% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 12.54% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 123.77% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 133.44% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 66.20% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 38.14% faster than xxd.
- For sample 32 MiB, tinyxxd was 52.22% faster than xxd.
- For sample 16 MiB, tinyxxd was 39.87% faster than xxd.
- For sample 8 MiB, tinyxxd was 38.01% faster than xxd.
- For sample 4 MiB, tinyxxd was 40.27% faster than xxd.
- For sample 2 MiB, tinyxxd was 39.30% faster than xxd.
- For sample 1 MiB, tinyxxd was 38.27% faster than xxd.

### Performance by flag
- tinyxxd was 133.27% faster with no flag.
- tinyxxd was 158.70% faster with flag '-r'.
- tinyxxd was 11.80% faster with flag '-b'.
- tinyxxd was 21.70% faster with flag '-r -b'.
- tinyxxd was 74.41% faster with flag '-p'.
- tinyxxd was 7.80% faster with flag '-i'.
- tinyxxd was 11.13% faster with flag '-e'.
- tinyxxd was 160.33% faster with flag '-u'.
- tinyxxd was 170.21% faster with flag '-E'.
- tinyxxd was 62.33% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 10.22% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 0.56% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 40.75% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 1.99% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 4.62% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 5.65% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 2.32% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 0.97% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 0.81% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 1.65% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 2.09% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 8.68% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 21.31% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 1.61% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 31.79% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 0.23% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 18.19% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 0.42% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 0.99% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 2.37% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 0.14% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 1.55% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 1.37% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 2.59% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 17.38% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 1.46% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 18.76% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd improved by 0.32% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 0.17% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 0.38% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 0.41% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 0.77% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 0.80% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 0.02% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 5.66% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 1.13% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 10.45% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 0.22% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 104.76% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 13.39% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 0.06% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 3.38% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 0.48% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 1.48% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.86% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 0.03% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 0.13% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 9.84% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 21.42% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 25.19% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 4.56% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 1.87% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 2.54% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 0.51% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 0.87% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 0.80% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 0.47% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 2.78% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 0.65% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 0.03% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 11.39% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 0.19% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 9.78% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 2.30% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 2.17% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 0.07% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 1.64% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 0.77% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 1.23% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 0.17% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 0.67% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 8.85% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 10.57% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 0.45% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 2.62% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 0.42% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 0.25% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 0.16% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 3.26% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 0.64% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 8.24% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 4.47% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 3.43% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 8.07% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 22.83% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 0.80% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 5.80% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 0.67% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 0.06% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 0.09% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 0.32% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 22.64% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 1.89% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 0.45% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 0.46% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 0.75% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 8.82% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 0.35% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 5.50% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 0.41% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 0.49% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 0.29% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 2.72% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 1.32% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 0.37% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 1.41% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 1.49% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 8.16% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 20.86% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 1.71% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 6.07% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 0.33% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 2.17% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 0.52% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 0.54% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 0.67% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.89% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 2.89% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 0.05% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.25% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 20.03% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 1.42% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 4.92% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 1.32% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 0.32% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 1.70% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 0.94% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 1.21% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.47% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 0.58% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 1.23% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.69% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 10.65% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 1.10% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 4.90% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 0.29% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 1.88% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 0.41% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 2.17% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 0.72% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 1.11% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 1.23% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 0.19% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 8.16% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 8.54% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 1.50% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 4.04% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 1.42% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 0.93% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 1.54% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 2.73% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 2.11% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 0.98% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 0.94% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 1.46% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 6.92% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 15.66% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 1.78% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 0.73% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 0.40% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 0.53% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 9.48% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 31.95% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 38.53% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 3.80% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 0.08% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 0.56% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 0.78% compared to the last run.
---
Report generated on: 2026-09-29T12:54:08.449369
