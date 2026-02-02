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
| xxd | 64 | 2.27 | -r |
| xxd | 64 | 4.11 | -b |
| xxd | 64 | 4.68 | -r -b |
| xxd | 64 | 1.76 |  |
| xxd | 64 | 1.12 | -p |
| xxd | 64 | 4.89 | -i |
| xxd | 64 | 1.38 | -e |
| xxd | 64 | 2.69 | -b |
| xxd | 64 | 1.32 | -u |
| xxd | 64 | 1.49 | -E |
| xxd | 64 | 6.08 | -b -i |
| tinyxxd | 64 | 0.88 |  |
| tinyxxd | 64 | 0.83 | -r |
| tinyxxd | 64 | 4.29 | -b |
| tinyxxd | 64 | 1.56 | -r -b |
| tinyxxd | 64 | 1.18 |  |
| tinyxxd | 64 | 0.90 | -p |
| tinyxxd | 64 | 4.74 | -i |
| tinyxxd | 64 | 1.10 | -e |
| tinyxxd | 64 | 3.19 | -b |
| tinyxxd | 64 | 0.92 | -u |
| tinyxxd | 64 | 1.03 | -E |
| tinyxxd | 64 | 4.13 | -b -i |
| tinyxxd | 32 | 0.44 |  |
| tinyxxd | 32 | 0.41 | -r |
| tinyxxd | 32 | 2.03 | -b |
| tinyxxd | 32 | 0.79 | -r -b |
| tinyxxd | 32 | 0.53 |  |
| tinyxxd | 32 | 0.45 | -p |
| tinyxxd | 32 | 2.31 | -i |
| tinyxxd | 32 | 0.57 | -e |
| tinyxxd | 32 | 1.58 | -b |
| tinyxxd | 32 | 0.43 | -u |
| tinyxxd | 32 | 0.53 | -E |
| tinyxxd | 32 | 2.06 | -b -i |
| xxd | 32 | 0.66 |  |
| xxd | 32 | 1.16 | -r |
| xxd | 32 | 3.08 | -b |
| xxd | 32 | 2.28 | -r -b |
| xxd | 32 | 0.76 |  |
| xxd | 32 | 0.53 | -p |
| xxd | 32 | 2.44 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.34 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.75 | -E |
| xxd | 32 | 3.23 | -b -i |
| tinyxxd | 16 | 0.22 |  |
| tinyxxd | 16 | 0.21 | -r |
| tinyxxd | 16 | 0.85 | -b |
| tinyxxd | 16 | 0.40 | -r -b |
| tinyxxd | 16 | 0.28 |  |
| tinyxxd | 16 | 0.23 | -p |
| tinyxxd | 16 | 1.15 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.79 | -b |
| tinyxxd | 16 | 0.21 | -u |
| tinyxxd | 16 | 0.27 | -E |
| tinyxxd | 16 | 1.02 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.77 | -b |
| xxd | 16 | 1.19 | -r -b |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.20 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.68 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.53 | -b -i |
| xxd | 8 | 0.18 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.55 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.73 | -b -i |
| tinyxxd | 8 | 0.11 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.42 | -b |
| tinyxxd | 8 | 0.20 | -r -b |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.40 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.13 | -E |
| tinyxxd | 8 | 0.51 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.29 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.30 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.10 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.29 | -i |
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
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.08 | -r |
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
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.05 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.07 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.02 | -e |
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
| tinyxxd | 1 | 0.06 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |
| tinyxxd | 1 | 0.07 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 50.93% faster with no flag.
- For sample size 64 MiB, tinyxxd was 172.72% faster with flags '-r'.
- For sample size 64 MiB, xxd was 9.89% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 199.12% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 24.39% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 25.07% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 44.42% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 44.13% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 47.46% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 46.55% faster with no flag.
- For sample size 32 MiB, tinyxxd was 182.12% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 22.51% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 187.76% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 17.70% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 5.81% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 17.25% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 55.01% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 40.82% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 56.89% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 42.33% faster with no flag.
- For sample size 16 MiB, tinyxxd was 179.84% faster with flags '-r'.
- For sample size 16 MiB, xxd was 13.60% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 195.13% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 23.03% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 21.71% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 54.97% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 37.97% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 49.75% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 51.43% faster with no flag.
- For sample size 8 MiB, tinyxxd was 170.31% faster with flags '-r'.
- For sample size 8 MiB, xxd was 11.15% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 179.25% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 17.94% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 23.26% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 53.75% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 38.93% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 42.41% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 45.66% faster with no flag.
- For sample size 4 MiB, tinyxxd was 166.71% faster with flags '-r'.
- For sample size 4 MiB, xxd was 16.67% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 184.25% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 21.22% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 22.30% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 47.83% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 38.76% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 43.64% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 40.07% faster with no flag.
- For sample size 2 MiB, tinyxxd was 162.33% faster with flags '-r'.
- For sample size 2 MiB, xxd was 18.62% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 173.69% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 20.40% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 20.37% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 50.07% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 35.91% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 48.70% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 43.01% faster with no flag.
- For sample size 1 MiB, tinyxxd was 201.50% faster with flags '-r'.
- For sample size 1 MiB, xxd was 22.31% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 165.10% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 18.78% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 19.75% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 42.79% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 34.63% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 46.65% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 33.92% faster than xxd.
- For sample 32 MiB, tinyxxd was 44.81% faster than xxd.
- For sample 16 MiB, tinyxxd was 35.14% faster than xxd.
- For sample 8 MiB, tinyxxd was 33.37% faster than xxd.
- For sample 4 MiB, tinyxxd was 32.35% faster than xxd.
- For sample 2 MiB, tinyxxd was 31.74% faster than xxd.
- For sample 1 MiB, tinyxxd was 31.11% faster than xxd.

