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
| xxd | 64 | 1.40 |  |
| xxd | 64 | 2.26 | -r |
| xxd | 64 | 4.74 |  |
| xxd | 64 | 4.30 | -r |
| xxd | 64 | 1.34 |  |
| xxd | 64 | 0.94 | -p |
| xxd | 64 | 5.05 | -i |
| xxd | 64 | 1.36 | -e |
| xxd | 64 | 3.00 | -b |
| xxd | 64 | 1.34 | -u |
| xxd | 64 | 1.51 | -E |
| tinyxxd | 64 | 1.30 |  |
| tinyxxd | 64 | 2.07 | -r |
| tinyxxd | 64 | 4.57 |  |
| tinyxxd | 64 | 3.74 | -r |
| tinyxxd | 64 | 1.29 |  |
| tinyxxd | 64 | 0.77 | -p |
| tinyxxd | 64 | 4.94 | -i |
| tinyxxd | 64 | 1.33 | -e |
| tinyxxd | 64 | 3.01 | -b |
| tinyxxd | 64 | 1.25 | -u |
| tinyxxd | 64 | 1.41 | -E |
| tinyxxd | 32 | 0.65 |  |
| tinyxxd | 32 | 1.00 | -r |
| tinyxxd | 32 | 1.98 |  |
| tinyxxd | 32 | 1.85 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.38 | -p |
| tinyxxd | 32 | 2.56 | -i |
| tinyxxd | 32 | 0.66 | -e |
| tinyxxd | 32 | 1.48 | -b |
| tinyxxd | 32 | 0.62 | -u |
| tinyxxd | 32 | 0.70 | -E |
| xxd | 32 | 0.68 |  |
| xxd | 32 | 1.14 | -r |
| xxd | 32 | 1.91 |  |
| xxd | 32 | 2.19 | -r |
| xxd | 32 | 0.67 |  |
| xxd | 32 | 0.48 | -p |
| xxd | 32 | 2.61 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.48 | -b |
| xxd | 32 | 0.67 | -u |
| xxd | 32 | 0.73 | -E |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.50 | -r |
| tinyxxd | 16 | 0.98 |  |
| tinyxxd | 16 | 0.92 | -r |
| tinyxxd | 16 | 0.31 |  |
| tinyxxd | 16 | 0.19 | -p |
| tinyxxd | 16 | 1.27 | -i |
| tinyxxd | 16 | 0.34 | -e |
| tinyxxd | 16 | 0.73 | -b |
| tinyxxd | 16 | 0.31 | -u |
| tinyxxd | 16 | 0.36 | -E |
| xxd | 16 | 0.35 |  |
| xxd | 16 | 0.57 | -r |
| xxd | 16 | 0.84 |  |
| xxd | 16 | 1.05 | -r |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.24 | -i |
| xxd | 16 | 0.35 | -e |
| xxd | 16 | 0.76 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.46 |  |
| xxd | 8 | 0.53 | -r |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.62 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.18 | -u |
| xxd | 8 | 0.19 | -E |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.25 | -r |
| tinyxxd | 8 | 0.41 |  |
| tinyxxd | 8 | 0.46 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.68 | -i |
| tinyxxd | 8 | 0.17 | -e |
| tinyxxd | 8 | 0.39 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.46 |  |
| xxd | 4 | 0.29 | -r |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.32 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.15 | -r |
| tinyxxd | 4 | 0.23 |  |
| tinyxxd | 4 | 0.23 | -r |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.05 | -p |
| tinyxxd | 4 | 0.31 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.08 | -u |
| tinyxxd | 4 | 0.09 | -E |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.10 |  |
| xxd | 2 | 0.13 | -r |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.04 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.07 | -r |
| tinyxxd | 2 | 0.10 |  |
| tinyxxd | 2 | 0.12 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.16 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 |  |
| xxd | 1 | 0.07 | -r |
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
| tinyxxd | 1 | 0.01 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 12.88% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 22.27% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 6.93% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 7.17% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 16.84% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 23.56% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 7.98% faster with flags '-u'.
- For sample size 16 MiB, xxd was 6.31% faster with no flag.
- For sample size 16 MiB, tinyxxd was 13.93% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 21.59% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 10.98% faster with no flag.
- For sample size 8 MiB, tinyxxd was 12.63% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 21.79% faster with flags '-p'.
- For sample size 8 MiB, xxd was 8.83% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 11.71% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 60.10% faster with no flag.
- For sample size 4 MiB, tinyxxd was 12.34% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 22.32% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 12.05% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 6.68% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 13.27% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 19.37% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 6.23% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 11.50% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 16.63% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.14% faster with flags '-E'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 6.09% faster than xxd.
- For sample 32 MiB, tinyxxd was 5.70% faster than xxd.
- For sample 16 MiB, tinyxxd was 2.67% faster than xxd.
- For sample 8 MiB, tinyxxd was 4.67% faster than xxd.
- For sample 4 MiB, tinyxxd was 21.03% faster than xxd.
- For sample 2 MiB, tinyxxd was 4.31% faster than xxd.
- For sample 1 MiB, tinyxxd was 4.78% faster than xxd.

### Performance by flag
- tinyxxd was 13.96% faster with flag '-r'.
- tinyxxd was 22.37% faster with flag '-p'.
- tinyxxd was 7.36% faster with flag '-u'.
- tinyxxd was 5.48% faster with flag '-E'.

### Performance compared to last run
- For sample 2 MiB with flags '', xxd slowed down by 0.99% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 44.40% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 132.50% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 0.52% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 0.28% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 0.14% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 0.09% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 1.13% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 0.73% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 0.31% compared to the last run.
- For sample 2 MiB with flags '-E', xxd improved by 1.13% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 3.02% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 46.75% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 149.28% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 3.57% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 1.40% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd improved by 0.01% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 4.78% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 1.89% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd slowed down by 1.82% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd slowed down by 1.27% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 5.46% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 44.94% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 134.17% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 0.53% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 2.59% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 0.19% compared to the last run.
- For sample 1 MiB with flags '-i', xxd slowed down by 1.53% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 2.08% compared to the last run.
- For sample 1 MiB with flags '-b', xxd improved by 0.37% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 0.76% compared to the last run.
- For sample 1 MiB with flags '-E', xxd improved by 32.49% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 11.85% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 82.02% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 141.12% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 67.91% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 0.13% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 0.92% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 1.04% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 1.43% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd improved by 0.15% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 1.13% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 22.77% compared to the last run.
---
Report generated on: 2024-07-14T00:28:43.278691
