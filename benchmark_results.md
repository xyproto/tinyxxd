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
| tinyxxd | 64 | 0.92 |  |
| tinyxxd | 64 | 0.92 | -r |
| tinyxxd | 64 | 5.16 | -b |
| tinyxxd | 64 | 1.56 | -r -b |
| tinyxxd | 64 | 1.17 |  |
| tinyxxd | 64 | 0.90 | -p |
| tinyxxd | 64 | 4.78 | -i |
| tinyxxd | 64 | 1.12 | -e |
| tinyxxd | 64 | 3.23 | -b |
| tinyxxd | 64 | 0.91 | -u |
| tinyxxd | 64 | 1.10 | -E |
| tinyxxd | 64 | 4.26 | -b -i |
| xxd | 64 | 1.33 |  |
| xxd | 64 | 2.29 | -r |
| xxd | 64 | 4.24 | -b |
| xxd | 64 | 4.58 | -r -b |
| xxd | 64 | 1.74 |  |
| xxd | 64 | 1.09 | -p |
| xxd | 64 | 4.99 | -i |
| xxd | 64 | 1.34 | -e |
| xxd | 64 | 2.68 | -b |
| xxd | 64 | 1.31 | -u |
| xxd | 64 | 1.47 | -E |
| xxd | 64 | 5.97 | -b -i |
| tinyxxd | 32 | 0.45 |  |
| tinyxxd | 32 | 0.46 | -r |
| tinyxxd | 32 | 2.07 | -b |
| tinyxxd | 32 | 0.78 | -r -b |
| tinyxxd | 32 | 0.56 |  |
| tinyxxd | 32 | 0.46 | -p |
| tinyxxd | 32 | 2.37 | -i |
| tinyxxd | 32 | 0.56 | -e |
| tinyxxd | 32 | 1.62 | -b |
| tinyxxd | 32 | 0.45 | -u |
| tinyxxd | 32 | 0.56 | -E |
| tinyxxd | 32 | 2.12 | -b -i |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.14 | -r |
| xxd | 32 | 3.15 | -b |
| xxd | 32 | 2.25 | -r -b |
| xxd | 32 | 0.75 |  |
| xxd | 32 | 0.56 | -p |
| xxd | 32 | 2.50 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.37 | -b |
| xxd | 32 | 0.67 | -u |
| xxd | 32 | 0.75 | -E |
| xxd | 32 | 2.88 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.57 | -r |
| xxd | 16 | 0.78 | -b |
| xxd | 16 | 1.19 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.28 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.49 | -b -i |
| tinyxxd | 16 | 0.23 |  |
| tinyxxd | 16 | 0.24 | -r |
| tinyxxd | 16 | 1.00 | -b |
| tinyxxd | 16 | 0.39 | -r -b |
| tinyxxd | 16 | 0.27 |  |
| tinyxxd | 16 | 0.23 | -p |
| tinyxxd | 16 | 1.17 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.81 | -b |
| tinyxxd | 16 | 0.23 | -u |
| tinyxxd | 16 | 0.28 | -E |
| tinyxxd | 16 | 1.10 | -b -i |
| tinyxxd | 8 | 0.12 |  |
| tinyxxd | 8 | 0.12 | -r |
| tinyxxd | 8 | 0.44 | -b |
| tinyxxd | 8 | 0.20 | -r -b |
| tinyxxd | 8 | 0.14 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.41 | -b |
| tinyxxd | 8 | 0.11 | -u |
| tinyxxd | 8 | 0.14 | -E |
| tinyxxd | 8 | 0.53 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.30 | -r |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.61 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.62 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.33 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.74 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.29 | -r -b |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.24 | -b |
| tinyxxd | 4 | 0.10 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.27 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.08 | -r |
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
| tinyxxd | 2 | 0.14 | -b -i |
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
- For sample size 64 MiB, tinyxxd was 47.26% faster with no flag.
- For sample size 64 MiB, tinyxxd was 148.60% faster with flags '-r'.
- For sample size 64 MiB, xxd was 21.31% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 194.10% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 21.32% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 20.39% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 44.62% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 33.65% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 40.24% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 40.53% faster with no flag.
- For sample size 32 MiB, tinyxxd was 149.33% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 22.69% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 188.45% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 21.88% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 5.73% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 21.06% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 48.71% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 33.14% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 35.73% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 43.26% faster with no flag.
- For sample size 16 MiB, tinyxxd was 140.93% faster with flags '-r'.
- For sample size 16 MiB, xxd was 25.09% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 203.82% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 22.69% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 9.67% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 21.07% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 46.27% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 33.83% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 35.55% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 40.66% faster with no flag.
- For sample size 8 MiB, tinyxxd was 152.37% faster with flags '-r'.
- For sample size 8 MiB, xxd was 21.97% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 207.23% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 19.40% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 5.49% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 21.08% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 46.11% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 32.83% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 41.16% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 39.89% faster with no flag.
- For sample size 4 MiB, tinyxxd was 151.78% faster with flags '-r'.
- For sample size 4 MiB, xxd was 22.20% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 189.78% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 22.50% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 5.52% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 20.17% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 48.72% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 34.03% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 38.69% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 38.04% faster with no flag.
- For sample size 2 MiB, tinyxxd was 145.55% faster with flags '-r'.
- For sample size 2 MiB, xxd was 20.03% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 185.30% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 21.73% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 7.65% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 20.67% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 42.19% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 33.48% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 40.05% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 35.65% faster with no flag.
- For sample size 1 MiB, tinyxxd was 134.85% faster with flags '-r'.
- For sample size 1 MiB, xxd was 22.20% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 176.74% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 18.72% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 17.24% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 38.33% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 30.82% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 39.38% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 27.01% faster than xxd.
- For sample 32 MiB, tinyxxd was 39.52% faster than xxd.
- For sample 16 MiB, tinyxxd was 28.93% faster than xxd.
- For sample 8 MiB, tinyxxd was 31.01% faster than xxd.
- For sample 4 MiB, tinyxxd was 29.17% faster than xxd.
- For sample 2 MiB, tinyxxd was 30.21% faster than xxd.
- For sample 1 MiB, tinyxxd was 27.50% faster than xxd.

