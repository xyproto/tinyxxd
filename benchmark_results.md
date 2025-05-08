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
| tinyxxd | 64 | 1.24 |  |
| tinyxxd | 64 | 1.58 | -r |
| tinyxxd | 64 | 4.64 |  |
| tinyxxd | 64 | 3.92 | -r |
| tinyxxd | 64 | 1.12 |  |
| tinyxxd | 64 | 0.82 | -p |
| tinyxxd | 64 | 4.68 | -i |
| tinyxxd | 64 | 1.72 | -e |
| tinyxxd | 64 | 3.07 | -b |
| tinyxxd | 64 | 1.15 | -u |
| tinyxxd | 64 | 1.32 | -E |
| tinyxxd | 64 | 4.94 | -b -i |
| xxd | 64 | 1.20 |  |
| xxd | 64 | 2.36 | -r |
| xxd | 64 | 4.73 |  |
| xxd | 64 | 4.25 | -r |
| xxd | 64 | 1.16 |  |
| xxd | 64 | 0.93 | -p |
| xxd | 64 | 4.83 | -i |
| xxd | 64 | 1.18 | -e |
| xxd | 64 | 2.69 | -b |
| xxd | 64 | 1.15 | -u |
| xxd | 64 | 1.31 | -E |
| xxd | 64 | 5.59 | -b -i |
| tinyxxd | 32 | 0.58 |  |
| tinyxxd | 32 | 0.82 | -r |
| tinyxxd | 32 | 1.99 |  |
| tinyxxd | 32 | 2.00 | -r |
| tinyxxd | 32 | 0.57 |  |
| tinyxxd | 32 | 0.41 | -p |
| tinyxxd | 32 | 2.41 | -i |
| tinyxxd | 32 | 0.86 | -e |
| tinyxxd | 32 | 1.59 | -b |
| tinyxxd | 32 | 0.58 | -u |
| tinyxxd | 32 | 0.66 | -E |
| tinyxxd | 32 | 2.28 | -b -i |
| xxd | 32 | 0.59 |  |
| xxd | 32 | 1.12 | -r |
| xxd | 32 | 1.91 |  |
| xxd | 32 | 2.14 | -r |
| xxd | 32 | 0.58 |  |
| xxd | 32 | 0.48 | -p |
| xxd | 32 | 2.41 | -i |
| xxd | 32 | 0.59 | -e |
| xxd | 32 | 1.35 | -b |
| xxd | 32 | 0.58 | -u |
| xxd | 32 | 0.66 | -E |
| xxd | 32 | 2.71 | -b -i |
| xxd | 16 | 0.43 |  |
| xxd | 16 | 0.54 | -r |
| xxd | 16 | 0.88 |  |
| xxd | 16 | 1.07 | -r |
| xxd | 16 | 0.29 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.20 | -i |
| xxd | 16 | 0.30 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.29 | -u |
| xxd | 16 | 0.33 | -E |
| xxd | 16 | 1.36 | -b -i |
| tinyxxd | 16 | 0.31 |  |
| tinyxxd | 16 | 0.40 | -r |
| tinyxxd | 16 | 1.26 |  |
| tinyxxd | 16 | 0.99 | -r |
| tinyxxd | 16 | 0.28 |  |
| tinyxxd | 16 | 0.20 | -p |
| tinyxxd | 16 | 1.20 | -i |
| tinyxxd | 16 | 0.43 | -e |
| tinyxxd | 16 | 0.78 | -b |
| tinyxxd | 16 | 0.29 | -u |
| tinyxxd | 16 | 0.33 | -E |
| tinyxxd | 16 | 1.13 | -b -i |
| tinyxxd | 8 | 0.15 |  |
| tinyxxd | 8 | 0.20 | -r |
| tinyxxd | 8 | 0.47 |  |
| tinyxxd | 8 | 0.50 | -r |
| tinyxxd | 8 | 0.14 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.22 | -e |
| tinyxxd | 8 | 0.39 | -b |
| tinyxxd | 8 | 0.14 | -u |
| tinyxxd | 8 | 0.17 | -E |
| tinyxxd | 8 | 0.56 | -b -i |
| xxd | 8 | 0.15 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.45 |  |
| xxd | 8 | 0.54 | -r |
| xxd | 8 | 0.15 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.64 | -i |
| xxd | 8 | 0.15 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.16 | -u |
| xxd | 8 | 0.18 | -E |
| xxd | 8 | 0.67 | -b -i |
| xxd | 4 | 0.08 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.21 |  |
| xxd | 4 | 0.27 | -r |
| xxd | 4 | 0.08 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.08 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.08 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.34 | -b -i |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.10 | -r |
| tinyxxd | 4 | 0.22 |  |
| tinyxxd | 4 | 0.26 | -r |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.05 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.11 | -e |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.07 | -u |
| tinyxxd | 4 | 0.09 | -E |
| tinyxxd | 4 | 0.30 | -b -i |
| tinyxxd | 2 | 0.47 |  |
| tinyxxd | 2 | 0.05 | -r |
| tinyxxd | 2 | 0.20 |  |
| tinyxxd | 2 | 0.21 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.06 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
| tinyxxd | 2 | 0.15 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.10 |  |
| xxd | 2 | 0.14 | -r |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.03 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.04 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.17 | -b -i |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.03 | -r |
| tinyxxd | 1 | 0.06 |  |
| tinyxxd | 1 | 0.07 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.03 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.03 | -E |
| tinyxxd | 1 | 0.07 | -b -i |
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
| xxd | 1 | 0.02 | -E |
| xxd | 1 | 0.09 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 20.39% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 14.40% faster with flags '-p'.
- For sample size 64 MiB, xxd was 45.25% faster with flags '-e'.
- For sample size 64 MiB, xxd was 14.07% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 13.25% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 15.38% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 18.88% faster with flags '-p'.
- For sample size 32 MiB, xxd was 45.07% faster with flags '-e'.
- For sample size 32 MiB, xxd was 17.68% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 19.06% faster with flags '-b -i'.
- For sample size 16 MiB, xxd was 16.03% faster with no flag.
- For sample size 16 MiB, tinyxxd was 15.84% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 15.75% faster with flags '-p'.
- For sample size 16 MiB, xxd was 45.11% faster with flags '-e'.
- For sample size 16 MiB, xxd was 16.74% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 20.08% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 16.50% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 15.35% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 7.72% faster with flags '-i'.
- For sample size 8 MiB, xxd was 45.66% faster with flags '-e'.
- For sample size 8 MiB, xxd was 12.86% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 9.46% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 8.82% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 20.39% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 14.42% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 15.45% faster with flags '-p'.
- For sample size 4 MiB, xxd was 42.54% faster with flags '-e'.
- For sample size 4 MiB, xxd was 14.51% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 13.82% faster with flags '-b -i'.
- For sample size 2 MiB, xxd was 301.89% faster with no flag.
- For sample size 2 MiB, xxd was 24.28% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 13.57% faster with flags '-p'.
- For sample size 2 MiB, xxd was 43.27% faster with flags '-e'.
- For sample size 2 MiB, xxd was 18.35% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 17.31% faster with flags '-b -i'.
- For sample size 1 MiB, xxd was 7.76% faster with no flag.
- For sample size 1 MiB, tinyxxd was 14.25% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 14.75% faster with flags '-p'.
- For sample size 1 MiB, xxd was 37.99% faster with flags '-e'.
- For sample size 1 MiB, xxd was 14.23% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 18.78% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 3.98% faster than xxd.
- For sample 32 MiB, tinyxxd was 2.49% faster than xxd.
- For sample size 16 MiB, xxd was 0.33% faster than tinyxxd.
- For sample 8 MiB, tinyxxd was 5.14% faster than xxd.
- For sample 4 MiB, tinyxxd was 2.56% faster than xxd.
- For sample size 2 MiB, xxd was 61.63% faster than tinyxxd.
- For sample 1 MiB, tinyxxd was 1.77% faster than xxd.

### Performance by flag
- xxd was 6.11% faster with no flag.
- tinyxxd was 17.13% faster with flag '-r'.
- tinyxxd was 15.77% faster with flag '-p'.
- xxd was 45.02% faster with flag '-e'.
- xxd was 15.32% faster with flag '-b'.
- tinyxxd was 16.02% faster with flag '-b -i'.
---
Report generated on: 2025-05-08T11:10:38.693954
