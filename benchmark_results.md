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
| xxd | 64 | 2.23 | -r |
| xxd | 64 | 5.36 | -b |
| xxd | 64 | 4.35 | -r -b |
| xxd | 64 | 1.75 |  |
| xxd | 64 | 1.12 | -p |
| xxd | 64 | 5.19 | -i |
| xxd | 64 | 1.37 | -e |
| xxd | 64 | 3.00 | -b |
| xxd | 64 | 1.60 | -u |
| xxd | 64 | 1.69 | -E |
| xxd | 64 | 6.07 | -b -i |
| tinyxxd | 64 | 0.60 |  |
| tinyxxd | 64 | 0.83 | -r |
| tinyxxd | 64 | 4.46 | -b |
| tinyxxd | 64 | 3.67 | -r -b |
| tinyxxd | 64 | 0.76 |  |
| tinyxxd | 64 | 0.62 | -p |
| tinyxxd | 64 | 4.75 | -i |
| tinyxxd | 64 | 1.19 | -e |
| tinyxxd | 64 | 2.98 | -b |
| tinyxxd | 64 | 0.62 | -u |
| tinyxxd | 64 | 0.62 | -E |
| tinyxxd | 64 | 3.53 | -b -i |
| xxd | 32 | 0.79 |  |
| xxd | 32 | 1.13 | -r |
| xxd | 32 | 1.94 | -b |
| xxd | 32 | 2.14 | -r -b |
| xxd | 32 | 0.87 |  |
| xxd | 32 | 0.59 | -p |
| xxd | 32 | 2.56 | -i |
| xxd | 32 | 0.69 | -e |
| xxd | 32 | 1.49 | -b |
| xxd | 32 | 0.79 | -u |
| xxd | 32 | 0.82 | -E |
| xxd | 32 | 3.07 | -b -i |
| tinyxxd | 32 | 0.35 |  |
| tinyxxd | 32 | 0.41 | -r |
| tinyxxd | 32 | 1.85 | -b |
| tinyxxd | 32 | 1.83 | -r -b |
| tinyxxd | 32 | 0.38 |  |
| tinyxxd | 32 | 0.31 | -p |
| tinyxxd | 32 | 2.37 | -i |
| tinyxxd | 32 | 0.60 | -e |
| tinyxxd | 32 | 1.49 | -b |
| tinyxxd | 32 | 0.29 | -u |
| tinyxxd | 32 | 0.32 | -E |
| tinyxxd | 32 | 1.75 | -b -i |
| tinyxxd | 16 | 0.15 |  |
| tinyxxd | 16 | 0.20 | -r |
| tinyxxd | 16 | 0.81 | -b |
| tinyxxd | 16 | 0.93 | -r -b |
| tinyxxd | 16 | 0.19 |  |
| tinyxxd | 16 | 0.16 | -p |
| tinyxxd | 16 | 1.18 | -i |
| tinyxxd | 16 | 0.30 | -e |
| tinyxxd | 16 | 0.76 | -b |
| tinyxxd | 16 | 0.15 | -u |
| tinyxxd | 16 | 0.15 | -E |
| tinyxxd | 16 | 0.85 | -b -i |
| xxd | 16 | 0.40 |  |
| xxd | 16 | 0.56 | -r |
| xxd | 16 | 0.83 | -b |
| xxd | 16 | 1.15 | -r -b |
| xxd | 16 | 0.44 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.31 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.75 | -b |
| xxd | 16 | 0.40 | -u |
| xxd | 16 | 0.41 | -E |
| xxd | 16 | 1.54 | -b -i |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.40 | -b |
| xxd | 8 | 0.56 | -r -b |
| xxd | 8 | 0.22 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.65 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.41 | -b |
| xxd | 8 | 0.21 | -u |
| xxd | 8 | 0.21 | -E |
| xxd | 8 | 0.77 | -b -i |
| tinyxxd | 8 | 0.08 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.40 | -b |
| tinyxxd | 8 | 0.46 | -r -b |
| tinyxxd | 8 | 0.10 |  |
| tinyxxd | 8 | 0.08 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.15 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.08 | -u |
| tinyxxd | 8 | 0.08 | -E |
| tinyxxd | 8 | 0.43 | -b -i |
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
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.20 | -b |
| xxd | 4 | 0.28 | -r -b |
| xxd | 4 | 0.11 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.33 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.10 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.39 | -b -i |
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
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
| tinyxxd | 1 | 0.01 |  |
| tinyxxd | 1 | 0.01 | -r |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.06 | -r -b |
| tinyxxd | 1 | 0.01 |  |
| tinyxxd | 1 | 0.01 | -p |
| tinyxxd | 1 | 0.11 | -i |
| tinyxxd | 1 | 0.03 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.01 | -u |
| tinyxxd | 1 | 0.01 | -E |
| tinyxxd | 1 | 0.06 | -b -i |
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
| xxd | 1 | 0.10 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 144.33% faster with no flag.
- For sample size 64 MiB, tinyxxd was 170.20% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 12.24% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 18.31% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 80.22% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 9.19% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 15.08% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 158.09% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 173.46% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 72.15% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 130.24% faster with no flag.
- For sample size 32 MiB, tinyxxd was 173.15% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 16.74% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 89.34% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 8.21% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 15.16% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 169.21% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 155.83% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 76.01% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 141.73% faster with no flag.
- For sample size 16 MiB, tinyxxd was 176.73% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 23.96% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 79.46% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 11.01% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 15.75% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 169.11% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 173.20% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 82.43% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 144.19% faster with no flag.
- For sample size 8 MiB, tinyxxd was 165.36% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 21.98% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 77.90% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 9.19% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 14.60% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 168.49% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 172.44% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 79.82% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 137.87% faster with no flag.
- For sample size 4 MiB, tinyxxd was 164.82% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 22.31% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 74.03% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 10.82% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 15.15% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 152.42% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 166.98% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 79.92% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 127.24% faster with no flag.
- For sample size 2 MiB, tinyxxd was 162.23% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 21.21% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 66.57% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 9.20% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 13.61% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 142.47% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 154.45% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 78.38% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 118.94% faster with no flag.
- For sample size 1 MiB, tinyxxd was 154.16% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 22.74% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 52.22% faster with flags '-p'.
- For sample size 1 MiB, xxd was 34.15% faster with flags '-i'.
- For sample size 1 MiB, xxd was 41.50% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 125.72% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 138.23% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 77.16% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 43.30% faster than xxd.
- For sample 32 MiB, tinyxxd was 41.32% faster than xxd.
- For sample 16 MiB, tinyxxd was 44.48% faster than xxd.
- For sample 8 MiB, tinyxxd was 44.76% faster than xxd.
- For sample 4 MiB, tinyxxd was 43.27% faster than xxd.
- For sample 2 MiB, tinyxxd was 41.68% faster than xxd.
- For sample 1 MiB, tinyxxd was 24.62% faster than xxd.

