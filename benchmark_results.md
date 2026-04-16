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
| xxd | 64 | 1.31 |  |
| xxd | 64 | 2.25 | -r |
| xxd | 64 | 4.61 | -b |
| xxd | 64 | 4.59 | -r -b |
| xxd | 64 | 1.47 |  |
| xxd | 64 | 1.06 | -p |
| xxd | 64 | 5.02 | -i |
| xxd | 64 | 1.36 | -e |
| xxd | 64 | 2.65 | -b |
| xxd | 64 | 1.37 | -u |
| xxd | 64 | 1.46 | -E |
| xxd | 64 | 5.74 | -b -i |
| tinyxxd | 64 | 0.63 |  |
| tinyxxd | 64 | 0.91 | -r |
| tinyxxd | 64 | 3.58 | -b |
| tinyxxd | 64 | 3.87 | -r -b |
| tinyxxd | 64 | 0.96 |  |
| tinyxxd | 64 | 0.62 | -p |
| tinyxxd | 64 | 4.76 | -i |
| tinyxxd | 64 | 1.11 | -e |
| tinyxxd | 64 | 2.75 | -b |
| tinyxxd | 64 | 0.60 | -u |
| tinyxxd | 64 | 0.58 | -E |
| tinyxxd | 64 | 3.56 | -b -i |
| tinyxxd | 32 | 0.31 |  |
| tinyxxd | 32 | 0.43 | -r |
| tinyxxd | 32 | 1.83 | -b |
| tinyxxd | 32 | 1.93 | -r -b |
| tinyxxd | 32 | 0.39 |  |
| tinyxxd | 32 | 0.31 | -p |
| tinyxxd | 32 | 2.38 | -i |
| tinyxxd | 32 | 0.54 | -e |
| tinyxxd | 32 | 1.38 | -b |
| tinyxxd | 32 | 0.30 | -u |
| tinyxxd | 32 | 0.29 | -E |
| tinyxxd | 32 | 1.75 | -b -i |
| xxd | 32 | 0.68 |  |
| xxd | 32 | 1.11 | -r |
| xxd | 32 | 2.77 | -b |
| xxd | 32 | 2.24 | -r -b |
| xxd | 32 | 0.74 |  |
| xxd | 32 | 0.52 | -p |
| xxd | 32 | 2.49 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.33 | -b |
| xxd | 32 | 0.66 | -u |
| xxd | 32 | 0.74 | -E |
| xxd | 32 | 2.89 | -b -i |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.57 | -r |
| xxd | 16 | 0.72 | -b |
| xxd | 16 | 1.06 | -r -b |
| xxd | 16 | 0.38 |  |
| xxd | 16 | 0.26 | -p |
| xxd | 16 | 1.24 | -i |
| xxd | 16 | 0.34 | -e |
| xxd | 16 | 0.67 | -b |
| xxd | 16 | 0.33 | -u |
| xxd | 16 | 0.37 | -E |
| xxd | 16 | 1.46 | -b -i |
| tinyxxd | 16 | 0.15 |  |
| tinyxxd | 16 | 0.22 | -r |
| tinyxxd | 16 | 0.73 | -b |
| tinyxxd | 16 | 0.97 | -r -b |
| tinyxxd | 16 | 0.20 |  |
| tinyxxd | 16 | 0.16 | -p |
| tinyxxd | 16 | 1.16 | -i |
| tinyxxd | 16 | 0.27 | -e |
| tinyxxd | 16 | 0.69 | -b |
| tinyxxd | 16 | 0.15 | -u |
| tinyxxd | 16 | 0.15 | -E |
| tinyxxd | 16 | 0.88 | -b -i |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.37 | -b |
| xxd | 8 | 0.54 | -r -b |
| xxd | 8 | 0.19 |  |
| xxd | 8 | 0.14 | -p |
| xxd | 8 | 0.63 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.34 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| xxd | 8 | 0.75 | -b -i |
| tinyxxd | 8 | 0.08 |  |
| tinyxxd | 8 | 0.11 | -r |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.49 | -r -b |
| tinyxxd | 8 | 0.10 |  |
| tinyxxd | 8 | 0.08 | -p |
| tinyxxd | 8 | 0.59 | -i |
| tinyxxd | 8 | 0.14 | -e |
| tinyxxd | 8 | 0.34 | -b |
| tinyxxd | 8 | 0.08 | -u |
| tinyxxd | 8 | 0.08 | -E |
| tinyxxd | 8 | 0.44 | -b -i |
| tinyxxd | 4 | 0.04 |  |
| tinyxxd | 4 | 0.06 | -r |
| tinyxxd | 4 | 0.19 | -b |
| tinyxxd | 4 | 0.25 | -r -b |
| tinyxxd | 4 | 0.05 |  |
| tinyxxd | 4 | 0.04 | -p |
| tinyxxd | 4 | 0.30 | -i |
| tinyxxd | 4 | 0.08 | -e |
| tinyxxd | 4 | 0.18 | -b |
| tinyxxd | 4 | 0.04 | -u |
| tinyxxd | 4 | 0.04 | -E |
| tinyxxd | 4 | 0.22 | -b -i |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.15 | -r |
| xxd | 4 | 0.18 | -b |
| xxd | 4 | 0.28 | -r -b |
| xxd | 4 | 0.10 |  |
| xxd | 4 | 0.07 | -p |
| xxd | 4 | 0.31 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.17 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.09 | -E |
| xxd | 4 | 0.37 | -b -i |
| tinyxxd | 2 | 0.02 |  |
| tinyxxd | 2 | 0.03 | -r |
| tinyxxd | 2 | 0.09 | -b |
| tinyxxd | 2 | 0.13 | -r -b |
| tinyxxd | 2 | 0.03 |  |
| tinyxxd | 2 | 0.02 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.04 | -e |
| tinyxxd | 2 | 0.09 | -b |
| tinyxxd | 2 | 0.02 | -u |
| tinyxxd | 2 | 0.02 | -E |
| tinyxxd | 2 | 0.11 | -b -i |
| xxd | 2 | 0.04 |  |
| xxd | 2 | 0.08 | -r |
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
| xxd | 1 | 0.02 |  |
| xxd | 1 | 0.04 | -r |
| xxd | 1 | 0.05 | -b |
| xxd | 1 | 0.07 | -r -b |
| xxd | 1 | 0.03 |  |
| xxd | 1 | 0.02 | -p |
| xxd | 1 | 0.08 | -i |
| xxd | 1 | 0.02 | -e |
| xxd | 1 | 0.04 | -b |
| xxd | 1 | 0.02 | -u |
| xxd | 1 | 0.03 | -E |
| xxd | 1 | 0.10 | -b -i |
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
- For sample size 64 MiB, tinyxxd was 74.03% faster with no flag.
- For sample size 64 MiB, tinyxxd was 146.21% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 14.78% faster with flags '-b'.
- For sample size 64 MiB, tinyxxd was 18.58% faster with flags '-r -b'.
- For sample size 64 MiB, tinyxxd was 69.74% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 5.49% faster with flags '-i'.
- For sample size 64 MiB, tinyxxd was 21.93% faster with flags '-e'.
- For sample size 64 MiB, tinyxxd was 128.90% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 149.33% faster with flags '-E'.
- For sample size 64 MiB, tinyxxd was 61.35% faster with flags '-b -i'.
- For sample size 32 MiB, tinyxxd was 102.68% faster with no flag.
- For sample size 32 MiB, tinyxxd was 160.75% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 27.87% faster with flags '-b'.
- For sample size 32 MiB, tinyxxd was 15.98% faster with flags '-r -b'.
- For sample size 32 MiB, tinyxxd was 65.57% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 23.90% faster with flags '-e'.
- For sample size 32 MiB, tinyxxd was 120.84% faster with flags '-u'.
- For sample size 32 MiB, tinyxxd was 152.21% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 65.29% faster with flags '-b -i'.
- For sample size 16 MiB, tinyxxd was 105.87% faster with no flag.
- For sample size 16 MiB, tinyxxd was 152.40% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 9.39% faster with flags '-r -b'.
- For sample size 16 MiB, tinyxxd was 64.94% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 6.55% faster with flags '-i'.
- For sample size 16 MiB, tinyxxd was 22.86% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 125.58% faster with flags '-u'.
- For sample size 16 MiB, tinyxxd was 137.98% faster with flags '-E'.
- For sample size 16 MiB, tinyxxd was 66.18% faster with flags '-b -i'.
- For sample size 8 MiB, tinyxxd was 103.57% faster with no flag.
- For sample size 8 MiB, tinyxxd was 148.93% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 10.84% faster with flags '-r -b'.
- For sample size 8 MiB, tinyxxd was 70.22% faster with flags '-p'.
- For sample size 8 MiB, tinyxxd was 6.76% faster with flags '-i'.
- For sample size 8 MiB, tinyxxd was 24.19% faster with flags '-e'.
- For sample size 8 MiB, tinyxxd was 111.50% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 135.13% faster with flags '-E'.
- For sample size 8 MiB, tinyxxd was 70.19% faster with flags '-b -i'.
- For sample size 4 MiB, tinyxxd was 97.14% faster with no flag.
- For sample size 4 MiB, tinyxxd was 159.26% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 14.88% faster with flags '-r -b'.
- For sample size 4 MiB, tinyxxd was 64.01% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 5.84% faster with flags '-i'.
- For sample size 4 MiB, tinyxxd was 15.43% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 105.43% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 127.95% faster with flags '-E'.
- For sample size 4 MiB, tinyxxd was 64.83% faster with flags '-b -i'.
- For sample size 2 MiB, tinyxxd was 83.87% faster with no flag.
- For sample size 2 MiB, tinyxxd was 154.48% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 8.95% faster with flags '-r -b'.
- For sample size 2 MiB, tinyxxd was 59.54% faster with flags '-p'.
- For sample size 2 MiB, tinyxxd was 6.73% faster with flags '-i'.
- For sample size 2 MiB, tinyxxd was 22.49% faster with flags '-e'.
- For sample size 2 MiB, tinyxxd was 99.64% faster with flags '-u'.
- For sample size 2 MiB, tinyxxd was 119.04% faster with flags '-E'.
- For sample size 2 MiB, tinyxxd was 65.28% faster with flags '-b -i'.
- For sample size 1 MiB, tinyxxd was 79.63% faster with no flag.
- For sample size 1 MiB, tinyxxd was 125.51% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 15.15% faster with flags '-r -b'.
- For sample size 1 MiB, tinyxxd was 52.86% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 8.81% faster with flags '-i'.
- For sample size 1 MiB, tinyxxd was 19.99% faster with flags '-e'.
- For sample size 1 MiB, tinyxxd was 81.85% faster with flags '-u'.
- For sample size 1 MiB, tinyxxd was 98.93% faster with flags '-E'.
- For sample size 1 MiB, tinyxxd was 60.77% faster with flags '-b -i'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 37.35% faster than xxd.
- For sample 32 MiB, tinyxxd was 42.28% faster than xxd.
- For sample 16 MiB, tinyxxd was 34.75% faster than xxd.
- For sample 8 MiB, tinyxxd was 35.06% faster than xxd.
- For sample 4 MiB, tinyxxd was 33.88% faster than xxd.
- For sample 2 MiB, tinyxxd was 32.94% faster than xxd.
- For sample 1 MiB, tinyxxd was 32.09% faster than xxd.

### Performance by flag
- tinyxxd was 87.06% faster with no flag.
- tinyxxd was 150.99% faster with flag '-r'.
- tinyxxd was 14.29% faster with flag '-b'.
- tinyxxd was 15.98% faster with flag '-r -b'.
- tinyxxd was 67.56% faster with flag '-p'.
- tinyxxd was 5.60% faster with flag '-i'.
- tinyxxd was 22.44% faster with flag '-e'.
- tinyxxd was 123.46% faster with flag '-u'.
- tinyxxd was 145.72% faster with flag '-E'.
- tinyxxd was 63.66% faster with flag '-b -i'.
---
Report generated on: 2026-04-16T08:05:03.738843
