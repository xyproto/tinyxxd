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
| xxd | 64 | 1.44 |  |
| xxd | 64 | 2.27 | -r |
| xxd | 64 | 4.72 |  |
| xxd | 64 | 4.31 | -r |
| xxd | 64 | 1.36 |  |
| xxd | 64 | 0.96 | -p |
| xxd | 64 | 4.76 | -i |
| xxd | 64 | 1.36 | -e |
| xxd | 64 | 3.05 | -b |
| xxd | 64 | 1.41 | -u |
| xxd | 64 | 1.50 | -E |
| tinyxxd | 64 | 1.30 |  |
| tinyxxd | 64 | 2.00 | -r |
| tinyxxd | 64 | 4.67 |  |
| tinyxxd | 64 | 3.55 | -r |
| tinyxxd | 64 | 1.27 |  |
| tinyxxd | 64 | 0.77 | -p |
| tinyxxd | 64 | 4.73 | -i |
| tinyxxd | 64 | 1.34 | -e |
| tinyxxd | 64 | 3.02 | -b |
| tinyxxd | 64 | 1.26 | -u |
| tinyxxd | 64 | 1.41 | -E |
| xxd | 32 | 0.69 |  |
| xxd | 32 | 1.11 | -r |
| xxd | 32 | 1.96 |  |
| xxd | 32 | 2.07 | -r |
| xxd | 32 | 0.66 |  |
| xxd | 32 | 0.47 | -p |
| xxd | 32 | 2.41 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.80 | -b |
| xxd | 32 | 0.71 | -u |
| xxd | 32 | 0.73 | -E |
| tinyxxd | 32 | 0.65 |  |
| tinyxxd | 32 | 1.00 | -r |
| tinyxxd | 32 | 2.00 |  |
| tinyxxd | 32 | 1.78 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.39 | -p |
| tinyxxd | 32 | 2.39 | -i |
| tinyxxd | 32 | 0.67 | -e |
| tinyxxd | 32 | 1.51 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.70 | -E |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.49 | -r |
| tinyxxd | 16 | 0.96 |  |
| tinyxxd | 16 | 0.89 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.19 | -p |
| tinyxxd | 16 | 1.18 | -i |
| tinyxxd | 16 | 0.34 | -e |
| tinyxxd | 16 | 0.77 | -b |
| tinyxxd | 16 | 0.33 | -u |
| tinyxxd | 16 | 0.37 | -E |
| xxd | 16 | 0.39 |  |
| xxd | 16 | 0.56 | -r |
| xxd | 16 | 1.69 |  |
| xxd | 16 | 1.42 | -r |
| xxd | 16 | 0.34 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.19 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.75 | -b |
| xxd | 16 | 0.34 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 8 | 0.18 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.43 |  |
| xxd | 8 | 0.53 | -r |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.62 | -i |
| xxd | 8 | 0.18 | -e |
| xxd | 8 | 0.38 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.25 | -r |
| tinyxxd | 8 | 0.45 |  |
| tinyxxd | 8 | 0.45 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.17 | -e |
| tinyxxd | 8 | 0.41 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.21 |  |
| xxd | 4 | 0.26 | -r |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.30 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.09 | -E |
| tinyxxd | 4 | 0.09 |  |
| tinyxxd | 4 | 0.13 | -r |
| tinyxxd | 4 | 0.21 |  |
| tinyxxd | 4 | 0.23 | -r |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.05 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.09 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.08 | -u |
| tinyxxd | 4 | 0.09 | -E |
| tinyxxd | 2 | 0.05 |  |
| tinyxxd | 2 | 0.07 | -r |
| tinyxxd | 2 | 0.34 |  |
| tinyxxd | 2 | 0.19 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.05 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.15 | -r |
| xxd | 2 | 0.11 |  |
| xxd | 2 | 0.32 | -r |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.06 |  |
| xxd | 1 | 0.07 | -r |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| tinyxxd | 1 | 0.03 |  |
| tinyxxd | 1 | 0.04 | -r |
| tinyxxd | 1 | 0.06 |  |
| tinyxxd | 1 | 0.06 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.03 | -E |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 18.51% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 24.63% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 12.36% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 6.97% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 14.28% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 21.10% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 18.82% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 11.98% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 50.68% faster with no flag.
- For sample size 16 MiB, tinyxxd was 43.95% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 21.92% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 16.87% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 21.60% faster with flags '-p'.
- For sample size 8 MiB, xxd was 7.75% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 6.93% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 15.10% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 20.63% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 7.47% faster with flags '-u'.
- For sample size 2 MiB, xxd was 117.32% faster with no flag.
- For sample size 2 MiB, tinyxxd was 79.80% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 18.14% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 16.42% faster with flags '-p'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 7.21% faster than xxd.
- For sample 32 MiB, tinyxxd was 7.45% faster than xxd.
- For sample 16 MiB, tinyxxd was 23.72% faster than xxd.
- For sample 8 MiB, tinyxxd was 5.36% faster than xxd.
- For sample 4 MiB, tinyxxd was 5.35% faster than xxd.
- For sample size 2 MiB, xxd was 2.18% faster than tinyxxd.
- For sample 1 MiB, tinyxxd was 0.88% faster than xxd.

