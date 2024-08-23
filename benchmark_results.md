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
| xxd | 64 | 1.36 |  |
| xxd | 64 | 2.25 | -r |
| xxd | 64 | 4.78 |  |
| xxd | 64 | 4.23 | -r |
| xxd | 64 | 1.34 |  |
| xxd | 64 | 0.93 | -p |
| xxd | 64 | 4.78 | -i |
| xxd | 64 | 1.39 | -e |
| xxd | 64 | 3.08 | -b |
| xxd | 64 | 1.32 | -u |
| xxd | 64 | 1.50 | -E |
| tinyxxd | 64 | 1.30 |  |
| tinyxxd | 64 | 1.96 | -r |
| tinyxxd | 64 | 4.68 |  |
| tinyxxd | 64 | 3.56 | -r |
| tinyxxd | 64 | 1.26 |  |
| tinyxxd | 64 | 0.77 | -p |
| tinyxxd | 64 | 4.78 | -i |
| tinyxxd | 64 | 1.32 | -e |
| tinyxxd | 64 | 3.04 | -b |
| tinyxxd | 64 | 1.26 | -u |
| tinyxxd | 64 | 1.43 | -E |
| xxd | 32 | 0.70 |  |
| xxd | 32 | 1.14 | -r |
| xxd | 32 | 1.92 |  |
| xxd | 32 | 2.08 | -r |
| xxd | 32 | 0.69 |  |
| xxd | 32 | 0.47 | -p |
| xxd | 32 | 2.44 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.49 | -b |
| xxd | 32 | 0.68 | -u |
| xxd | 32 | 0.74 | -E |
| tinyxxd | 32 | 0.65 |  |
| tinyxxd | 32 | 1.00 | -r |
| tinyxxd | 32 | 1.96 |  |
| tinyxxd | 32 | 1.78 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.41 | -p |
| tinyxxd | 32 | 2.39 | -i |
| tinyxxd | 32 | 0.67 | -e |
| tinyxxd | 32 | 1.54 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.71 | -E |
| xxd | 16 | 0.36 |  |
| xxd | 16 | 0.55 | -r |
| xxd | 16 | 0.95 |  |
| xxd | 16 | 1.04 | -r |
| xxd | 16 | 0.35 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.23 | -i |
| xxd | 16 | 0.35 | -e |
| xxd | 16 | 0.76 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.49 | -r |
| tinyxxd | 16 | 2.16 |  |
| tinyxxd | 16 | 0.92 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.19 | -p |
| tinyxxd | 16 | 1.18 | -i |
| tinyxxd | 16 | 0.33 | -e |
| tinyxxd | 16 | 0.76 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.39 | -E |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.50 |  |
| xxd | 8 | 0.52 | -r |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.60 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.38 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.25 | -r |
| tinyxxd | 8 | 0.44 |  |
| tinyxxd | 8 | 0.45 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.17 | -e |
| tinyxxd | 8 | 0.39 | -b |
| tinyxxd | 8 | 0.17 | -u |
| tinyxxd | 8 | 0.18 | -E |
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
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.27 |  |
| xxd | 4 | 0.41 | -r |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.30 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 2 | 0.06 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.23 |  |
| xxd | 2 | 0.21 | -r |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.07 | -r |
| tinyxxd | 2 | 0.11 |  |
| tinyxxd | 2 | 0.22 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.04 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.05 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.03 | -r |
| tinyxxd | 1 | 0.06 |  |
| tinyxxd | 1 | 0.06 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.03 | -E |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 |  |
| xxd | 1 | 0.07 | -r |
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 17.20% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 21.52% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 15.55% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 14.19% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 8.26% faster with flags '-u'.
- For sample size 16 MiB, xxd was 70.30% faster with no flag.
- For sample size 16 MiB, tinyxxd was 12.83% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 21.65% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 5.86% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 9.45% faster with no flag.
- For sample size 8 MiB, tinyxxd was 14.19% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 21.39% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 17.33% faster with no flag.
- For sample size 4 MiB, tinyxxd was 56.88% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 25.94% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 5.88% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 69.41% faster with no flag.
- For sample size 2 MiB, xxd was 27.62% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 20.78% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 16.58% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.05% faster with flags '-u'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 6.34% faster than xxd.
- For sample 32 MiB, tinyxxd was 5.39% faster than xxd.
- For sample size 16 MiB, xxd was 13.48% faster than tinyxxd.
- For sample 8 MiB, tinyxxd was 6.87% faster than xxd.
- For sample 4 MiB, tinyxxd was 18.82% faster than xxd.
- For sample 2 MiB, tinyxxd was 15.90% faster than xxd.
- For sample 1 MiB, tinyxxd was 5.77% faster than xxd.

### Performance by flag
- tinyxxd was 16.99% faster with flag '-r'.
- tinyxxd was 18.56% faster with flag '-p'.
- tinyxxd was 5.33% faster with flag '-u'.

