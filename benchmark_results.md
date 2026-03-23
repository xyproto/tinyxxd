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
| xxd | 64 | 1.34 |  |
| xxd | 64 | 2.30 | -r |
| xxd | 64 | 5.12 | -b |
| xxd | 64 | 4.76 | -r -b |
| xxd | 64 | 1.81 |  |
| xxd | 64 | 1.07 | -p |
| xxd | 64 | 5.03 | -i |
| xxd | 64 | 1.37 | -e |
| xxd | 64 | 2.78 | -b |
| xxd | 64 | 1.32 | -u |
| xxd | 64 | 1.68 | -E |
| xxd | 64 | 5.63 | -b -i |
| tinyxxd | 64 | 0.94 |  |
| tinyxxd | 64 | 0.80 | -r |
| tinyxxd | 64 | 4.40 | -b |
| tinyxxd | 64 | 1.76 | -r -b |
| tinyxxd | 64 | 1.13 |  |
| tinyxxd | 64 | 0.94 | -p |
| tinyxxd | 64 | 4.83 | -i |
| tinyxxd | 64 | 1.15 | -e |
| tinyxxd | 64 | 3.23 | -b |
| tinyxxd | 64 | 0.96 | -u |
| tinyxxd | 64 | 1.10 | -E |
| tinyxxd | 64 | 4.11 | -b -i |
| xxd | 32 | 0.66 |  |
| xxd | 32 | 1.16 | -r |
| xxd | 32 | 1.83 | -b |
| xxd | 32 | 2.26 | -r -b |
| xxd | 32 | 0.76 |  |
| xxd | 32 | 0.56 | -p |
| xxd | 32 | 2.49 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.37 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.74 | -E |
| xxd | 32 | 2.90 | -b -i |
| tinyxxd | 32 | 0.46 |  |
| tinyxxd | 32 | 0.40 | -r |
| tinyxxd | 32 | 3.16 | -b |
| tinyxxd | 32 | 0.87 | -r -b |
| tinyxxd | 32 | 0.54 |  |
| tinyxxd | 32 | 0.47 | -p |
| tinyxxd | 32 | 2.40 | -i |
| tinyxxd | 32 | 0.57 | -e |
| tinyxxd | 32 | 1.62 | -b |
| tinyxxd | 32 | 0.46 | -u |
| tinyxxd | 32 | 0.54 | -E |
| tinyxxd | 32 | 2.05 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.58 | -r |
| xxd | 16 | 0.83 | -b |
| xxd | 16 | 1.20 | -r -b |
| xxd | 16 | 0.42 |  |
| xxd | 16 | 0.28 | -p |
| xxd | 16 | 1.26 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.69 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.44 | -b -i |
| tinyxxd | 16 | 0.25 |  |
| tinyxxd | 16 | 0.21 | -r |
| tinyxxd | 16 | 1.00 | -b |
| tinyxxd | 16 | 0.44 | -r -b |
| tinyxxd | 16 | 0.27 |  |
| tinyxxd | 16 | 0.24 | -p |
| tinyxxd | 16 | 1.19 | -i |
| tinyxxd | 16 | 0.28 | -e |
| tinyxxd | 16 | 0.81 | -b |
| tinyxxd | 16 | 0.23 | -u |
| tinyxxd | 16 | 0.29 | -E |
| tinyxxd | 16 | 1.03 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.29 | -r |
| xxd | 8 | 0.38 | -b |
| xxd | 8 | 0.58 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.62 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.71 | -b -i |
| tinyxxd | 8 | 0.12 |  |
| tinyxxd | 8 | 0.10 | -r |
| tinyxxd | 8 | 0.44 | -b |
| tinyxxd | 8 | 0.22 | -r -b |
| tinyxxd | 8 | 0.14 |  |
| tinyxxd | 8 | 0.12 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.41 | -b |
| tinyxxd | 8 | 0.12 | -u |
| tinyxxd | 8 | 0.14 | -E |
| tinyxxd | 8 | 0.52 | -b -i |
| tinyxxd | 4 | 0.06 |  |
| tinyxxd | 4 | 0.05 | -r |
| tinyxxd | 4 | 0.22 | -b |
| tinyxxd | 4 | 0.11 | -r -b |
| tinyxxd | 4 | 0.07 |  |
| tinyxxd | 4 | 0.06 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.21 | -b |
| tinyxxd | 4 | 0.06 | -u |
| tinyxxd | 4 | 0.07 | -E |
| tinyxxd | 4 | 0.28 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.19 | -b |
| xxd | 4 | 0.30 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.32 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| xxd | 4 | 0.36 | -b -i |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.06 | -r -b |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.11 | -b |
| tinyxxd | 2 | 0.03 | -u |
| tinyxxd | 2 | 0.04 | -E |
| tinyxxd | 2 | 0.13 | -b -i |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.08 | -r |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.15 | -r -b |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.16 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.09 | -b |
| xxd | 2 | 0.05 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 2 | 0.18 | -b -i |
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
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -r |
| tinyxxd | 1 | 0.06 | -b |
| tinyxxd | 1 | 0.03 | -r -b |
| tinyxxd | 1 | 0.02 |  |
| tinyxxd | 1 | 0.02 | -p |
| tinyxxd | 1 | 0.08 | -i |
| tinyxxd | 1 | 0.02 | -e |
| tinyxxd | 1 | 0.05 | -b |
| tinyxxd | 1 | 0.02 | -u |
| tinyxxd | 1 | 0.02 | -E |
| tinyxxd | 1 | 0.07 | -b -i |