### Performance by flag
- tinyxxd was 48.41% faster with no flag.
- tinyxxd was 175.69% faster with flag '-r'.
- tinyxxd was 193.27% faster with flag '-r -b'.
- tinyxxd was 21.90% faster with flag '-p'.
- tinyxxd was 22.30% faster with flag '-e'.
- tinyxxd was 49.01% faster with flag '-u'.
- tinyxxd was 41.76% faster with flag '-E'.
- tinyxxd was 49.70% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 22.92% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 0.57% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 50.28% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 0.83% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 0.25% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 5.69% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 0.04% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 3.51% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 1.65% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 1.82% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 0.24% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 2.27% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 23.27% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 4.04% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 35.37% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 10.59% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 2.68% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 6.16% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 1.13% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 0.93% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 0.58% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 6.03% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 3.36% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 0.95% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 16.08% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 5.13% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 26.54% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd improved by 16.67% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 0.34% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 5.78% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 0.34% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 1.48% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 1.46% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 6.05% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 0.71% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 5.87% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 13.11% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 0.45% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 131.93% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd slowed down by 1.43% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 0.47% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 3.85% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 0.30% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 0.48% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 0.65% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 1.04% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 3.09% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 8.50% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 18.05% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 3.11% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 5.99% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 8.07% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 4.28% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 6.51% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 0.95% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 0.44% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 1.35% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 0.17% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 2.55% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 0.28% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 10.68% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 0.12% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 14.06% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 1.15% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 0.67% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 0.41% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 0.93% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 0.76% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 0.46% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 0.01% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 0.56% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 4.84% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 6.90% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 0.36% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 10.83% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd improved by 5.58% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 0.85% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 2.01% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 0.57% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 0.57% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 9.97% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 0.86% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 1.08% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 1.54% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 16.71% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 2.18% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 0.46% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 11.13% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 1.51% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 9.47% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 0.09% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 0.50% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 5.51% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 2.79% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 2.79% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 0.16% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 9.93% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 1.23% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 10.04% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd slowed down by 1.55% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 0.28% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 1.33% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 1.26% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 0.91% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 0.95% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 1.45% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 1.16% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 1.45% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 16.13% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 1.87% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 7.46% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 10.31% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 1.39% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 6.21% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 1.22% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 4.83% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.24% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 4.36% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 1.65% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 0.62% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 10.54% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 0.86% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 7.85% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 8.11% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 3.72% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 3.79% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 2.71% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 1.96% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.56% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 0.56% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 4.44% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 0.62% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 9.95% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 1.39% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 7.08% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 2.30% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 1.08% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 4.89% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 13.76% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 0.46% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 2.38% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 2.27% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 1.30% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 2.76% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 1.31% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 30.27% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 10.66% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 8.47% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 0.56% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 4.00% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 0.67% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 5.16% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 2.43% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 5.73% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 3.00% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 2.99% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 9.16% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 8.30% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 7.09% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 7.11% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 3.56% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 1.10% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 2.80% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 3.75% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 14.73% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 6.94% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 6.40% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 1.14% compared to the last run.
---
Report generated on: 2026-02-02T23:21:11.559466
