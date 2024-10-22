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
| tinyxxd | 64 | 1.27 |  |
| tinyxxd | 64 | 1.51 | -r |
| tinyxxd | 64 | 4.66 |  |
| tinyxxd | 64 | 3.70 | -r |
| tinyxxd | 64 | 1.24 |  |
| tinyxxd | 64 | 0.79 | -p |
| tinyxxd | 64 | 4.79 | -i |
| tinyxxd | 64 | 1.31 | -e |
| tinyxxd | 64 | 2.97 | -b |
| tinyxxd | 64 | 1.26 | -u |
| tinyxxd | 64 | 1.46 | -E |
| tinyxxd | 64 | 4.52 | -b_-i |
| xxd | 64 | 1.53 |  |
| xxd | 64 | 2.16 | -r |
| xxd | 64 | 5.15 |  |
| xxd | 64 | 4.14 | -r |
| xxd | 64 | 1.53 |  |
| xxd | 64 | 0.91 | -p |
| xxd | 64 | 4.80 | -i |
| xxd | 64 | 1.53 | -e |
| xxd | 64 | 3.29 | -b |
| xxd | 64 | 1.55 | -u |
| xxd | 64 | 1.67 | -E |
| xxd | 64 | 5.68 | -b_-i |
| xxd | 32 | 0.78 |  |
| xxd | 32 | 1.05 | -r |
| xxd | 32 | 2.14 |  |
| xxd | 32 | 2.01 | -r |
| xxd | 32 | 0.76 |  |
| xxd | 32 | 0.46 | -p |
| xxd | 32 | 2.44 | -i |
| xxd | 32 | 0.79 | -e |
| xxd | 32 | 1.60 | -b |
| xxd | 32 | 0.75 | -u |
| xxd | 32 | 0.82 | -E |
| xxd | 32 | 2.80 | -b_-i |
| tinyxxd | 32 | 0.65 |  |
| tinyxxd | 32 | 0.75 | -r |
| tinyxxd | 32 | 2.10 |  |
| tinyxxd | 32 | 1.85 | -r |
| tinyxxd | 32 | 0.62 |  |
| tinyxxd | 32 | 0.40 | -p |
| tinyxxd | 32 | 2.40 | -i |
| tinyxxd | 32 | 0.65 | -e |
| tinyxxd | 32 | 1.49 | -b |
| tinyxxd | 32 | 0.62 | -u |
| tinyxxd | 32 | 0.72 | -E |
| tinyxxd | 32 | 2.31 | -b_-i |
| xxd | 16 | 0.39 |  |
| xxd | 16 | 0.53 | -r |
| xxd | 16 | 1.07 |  |
| xxd | 16 | 1.02 | -r |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.23 | -p |
| xxd | 16 | 1.20 | -i |
| xxd | 16 | 0.38 | -e |
| xxd | 16 | 0.82 | -b |
| xxd | 16 | 0.39 | -u |
| xxd | 16 | 0.42 | -E |
| xxd | 16 | 1.40 | -b_-i |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.41 | -r |
| tinyxxd | 16 | 0.85 |  |
| tinyxxd | 16 | 0.91 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.20 | -p |
| tinyxxd | 16 | 1.19 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.75 | -b |
| tinyxxd | 16 | 0.31 | -u |
| tinyxxd | 16 | 0.35 | -E |
| tinyxxd | 16 | 1.14 | -b_-i |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.19 | -r |
| tinyxxd | 8 | 0.41 |  |
| tinyxxd | 8 | 0.46 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.61 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.37 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| tinyxxd | 8 | 0.61 | -b_-i |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.47 | -r |
| xxd | 8 | 0.75 |  |
| xxd | 8 | 0.59 | -r |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.60 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.41 | -b |
| xxd | 8 | 0.19 | -u |
| xxd | 8 | 0.21 | -E |
| xxd | 8 | 0.70 | -b_-i |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.13 | -r |
| xxd | 4 | 0.22 |  |
| xxd | 4 | 0.26 | -r |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.30 | -i |
| xxd | 4 | 0.10 | -e |
| xxd | 4 | 0.20 | -b |
| xxd | 4 | 0.15 | -u |
| xxd | 4 | 0.11 | -E |
| xxd | 4 | 0.36 | -b_-i |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.10 | -r |
| tinyxxd | 4 | 0.21 |  |
| tinyxxd | 4 | 0.23 | -r |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.08 | -u |
| tinyxxd | 4 | 0.09 | -E |
| tinyxxd | 4 | 0.28 | -b_-i |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.05 | -r |
| tinyxxd | 2 | 0.10 |  |
| tinyxxd | 2 | 0.12 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
| tinyxxd | 2 | 0.15 | -b_-i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.11 |  |
| xxd | 2 | 0.14 | -r |
| xxd | 2 | 0.06 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.06 | -E |
| xxd | 2 | 0.18 | -b_-i |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.06 |  |
| xxd | 1 | 0.07 | -r |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.10 | -b_-i |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.03 | -r |
| tinyxxd | 1 | 0.06 |  |
| tinyxxd | 1 | 0.17 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.03 | -E |
| tinyxxd | 1 | 0.07 | -b_-i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 14.23% faster with no flag.
- For sample size 64 MiB, tinyxxd was 20.87% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 16.15% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 17.17% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 10.85% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 23.04% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 14.43% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 25.69% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 8.79% faster with no flag.
- For sample size 32 MiB, tinyxxd was 17.90% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 16.11% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 20.86% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 7.45% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 20.27% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 14.65% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 20.97% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 22.71% faster with no flag.
- For sample size 16 MiB, tinyxxd was 17.01% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 15.93% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 18.91% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 10.34% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 25.39% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 19.27% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 22.86% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 56.54% faster with no flag.
- For sample size 8 MiB, tinyxxd was 61.73% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 20.50% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 19.49% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 9.93% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 20.27% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 16.05% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 14.33% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 12.42% faster with no flag.
- For sample size 4 MiB, tinyxxd was 18.68% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 11.36% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 17.82% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 8.59% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 86.25% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 17.54% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 25.79% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 17.86% faster with no flag.
- For sample size 2 MiB, tinyxxd was 24.06% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 28.81% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 15.32% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 8.20% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 17.33% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 22.04% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 18.36% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 10.65% faster with no flag.
- For sample size 1 MiB, xxd was 89.02% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 12.45% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 15.93% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 6.75% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 17.41% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 22.20% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 35.88% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 15.09% faster than xxd.
- For sample 32 MiB, tinyxxd was 12.56% faster than xxd.
- For sample 16 MiB, tinyxxd was 16.27% faster than xxd.
- For sample 8 MiB, tinyxxd was 29.35% faster than xxd.
- For sample 4 MiB, tinyxxd was 17.08% faster than xxd.
- For sample 2 MiB, tinyxxd was 15.85% faster than xxd.
- For sample size 1 MiB, xxd was 6.63% faster than tinyxxd.