## Performance Summaries
- For sample size 64 MiB, tinyxxd was 51.88% faster with no flag.
- For sample size 64 MiB, tinyxxd was 186.16% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 170.37% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 12.80% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 18.58% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 37.81% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 53.59% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 37.03% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 42.35% faster with no flag.
- For sample size 32 MiB, tinyxxd was 186.74% faster with flags '-r'.
- For sample size 32 MiB, xxd was 49.32% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 158.76% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 17.83% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 19.56% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 43.96% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 37.20% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 41.12% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 45.50% faster with no flag.
- For sample size 16 MiB, tinyxxd was 179.57% faster with flags '-r'.
- For sample size 16 MiB, xxd was 19.54% faster with flags '-b'.
- For sample size 16 MiB, tinyxxd was 175.84% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 17.53% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 6.24% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 20.99% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 46.99% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 31.17% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 39.67% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 42.32% faster with no flag.
- For sample size 8 MiB, tinyxxd was 179.17% faster with flags '-r'.
- For sample size 8 MiB, xxd was 16.17% faster with flags '-b'.
- For sample size 8 MiB, tinyxxd was 161.51% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 17.97% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 5.34% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 19.56% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 45.69% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 36.16% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 38.33% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 36.83% faster with no flag.
- For sample size 4 MiB, tinyxxd was 176.51% faster with flags '-r'.
- For sample size 4 MiB, xxd was 18.69% faster with flags '-b'.
- For sample size 4 MiB, tinyxxd was 161.55% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 12.05% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 16.88% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 43.81% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 34.14% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 26.68% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 35.99% faster with no flag.
- For sample size 2 MiB, tinyxxd was 162.84% faster with flags '-r'.
- For sample size 2 MiB, xxd was 18.93% faster with flags '-b'.
- For sample size 2 MiB, tinyxxd was 155.21% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 14.83% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 5.67% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 15.35% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 41.31% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 32.05% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 38.88% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 32.94% faster with no flag.
- For sample size 1 MiB, tinyxxd was 136.38% faster with flags '-r'.
- For sample size 1 MiB, xxd was 9.51% faster with flags '-b'.
- For sample size 1 MiB, tinyxxd was 148.76% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 12.49% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 5.67% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 14.73% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 44.99% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 35.94% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 38.28% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 34.89% faster than xxd.
- For sample 32 MiB, tinyxxd was 18.64% faster than xxd.
- For sample 16 MiB, tinyxxd was 29.84% faster than xxd.
- For sample 8 MiB, tinyxxd was 30.04% faster than xxd.
- For sample 4 MiB, tinyxxd was 26.65% faster than xxd.
- For sample 2 MiB, tinyxxd was 28.15% faster than xxd.
- For sample 1 MiB, tinyxxd was 29.36% faster than xxd.

### Performance by flag
- tinyxxd was 47.19% faster with no flag.
- tinyxxd was 183.74% faster with flag '-r'.
- xxd was 13.09% faster with flag '-b'.
- tinyxxd was 166.85% faster with flag '-r -b'.
- tinyxxd was 14.99% faster with flag '-p'.
- tinyxxd was 19.03% faster with flag '-e'.
- tinyxxd was 41.25% faster with flag '-u'.
- tinyxxd was 44.32% faster with flag '-E'.
- tinyxxd was 38.15% faster with flag '-b -i'.
---
Report generated on: 2026-03-23T09:26:19.352607
