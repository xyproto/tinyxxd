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

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| xxd | 64 | 1.36 |  |
| xxd | 64 | 2.19 | -r |
| xxd | 64 | 4.56 |  |
| xxd | 64 | 4.05 | -r |
| xxd | 64 | 1.28 |  |
| xxd | 64 | 0.97 | -p |
| xxd | 64 | 4.86 | -i |
| xxd | 64 | 1.28 | -e |
| xxd | 64 | 3.34 | -b |
| xxd | 64 | 1.40 | -u |
| xxd | 64 | 1.46 | -E |
| tinyxxd | 64 | 1.10 |  |
| tinyxxd | 64 | 2.03 | -r |
| tinyxxd | 64 | 4.50 |  |
| tinyxxd | 64 | 3.62 | -r |
| tinyxxd | 64 | 1.06 |  |
| tinyxxd | 64 | 0.83 | -p |
| tinyxxd | 64 | 4.84 | -i |
| tinyxxd | 64 | 1.13 | -e |
| tinyxxd | 64 | 2.91 | -b |
| tinyxxd | 64 | 1.05 | -u |
| tinyxxd | 64 | 1.22 | -E |
| xxd | 32 | 0.70 |  |
| xxd | 32 | 1.10 | -r |
| xxd | 32 | 2.08 |  |
| xxd | 32 | 1.95 | -r |
| xxd | 32 | 0.65 |  |
| xxd | 32 | 0.48 | -p |
| xxd | 32 | 2.45 | -i |
| xxd | 32 | 0.64 | -e |
| xxd | 32 | 1.49 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.73 | -E |
| tinyxxd | 32 | 0.58 |  |
| tinyxxd | 32 | 1.01 | -r |
| tinyxxd | 32 | 2.55 |  |
| tinyxxd | 32 | 1.79 | -r |
| tinyxxd | 32 | 0.53 |  |
| tinyxxd | 32 | 0.42 | -p |
| tinyxxd | 32 | 2.43 | -i |
| tinyxxd | 32 | 0.60 | -e |
| tinyxxd | 32 | 1.43 | -b |
| tinyxxd | 32 | 0.52 | -u |
| tinyxxd | 32 | 0.61 | -E |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.55 | -r |
| xxd | 16 | 0.95 |  |
| xxd | 16 | 0.98 | -r |
| xxd | 16 | 0.32 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.21 | -i |
| xxd | 16 | 0.33 | -e |
| xxd | 16 | 0.75 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.36 | -E |
| tinyxxd | 16 | 0.28 |  |
| tinyxxd | 16 | 0.50 | -r |
| tinyxxd | 16 | 0.90 |  |
| tinyxxd | 16 | 0.90 | -r |
| tinyxxd | 16 | 0.27 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.20 | -i |
| tinyxxd | 16 | 0.29 | -e |
| tinyxxd | 16 | 0.74 | -b |
| tinyxxd | 16 | 0.27 | -u |
| tinyxxd | 16 | 0.31 | -E |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.41 |  |
| xxd | 8 | 0.48 | -r |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.16 | -e |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.18 | -E |
| tinyxxd | 8 | 0.14 |  |
| tinyxxd | 8 | 0.25 | -r |
| tinyxxd | 8 | 0.41 |  |
| tinyxxd | 8 | 0.47 | -r |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.60 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.14 | -u |
| tinyxxd | 8 | 0.16 | -E |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.21 |  |
| xxd | 4 | 0.24 | -r |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.30 | -i |
| xxd | 4 | 0.08 | -e |
| xxd | 4 | 0.20 | -b |
| xxd | 4 | 0.08 | -u |
| xxd | 4 | 0.09 | -E |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.13 | -r |
| tinyxxd | 4 | 0.20 |  |
| tinyxxd | 4 | 0.23 | -r |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.18 | -b |
| tinyxxd | 4 | 0.07 | -u |
| tinyxxd | 4 | 0.08 | -E |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.07 | -r |
| tinyxxd | 2 | 0.10 |  |
| tinyxxd | 2 | 0.12 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.09 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.04 | -E |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.11 |  |
| xxd | 2 | 0.26 | -r |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.04 | -e |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.06 |  |
| xxd | 1 | 0.06 | -r |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.03 | -r |
| tinyxxd | 1 | 0.05 |  |
| tinyxxd | 1 | 0.06 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 8.13% faster with no flag.
- For sample size 64 MiB, tinyxxd was 10.46% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 16.02% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 12.98% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 14.85% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 32.97% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 20.04% faster with flags '-E'.
- For sample size 32 MiB, xxd was 6.75% faster with no flag.
- For sample size 32 MiB, tinyxxd was 9.19% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 15.38% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 7.00% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 26.92% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 19.61% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 11.21% faster with no flag.
- For sample size 16 MiB, tinyxxd was 9.46% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 13.91% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 14.15% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 21.34% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 17.70% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 10.19% faster with no flag.
- For sample size 8 MiB, tinyxxd was 14.66% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 24.33% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 18.29% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 13.01% faster with no flag.
- For sample size 4 MiB, tinyxxd was 8.08% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 14.60% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 14.67% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 8.58% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 21.12% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 17.89% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 11.58% faster with no flag.
- For sample size 2 MiB, tinyxxd was 79.63% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 11.96% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 13.54% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 20.14% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 16.31% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 12.96% faster with no flag.
- For sample size 1 MiB, tinyxxd was 8.72% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 13.37% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 14.50% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 21.64% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 8.75% faster with flags '-E'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 10.11% faster than xxd.
- For sample 32 MiB, tinyxxd was 3.75% faster than xxd.
- For sample 16 MiB, tinyxxd was 8.44% faster than xxd.
- For sample 8 MiB, tinyxxd was 6.51% faster than xxd.
- For sample 4 MiB, tinyxxd was 9.48% faster than xxd.
- For sample 2 MiB, tinyxxd was 25.49% faster than xxd.
- For sample 1 MiB, tinyxxd was 8.43% faster than xxd.

