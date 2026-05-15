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
| xxd | 64 | 1.35 |  |
| xxd | 64 | 2.23 | -r |
| xxd | 64 | 3.92 | -b |
| xxd | 64 | 4.83 | -r -b |
| xxd | 64 | 1.60 |  |
| xxd | 64 | 1.02 | -p |
| xxd | 64 | 5.00 | -i |
| xxd | 64 | 1.33 | -e |
| xxd | 64 | 2.73 | -b |
| xxd | 64 | 1.35 | -u |
| xxd | 64 | 1.57 | -E |
| xxd | 64 | 5.57 | -b -i |
| tinyxxd | 64 | 0.61 |  |
| tinyxxd | 64 | 0.82 | -r |
| tinyxxd | 64 | 3.70 | -b |
| tinyxxd | 64 | 3.70 | -r -b |
| tinyxxd | 64 | 0.97 |  |
| tinyxxd | 64 | 0.64 | -p |
| tinyxxd | 64 | 4.66 | -i |
| tinyxxd | 64 | 1.13 | -e |
| tinyxxd | 64 | 2.89 | -b |
| tinyxxd | 64 | 0.59 | -u |
| tinyxxd | 64 | 0.61 | -E |
| tinyxxd | 64 | 3.42 | -b -i |
| xxd | 32 | 0.68 |  |
| xxd | 32 | 1.18 | -r |
| xxd | 32 | 1.70 | -b |
| xxd | 32 | 2.41 | -r -b |
| xxd | 32 | 0.76 |  |
| xxd | 32 | 0.55 | -p |
| xxd | 32 | 2.48 | -i |
| xxd | 32 | 0.67 | -e |
| xxd | 32 | 1.35 | -b |
| xxd | 32 | 0.70 | -u |
| xxd | 32 | 0.76 | -E |
| xxd | 32 | 2.78 | -b -i |
| tinyxxd | 32 | 0.32 |  |
| tinyxxd | 32 | 0.41 | -r |
| tinyxxd | 32 | 2.05 | -b |
| tinyxxd | 32 | 1.83 | -r -b |
| tinyxxd | 32 | 0.38 |  |
| tinyxxd | 32 | 0.32 | -p |
| tinyxxd | 32 | 2.42 | -i |
| tinyxxd | 32 | 0.56 | -e |
| tinyxxd | 32 | 1.41 | -b |
| tinyxxd | 32 | 0.29 | -u |
| tinyxxd | 32 | 0.30 | -E |
| tinyxxd | 32 | 1.74 | -b -i |
| xxd | 16 | 0.34 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.73 | -b |
| xxd | 16 | 1.22 | -r -b |
| xxd | 16 | 0.40 |  |
| xxd | 16 | 0.31 | -p |
| xxd | 16 | 1.22 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.68 | -b |
| xxd | 16 | 0.34 | -u |
| xxd | 16 | 0.38 | -E |
| xxd | 16 | 1.42 | -b -i |
| tinyxxd | 16 | 0.15 |  |
| tinyxxd | 16 | 0.21 | -r |
| tinyxxd | 16 | 0.81 | -b |
| tinyxxd | 16 | 0.92 | -r -b |
| tinyxxd | 16 | 0.19 |  |
| tinyxxd | 16 | 0.16 | -p |
| tinyxxd | 16 | 1.17 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.71 | -b |
| tinyxxd | 16 | 0.15 | -u |
| tinyxxd | 16 | 0.15 | -E |
| tinyxxd | 16 | 0.89 | -b -i |
| tinyxxd | 8 | 0.08 |  |
| tinyxxd | 8 | 0.10 | -r |
| tinyxxd | 8 | 0.39 | -b |
| tinyxxd | 8 | 0.46 | -r -b |
| tinyxxd | 8 | 0.10 |  |
| tinyxxd | 8 | 0.08 | -p |
| tinyxxd | 8 | 0.58 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.36 | -b |
| tinyxxd | 8 | 0.08 | -u |
| tinyxxd | 8 | 0.08 | -E |
| tinyxxd | 8 | 0.43 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.62 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.71 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.31 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.36 | -b -i |
| tinyxxd | 4 | 0.04 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.20 | -b |
| tinyxxd | 4 | 0.26 | -r -b |
| tinyxxd | 4 | 0.05 |  |
| tinyxxd | 4 | 0.04 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.18 | -b |
| tinyxxd | 4 | 0.04 | -u |
| tinyxxd | 4 | 0.04 | -E |
| tinyxxd | 4 | 0.22 | -b -i |
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
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.16 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.18 | -b -i |
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
| xxd | 1 | 0.08 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.03 | -e |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.03 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.09 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 86.36% faster with no flag.
- For sample size 64 MiB, tinyxxd was 173.05% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 30.56% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 59.31% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 7.39% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 17.97% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 127.84% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 156.03% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 62.92% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 103.95% faster with no flag.
- For sample size 32 MiB, tinyxxd was 189.36% faster with flags '-r'.
- For sample size 32 MiB, xxd was 13.43% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 31.64% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 68.54% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 19.61% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 140.69% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 152.69% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 60.16% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 114.88% faster with no flag.
- For sample size 16 MiB, tinyxxd was 175.38% faster with flags '-r'.
- For sample size 16 MiB, xxd was 8.04% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 32.75% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 87.06% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 21.81% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 124.98% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 149.37% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 59.12% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 111.19% faster with no flag.
- For sample size 8 MiB, tinyxxd was 179.68% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 34.40% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 64.75% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 21.13% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 120.17% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 140.24% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 64.95% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 93.97% faster with no flag.
- For sample size 4 MiB, tinyxxd was 166.74% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 17.79% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 62.33% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 18.80% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 114.22% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 139.46% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 66.01% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 92.97% faster with no flag.
- For sample size 2 MiB, tinyxxd was 162.21% faster with flags '-r'.
- For sample size 2 MiB, xxd was 6.43% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 30.98% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 57.67% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 6.66% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 18.88% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 100.73% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 126.35% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 63.64% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 81.30% faster with no flag.
- For sample size 1 MiB, tinyxxd was 147.82% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 29.05% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 48.00% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 5.79% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 16.08% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 89.59% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 110.93% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 61.14% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 36.94% faster than xxd.
- For sample 32 MiB, tinyxxd was 33.05% faster than xxd.
- For sample 16 MiB, tinyxxd was 37.15% faster than xxd.
- For sample 8 MiB, tinyxxd was 38.02% faster than xxd.
- For sample 4 MiB, tinyxxd was 33.22% faster than xxd.
- For sample 2 MiB, tinyxxd was 35.77% faster than xxd.
- For sample 1 MiB, tinyxxd was 34.35% faster than xxd.

### Performance by flag
- tinyxxd was 95.56% faster with no flag.
- tinyxxd was 177.17% faster with flag '-r'.
- tinyxxd was 30.89% faster with flag '-r -b'.
- tinyxxd was 65.42% faster with flag '-p'.
- tinyxxd was 5.36% faster with flag '-i'.
- tinyxxd was 19.08% faster with flag '-e'.
- tinyxxd was 128.69% faster with flag '-u'.
- tinyxxd was 151.75% faster with flag '-E'.
- tinyxxd was 61.95% faster with flag '-b -i'.
---
Report generated on: 2026-05-15T14:34:19.429483