### Performance compared to last run
- For sample 64 MiB with flags '', xxd improved by 0.30% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 47.59% compared to the last run.
- For sample 64 MiB with flags '', xxd slowed down by 250.91% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 1.48% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 2.08% compared to the last run.
- For sample 64 MiB with flags '-p', xxd slowed down by 0.13% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 0.20% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 2.93% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 1.17% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 3.95% compared to the last run.
- For sample 64 MiB with flags '-E', xxd improved by 0.92% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 2.10% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 44.88% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 268.04% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd slowed down by 0.01% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd improved by 1.03% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd slowed down by 0.11% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 0.26% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd slowed down by 0.08% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 1.94% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd improved by 0.52% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd slowed down by 1.43% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 5.64% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 46.74% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 190.88% compared to the last run.
- For sample 32 MiB with flags '-r', xxd improved by 2.76% compared to the last run.
- For sample 32 MiB with flags '', xxd slowed down by 4.32% compared to the last run.
- For sample 32 MiB with flags '-p', xxd slowed down by 1.02% compared to the last run.
- For sample 32 MiB with flags '-i', xxd slowed down by 0.82% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 0.22% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 2.65% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 0.61% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 1.27% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 3.51% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 43.85% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 212.06% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd slowed down by 0.07% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 0.29% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 7.40% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd improved by 2.17% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 2.23% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 1.08% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 0.18% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd improved by 0.11% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 6.82% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 46.71% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 186.02% compared to the last run.
- For sample 16 MiB with flags '-r', xxd improved by 0.03% compared to the last run.
- For sample 16 MiB with flags '', xxd slowed down by 3.68% compared to the last run.
- For sample 16 MiB with flags '-p', xxd improved by 0.38% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 4.45% compared to the last run.
- For sample 16 MiB with flags '-e', xxd improved by 8.70% compared to the last run.
- For sample 16 MiB with flags '-b', xxd improved by 0.29% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 2.52% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 0.94% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 3.69% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 49.10% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 581.56% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd improved by 5.08% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd slowed down by 2.15% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 0.17% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd slowed down by 0.36% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd improved by 0.09% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd improved by 0.86% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 0.76% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd slowed down by 8.04% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 4.20% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 48.05% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 197.25% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 2.89% compared to the last run.
- For sample 8 MiB with flags '', xxd slowed down by 0.62% compared to the last run.
- For sample 8 MiB with flags '-p', xxd improved by 0.46% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 0.06% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 0.36% compared to the last run.
- For sample 8 MiB with flags '-b', xxd improved by 0.18% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 2.11% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 0.26% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 3.07% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd improved by 44.37% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 169.13% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 1.31% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 0.73% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 0.43% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 0.03% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd improved by 0.81% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd improved by 1.53% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd slowed down by 2.51% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd improved by 0.62% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 3.85% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 44.70% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 159.32% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd improved by 0.08% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 0.03% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd improved by 0.12% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd improved by 0.30% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 0.64% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd improved by 1.13% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd improved by 0.58% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd improved by 0.42% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 1.89% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 56.00% compared to the last run.
- For sample 4 MiB with flags '', xxd slowed down by 204.98% compared to the last run.
- For sample 4 MiB with flags '-r', xxd slowed down by 26.23% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 2.30% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 4.67% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 4.66% compared to the last run.
- For sample 4 MiB with flags '-e', xxd improved by 2.97% compared to the last run.
- For sample 4 MiB with flags '-b', xxd improved by 1.95% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 5.01% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 2.47% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 0.12% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 77.08% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 310.75% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 42.11% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 17.88% compared to the last run.
- For sample 2 MiB with flags '-p', xxd improved by 6.68% compared to the last run.
- For sample 2 MiB with flags '-i', xxd slowed down by 1.92% compared to the last run.
- For sample 2 MiB with flags '-e', xxd slowed down by 0.13% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 0.70% compared to the last run.
- For sample 2 MiB with flags '-u', xxd slowed down by 1.50% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 1.28% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 0.47% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd improved by 54.09% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 145.84% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 54.18% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 1.17% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 53.47% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd slowed down by 0.54% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd slowed down by 0.37% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 0.47% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 0.77% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 0.48% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 5.98% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd improved by 42.26% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 139.63% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 0.72% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 0.47% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd slowed down by 0.79% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd slowed down by 0.35% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd slowed down by 2.47% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 0.78% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd slowed down by 1.82% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd slowed down by 4.12% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 3.42% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 43.97% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 127.89% compared to the last run.
- For sample 1 MiB with flags '-r', xxd slowed down by 8.60% compared to the last run.
- For sample 1 MiB with flags '', xxd slowed down by 2.06% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 1.24% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 1.82% compared to the last run.
- For sample 1 MiB with flags '-e', xxd slowed down by 3.05% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 1.86% compared to the last run.
- For sample 1 MiB with flags '-u', xxd slowed down by 5.68% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 1.64% compared to the last run.
---
Report generated on: 2024-08-23T10:50:37.928338
