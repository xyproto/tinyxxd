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
| xxd | 64 | 1.41 |  |
| xxd | 64 | 2.21 | -r |
| xxd | 64 | 6.00 |  |
| xxd | 64 | 4.29 | -r |
| xxd | 64 | 1.36 |  |
| xxd | 64 | 0.93 | -p |
| xxd | 64 | 4.77 | -i |
| xxd | 64 | 1.35 | -e |
| xxd | 64 | 3.05 | -b |
| xxd | 64 | 1.38 | -u |
| xxd | 64 | 1.51 | -E |
| tinyxxd | 64 | 1.30 |  |
| tinyxxd | 64 | 2.00 | -r |
| tinyxxd | 64 | 4.61 |  |
| tinyxxd | 64 | 3.56 | -r |
| tinyxxd | 64 | 1.27 |  |
| tinyxxd | 64 | 0.77 | -p |
| tinyxxd | 64 | 4.79 | -i |
| tinyxxd | 64 | 1.32 | -e |
| tinyxxd | 64 | 3.10 | -b |
| tinyxxd | 64 | 1.27 | -u |
| tinyxxd | 64 | 1.41 | -E |
| xxd | 32 | 0.71 |  |
| xxd | 32 | 1.12 | -r |
| xxd | 32 | 2.30 |  |
| xxd | 32 | 2.14 | -r |
| xxd | 32 | 0.66 |  |
| xxd | 32 | 0.47 | -p |
| xxd | 32 | 2.42 | -i |
| xxd | 32 | 0.68 | -e |
| xxd | 32 | 1.53 | -b |
| xxd | 32 | 0.68 | -u |
| xxd | 32 | 0.73 | -E |
| tinyxxd | 32 | 0.65 |  |
| tinyxxd | 32 | 1.00 | -r |
| tinyxxd | 32 | 2.01 |  |
| tinyxxd | 32 | 1.78 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.39 | -p |
| tinyxxd | 32 | 2.44 | -i |
| tinyxxd | 32 | 0.68 | -e |
| tinyxxd | 32 | 1.56 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.71 | -E |
| xxd | 16 | 0.35 |  |
| xxd | 16 | 0.55 | -r |
| xxd | 16 | 0.93 |  |
| xxd | 16 | 1.04 | -r |
| xxd | 16 | 0.33 |  |
| xxd | 16 | 0.24 | -p |
| xxd | 16 | 1.18 | -i |
| xxd | 16 | 0.38 | -e |
| xxd | 16 | 0.76 | -b |
| xxd | 16 | 0.34 | -u |
| xxd | 16 | 0.37 | -E |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.49 | -r |
| tinyxxd | 16 | 1.71 |  |
| tinyxxd | 16 | 0.97 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.19 | -p |
| tinyxxd | 16 | 1.18 | -i |
| tinyxxd | 16 | 0.33 | -e |
| tinyxxd | 16 | 0.77 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.36 | -E |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.28 | -r |
| xxd | 8 | 0.46 |  |
| xxd | 8 | 0.54 | -r |
| xxd | 8 | 0.17 |  |
| xxd | 8 | 0.12 | -p |
| xxd | 8 | 0.60 | -i |
| xxd | 8 | 0.17 | -e |
| xxd | 8 | 0.38 | -b |
| xxd | 8 | 0.17 | -u |
| xxd | 8 | 0.19 | -E |
| tinyxxd | 8 | 0.17 |  |
| tinyxxd | 8 | 0.25 | -r |
| tinyxxd | 8 | 0.43 |  |
| tinyxxd | 8 | 0.45 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.10 | -p |
| tinyxxd | 8 | 0.60 | -i |
| tinyxxd | 8 | 0.17 | -e |
| tinyxxd | 8 | 0.39 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| tinyxxd | 4 | 0.09 |  |
| tinyxxd | 4 | 0.12 | -r |
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
| xxd | 4 | 0.29 |  |
| xxd | 4 | 0.32 | -r |
| xxd | 4 | 0.09 |  |
| xxd | 4 | 0.06 | -p |
| xxd | 4 | 0.32 | -i |
| xxd | 4 | 0.09 | -e |
| xxd | 4 | 0.20 | -b |
| xxd | 4 | 0.09 | -u |
| xxd | 4 | 0.10 | -E |
| tinyxxd | 2 | 0.05 |  |
| tinyxxd | 2 | 0.07 | -r |
| tinyxxd | 2 | 0.29 |  |
| tinyxxd | 2 | 0.14 | -r |
| tinyxxd | 2 | 0.04 |  |
| tinyxxd | 2 | 0.03 | -p |
| tinyxxd | 2 | 0.15 | -i |
| tinyxxd | 2 | 0.05 | -e |
| tinyxxd | 2 | 0.10 | -b |
| tinyxxd | 2 | 0.04 | -u |
| tinyxxd | 2 | 0.05 | -E |
| xxd | 2 | 0.05 |  |
| xxd | 2 | 0.07 | -r |
| xxd | 2 | 0.11 |  |
| xxd | 2 | 0.37 | -r |
| xxd | 2 | 0.06 |  |
| xxd | 2 | 0.04 | -p |
| xxd | 2 | 0.15 | -i |
| xxd | 2 | 0.05 | -e |
| xxd | 2 | 0.10 | -b |
| xxd | 2 | 0.04 | -u |
| xxd | 2 | 0.05 | -E |
| xxd | 1 | 0.03 |  |
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
- For sample size 64 MiB, tinyxxd was 22.26% faster with no flag.
- For sample size 64 MiB, tinyxxd was 16.76% faster with flags '-r'.
- For sample size 64 MiB, tinyxxd was 21.50% faster with flags '-p'.
- For sample size 64 MiB, tinyxxd was 8.21% faster with flags '-u'.
- For sample size 64 MiB, tinyxxd was 7.49% faster with flags '-E'.
- For sample size 32 MiB, tinyxxd was 11.10% faster with no flag.
- For sample size 32 MiB, tinyxxd was 17.22% faster with flags '-r'.
- For sample size 32 MiB, tinyxxd was 21.40% faster with flags '-p'.
- For sample size 32 MiB, tinyxxd was 7.80% faster with flags '-u'.
- For sample size 16 MiB, xxd was 46.29% faster with no flag.
- For sample size 16 MiB, tinyxxd was 9.11% faster with flags '-r'.
- For sample size 16 MiB, tinyxxd was 21.91% faster with flags '-p'.
- For sample size 16 MiB, tinyxxd was 15.83% faster with flags '-e'.
- For sample size 16 MiB, tinyxxd was 7.19% faster with flags '-u'.
- For sample size 8 MiB, tinyxxd was 17.29% faster with flags '-r'.
- For sample size 8 MiB, tinyxxd was 21.43% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 21.48% faster with no flag.
- For sample size 4 MiB, tinyxxd was 33.07% faster with flags '-r'.
- For sample size 4 MiB, tinyxxd was 20.18% faster with flags '-p'.
- For sample size 4 MiB, tinyxxd was 7.11% faster with flags '-e'.
- For sample size 4 MiB, tinyxxd was 9.33% faster with flags '-u'.
- For sample size 4 MiB, tinyxxd was 8.11% faster with flags '-E'.
- For sample size 2 MiB, xxd was 82.35% faster with no flag.
- For sample size 2 MiB, tinyxxd was 110.01% faster with flags '-r'.
- For sample size 2 MiB, tinyxxd was 28.87% faster with flags '-p'.
- For sample size 1 MiB, tinyxxd was 14.46% faster with flags '-r'.
- For sample size 1 MiB, tinyxxd was 16.06% faster with flags '-p'.

### Performance by sample size
- For sample 64 MiB, tinyxxd was 11.27% faster than xxd.
- For sample 32 MiB, tinyxxd was 7.67% faster than xxd.
- For sample size 16 MiB, xxd was 7.50% faster than tinyxxd.
- For sample 8 MiB, tinyxxd was 6.03% faster than xxd.
- For sample 4 MiB, tinyxxd was 15.70% faster than xxd.
- For sample 2 MiB, tinyxxd was 6.65% faster than xxd.
- For sample 1 MiB, tinyxxd was 5.07% faster than xxd.

### Performance by flag
- tinyxxd was 8.06% faster with no flag.
- tinyxxd was 18.16% faster with flag '-r'.
- tinyxxd was 21.55% faster with flag '-p'.
- tinyxxd was 7.64% faster with flag '-u'.
- tinyxxd was 5.60% faster with flag '-E'.
---
Report generated on: 2024-08-23T10:43:00.862189
