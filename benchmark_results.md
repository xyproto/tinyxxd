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
| tinyxxd | 64 | 0.60 |  |
| tinyxxd | 64 | 0.84 | -r |
| tinyxxd | 64 | 4.12 | -b |
| tinyxxd | 64 | 4.09 | -r -b |
| tinyxxd | 64 | 0.78 |  |
| tinyxxd | 64 | 0.62 | -p |
| tinyxxd | 64 | 4.74 | -i |
| tinyxxd | 64 | 1.07 | -e |
| tinyxxd | 64 | 2.70 | -b |
| tinyxxd | 64 | 0.62 | -u |
| tinyxxd | 64 | 0.58 | -E |
| tinyxxd | 64 | 3.51 | -b -i |
| xxd | 64 | 1.33 |  |
| xxd | 64 | 2.23 | -r |
| xxd | 64 | 3.61 | -b |
| xxd | 64 | 4.32 | -r -b |
| xxd | 64 | 1.54 |  |
| xxd | 64 | 1.05 | -p |
| xxd | 64 | 5.04 | -i |
| xxd | 64 | 1.33 | -e |
| xxd | 64 | 2.69 | -b |
| xxd | 64 | 1.31 | -u |
| xxd | 64 | 1.49 | -E |
| xxd | 64 | 5.69 | -b -i |
| xxd | 32 | 0.65 |  |
| xxd | 32 | 1.14 | -r |
| xxd | 32 | 1.63 | -b |
| xxd | 32 | 2.08 | -r -b |
| xxd | 32 | 0.75 |  |
| xxd | 32 | 0.53 | -p |
| xxd | 32 | 2.46 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.32 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.73 | -E |
| xxd | 32 | 2.86 | -b -i |
| tinyxxd | 32 | 0.30 |  |
| tinyxxd | 32 | 0.43 | -r |
| tinyxxd | 32 | 3.08 | -b |
| tinyxxd | 32 | 1.93 | -r -b |
| tinyxxd | 32 | 0.38 |  |
| tinyxxd | 32 | 0.33 | -p |
| tinyxxd | 32 | 2.40 | -i |
| tinyxxd | 32 | 0.54 | -e |
| tinyxxd | 32 | 1.36 | -b |
| tinyxxd | 32 | 0.30 | -u |
| tinyxxd | 32 | 0.30 | -E |
| tinyxxd | 32 | 1.74 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.57 | -r |
| xxd | 16 | 0.71 | -b |
| xxd | 16 | 1.13 | -r -b |
| xxd | 16 | 0.37 |  |
| xxd | 16 | 0.26 | -p |
| xxd | 16 | 1.27 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.66 | -b |
| xxd | 16 | 0.32 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.47 | -b -i |
| tinyxxd | 16 | 0.15 |  |
| tinyxxd | 16 | 0.22 | -r |
| tinyxxd | 16 | 0.84 | -b |
| tinyxxd | 16 | 0.97 | -r -b |
| tinyxxd | 16 | 0.20 |  |
| tinyxxd | 16 | 0.16 | -p |
| tinyxxd | 16 | 1.16 | -i |
| tinyxxd | 16 | 0.27 | -e |
| tinyxxd | 16 | 0.68 | -b |
| tinyxxd | 16 | 0.15 | -u |
| tinyxxd | 16 | 0.15 | -E |
| tinyxxd | 16 | 0.89 | -b -i |
| xxd | 8 | 0.16 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.36 | -b |
| xxd | 8 | 0.57 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.63 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.73 | -b -i |
| tinyxxd | 8 | 0.08 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.37 | -b |
| tinyxxd | 8 | 0.49 | -r -b |
| tinyxxd | 8 | 0.10 |  |
| tinyxxd | 8 | 0.08 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.35 | -b |
| tinyxxd | 8 | 0.08 | -u |
| tinyxxd | 8 | 0.08 | -E |
| tinyxxd | 8 | 0.44 | -b -i |
| tinyxxd | 4 | 0.04 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.25 | -r -b |
| tinyxxd | 4 | 0.05 |  |
| tinyxxd | 4 | 0.04 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.07 | -e |
| tinyxxd | 4 | 0.18 | -b |
| tinyxxd | 4 | 0.04 | -u |
| tinyxxd | 4 | 0.04 | -E |
| tinyxxd | 4 | 0.22 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.27 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.20 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.37 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.14 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.19 | -b -i |
| tinyxxd | 2 | 0.02 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.13 | -r -b |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.02 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.09 | -b |
| tinyxxd | 2 | 0.02 | -u |
| tinyxxd | 2 | 0.02 | -E |
| tinyxxd | 2 | 0.11 | -b -i |
| tinyxxd | 1 | 0.01 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.06 | -r -b |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.01 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.01 | -u |
| tinyxxd | 1 | 0.01 | -E |
| tinyxxd | 1 | 0.06 | -b -i |
| xxd | 1 | 0.03 |  |
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

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 108.43% faster with no flag.
- For sample size 64 MiB, tinyxxd was 165.45% faster with flags '-r'.
- For sample size 64 MiB, xxd was 8.25% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 5.60% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 68.44% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 6.46% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 24.56% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 109.69% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 158.87% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 62.15% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 104.32% faster with no flag.
- For sample size 32 MiB, tinyxxd was 163.79% faster with flags '-r'.
- For sample size 32 MiB, xxd was 50.53% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 8.04% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 59.57% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 23.03% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 118.99% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 141.58% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 63.79% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 102.19% faster with no flag.
- For sample size 16 MiB, tinyxxd was 155.75% faster with flags '-r'.
- For sample size 16 MiB, xxd was 10.47% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 16.74% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 65.55% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 9.87% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 22.93% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 110.62% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 148.20% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 64.50% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 96.64% faster with no flag.
- For sample size 8 MiB, tinyxxd was 157.16% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 17.90% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 70.90% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 6.91% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 22.35% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 113.04% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 139.80% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 66.80% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 95.76% faster with no flag.
- For sample size 4 MiB, tinyxxd was 151.52% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 10.26% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 65.53% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 30.84% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 105.95% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 125.69% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 63.19% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 89.26% faster with no flag.
- For sample size 2 MiB, tinyxxd was 141.33% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 15.52% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 62.46% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 6.46% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 20.42% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 97.35% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 127.92% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 63.44% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 77.17% faster with no flag.
- For sample size 1 MiB, tinyxxd was 129.55% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 12.72% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 58.79% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 6.19% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 20.32% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 86.57% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 112.17% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 61.93% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 30.36% faster than xxd.
- For sample 32 MiB, tinyxxd was 18.01% faster than xxd.
- For sample 16 MiB, tinyxxd was 33.60% faster than xxd.
- For sample 8 MiB, tinyxxd was 35.79% faster than xxd.
- For sample 4 MiB, tinyxxd was 34.02% faster than xxd.
- For sample 2 MiB, tinyxxd was 33.54% faster than xxd.
- For sample 1 MiB, tinyxxd was 32.21% faster than xxd.