### Performance by flag
- tinyxxd was 10.70% faster '-r'.
- tinyxxd was 15.36% faster '-p'.
- tinyxxd was 10.91% faster '-e'.
- tinyxxd was 8.87% faster '-b'.
- tinyxxd was 28.70% faster '-u'.
- tinyxxd was 19.28% faster '-E'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 4.48% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 43.52% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 219.43% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 4.56% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 10.41% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 1.38% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 0.61% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 2.62% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 9.80% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 0.41% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 0.05% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 3.22% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 47.47% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 321.29% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 6.40% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 0.64% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 0.72% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 0.87% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 1.49% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 3.54% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 4.19% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 0.62% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 3.85% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 41.87% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 209.12% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 2.84% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 3.08% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 3.51% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 1.45% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 1.82% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.73% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 3.05% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 0.39% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 7.43% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 49.63% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 375.39% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 10.80% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 1.13% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 0.09% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 1.21% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 7.45% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 1.89% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 2.41% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 1.31% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 2.14% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 45.58% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 192.72% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 3.88% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 0.58% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 0.78% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 1.10% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 0.56% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 3.18% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 10.20% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 2.64% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 2.47% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 51.97% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 231.12% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 13.83% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 1.51% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 0.42% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 1.09% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 1.33% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 0.13% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 0.19% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 0.21% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 5.62% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 44.54% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 151.43% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 6.51% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 2.29% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 0.52% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 0.61% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 1.28% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 10.22% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 2.04% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 0.76% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 4.19% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 49.45% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 206.61% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 4.90% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 0.32% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 0.51% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 0.72% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 11.85% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.84% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 3.17% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 2.92% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 41.74% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 140.59% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 0.88% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 2.22% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 0.69% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 2.00% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 0.10% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 3.95% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 6.49% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 33.43% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 2.13% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 46.18% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 186.15% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 4.11% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 1.60% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 0.66% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 0.76% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 3.01% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 0.88% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.76% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 1.15% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 2.89% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 45.99% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 176.09% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 4.18% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 1.64% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 0.79% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 0.65% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 0.85% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 1.12% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 2.33% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 1.17% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 4.49% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 76.58% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 139.39% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 17.23% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 1.22% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 1.51% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 6.70% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 0.39% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 3.53% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 3.23% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 1.48% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 1.89% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 61.58% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 130.56% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 37.72% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 0.17% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 3.48% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 2.87% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 2.08% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 2.27% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 0.28% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 3.39% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 1.55% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 87.08% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 149.13% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 77.84% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 4.58% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 4.94% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 0.71% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 3.23% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 2.45% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 22.27% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 0.23% compared to the last run.
---
Report generated on: 2024-05-01T15:31:23.916213