### Performance by flag
- tinyxxd was 6.46% faster with no flag.
- tinyxxd was 21.69% faster with flag '-r'.
- tinyxxd was 22.87% faster with flag '-p'.
- tinyxxd was 10.36% faster with flag '-u'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd slowed down by 7.77% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 46.35% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 253.42% compared to the last run.
- For sample 64 MiB with flags '-r', xxd slowed down by 1.90% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 1.95% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 2.46% compared to the last run.
- For sample 64 MiB with flags '-i', xxd improved by 0.57% compared to the last run.
- For sample 64 MiB with flags '-e', xxd improved by 2.01% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 1.14% compared to the last run.
- For sample 64 MiB with flags '-u', xxd slowed down by 6.81% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 0.21% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 3.38% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 43.92% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 271.62% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 0.32% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 0.99% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 0.09% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 1.00% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 0.87% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 0.60% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 0.69% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 1.63% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 0.59% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 46.83% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 184.58% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 0.47% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 5.05% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 0.90% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 1.05% compared to the last run.
- For sample 32 MiB with flags '-e', xxd improved by 0.17% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 20.33% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 4.03% compared to the last run.
- For sample 32 MiB with flags '-E', xxd improved by 1.51% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 3.02% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 43.90% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 217.57% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 0.38% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 0.37% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd improved by 6.56% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 0.13% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd slowed down by 1.39% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 1.74% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 0.58% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 0.64% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 2.02% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 46.82% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 195.39% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 2.91% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 1.44% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd slowed down by 0.17% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 0.21% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 2.91% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 1.20% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 2.61% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 4.20% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 13.11% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 46.04% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 390.69% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 37.34% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 2.20% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 0.39% compared to the last run.
- For sample 16 MiB with flags '-i', xxd improved by 3.67% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 2.29% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 0.79% compared to the last run.
- For sample 16 MiB with flags '-u', xxd slowed down by 2.14% compared to the last run.
- For sample 16 MiB with flags '-E', xxd slowed down by 0.69% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 6.58% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 46.52% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 157.24% compared to the last run.
- For sample 8 MiB with flags '-r', xxd slowed down by 2.38% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 2.60% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 0.25% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 3.15% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 1.74% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 0.65% compared to the last run.
- For sample 8 MiB with flags '-u', xxd improved by 0.13% compared to the last run.
- For sample 8 MiB with flags '-E', xxd improved by 0.47% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 3.92% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 45.08% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 176.12% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 1.22% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 0.40% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd slowed down by 0.08% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 0.00% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 0.61% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 6.43% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 2.46% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 1.20% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 6.35% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 65.28% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 142.92% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 35.52% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 2.03% compared to the last run.
- For sample 4 MiB with flags '-p', xxd improved by 4.04% compared to the last run.
- For sample 4 MiB with flags '-i', xxd slowed down by 1.09% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 0.61% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 0.29% compared to the last run.
- For sample 4 MiB with flags '-u', xxd slowed down by 2.76% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 1.75% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 4.10% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 44.06% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 160.82% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 0.18% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 1.75% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 0.18% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 0.93% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd slowed down by 0.76% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 0.23% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.11% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 4.15% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 1.67% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 70.41% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 667.93% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 12.22% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 3.58% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 33.95% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 2.00% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 0.01% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.71% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 0.09% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 1.53% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 1.50% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 29.76% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 130.99% compared to the last run.
- For sample 2 MiB with flags '-r', xxd slowed down by 47.88% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 1.08% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 0.41% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 1.13% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 0.87% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.23% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 0.49% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 0.89% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 3.41% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 48.96% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 126.28% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 6.95% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 0.36% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 0.73% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 0.05% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 0.03% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 0.08% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 1.67% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 1.04% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 24.02% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 33.71% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 144.82% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 6.96% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 2.28% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 0.86% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 0.01% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 1.03% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 0.38% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 0.06% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 1.76% compared to the last run.
---
Report generated on: 2024-08-23T11:06:08.674812
