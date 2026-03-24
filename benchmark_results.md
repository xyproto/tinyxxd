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
| xxd | 64 | 2.20 | -r |
| xxd | 64 | 4.32 | -b |
| xxd | 64 | 4.57 | -r -b |
| xxd | 64 | 1.65 |  |
| xxd | 64 | 1.07 | -p |
| xxd | 64 | 5.02 | -i |
| xxd | 64 | 1.35 | -e |
| xxd | 64 | 2.74 | -b |
| xxd | 64 | 1.35 | -u |
| xxd | 64 | 1.54 | -E |
| xxd | 64 | 5.76 | -b -i |
| tinyxxd | 64 | 0.88 |  |
| tinyxxd | 64 | 0.86 | -r |
| tinyxxd | 64 | 4.29 | -b |
| tinyxxd | 64 | 1.66 | -r -b |
| tinyxxd | 64 | 1.10 |  |
| tinyxxd | 64 | 0.88 | -p |
| tinyxxd | 64 | 4.75 | -i |
| tinyxxd | 64 | 1.11 | -e |
| tinyxxd | 64 | 3.29 | -b |
| tinyxxd | 64 | 0.86 | -u |
| tinyxxd | 64 | 1.07 | -E |
| tinyxxd | 64 | 4.16 | -b -i |
| tinyxxd | 32 | 0.42 |  |
| tinyxxd | 32 | 0.43 | -r |
| tinyxxd | 32 | 2.07 | -b |
| tinyxxd | 32 | 0.82 | -r -b |
| tinyxxd | 32 | 0.51 |  |
| tinyxxd | 32 | 0.44 | -p |
| tinyxxd | 32 | 2.37 | -i |
| tinyxxd | 32 | 0.56 | -e |
| tinyxxd | 32 | 1.63 | -b |
| tinyxxd | 32 | 0.43 | -u |
| tinyxxd | 32 | 0.52 | -E |
| tinyxxd | 32 | 2.07 | -b -i |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.16 | -r |
| xxd | 32 | 3.10 | -b |
| xxd | 32 | 2.44 | -r -b |
| xxd | 32 | 0.78 |  |
| xxd | 32 | 0.56 | -p |
| xxd | 32 | 2.49 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.36 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.77 | -E |
| xxd | 32 | 2.92 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.22 | -r |
| tinyxxd | 16 | 0.87 | -b |
| tinyxxd | 16 | 0.42 | -r -b |
| tinyxxd | 16 | 0.27 |  |
| tinyxxd | 16 | 0.22 | -p |
| tinyxxd | 16 | 1.17 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.81 | -b |
| tinyxxd | 16 | 0.22 | -u |
| tinyxxd | 16 | 0.26 | -E |
| tinyxxd | 16 | 1.03 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.88 | -b |
| xxd | 16 | 1.16 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.26 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.69 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.44 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.44 | -b |
| tinyxxd | 8 | 0.21 | -r -b |
| tinyxxd | 8 | 0.14 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.60 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.41 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.13 | -E |
| tinyxxd | 8 | 0.52 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.30 | -r |
| xxd | 8 | 0.38 | -b |
| xxd | 8 | 0.60 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.63 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.72 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.30 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.32 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
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
| tinyxxd | 4 | 0.26 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.07 | -r |
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
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.06 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.04 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
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
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.08 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.03 | -p |
| xxd | 1 | 0.09 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 49.44% faster with no flag.
- For sample size 64 MiB, tinyxxd was 155.81% faster with flags '-r'.
- For sample size 64 MiB, xxd was 7.40% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 174.88% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 21.28% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 5.59% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 21.72% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 56.72% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 44.27% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 38.50% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 54.93% faster with no flag.
- For sample size 32 MiB, tinyxxd was 173.23% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 20.09% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 197.66% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 25.96% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 5.28% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 21.10% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 53.13% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 49.49% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 41.31% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 45.41% faster with no flag.
- For sample size 16 MiB, tinyxxd was 169.51% faster with flags '-r'.
- For sample size 16 MiB, xxd was 6.94% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 176.81% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 23.30% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 7.49% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 21.73% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 54.42% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 42.63% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 39.16% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 44.04% faster with no flag.
- For sample size 8 MiB, tinyxxd was 169.39% faster with flags '-r'.
- For sample size 8 MiB, xxd was 17.82% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 185.69% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 24.66% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 22.32% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 50.20% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 44.23% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 39.48% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 45.42% faster with no flag.
- For sample size 4 MiB, tinyxxd was 169.08% faster with flags '-r'.
- For sample size 4 MiB, xxd was 16.47% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 182.57% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 24.35% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 8.11% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 21.00% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 52.58% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 42.10% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 33.05% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 45.89% faster with no flag.
- For sample size 2 MiB, tinyxxd was 144.47% faster with flags '-r'.
- For sample size 2 MiB, xxd was 17.32% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 174.42% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 22.49% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 7.34% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 17.81% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 45.17% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 37.21% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 38.65% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 37.53% faster with no flag.
- For sample size 1 MiB, tinyxxd was 139.60% faster with flags '-r'.
- For sample size 1 MiB, xxd was 14.61% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 166.34% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 60.29% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 13.95% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 52.25% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 41.41% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 33.05% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 36.88% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 31.95% faster than xxd.
- For sample 32 MiB, tinyxxd was 43.28% faster than xxd.
- For sample 16 MiB, tinyxxd was 34.35% faster than xxd.
- For sample 8 MiB, tinyxxd was 31.80% faster than xxd.
- For sample 4 MiB, tinyxxd was 31.76% faster than xxd.
- For sample 2 MiB, tinyxxd was 30.79% faster than xxd.
- For sample 1 MiB, tinyxxd was 34.58% faster than xxd.

