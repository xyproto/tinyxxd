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
| xxd | 64 | 1.30 |  |
| xxd | 64 | 2.15 | -r |
| xxd | 64 | 4.35 | -b |
| xxd | 64 | 4.38 | -r -b |
| xxd | 64 | 1.47 |  |
| xxd | 64 | 1.02 | -p |
| xxd | 64 | 5.05 | -i |
| xxd | 64 | 1.33 | -e |
| xxd | 64 | 2.68 | -b |
| xxd | 64 | 1.29 | -u |
| xxd | 64 | 1.50 | -E |
| xxd | 64 | 5.66 | -b -i |
| tinyxxd | 64 | 0.61 |  |
| tinyxxd | 64 | 0.86 | -r |
| tinyxxd | 64 | 4.22 | -b |
| tinyxxd | 64 | 1.71 | -r -b |
| tinyxxd | 64 | 0.82 |  |
| tinyxxd | 64 | 0.62 | -p |
| tinyxxd | 64 | 4.70 | -i |
| tinyxxd | 64 | 1.15 | -e |
| tinyxxd | 64 | 2.81 | -b |
| tinyxxd | 64 | 0.59 | -u |
| tinyxxd | 64 | 0.60 | -E |
| tinyxxd | 64 | 3.55 | -b -i |
| xxd | 32 | 0.66 |  |
| xxd | 32 | 1.14 | -r |
| xxd | 32 | 1.68 | -b |
| xxd | 32 | 2.21 | -r -b |
| xxd | 32 | 0.75 |  |
| xxd | 32 | 0.54 | -p |
| xxd | 32 | 2.50 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.38 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.73 | -E |
| xxd | 32 | 2.93 | -b -i |
| tinyxxd | 32 | 0.31 |  |
| tinyxxd | 32 | 0.43 | -r |
| tinyxxd | 32 | 2.14 | -b |
| tinyxxd | 32 | 0.85 | -r -b |
| tinyxxd | 32 | 0.38 |  |
| tinyxxd | 32 | 0.31 | -p |
| tinyxxd | 32 | 2.36 | -i |
| tinyxxd | 32 | 0.56 | -e |
| tinyxxd | 32 | 1.38 | -b |
| tinyxxd | 32 | 0.30 | -u |
| tinyxxd | 32 | 0.30 | -E |
| tinyxxd | 32 | 1.78 | -b -i |
| tinyxxd | 16 | 0.15 |  |
| tinyxxd | 16 | 0.22 | -r |
| tinyxxd | 16 | 0.75 | -b |
| tinyxxd | 16 | 0.43 | -r -b |
| tinyxxd | 16 | 0.19 |  |
| tinyxxd | 16 | 0.16 | -p |
| tinyxxd | 16 | 1.20 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.70 | -b |
| tinyxxd | 16 | 0.15 | -u |
| tinyxxd | 16 | 0.15 | -E |
| tinyxxd | 16 | 0.88 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.57 | -r |
| xxd | 16 | 0.85 | -b |
| xxd | 16 | 1.11 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.27 | -p |
| xxd | 16 | 1.24 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.68 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.49 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.56 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.62 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.18 | -E |
| xxd | 8 | 0.71 | -b -i |
| tinyxxd | 8 | 0.08 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.37 | -b |
| tinyxxd | 8 | 0.22 | -r -b |
| tinyxxd | 8 | 0.10 |  |
| tinyxxd | 8 | 0.08 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.35 | -b |
| tinyxxd | 8 | 0.08 | -u |
| tinyxxd | 8 | 0.08 | -E |
| tinyxxd | 8 | 0.44 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.27 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.36 | -b -i |
| tinyxxd | 4 | 0.04 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.11 | -r -b |
| tinyxxd | 4 | 0.05 |  |
| tinyxxd | 4 | 0.04 | -p |
| tinyxxd | 4 | 0.32 | -i |
| tinyxxd | 4 | 0.09 | -e |
| tinyxxd | 4 | 0.18 | -b |
| tinyxxd | 4 | 0.04 | -u |
| tinyxxd | 4 | 0.04 | -E |
| tinyxxd | 4 | 0.22 | -b -i |
| tinyxxd | 2 | 0.02 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.06 | -r -b |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.02 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.09 | -b |
| tinyxxd | 2 | 0.02 | -u |
| tinyxxd | 2 | 0.02 | -E |
| tinyxxd | 2 | 0.11 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.14 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.18 | -b -i |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.07 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.10 | -b -i |
| tinyxxd | 1 | 0.01 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.03 | -r -b |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.01 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.01 | -u |
| tinyxxd | 1 | 0.01 | -E |
| tinyxxd | 1 | 0.06 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 93.38% faster with no flag.
- For sample size 64 MiB, tinyxxd was 148.36% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 155.99% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 63.49% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 7.42% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 16.22% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 120.36% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 148.49% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 59.22% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 104.81% faster with no flag.
- For sample size 32 MiB, tinyxxd was 165.92% faster with flags '-r'.
- For sample size 32 MiB, xxd was 15.10% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 158.63% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 72.79% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 5.61% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 20.96% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 115.32% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 141.66% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 64.48% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 105.55% faster with no flag.
- For sample size 16 MiB, tinyxxd was 163.58% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 5.68% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 158.15% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 69.41% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 23.01% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 122.75% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 137.81% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 69.12% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 104.30% faster with no flag.
- For sample size 8 MiB, tinyxxd was 150.68% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 156.77% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 70.78% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 6.51% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 21.97% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 117.73% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 130.82% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 61.19% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 95.99% faster with no flag.
- For sample size 4 MiB, tinyxxd was 127.56% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 146.79% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 67.25% faster with flags '-p'.
- For sample size 4 MiB, xxd was 5.92% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 107.68% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 130.50% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 60.41% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 85.60% faster with no flag.
- For sample size 2 MiB, tinyxxd was 150.16% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 147.61% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 60.52% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 18.40% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 91.35% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 123.16% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 61.14% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 79.73% faster with no flag.
- For sample size 1 MiB, tinyxxd was 126.53% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 139.19% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 51.25% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 8.09% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 18.80% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 80.29% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 106.36% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 62.60% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 44.60% faster than xxd.
- For sample 32 MiB, tinyxxd was 42.57% faster than xxd.
- For sample 16 MiB, tinyxxd was 51.43% faster than xxd.
- For sample 8 MiB, tinyxxd was 48.91% faster than xxd.
- For sample 4 MiB, tinyxxd was 41.18% faster than xxd.
- For sample 2 MiB, tinyxxd was 44.85% faster than xxd.
- For sample 1 MiB, tinyxxd was 43.75% faster than xxd.

