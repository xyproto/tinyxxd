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
| xxd | 64 | 1.61 |  |
| xxd | 64 | 2.16 | -r |
| xxd | 64 | 4.70 |  |
| xxd | 64 | 4.04 | -r |
| xxd | 64 | 1.50 |  |
| xxd | 64 | 0.92 | -p |
| xxd | 64 | 4.79 | -i |
| xxd | 64 | 1.54 | -e |
| xxd | 64 | 3.25 | -b |
| xxd | 64 | 1.54 | -u |
| xxd | 64 | 1.65 | -E |
| xxd | 64 | 5.65 | -b_-i |
| tinyxxd | 64 | 1.29 |  |
| tinyxxd | 64 | 1.50 | -r |
| tinyxxd | 64 | 5.05 |  |
| tinyxxd | 64 | 3.70 | -r |
| tinyxxd | 64 | 1.24 |  |
| tinyxxd | 64 | 0.82 | -p |
| tinyxxd | 64 | 4.79 | -i |
| tinyxxd | 64 | 1.28 | -e |
| tinyxxd | 64 | 2.96 | -b |
| tinyxxd | 64 | 1.26 | -u |
| tinyxxd | 64 | 1.42 | -E |
| tinyxxd | 64 | 4.50 | -b_-i |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 0.74 | -r |
| tinyxxd | 32 | 1.91 |  |
| tinyxxd | 32 | 1.84 | -r |
| tinyxxd | 32 | 0.62 |  |
| tinyxxd | 32 | 0.40 | -p |
| tinyxxd | 32 | 2.36 | -i |
| tinyxxd | 32 | 0.64 | -e |
| tinyxxd | 32 | 1.63 | -b |
| tinyxxd | 32 | 0.62 | -u |
| tinyxxd | 32 | 0.70 | -E |
| tinyxxd | 32 | 2.27 | -b_-i |
| xxd | 32 | 0.78 |  |
| xxd | 32 | 1.06 | -r |
| xxd | 32 | 2.73 |  |
| xxd | 32 | 2.21 | -r |
| xxd | 32 | 0.75 |  |
| xxd | 32 | 0.46 | -p |
| xxd | 32 | 2.69 | -i |
| xxd | 32 | 0.76 | -e |
| xxd | 32 | 1.64 | -b |
| xxd | 32 | 0.74 | -u |
| xxd | 32 | 0.82 | -E |
| xxd | 32 | 2.82 | -b_-i |
| xxd | 16 | 0.40 |  |
| xxd | 16 | 0.53 | -r |
| xxd | 16 | 0.91 |  |
| xxd | 16 | 1.05 | -r |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.23 | -p |
| xxd | 16 | 1.19 | -i |
| xxd | 16 | 0.41 | -e |
| xxd | 16 | 0.81 | -b |
| xxd | 16 | 0.38 | -u |
| xxd | 16 | 0.44 | -E |
| xxd | 16 | 1.49 | -b_-i |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.38 | -r |
| tinyxxd | 16 | 0.88 |  |
| tinyxxd | 16 | 0.92 | -r |
| tinyxxd | 16 | 0.31 |  |
| tinyxxd | 16 | 0.20 | -p |
| tinyxxd | 16 | 1.20 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.74 | -b |
| tinyxxd | 16 | 0.31 | -u |
| tinyxxd | 16 | 0.36 | -E |
| tinyxxd | 16 | 1.18 | -b_-i |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.27 | -r |
| xxd | 8 | 0.52 |  |
| xxd | 8 | 0.51 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.60 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.41 | -b |
| xxd | 8 | 0.19 | -u |
| xxd | 8 | 0.21 | -E |
| xxd | 8 | 0.71 | -b_-i |
| tinyxxd | 8 | 0.33 |  |
| tinyxxd | 8 | 0.24 | -r |
| tinyxxd | 8 | 0.85 |  |
| tinyxxd | 8 | 0.47 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.37 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| tinyxxd | 8 | 0.56 | -b_-i |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.13 | -r |
| xxd | 4 | 0.23 |  |
| xxd | 4 | 0.25 | -r |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.10 | -e |
| xxd | 4 | 0.20 | -b |
| xxd | 4 | 0.10 | -u |
| xxd | 4 | 0.11 | -E |
| xxd | 4 | 0.35 | -b_-i |
| tinyxxd | 4 | 0.09 |  |
| tinyxxd | 4 | 0.10 | -r |
| tinyxxd | 4 | 0.21 |  |
| tinyxxd | 4 | 0.23 | -r |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.05 | -p |
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
| tinyxxd | 2 | 0.14 | -b_-i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.11 |  |
| xxd | 2 | 0.13 | -r |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.18 | -b_-i |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.03 | -r |
| tinyxxd | 1 | 0.05 |  |
| tinyxxd | 1 | 0.06 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.03 | -u |
| tinyxxd | 1 | 0.03 | -E |
| tinyxxd | 1 | 0.08 | -b_-i |
| xxd | 1 | 0.04 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.06 |  |
| xxd | 1 | 0.18 | -r |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b_-i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 19.35% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 11.38% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 20.49% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 9.85% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 22.23% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 15.85% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 25.58% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 34.25% faster with no flag.
- For sample size 32 MiB, tinyxxd was 26.77% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 16.44% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 14.21% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 18.71% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 19.93% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 17.00% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 24.28% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 11.52% faster with no flag.
- For sample size 16 MiB, tinyxxd was 21.34% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 16.45% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 27.31% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 9.49% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 22.15% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 22.34% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 26.79% faster with flags '-b -i'.
- For sample size 8 MiB, xxd was 47.90% faster with no flag.
- For sample size 8 MiB, tinyxxd was 9.73% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 15.44% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 18.87% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 10.14% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 18.65% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 20.34% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 25.83% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 14.07% faster with no flag.
- For sample size 4 MiB, tinyxxd was 17.47% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 14.44% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 19.09% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 8.64% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 19.26% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 16.11% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 25.28% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 11.78% faster with no flag.
- For sample size 2 MiB, tinyxxd was 17.23% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 15.16% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 17.40% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 19.71% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 14.55% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 24.10% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 23.65% faster with no flag.
- For sample size 1 MiB, tinyxxd was 148.00% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 11.68% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 14.42% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 7.25% faster with flags '-b'.
- For sample size 1 MiB, xxd was 10.83% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 6.69% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 9.55% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 11.85% faster than xxd.
- For sample 32 MiB, tinyxxd was 21.58% faster than xxd.
- For sample 16 MiB, tinyxxd was 15.45% faster than xxd.
- For sample size 8 MiB, xxd was 1.53% faster than tinyxxd.
- For sample 4 MiB, tinyxxd was 14.80% faster than xxd.
- For sample 2 MiB, tinyxxd was 13.00% faster than xxd.
- For sample 1 MiB, tinyxxd was 34.44% faster than xxd.

