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
| xxd | 64 | 1.37 |  |
| xxd | 64 | 2.28 | -r |
| xxd | 64 | 4.13 |  |
| xxd | 64 | 4.45 | -r |
| xxd | 64 | 1.31 |  |
| xxd | 64 | 1.02 | -p |
| xxd | 64 | 4.72 | -i |
| xxd | 64 | 1.38 | -e |
| xxd | 64 | 2.62 | -b |
| xxd | 64 | 1.28 | -u |
| xxd | 64 | 1.45 | -E |
| xxd | 64 | 5.79 | -b -i |
| tinyxxd | 64 | 1.02 |  |
| tinyxxd | 64 | 1.42 | -r |
| tinyxxd | 64 | 4.26 |  |
| tinyxxd | 64 | 2.00 | -r |
| tinyxxd | 64 | 1.01 |  |
| tinyxxd | 64 | 0.89 | -p |
| tinyxxd | 64 | 4.59 | -i |
| tinyxxd | 64 | 1.07 | -e |
| tinyxxd | 64 | 3.19 | -b |
| tinyxxd | 64 | 0.97 | -u |
| tinyxxd | 64 | 1.15 | -E |
| tinyxxd | 64 | 3.98 | -b -i |
| tinyxxd | 32 | 0.81 |  |
| tinyxxd | 32 | 0.70 | -r |
| tinyxxd | 32 | 3.34 |  |
| tinyxxd | 32 | 1.00 | -r |
| tinyxxd | 32 | 0.48 |  |
| tinyxxd | 32 | 0.45 | -p |
| tinyxxd | 32 | 2.28 | -i |
| tinyxxd | 32 | 0.53 | -e |
| tinyxxd | 32 | 1.55 | -b |
| tinyxxd | 32 | 0.49 | -u |
| tinyxxd | 32 | 0.56 | -E |
| tinyxxd | 32 | 2.03 | -b -i |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 1.13 | -r |
| xxd | 32 | 1.77 |  |
| xxd | 32 | 2.22 | -r |
| xxd | 32 | 0.66 |  |
| xxd | 32 | 0.49 | -p |
| xxd | 32 | 2.43 | -i |
| xxd | 32 | 0.66 | -e |
| xxd | 32 | 1.31 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.74 | -E |
| xxd | 32 | 2.89 | -b -i |
| xxd | 16 | 0.36 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.89 |  |
| xxd | 16 | 1.21 | -r |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.26 | -p |
| xxd | 16 | 1.20 | -i |
| xxd | 16 | 0.33 | -e |
| xxd | 16 | 0.65 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.36 | -E |
| xxd | 16 | 1.46 | -b -i |
| tinyxxd | 16 | 0.26 |  |
| tinyxxd | 16 | 0.36 | -r |
| tinyxxd | 16 | 1.89 |  |
| tinyxxd | 16 | 0.64 | -r |
| tinyxxd | 16 | 0.25 |  |
| tinyxxd | 16 | 0.22 | -p |
| tinyxxd | 16 | 1.15 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.77 | -b |
| tinyxxd | 16 | 0.25 | -u |
| tinyxxd | 16 | 0.29 | -E |
| tinyxxd | 16 | 1.00 | -b -i |
| xxd | 8 | 0.18 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.54 |  |
| xxd | 8 | 0.58 | -r |
| xxd | 8 | 0.16 |  |
| xxd | 8 | 0.13 | -p |
| xxd | 8 | 0.60 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.32 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.74 | -b -i |
| tinyxxd | 8 | 0.13 |  |
| tinyxxd | 8 | 0.18 | -r |
| tinyxxd | 8 | 0.87 |  |
| tinyxxd | 8 | 0.25 | -r |
| tinyxxd | 8 | 0.12 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.39 | -b |
| tinyxxd | 8 | 0.13 | -u |
| tinyxxd | 8 | 0.14 | -E |
| tinyxxd | 8 | 0.55 | -b -i |
| tinyxxd | 4 | 0.77 |  |
| tinyxxd | 4 | 0.09 | -r |
| tinyxxd | 4 | 0.22 |  |
| tinyxxd | 4 | 0.13 | -r |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.25 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.18 |  |
| xxd | 4 | 0.30 | -r |
| xxd | 4 | 0.08 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.08 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.36 | -b -i |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.05 | -r |
| tinyxxd | 2 | 0.11 |  |
| tinyxxd | 2 | 0.07 | -r |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.04 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.09 |  |
| xxd | 2 | 0.15 | -r |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.04 | -e |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
| tinyxxd | 1 | 0.28 |  |
| tinyxxd | 1 | 0.03 | -r |
| tinyxxd | 1 | 0.06 |  |
| tinyxxd | 1 | 0.03 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.07 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |
| tinyxxd | 1 | 0.06 | -b -i |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 |  |
| xxd | 1 | 0.07 | -r |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.04 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.10 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 8.24% faster with no flag.
- For sample size 64 MiB, tinyxxd was 96.37% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 15.19% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 28.41% faster with flags '-e'.
- For sample size 64 MiB, xxd was 21.76% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 31.30% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 26.96% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 45.34% faster with flags '-b -i'.
- For sample size 32 MiB, xxd was 49.75% faster with no flag.
- For sample size 32 MiB, tinyxxd was 96.58% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 9.68% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 7.03% faster with flags '-i'.
- For sample size 32 MiB, tinyxxd was 24.07% faster with flags '-e'.
- For sample size 32 MiB, xxd was 18.51% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 34.05% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 32.84% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 42.31% faster with flags '-b -i'.
- For sample size 16 MiB, xxd was 52.08% faster with no flag.
- For sample size 16 MiB, tinyxxd was 79.60% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 16.48% faster with flags '-p'.
- For sample size 16 MiB, xxd was 17.98% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 33.91% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 27.00% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 47.02% faster with flags '-b -i'.
- For sample size 8 MiB, xxd was 27.67% faster with no flag.
- For sample size 8 MiB, tinyxxd was 101.34% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 16.21% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 21.10% faster with flags '-e'.
- For sample size 8 MiB, xxd was 19.71% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 31.72% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 33.41% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 32.96% faster with flags '-b -i'.
- For sample size 4 MiB, xxd was 194.87% faster with no flag.
- For sample size 4 MiB, tinyxxd was 98.85% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 10.11% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 6.23% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 22.30% faster with flags '-e'.
- For sample size 4 MiB, xxd was 17.20% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 32.81% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 30.84% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 44.49% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 100.41% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 15.40% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 21.18% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 31.37% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 27.44% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 51.97% faster with flags '-b -i'.
- For sample size 1 MiB, xxd was 276.31% faster with no flag.
- For sample size 1 MiB, tinyxxd was 85.12% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 14.95% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 18.24% faster with flags '-e'.
- For sample size 1 MiB, xxd was 17.04% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 27.13% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 28.11% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 51.05% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 24.42% faster than xxd.
- For sample 32 MiB, tinyxxd was 9.87% faster than xxd.
- For sample 16 MiB, tinyxxd was 8.02% faster than xxd.
- For sample 8 MiB, tinyxxd was 13.18% faster than xxd.
- For sample size 4 MiB, xxd was 15.71% faster than tinyxxd.
- For sample 2 MiB, tinyxxd was 27.33% faster than xxd.
- For sample size 1 MiB, xxd was 31.80% faster than tinyxxd.