### Performance by flag
- tinyxxd was 104.75% faster with no flag.
- tinyxxd was 161.98% faster with flag '-r'.
- xxd was 18.13% faster with flag '-b'.
- tinyxxd was 8.68% faster with flag '-r -b'.
- tinyxxd was 65.62% faster with flag '-p'.
- tinyxxd was 5.73% faster with flag '-i'.
- tinyxxd was 23.92% faster with flag '-e'.
- tinyxxd was 111.68% faster with flag '-u'.
- tinyxxd was 149.57% faster with flag '-E'.
- tinyxxd was 63.20% faster with flag '-b -i'.

### Performance compared to last run
- For sample 64 MiB with flags '', tinyxxd improved by 21.07% compared to the last run.
- For sample 64 MiB with flags '-r', tinyxxd improved by 0.13% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd slowed down by 49.98% compared to the last run.
- For sample 64 MiB with flags '-r_-b', tinyxxd slowed down by 0.85% compared to the last run.
- For sample 64 MiB with flags '', tinyxxd slowed down by 3.08% compared to the last run.
- For sample 64 MiB with flags '-p', tinyxxd improved by 2.50% compared to the last run.
- For sample 64 MiB with flags '-i', tinyxxd improved by 0.12% compared to the last run.
- For sample 64 MiB with flags '-e', tinyxxd improved by 0.98% compared to the last run.
- For sample 64 MiB with flags '-b', tinyxxd improved by 1.83% compared to the last run.
- For sample 64 MiB with flags '-u', tinyxxd slowed down by 9.23% compared to the last run.
- For sample 64 MiB with flags '-E', tinyxxd improved by 2.14% compared to the last run.
- For sample 64 MiB with flags '-b_-i', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 18.28% compared to the last run.
- For sample 64 MiB with flags '-r', xxd improved by 1.78% compared to the last run.
- For sample 64 MiB with flags '-b', xxd slowed down by 32.23% compared to the last run.
- For sample 64 MiB with flags '-r_-b', xxd slowed down by 2.88% compared to the last run.
- For sample 64 MiB with flags '', xxd improved by 5.81% compared to the last run.
- For sample 64 MiB with flags '-p', xxd improved by 2.08% compared to the last run.
- For sample 64 MiB with flags '-i', xxd slowed down by 1.10% compared to the last run.
- For sample 64 MiB with flags '-e', xxd slowed down by 0.64% compared to the last run.
- For sample 64 MiB with flags '-b', xxd improved by 1.40% compared to the last run.
- For sample 64 MiB with flags '-u', xxd improved by 1.10% compared to the last run.
- For sample 64 MiB with flags '-E', xxd slowed down by 0.14% compared to the last run.
- For sample 64 MiB with flags '-b_-i', xxd improved by 0.69% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 13.28% compared to the last run.
- For sample 32 MiB with flags '-r', xxd slowed down by 2.03% compared to the last run.
- For sample 32 MiB with flags '-b', xxd slowed down by 18.95% compared to the last run.
- For sample 32 MiB with flags '-r_-b', xxd improved by 9.03% compared to the last run.
- For sample 32 MiB with flags '', xxd improved by 0.15% compared to the last run.
- For sample 32 MiB with flags '-p', xxd improved by 2.31% compared to the last run.
- For sample 32 MiB with flags '-i', xxd improved by 2.08% compared to the last run.
- For sample 32 MiB with flags '-e', xxd slowed down by 0.35% compared to the last run.
- For sample 32 MiB with flags '-b', xxd improved by 3.45% compared to the last run.
- For sample 32 MiB with flags '-u', xxd slowed down by 1.83% compared to the last run.
- For sample 32 MiB with flags '-E', xxd slowed down by 0.20% compared to the last run.
- For sample 32 MiB with flags '-b_-i', xxd improved by 2.14% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd improved by 21.47% compared to the last run.
- For sample 32 MiB with flags '-r', tinyxxd improved by 0.21% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd slowed down by 123.56% compared to the last run.
- For sample 32 MiB with flags '-r_-b', tinyxxd slowed down by 0.03% compared to the last run.
- For sample 32 MiB with flags '', tinyxxd slowed down by 0.02% compared to the last run.
- For sample 32 MiB with flags '-p', tinyxxd slowed down by 6.61% compared to the last run.
- For sample 32 MiB with flags '-i', tinyxxd slowed down by 1.73% compared to the last run.
- For sample 32 MiB with flags '-e', tinyxxd improved by 2.00% compared to the last run.
- For sample 32 MiB with flags '-b', tinyxxd improved by 1.16% compared to the last run.
- For sample 32 MiB with flags '-u', tinyxxd slowed down by 3.37% compared to the last run.
- For sample 32 MiB with flags '-E', tinyxxd slowed down by 0.72% compared to the last run.
- For sample 32 MiB with flags '-b_-i', tinyxxd improved by 0.88% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 11.16% compared to the last run.
- For sample 16 MiB with flags '-r', xxd slowed down by 3.65% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 7.95% compared to the last run.
- For sample 16 MiB with flags '-r_-b', xxd slowed down by 3.97% compared to the last run.
- For sample 16 MiB with flags '', xxd improved by 0.11% compared to the last run.
- For sample 16 MiB with flags '-p', xxd slowed down by 0.69% compared to the last run.
- For sample 16 MiB with flags '-i', xxd slowed down by 1.94% compared to the last run.
- For sample 16 MiB with flags '-e', xxd slowed down by 0.50% compared to the last run.
- For sample 16 MiB with flags '-b', xxd slowed down by 0.34% compared to the last run.
- For sample 16 MiB with flags '-u', xxd improved by 0.00% compared to the last run.
- For sample 16 MiB with flags '-E', xxd improved by 0.16% compared to the last run.
- For sample 16 MiB with flags '-b_-i', xxd improved by 0.17% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 30.43% compared to the last run.
- For sample 16 MiB with flags '-r', tinyxxd slowed down by 1.25% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 23.95% compared to the last run.
- For sample 16 MiB with flags '-r_-b', tinyxxd improved by 0.27% compared to the last run.
- For sample 16 MiB with flags '', tinyxxd improved by 6.33% compared to the last run.
- For sample 16 MiB with flags '-p', tinyxxd improved by 15.62% compared to the last run.
- For sample 16 MiB with flags '-i', tinyxxd improved by 2.36% compared to the last run.
- For sample 16 MiB with flags '-e', tinyxxd slowed down by 0.32% compared to the last run.
- For sample 16 MiB with flags '-b', tinyxxd slowed down by 0.75% compared to the last run.
- For sample 16 MiB with flags '-u', tinyxxd slowed down by 5.08% compared to the last run.
- For sample 16 MiB with flags '-E', tinyxxd improved by 1.30% compared to the last run.
- For sample 16 MiB with flags '-b_-i', tinyxxd slowed down by 2.62% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 12.73% compared to the last run.
- For sample 8 MiB with flags '-r', xxd improved by 0.55% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 7.85% compared to the last run.
- For sample 8 MiB with flags '-r_-b', xxd slowed down by 2.17% compared to the last run.
- For sample 8 MiB with flags '', xxd improved by 1.00% compared to the last run.
- For sample 8 MiB with flags '-p', xxd slowed down by 0.73% compared to the last run.
- For sample 8 MiB with flags '-i', xxd slowed down by 0.81% compared to the last run.
- For sample 8 MiB with flags '-e', xxd slowed down by 0.58% compared to the last run.
- For sample 8 MiB with flags '-b', xxd slowed down by 2.08% compared to the last run.
- For sample 8 MiB with flags '-u', xxd slowed down by 0.46% compared to the last run.
- For sample 8 MiB with flags '-E', xxd slowed down by 0.67% compared to the last run.
- For sample 8 MiB with flags '-b_-i', xxd improved by 0.39% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd improved by 21.24% compared to the last run.
- For sample 8 MiB with flags '-r', tinyxxd slowed down by 2.77% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 7.17% compared to the last run.
- For sample 8 MiB with flags '-r_-b', tinyxxd improved by 0.14% compared to the last run.
- For sample 8 MiB with flags '', tinyxxd slowed down by 0.60% compared to the last run.
- For sample 8 MiB with flags '-p', tinyxxd improved by 1.17% compared to the last run.
- For sample 8 MiB with flags '-i', tinyxxd improved by 0.17% compared to the last run.
- For sample 8 MiB with flags '-e', tinyxxd slowed down by 1.30% compared to the last run.
- For sample 8 MiB with flags '-b', tinyxxd slowed down by 1.02% compared to the last run.
- For sample 8 MiB with flags '-u', tinyxxd improved by 0.32% compared to the last run.
- For sample 8 MiB with flags '-E', tinyxxd slowed down by 3.13% compared to the last run.
- For sample 8 MiB with flags '-b_-i', tinyxxd improved by 0.33% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd improved by 22.03% compared to the last run.
- For sample 4 MiB with flags '-r', tinyxxd slowed down by 0.71% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 12.77% compared to the last run.
- For sample 4 MiB with flags '-r_-b', tinyxxd slowed down by 0.39% compared to the last run.
- For sample 4 MiB with flags '', tinyxxd slowed down by 1.51% compared to the last run.
- For sample 4 MiB with flags '-p', tinyxxd slowed down by 0.64% compared to the last run.
- For sample 4 MiB with flags '-i', tinyxxd slowed down by 2.12% compared to the last run.
- For sample 4 MiB with flags '-e', tinyxxd improved by 0.97% compared to the last run.
- For sample 4 MiB with flags '-b', tinyxxd slowed down by 1.27% compared to the last run.
- For sample 4 MiB with flags '-u', tinyxxd slowed down by 3.80% compared to the last run.
- For sample 4 MiB with flags '-E', tinyxxd slowed down by 6.58% compared to the last run.
- For sample 4 MiB with flags '-b_-i', tinyxxd improved by 0.60% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 11.83% compared to the last run.
- For sample 4 MiB with flags '-r', xxd improved by 1.61% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 7.04% compared to the last run.
- For sample 4 MiB with flags '-r_-b', xxd improved by 0.74% compared to the last run.
- For sample 4 MiB with flags '', xxd improved by 0.13% compared to the last run.
- For sample 4 MiB with flags '-p', xxd slowed down by 1.58% compared to the last run.
- For sample 4 MiB with flags '-i', xxd improved by 0.51% compared to the last run.
- For sample 4 MiB with flags '-e', xxd slowed down by 7.59% compared to the last run.
- For sample 4 MiB with flags '-b', xxd slowed down by 16.24% compared to the last run.
- For sample 4 MiB with flags '-u', xxd improved by 0.87% compared to the last run.
- For sample 4 MiB with flags '-E', xxd improved by 0.36% compared to the last run.
- For sample 4 MiB with flags '-b_-i', xxd improved by 1.52% compared to the last run.
- For sample 2 MiB with flags '', xxd improved by 10.58% compared to the last run.
- For sample 2 MiB with flags '-r', xxd improved by 1.66% compared to the last run.
- For sample 2 MiB with flags '-b', xxd slowed down by 5.40% compared to the last run.
- For sample 2 MiB with flags '-r_-b', xxd slowed down by 1.02% compared to the last run.
- For sample 2 MiB with flags '', xxd slowed down by 0.26% compared to the last run.
- For sample 2 MiB with flags '-p', xxd slowed down by 1.05% compared to the last run.
- For sample 2 MiB with flags '-i', xxd improved by 0.35% compared to the last run.
- For sample 2 MiB with flags '-e', xxd improved by 0.89% compared to the last run.
- For sample 2 MiB with flags '-b', xxd improved by 0.44% compared to the last run.
- For sample 2 MiB with flags '-u', xxd improved by 2.64% compared to the last run.
- For sample 2 MiB with flags '-E', xxd slowed down by 0.80% compared to the last run.
- For sample 2 MiB with flags '-b_-i', xxd improved by 0.45% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd improved by 15.21% compared to the last run.
- For sample 2 MiB with flags '-r', tinyxxd slowed down by 1.59% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd slowed down by 6.60% compared to the last run.
- For sample 2 MiB with flags '-r_-b', tinyxxd improved by 0.87% compared to the last run.
- For sample 2 MiB with flags '', tinyxxd slowed down by 0.50% compared to the last run.
- For sample 2 MiB with flags '-p', tinyxxd slowed down by 0.24% compared to the last run.
- For sample 2 MiB with flags '-i', tinyxxd improved by 1.27% compared to the last run.
- For sample 2 MiB with flags '-e', tinyxxd improved by 2.77% compared to the last run.
- For sample 2 MiB with flags '-b', tinyxxd improved by 0.91% compared to the last run.
- For sample 2 MiB with flags '-u', tinyxxd improved by 2.16% compared to the last run.
- For sample 2 MiB with flags '-E', tinyxxd improved by 1.72% compared to the last run.
- For sample 2 MiB with flags '-b_-i', tinyxxd improved by 0.41% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd improved by 11.83% compared to the last run.
- For sample 1 MiB with flags '-r', tinyxxd slowed down by 2.41% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 7.30% compared to the last run.
- For sample 1 MiB with flags '-r_-b', tinyxxd improved by 0.74% compared to the last run.
- For sample 1 MiB with flags '', tinyxxd slowed down by 3.60% compared to the last run.
- For sample 1 MiB with flags '-p', tinyxxd improved by 0.31% compared to the last run.
- For sample 1 MiB with flags '-i', tinyxxd improved by 1.59% compared to the last run.
- For sample 1 MiB with flags '-e', tinyxxd improved by 0.12% compared to the last run.
- For sample 1 MiB with flags '-b', tinyxxd slowed down by 0.32% compared to the last run.
- For sample 1 MiB with flags '-u', tinyxxd improved by 1.23% compared to the last run.
- For sample 1 MiB with flags '-E', tinyxxd improved by 1.37% compared to the last run.
- For sample 1 MiB with flags '-b_-i', tinyxxd slowed down by 0.10% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 7.82% compared to the last run.
- For sample 1 MiB with flags '-r', xxd improved by 1.67% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 7.53% compared to the last run.
- For sample 1 MiB with flags '-r_-b', xxd improved by 1.08% compared to the last run.
- For sample 1 MiB with flags '', xxd improved by 1.12% compared to the last run.
- For sample 1 MiB with flags '-p', xxd slowed down by 0.62% compared to the last run.
- For sample 1 MiB with flags '-i', xxd improved by 1.51% compared to the last run.
- For sample 1 MiB with flags '-e', xxd improved by 2.92% compared to the last run.
- For sample 1 MiB with flags '-b', xxd slowed down by 0.07% compared to the last run.
- For sample 1 MiB with flags '-u', xxd improved by 0.05% compared to the last run.
- For sample 1 MiB with flags '-E', xxd slowed down by 2.28% compared to the last run.
- For sample 1 MiB with flags '-b_-i', xxd improved by 0.33% compared to the last run.
---
Report generated on: 2026-04-01T17:41:11.936234