### Performance by flag
- tinyxxd was 44.21% faster with no flag.
- tinyxxd was 147.96% faster with flag '-r'.
- xxd was 9.07% faster with flag '-b'.
- tinyxxd was 194.30% faster with flag '-r -b'.
- tinyxxd was 21.53% faster with flag '-p'.
- tinyxxd was 5.60% faster with flag '-i'.
- tinyxxd was 20.66% faster with flag '-e'.
- tinyxxd was 45.97% faster with flag '-u'.
- tinyxxd was 33.47% faster with flag '-E'.
- tinyxxd was 38.50% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 24.03% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 19.95% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 56.21% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd improved by 2.76% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 3.10% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 0.25% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 1.07% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 0.33% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 2.11% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 2.30% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 2.16% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 1.79% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 23.08% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 0.80% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 56.96% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd improved by 5.40% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 0.80% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 3.50% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 0.03% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 0.84% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 0.59% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 1.68% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 3.78% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 1.70% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 17.27% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 0.01% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 27.41% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd improved by 1.04% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 3.64% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 0.59% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 0.04% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 0.46% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 0.42% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 2.71% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 3.22% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 0.17% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 15.01% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 1.80% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 133.88% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 0.04% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 4.76% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 1.74% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 0.29% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 1.38% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 1.58% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 1.32% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 0.40% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 3.44% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 11.82% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 1.52% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 16.09% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 0.57% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 0.85% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 4.16% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 2.81% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 0.32% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 0.91% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 0.29% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 0.25% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 0.19% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 15.17% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 1.09% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 23.62% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 0.99% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 2.41% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 0.24% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 1.42% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 0.60% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 0.09% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 0.89% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 1.09% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 3.40% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 16.05% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 0.52% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 6.46% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 1.53% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 2.93% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 1.81% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 0.69% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 0.25% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 1.20% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 1.66% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 1.46% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 1.44% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 23.81% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 0.85% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 6.89% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 4.99% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 14.34% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 0.32% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 0.98% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 0.47% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 1.39% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 0.84% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 0.95% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd slowed down by 0.22% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 11.71% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 1.48% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 7.51% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 0.05% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 2.03% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 0.74% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 0.04% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 1.18% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 4.87% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 0.84% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 0.25% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 0.06% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 18.95% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 2.95% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 13.62% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd improved by 1.46% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 4.07% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 1.52% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 1.06% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 0.84% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 1.51% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.86% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 0.57% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.73% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 11.05% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 0.65% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 4.69% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd improved by 1.18% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 3.71% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 1.73% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 0.64% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 1.30% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 2.11% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 1.12% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 0.70% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 0.30% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 15.93% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 2.96% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 4.51% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 2.88% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 1.77% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 1.88% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 0.27% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 2.79% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 0.54% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 0.48% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 1.12% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.75% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 13.86% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 1.84% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 5.57% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 3.29% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 5.44% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 3.15% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 0.63% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 1.95% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 0.13% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 1.17% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 0.25% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 0.05% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 18.44% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 2.82% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 3.82% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 4.63% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 4.66% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 4.22% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 1.07% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 1.92% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 4.05% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 1.17% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 0.75% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 0.81% compared to the last run.
---
Report generated on: 2026-02-13T08:59:03.811545