### Performance by flag
- xxd was 23.35% faster with no flag.
- tinyxxd was 94.38% faster with flag '-r'.
- tinyxxd was 13.87% faster with flag '-p'.
- tinyxxd was 23.10% faster with flag '-e'.
- xxd was 19.81% faster with flag '-b'.
- tinyxxd was 32.36% faster with flag '-u'.
- tinyxxd was 28.95% faster with flag '-E'.
- tinyxxd was 44.05% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 3.44% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 51.67% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 211.33% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 5.74% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 1.37% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 1.18% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 1.53% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 1.87% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 3.39% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 2.39% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 0.61% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 0.74% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 4.88% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 29.71% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 336.36% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 1.25% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 3.91% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 0.51% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd slowed down by 0.02% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 0.46% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 1.76% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 1.58% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 2.61% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd improved by 0.31% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 67.60% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 30.11% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 587.96% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 0.38% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 0.20% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 0.39% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 0.48% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 0.07% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 1.28% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd improved by 3.08% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 0.82% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd slowed down by 1.31% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 3.28% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 49.64% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 173.77% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 0.63% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 1.60% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 8.19% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 1.54% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 0.35% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 0.63% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 1.60% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 1.10% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 1.19% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 9.16% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 51.07% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 170.37% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 2.10% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 0.81% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 4.25% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 0.24% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 0.62% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 0.44% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 0.04% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 1.12% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 0.15% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 5.34% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 44.09% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 677.79% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 0.00% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 2.75% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 0.34% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 0.43% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 15.64% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 6.56% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 0.71% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 2.36% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd improved by 3.36% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 6.63% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 50.78% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 226.64% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 2.78% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 0.74% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 0.33% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 1.05% compared to the last run.
- For sample 8 MiB with flags '-e', xxd improved by 4.65% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 4.67% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 0.74% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 1.53% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 0.74% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 4.12% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 28.66% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 604.96% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 0.31% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 0.14% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 0.09% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 4.02% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 0.71% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 0.10% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 3.95% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 2.33% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd slowed down by 8.40% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 1106.17% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 28.13% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 237.90% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 1.86% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 0.48% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 0.35% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 0.13% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 1.16% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 0.36% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 0.50% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 0.45% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd slowed down by 0.27% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 2.79% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 52.02% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 117.05% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 0.53% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 0.18% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 4.21% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 2.29% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 1.03% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 0.36% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 0.36% compared to the last run.
- For sample 4 MiB with flags '-E', xxd slowed down by 0.64% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 2.20% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 13.50% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 28.65% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 225.83% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 0.09% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 0.07% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 0.31% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 1.32% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 1.76% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.16% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 0.61% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 0.50% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.89% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 1.35% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 48.36% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 112.55% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 2.43% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 0.36% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 5.39% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 0.10% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 0.49% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 14.28% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 0.05% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 0.03% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd slowed down by 3.91% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 1493.16% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 23.90% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 218.87% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 1.33% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 0.88% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 0.14% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 0.09% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 2.80% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 0.02% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 2.28% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 0.33% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd improved by 10.35% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 3.24% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 47.32% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 110.13% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 2.97% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 1.50% compared to the last run.
- For sample 1 MiB with flags '-p', xxd improved by 1.35% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 0.22% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 0.27% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 2.12% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 0.61% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 0.57% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd slowed down by 4.78% compared to the last run.
---
Report generated on: 2025-11-26T15:19:34.534407