### Performance by flag
- tinyxxd was 8.06% faster with no flag.
- tinyxxd was 21.79% faster with flag '-r'.
- tinyxxd was 13.67% faster with flag '-p'.
- tinyxxd was 20.65% faster with flag '-e'.
- tinyxxd was 7.15% faster with flag '-b'.
- tinyxxd was 20.91% faster with flag '-u'.
- tinyxxd was 17.13% faster with flag '-E'.
- tinyxxd was 25.25% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 5.84% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 46.38% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 207.88% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 0.32% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 1.83% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 0.33% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 0.14% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 1.45% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 0.91% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 1.69% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 0.69% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 0.47% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 1.88% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 74.01% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 299.54% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 35.69% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 1.93% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 4.19% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 0.21% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 0.69% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 1.90% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 0.04% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 1.26% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 2.90% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 74.03% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 204.49% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 35.21% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 0.94% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 0.23% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 5.00% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 0.05% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 9.69% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 1.25% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 0.29% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 0.27% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 12.29% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 46.72% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 204.96% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 10.86% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 16.16% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 0.10% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 12.24% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 0.47% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 2.51% compared to the last run.
- For sample 32 MiB with flags '-u', xxd improved by 6.10% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 0.91% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd slowed down by 0.28% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 6.29% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 47.29% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 142.42% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 4.48% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 0.05% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 0.51% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 3.25% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 7.50% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 1.12% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 2.35% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 5.53% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd slowed down by 5.63% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 4.02% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 73.13% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 179.76% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 34.64% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 0.40% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 0.08% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 1.16% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 0.76% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 9.49% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd improved by 4.06% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 2.23% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 4.45% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 3.56% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 48.23% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 175.66% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 0.31% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 1.02% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 0.51% compared to the last run.
- For sample 8 MiB with flags '-i', xxd improved by 0.25% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 0.28% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 1.61% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 1.25% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 0.44% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 4.15% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 108.08% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 66.75% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 432.09% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 34.76% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 0.87% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 0.61% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 0.00% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 0.21% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.45% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 0.83% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 0.26% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 0.49% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 4.59% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 46.89% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 134.40% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 0.00% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 0.91% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 1.11% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 2.30% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 1.13% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 0.90% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 0.02% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 0.35% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd slowed down by 0.53% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 0.87% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 72.88% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 135.19% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 35.80% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 7.49% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 0.12% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 0.09% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 0.15% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 22.56% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 0.29% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 0.41% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.26% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 2.51% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 72.74% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 143.09% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 34.51% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 0.52% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 0.95% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 1.65% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 1.27% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 2.33% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 0.94% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 0.98% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.11% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 2.05% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 45.67% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 124.15% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 0.05% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 0.11% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 0.86% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 0.12% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 0.11% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 0.19% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 0.94% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 0.82% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 0.27% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 0.96% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 71.84% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 132.03% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 35.92% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 3.12% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 0.32% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 1.16% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 1.13% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 0.28% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 25.91% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 4.61% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 12.34% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 45.46% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 41.97% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 122.05% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 175.71% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 1.46% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 0.07% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 0.75% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 1.38% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 5.04% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 1.74% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 5.94% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 7.84% compared to the last run.
---
Report generated on: 2024-10-21T13:02:56.901263