### Performance by flag
- tinyxxd was 16.09% faster with no flag.
- tinyxxd was 20.91% faster with flag '-r'.
- tinyxxd was 16.41% faster with flag '-p'.
- tinyxxd was 18.44% faster with flag '-e'.
- tinyxxd was 9.72% faster with flag '-b'.
- tinyxxd was 24.37% faster with flag '-u'.
- tinyxxd was 15.48% faster with flag '-E'.
- tinyxxd was 23.33% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd slowed down by 2.96% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 59.08% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 277.14% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 0.36% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 0.62% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 0.20% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 0.38% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 2.17% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 0.05% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 0.11% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 0.41% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 0.06% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 2.22% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 46.63% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 245.24% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 2.54% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 2.28% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 0.13% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 0.78% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 0.40% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 0.57% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 2.16% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 1.78% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd slowed down by 1.00% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 2.61% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 47.73% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 183.06% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 0.09% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 0.14% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 0.05% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 1.08% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 3.45% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.01% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 0.79% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 0.00% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 1.25% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 5.27% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 58.97% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 239.82% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 1.26% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 0.21% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 0.11% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 1.32% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 2.31% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 0.33% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 0.13% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 1.42% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 3.26% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 3.03% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 47.48% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 183.76% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 1.00% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 1.36% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 0.35% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 0.31% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 1.02% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 2.64% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 0.23% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 3.37% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 0.19% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 1.91% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 55.81% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 159.86% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 0.68% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 3.34% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 0.61% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 0.28% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 0.18% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 1.21% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 2.17% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 0.21% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 1.87% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 2.61% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 59.23% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 158.56% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 0.75% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 0.71% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 0.64% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd slowed down by 2.17% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 2.81% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.17% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 9.65% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 0.16% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 6.68% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 5.77% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 6.40% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 294.42% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 16.67% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 7.56% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 3.45% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 0.76% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 0.75% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 10.54% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 1.42% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 1.74% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 0.18% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 2.48% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 47.08% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 126.41% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 0.75% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 2.00% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 1.99% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 0.03% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 0.35% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 0.15% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 54.03% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 2.50% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 0.29% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 3.97% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 58.03% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 154.09% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 0.33% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 0.34% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 4.80% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 0.73% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 0.03% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 0.29% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.39% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 0.12% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.67% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 3.41% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 57.97% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 144.66% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 0.71% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 0.35% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 0.35% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 0.13% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 1.93% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.66% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 0.77% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 1.80% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd slowed down by 4.68% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 1.60% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 45.76% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 124.29% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 7.70% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 22.48% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 12.19% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 0.46% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 0.33% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.27% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 0.04% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 6.17% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 0.46% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 4.19% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 46.54% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 114.50% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 4.38% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 1.00% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 0.20% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 1.24% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 1.49% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 1.06% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 0.04% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 2.75% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 8.70% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 1.48% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 87.12% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 134.42% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 19.51% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 3.40% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 1.24% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 4.91% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 0.49% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 1.13% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 0.22% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 0.95% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 0.14% compared to the last run.
---
Report generated on: 2024-10-22T07:59:47.720963