### Performance by flag
- tinyxxd was 139.56% faster with no flag.
- tinyxxd was 170.98% faster with flag '-r'.
- tinyxxd was 7.54% faster with flag '-b'.
- tinyxxd was 19.08% faster with flag '-r -b'.
- tinyxxd was 81.49% faster with flag '-p'.
- tinyxxd was 8.81% faster with flag '-i'.
- tinyxxd was 14.50% faster with flag '-e'.
- tinyxxd was 161.99% faster with flag '-u'.
- tinyxxd was 167.95% faster with flag '-E'.
- tinyxxd was 75.23% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 18.93% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 9.81% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 79.41% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 6.34% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 9.75% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 10.63% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 2.97% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 1.15% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 0.41% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 6.95% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 2.20% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 4.67% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 26.13% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 5.56% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 41.30% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 6.38% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 6.66% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 5.44% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 4.20% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 4.43% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 5.49% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 0.22% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 3.48% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 0.45% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 14.65% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 7.51% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 29.72% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 9.73% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 5.99% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 6.46% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 3.91% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 2.11% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.02% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 6.80% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 4.96% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 4.49% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 14.84% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 4.14% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 17.46% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd improved by 6.78% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 6.87% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 6.22% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 2.47% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 1.32% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 5.27% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 11.83% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 0.88% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 3.06% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 24.45% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 0.71% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 2.56% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 5.92% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 3.90% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 6.47% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 4.62% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 2.20% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 3.61% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 6.98% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 4.94% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 4.18% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 15.57% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 7.87% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 10.66% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 1.59% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 5.75% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 10.83% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 11.14% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 2.27% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 0.09% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 6.45% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 4.54% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 3.76% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 16.55% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 8.75% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 6.12% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 1.78% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 8.75% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 19.67% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 3.94% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 3.01% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 7.94% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 2.96% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 1.33% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 4.34% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 25.73% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 4.45% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.40% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 6.77% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 3.51% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 5.49% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 3.69% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 2.98% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 5.64% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 4.35% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 3.96% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 3.59% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 24.13% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 2.47% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.36% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 7.01% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 6.85% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 5.98% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 5.90% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 2.10% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 5.68% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 4.96% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 9.28% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 5.98% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 16.02% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 9.60% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 5.96% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 0.12% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 7.89% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 10.62% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 2.70% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 1.16% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 0.62% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 5.23% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 3.15% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 4.04% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 22.19% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 0.33% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 0.18% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 6.44% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 3.96% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 3.81% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 2.93% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 2.77% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 5.61% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 3.46% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 4.11% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 3.68% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 14.53% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 6.22% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 3.57% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 0.30% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 6.47% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 11.74% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 3.30% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 2.31% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 2.63% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 7.68% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 4.59% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 7.83% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 22.16% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 7.74% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 0.48% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 7.73% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 10.02% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 1.21% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 33.40% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 54.23% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 2.39% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 6.87% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 6.58% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 4.71% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 14.13% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 6.54% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 2.79% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 1.70% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 6.96% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 10.27% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 3.12% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 4.72% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 2.76% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 7.44% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 6.41% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 3.82% compared to the last run.
---
Report generated on: 2026-09-29T12:07:41.748379