### Performance by flag
- tinyxxd was 49.60% faster with no flag.
- tinyxxd was 162.80% faster with flag '-r'.
- tinyxxd was 181.62% faster with flag '-r -b'.
- tinyxxd was 23.44% faster with flag '-p'.
- tinyxxd was 5.88% faster with flag '-i'.
- tinyxxd was 21.81% faster with flag '-e'.
- tinyxxd was 54.60% faster with flag '-u'.
- tinyxxd was 45.04% faster with flag '-E'.
- tinyxxd was 39.17% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 19.74% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 8.10% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 52.23% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 7.67% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 0.87% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 8.30% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 4.55% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 6.92% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 3.37% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 5.47% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 5.39% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 3.65% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 25.78% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 9.68% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 18.65% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 6.25% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 7.10% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 5.85% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 3.11% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 4.40% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 9.15% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 3.64% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 3.15% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 1.72% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 19.03% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 9.39% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 14.45% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 7.10% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 1.91% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 4.80% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 6.19% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 4.67% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 9.93% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 0.23% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 6.56% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 3.87% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 16.67% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 6.64% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 119.51% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 1.45% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 3.30% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 7.02% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 5.82% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 6.39% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 3.77% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 8.78% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 4.52% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 0.45% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 16.16% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 10.10% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 3.22% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 9.57% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 1.39% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 4.81% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 5.26% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 3.54% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 9.49% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 1.52% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 3.95% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 0.53% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 18.45% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 7.26% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 24.76% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd improved by 0.57% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 8.10% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 5.71% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 3.72% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 6.43% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 3.06% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 8.56% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 7.26% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 2.32% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 15.60% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 9.33% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 3.08% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 7.27% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 0.08% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 4.85% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 2.90% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 5.42% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 9.82% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 3.15% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 5.16% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 0.06% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 18.70% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 7.00% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 5.27% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 1.18% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 7.50% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 7.64% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 4.32% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 6.65% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 3.60% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 19.54% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 7.00% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 2.06% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 16.20% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 7.60% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 4.67% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 1.04% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 5.73% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 6.91% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 4.26% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 6.18% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 4.09% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 5.82% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 7.37% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 6.02% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 18.83% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 3.86% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 4.74% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 2.82% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 1.02% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 5.34% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 6.15% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 5.20% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 8.82% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 1.64% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 5.81% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.50% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 13.73% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 11.71% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 3.98% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 1.19% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 5.70% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 7.46% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 3.69% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 4.97% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 3.72% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 5.65% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 7.46% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 15.99% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 18.38% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 6.75% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 4.08% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 3.45% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 2.62% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 6.00% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 6.51% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 3.31% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 10.10% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 1.03% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 3.01% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.84% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 11.82% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 2.85% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 6.04% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 5.04% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 3.70% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 4.83% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 3.94% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 4.72% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 10.90% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 11.68% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 4.60% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 0.54% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 15.89% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 6.60% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 0.20% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 7.37% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 5.97% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 24.67% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 2.48% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 20.91% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 2.84% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 5.10% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 9.84% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 2.35% compared to the last run.
---
Report generated on: 2026-03-24T11:01:53.176934
