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
| xxd | 64 | 1.57 |  |
| xxd | 64 | 2.10 | -r |
| xxd | 64 | 4.72 |  |
| xxd | 64 | 4.07 | -r |
| xxd | 64 | 1.51 |  |
| xxd | 64 | 0.93 | -p |
| xxd | 64 | 4.81 | -i |
| xxd | 64 | 1.53 | -e |
| xxd | 64 | 3.33 | -b |
| xxd | 64 | 1.54 | -u |
| xxd | 64 | 1.64 | -E |
| xxd | 64 | 5.68 | -b_-i |
| tinyxxd | 64 | 1.30 |  |
| tinyxxd | 64 | 2.15 | -r |
| tinyxxd | 64 | 4.53 |  |
| tinyxxd | 64 | 3.78 | -r |
| tinyxxd | 64 | 1.27 |  |
| tinyxxd | 64 | 0.77 | -p |
| tinyxxd | 64 | 4.75 | -i |
| tinyxxd | 64 | 1.28 | -e |
| tinyxxd | 64 | 2.99 | -b |
| tinyxxd | 64 | 1.26 | -u |
| tinyxxd | 64 | 1.45 | -E |
| tinyxxd | 64 | 4.75 | -b_-i |
| tinyxxd | 32 | 0.66 |  |
| tinyxxd | 32 | 0.99 | -r |
| tinyxxd | 32 | 1.91 |  |
| tinyxxd | 32 | 1.88 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.39 | -p |
| tinyxxd | 32 | 2.47 | -i |
| tinyxxd | 32 | 0.65 | -e |
| tinyxxd | 32 | 1.50 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.72 | -E |
| tinyxxd | 32 | 2.25 | -b_-i |
| xxd | 32 | 0.77 |  |
| xxd | 32 | 1.06 | -r |
| xxd | 32 | 2.74 |  |
| xxd | 32 | 2.01 | -r |
| xxd | 32 | 0.74 |  |
| xxd | 32 | 0.46 | -p |
| xxd | 32 | 2.40 | -i |
| xxd | 32 | 0.77 | -e |
| xxd | 32 | 1.60 | -b |
| xxd | 32 | 0.77 | -u |
| xxd | 32 | 0.82 | -E |
| xxd | 32 | 2.80 | -b_-i |
| xxd | 16 | 0.39 |  |
| xxd | 16 | 0.53 | -r |
| xxd | 16 | 1.32 |  |
| xxd | 16 | 1.01 | -r |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.23 | -p |
| xxd | 16 | 1.20 | -i |
| xxd | 16 | 0.39 | -e |
| xxd | 16 | 0.84 | -b |
| xxd | 16 | 0.38 | -u |
| xxd | 16 | 0.42 | -E |
| xxd | 16 | 1.44 | -b_-i |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.53 | -r |
| tinyxxd | 16 | 0.85 |  |
| tinyxxd | 16 | 0.94 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.20 | -p |
| tinyxxd | 16 | 1.20 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.75 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.36 | -E |
| tinyxxd | 16 | 1.13 | -b_-i |
| xxd | 8 | 0.20 |  |
| xxd | 8 | 0.30 | -r |
| xxd | 8 | 0.44 |  |
| xxd | 8 | 0.51 | -r |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.61 | -i |
| xxd | 8 | 0.19 | -e |
| xxd | 8 | 0.40 | -b |
| xxd | 8 | 0.19 | -u |
| xxd | 8 | 0.21 | -E |
| xxd | 8 | 0.72 | -b_-i |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.31 | -r |
| tinyxxd | 8 | 1.06 |  |
| tinyxxd | 8 | 0.47 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.60 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.37 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| tinyxxd | 8 | 0.56 | -b_-i |
| tinyxxd | 4 | 0.09 |  |
| tinyxxd | 4 | 0.13 | -r |
| tinyxxd | 4 | 0.24 |  |
| tinyxxd | 4 | 0.24 | -r |
| tinyxxd | 4 | 0.08 |  |
| tinyxxd | 4 | 0.05 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.08 | -u |
| tinyxxd | 4 | 0.09 | -E |
| tinyxxd | 4 | 0.29 | -b_-i |
| xxd | 4 | 0.12 |  |
| xxd | 4 | 0.14 | -r |
| xxd | 4 | 0.22 |  |
| xxd | 4 | 0.25 | -r |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.10 | -e |
| xxd | 4 | 0.20 | -b |
| xxd | 4 | 0.10 | -u |
| xxd | 4 | 0.11 | -E |
| xxd | 4 | 0.35 | -b_-i |
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
| tinyxxd | 2 | 0.05 |  |
| tinyxxd | 2 | 0.07 | -r |
| tinyxxd | 2 | 0.11 |  |
| tinyxxd | 2 | 0.13 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
| tinyxxd | 2 | 0.14 | -b_-i |
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
| xxd | 1 | 0.09 | -b_-i |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.04 | -r |
| tinyxxd | 1 | 0.06 |  |
| tinyxxd | 1 | 0.18 | -r |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.03 | -E |
| tinyxxd | 1 | 0.07 | -b_-i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 9.88% faster with no flag.
- For sample size 64 MiB, tinyxxd was 21.15% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 19.58% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 11.30% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 22.01% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 12.80% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 19.37% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 32.56% faster with no flag.
- For sample size 32 MiB, tinyxxd was 7.30% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 19.52% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 17.32% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 7.00% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 21.58% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 14.80% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 24.50% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 39.03% faster with no flag.
- For sample size 16 MiB, tinyxxd was 5.28% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 18.69% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 22.18% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 12.88% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 19.12% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 16.36% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 27.34% faster with flags '-b -i'.
- For sample size 8 MiB, xxd was 68.75% faster with no flag.
- For sample size 8 MiB, tinyxxd was 13.33% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 18.51% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 8.44% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 18.04% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 16.11% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 26.91% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 8.15% faster with no flag.
- For sample size 4 MiB, tinyxxd was 6.96% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 17.94% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 26.15% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 6.75% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 16.75% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 13.31% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 19.69% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 11.25% faster with no flag.
- For sample size 2 MiB, tinyxxd was 18.23% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 16.80% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 8.48% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 15.66% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 11.96% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 27.22% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 11.57% faster with no flag.
- For sample size 1 MiB, xxd was 108.19% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 14.93% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 12.61% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 43.38% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 11.13% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 24.08% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 10.36% faster than xxd.
- For sample 32 MiB, tinyxxd was 15.50% faster than xxd.
- For sample 16 MiB, tinyxxd was 17.98% faster than xxd.
- For sample size 8 MiB, xxd was 6.00% faster than tinyxxd.
- For sample 4 MiB, tinyxxd was 10.25% faster than xxd.
- For sample 2 MiB, tinyxxd was 10.64% faster than xxd.
- For sample size 1 MiB, xxd was 11.07% faster than tinyxxd.

### Performance by flag
- tinyxxd was 13.16% faster with no flag.
- tinyxxd was 19.68% faster with flag '-p'.
- tinyxxd was 19.36% faster with flag '-e'.
- tinyxxd was 9.99% faster with flag '-b'.
- tinyxxd was 21.21% faster with flag '-u'.
- tinyxxd was 13.94% faster with flag '-E'.
- tinyxxd was 22.23% faster with flag '-b -i'.
---
Report generated on: 2024-10-21T10:30:55.460981
