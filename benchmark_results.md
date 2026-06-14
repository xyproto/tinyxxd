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
| tinyxxd | 64 | 0.80 | -r |
| tinyxxd | 64 | 4.26 | -b |
| tinyxxd | 64 | 3.66 | -r -b |
| tinyxxd | 64 | 0.98 |  |
| tinyxxd | 64 | 0.62 | -p |
| tinyxxd | 64 | 5.10 | -i |
| tinyxxd | 64 | 1.18 | -e |
| tinyxxd | 64 | 3.00 | -b |
| tinyxxd | 64 | 0.60 | -u |
| tinyxxd | 64 | 0.59 | -E |
| tinyxxd | 64 | 3.40 | -b -i |
| xxd | 64 | 1.65 |  |
| xxd | 64 | 2.34 | -r |
| xxd | 64 | 4.01 | -b |
| xxd | 64 | 4.71 | -r -b |
| xxd | 64 | 1.86 |  |
| xxd | 64 | 1.12 | -p |
| xxd | 64 | 4.94 | -i |
| xxd | 64 | 1.42 | -e |
| xxd | 64 | 3.00 | -b |
| xxd | 64 | 1.58 | -u |
| xxd | 64 | 1.66 | -E |
| xxd | 64 | 5.62 | -b -i |
| tinyxxd | 32 | 0.30 |  |
| tinyxxd | 32 | 0.45 | -r |
| tinyxxd | 32 | 1.93 | -b |
| tinyxxd | 32 | 1.83 | -r -b |
| tinyxxd | 32 | 0.38 |  |
| tinyxxd | 32 | 0.31 | -p |
| tinyxxd | 32 | 2.38 | -i |
| tinyxxd | 32 | 0.59 | -e |
| tinyxxd | 32 | 1.50 | -b |
| tinyxxd | 32 | 0.30 | -u |
| tinyxxd | 32 | 0.30 | -E |
| tinyxxd | 32 | 1.79 | -b -i |
| xxd | 32 | 0.81 |  |
| xxd | 32 | 1.17 | -r |
| xxd | 32 | 3.00 | -b |
| xxd | 32 | 2.28 | -r -b |
| xxd | 32 | 0.88 |  |
| xxd | 32 | 0.56 | -p |
| xxd | 32 | 2.48 | -i |
| xxd | 32 | 0.69 | -e |
| xxd | 32 | 1.50 | -b |
| xxd | 32 | 0.82 | -u |
| xxd | 32 | 0.84 | -E |
| xxd | 32 | 2.85 | -b -i |
| tinyxxd | 16 | 0.15 |  |
| tinyxxd | 16 | 0.20 | -r |
| tinyxxd | 16 | 0.81 | -b |
| tinyxxd | 16 | 0.92 | -r -b |
| tinyxxd | 16 | 0.19 |  |
| tinyxxd | 16 | 0.16 | -p |
| tinyxxd | 16 | 1.15 | -i |
| tinyxxd | 16 | 0.30 | -e |
| tinyxxd | 16 | 0.76 | -b |
| tinyxxd | 16 | 0.15 | -u |
| tinyxxd | 16 | 0.15 | -E |
| tinyxxd | 16 | 0.90 | -b -i |
| xxd | 16 | 0.40 |  |
| xxd | 16 | 0.59 | -r |
| xxd | 16 | 0.90 | -b |
| xxd | 16 | 1.21 | -r -b |
| xxd | 16 | 0.45 |  |
| xxd | 16 | 0.27 | -p |
| xxd | 16 | 1.24 | -i |
| xxd | 16 | 0.35 | -e |
| xxd | 16 | 0.75 | -b |
| xxd | 16 | 0.40 | -u |
| xxd | 16 | 0.42 | -E |
| xxd | 16 | 1.43 | -b -i |
| tinyxxd | 8 | 0.08 |  |
| tinyxxd | 8 | 0.10 | -r |
| tinyxxd | 8 | 0.41 | -b |
| tinyxxd | 8 | 0.49 | -r -b |
| tinyxxd | 8 | 0.10 |  |
| tinyxxd | 8 | 0.08 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.15 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.08 | -u |
| tinyxxd | 8 | 0.08 | -E |
| tinyxxd | 8 | 0.43 | -b -i |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.30 | -r |
| xxd | 8 | 0.40 | -b |
| xxd | 8 | 0.60 | -r -b |
| xxd | 8 | 0.23 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.18 | -e |
| xxd | 8 | 0.38 | -b |
| xxd | 8 | 0.20 | -u |
| xxd | 8 | 0.21 | -E |
| xxd | 8 | 0.72 | -b -i |
| tinyxxd | 4 | 0.04 |  |
| tinyxxd | 4 | 0.05 | -r |
| tinyxxd | 4 | 0.21 | -b |
| tinyxxd | 4 | 0.23 | -r -b |
| tinyxxd | 4 | 0.05 |  |
| tinyxxd | 4 | 0.04 | -p |
| tinyxxd | 4 | 0.29 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.04 | -u |
| tinyxxd | 4 | 0.04 | -E |
| tinyxxd | 4 | 0.22 | -b -i |
| xxd | 4 | 0.11 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.20 | -b |
| xxd | 4 | 0.30 | -r -b |
| xxd | 4 | 0.11 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.10 | -u |
| xxd | 4 | 0.11 | -E |
| xxd | 4 | 0.36 | -b -i |
| xxd | 2 | 0.06 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.14 | -r -b |
| xxd | 2 | 0.06 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.06 | -E |
| xxd | 2 | 0.18 | -b -i |
| tinyxxd | 2 | 0.02 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.12 | -r -b |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.02 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.02 | -u |
| tinyxxd | 2 | 0.02 | -E |
| tinyxxd | 2 | 0.11 | -b -i |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.08 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b -i |
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

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 123.06% faster with no flag.
- For sample size 64 MiB, tinyxxd was 191.68% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 28.46% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 80.05% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 20.50% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 164.96% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 183.36% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 65.06% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 148.21% faster with no flag.
- For sample size 32 MiB, tinyxxd was 158.81% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 31.36% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 24.41% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 80.26% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 16.22% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 174.01% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 184.12% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 59.45% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 145.14% faster with no flag.
- For sample size 16 MiB, tinyxxd was 186.96% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 31.45% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 71.99% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 7.55% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 17.64% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 160.09% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 171.29% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 58.33% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 140.01% faster with no flag.
- For sample size 8 MiB, tinyxxd was 183.79% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 23.04% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 77.55% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 5.97% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 17.92% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 158.04% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 165.85% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 67.05% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 138.13% faster with no flag.
- For sample size 4 MiB, tinyxxd was 177.95% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 28.83% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 74.26% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 6.69% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 16.48% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 157.81% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 157.65% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 66.18% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 138.27% faster with no flag.
- For sample size 2 MiB, tinyxxd was 174.86% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 21.97% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 63.57% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 15.59% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 142.25% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 147.47% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 66.87% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 112.74% faster with no flag.
- For sample size 1 MiB, tinyxxd was 144.83% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 26.14% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 62.63% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 7.10% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 13.28% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 119.26% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 123.42% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 61.93% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 36.77% faster than xxd.
- For sample 32 MiB, tinyxxd was 48.28% faster than xxd.
- For sample 16 MiB, tinyxxd was 43.41% faster than xxd.
- For sample 8 MiB, tinyxxd was 40.88% faster than xxd.
- For sample 4 MiB, tinyxxd was 41.76% faster than xxd.
- For sample 2 MiB, tinyxxd was 39.73% faster than xxd.
- For sample 1 MiB, tinyxxd was 38.34% faster than xxd.

### Performance by flag
- tinyxxd was 133.11% faster with no flag.
- tinyxxd was 180.45% faster with flag '-r'.
- tinyxxd was 6.43% faster with flag '-b'.
- tinyxxd was 27.35% faster with flag '-r -b'.
- tinyxxd was 78.23% faster with flag '-p'.
- tinyxxd was 18.61% faster with flag '-e'.
- tinyxxd was 164.98% faster with flag '-u'.
- tinyxxd was 178.59% faster with flag '-E'.
- tinyxxd was 62.89% faster with flag '-b -i'.
---
Report generated on: 2026-06-14T16:25:21.390747