### Performance by flag
- tinyxxd was 98.15% faster with no flag.
- tinyxxd was 153.85% faster with flag '-r'.
- tinyxxd was 156.38% faster with flag '-r -b'.
- tinyxxd was 66.97% faster with flag '-p'.
- tinyxxd was 6.10% faster with flag '-i'.
- tinyxxd was 17.73% faster with flag '-e'.
- tinyxxd was 117.75% faster with flag '-u'.
- tinyxxd was 142.76% faster with flag '-E'.
- tinyxxd was 62.01% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 15.53% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 1.72% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 61.71% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 3.80% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 4.63% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 5.47% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 1.71% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 0.28% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 0.52% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 0.37% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 2.16% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 1.83% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 26.26% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 10.25% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 54.32% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 6.54% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 0.48% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 0.09% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 0.47% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 4.92% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 2.69% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 1.78% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 0.78% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 11.17% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 0.26% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 27.32% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 1.09% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 1.45% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 0.08% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 0.45% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 0.24% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 5.19% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 0.04% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 1.09% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 1.69% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 18.36% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 10.97% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 56.26% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 5.50% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 0.02% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 0.28% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 0.35% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 1.38% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 0.57% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 4.17% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 0.43% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 1.31% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 20.20% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 11.67% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 8.51% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd slowed down by 7.18% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 2.75% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 1.61% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 1.71% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 0.79% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 0.67% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 0.21% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 0.07% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 11.24% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 0.04% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 23.53% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 3.72% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 1.83% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 0.27% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 0.30% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 0.46% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 1.46% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 1.25% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 0.52% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 0.23% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 9.94% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 2.46% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 11.76% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 0.54% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 1.87% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 0.09% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 1.34% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 1.60% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 1.95% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 0.09% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 0.74% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 2.65% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 23.37% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 36.15% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 6.33% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd slowed down by 7.45% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 1.72% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 0.19% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 0.46% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 0.26% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.29% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 2.73% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 0.18% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 0.09% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 12.28% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 4.20% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 8.20% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 2.61% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 1.83% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 2.37% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 0.57% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 0.91% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 0.53% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 0.80% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 0.31% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 3.18% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 19.41% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 2.72% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 7.60% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 6.39% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 2.64% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 0.99% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 8.16% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 29.07% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.04% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 3.10% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 2.14% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.07% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 17.89% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 8.85% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 6.66% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd slowed down by 5.78% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 0.39% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 0.37% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 1.52% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 1.17% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 1.60% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 0.78% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 2.43% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.30% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 11.86% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 0.27% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 7.44% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 0.41% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 3.75% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 3.83% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 0.44% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 0.85% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.55% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 0.60% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 0.02% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 2.21% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 7.80% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 2.10% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 5.77% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd slowed down by 1.11% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 0.25% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 0.38% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 0.88% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 0.52% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 0.25% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 1.00% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 0.45% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 0.03% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 13.88% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 10.54% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 6.56% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd slowed down by 6.75% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 0.16% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 1.26% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 0.45% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 0.06% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 0.46% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 4.46% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 1.06% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 0.37% compared to the last run.
---
Report generated on: 2026-04-01T16:33:20.295242
