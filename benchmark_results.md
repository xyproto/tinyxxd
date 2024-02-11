# Benchmark Results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| og_xxd | 64 | 1.61 |  |
| og_xxd | 64 | 2.19 | -r |
| og_xxd | 64 | 1.53 |  |
| og_xxd | 64 | 0.95 | -p |
| og_xxd | 64 | 4.83 | -i |
| og_xxd | 64 | 1.50 | -e |
| og_xxd | 64 | 3.89 | -b |
| og_xxd | 64 | 1.52 | -u |
| og_xxd | 64 | 1.66 | -E |
| tinyxxd | 64 | 1.29 |  |
| tinyxxd | 64 | 2.21 | -r |
| tinyxxd | 64 | 1.30 |  |
| tinyxxd | 64 | 0.82 | -p |
| tinyxxd | 64 | 4.86 | -i |
| tinyxxd | 64 | 1.29 | -e |
| tinyxxd | 64 | 3.07 | -b |
| tinyxxd | 64 | 1.27 | -u |
| tinyxxd | 64 | 1.42 | -E |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 1.08 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.42 | -p |
| tinyxxd | 32 | 2.46 | -i |
| tinyxxd | 32 | 0.64 | -e |
| tinyxxd | 32 | 1.52 | -b |
| tinyxxd | 32 | 0.62 | -u |
| tinyxxd | 32 | 0.69 | -E |
| og_xxd | 32 | 0.76 |  |
| og_xxd | 32 | 1.12 | -r |
| og_xxd | 32 | 0.77 |  |
| og_xxd | 32 | 0.48 | -p |
| og_xxd | 32 | 2.43 | -i |
| og_xxd | 32 | 0.75 | -e |
| og_xxd | 32 | 1.79 | -b |
| og_xxd | 32 | 0.74 | -u |
| og_xxd | 32 | 0.82 | -E |
| og_xxd | 16 | 0.38 |  |
| og_xxd | 16 | 0.55 | -r |
| og_xxd | 16 | 0.37 |  |
| og_xxd | 16 | 0.24 | -p |
| og_xxd | 16 | 1.22 | -i |
| og_xxd | 16 | 0.37 | -e |
| og_xxd | 16 | 0.90 | -b |
| og_xxd | 16 | 0.38 | -u |
| og_xxd | 16 | 0.42 | -E |
| tinyxxd | 16 | 0.35 |  |
| tinyxxd | 16 | 0.56 | -r |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.21 | -i |
| tinyxxd | 16 | 0.33 | -e |
| tinyxxd | 16 | 0.77 | -b |
| tinyxxd | 16 | 0.33 | -u |
| tinyxxd | 16 | 0.35 | -E |
| og_xxd | 8 | 0.20 |  |
| og_xxd | 8 | 0.28 | -r |
| og_xxd | 8 | 0.19 |  |
| og_xxd | 8 | 0.12 | -p |
| og_xxd | 8 | 0.61 | -i |
| og_xxd | 8 | 0.19 | -e |
| og_xxd | 8 | 0.44 | -b |
| og_xxd | 8 | 0.19 | -u |
| og_xxd | 8 | 0.21 | -E |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.27 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.61 | -i |
| tinyxxd | 8 | 0.19 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |

## Performance Summaries
- With flags '' and size 64MiB, tinyxxd was 21.14% faster.
- With flags '-p' and size 64MiB, tinyxxd was 15.49% faster.
- With flags '-e' and size 64MiB, tinyxxd was 17.02% faster.
- With flags '-b' and size 64MiB, tinyxxd was 26.56% faster.
- With flags '-u' and size 64MiB, tinyxxd was 19.57% faster.
- With flags '-E' and size 64MiB, tinyxxd was 16.69% faster.
- With flags '' and size 32MiB, tinyxxd was 21.19% faster.
- With flags '-p' and size 32MiB, tinyxxd was 14.80% faster.
- With flags '-e' and size 32MiB, tinyxxd was 18.32% faster.
- With flags '-b' and size 32MiB, tinyxxd was 17.84% faster.
- With flags '-u' and size 32MiB, tinyxxd was 20.86% faster.
- With flags '-E' and size 32MiB, tinyxxd was 19.01% faster.
- With flags '' and size 16MiB, tinyxxd was 14.36% faster.
- With flags '-p' and size 16MiB, tinyxxd was 15.20% faster.
- With flags '-e' and size 16MiB, tinyxxd was 12.18% faster.
- With flags '-b' and size 16MiB, tinyxxd was 17.03% faster.
- With flags '-u' and size 16MiB, tinyxxd was 16.87% faster.
- With flags '-E' and size 16MiB, tinyxxd was 17.75% faster.
- With flags '' and size 8MiB, tinyxxd was 22.49% faster.
- With flags '-p' and size 8MiB, tinyxxd was 15.48% faster.
- With flags '-b' and size 8MiB, tinyxxd was 15.89% faster.
- With flags '-u' and size 8MiB, tinyxxd was 18.11% faster.
- With flags '-E' and size 8MiB, tinyxxd was 16.93% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 12.26% faster than og_xxd.
- For 32MiB files, tinyxxd was 11.41% faster than og_xxd.
- For 16MiB files, tinyxxd was 9.33% faster than og_xxd.
- For 8MiB files, tinyxxd was 9.53% faster than og_xxd.

### Performance by flag
- With flag '', tinyxxd was 20.32% faster.
- With flag '-p', tinyxxd was 15.27% faster.
- With flag '-e', tinyxxd was 15.35% faster.
- With flag '-b', tinyxxd was 22.27% faster.
- With flag '-u', tinyxxd was 19.44% faster.
- With flag '-E', tinyxxd was 17.45% faster.

### Performance compared to last run
- For 64MiB files with flags '', og_xxd slowed down by 5.18% compared to the last run.
- For 64MiB files with flags '-r', og_xxd improved by 0.22% compared to the last run.
- For 64MiB files with flags '', og_xxd slowed down by 0.21% compared to the last run.
- For 64MiB files with flags '-p', og_xxd slowed down by 0.02% compared to the last run.
- For 64MiB files with flags '-i', og_xxd improved by 1.26% compared to the last run.
- For 64MiB files with flags '-e', og_xxd improved by 0.75% compared to the last run.
- For 64MiB files with flags '-b', og_xxd slowed down by 8.15% compared to the last run.
- For 64MiB files with flags '-u', og_xxd improved by 1.06% compared to the last run.
- For 64MiB files with flags '-E', og_xxd improved by 2.61% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 2.97% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd slowed down by 0.42% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 3.70% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd improved by 1.19% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd improved by 0.87% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd improved by 1.62% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd slowed down by 1.85% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd slowed down by 1.08% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd slowed down by 1.37% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 0.57% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd improved by 3.50% compared to the last run.
- For 32MiB files with flags '', tinyxxd improved by 1.84% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd improved by 1.30% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd improved by 1.25% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd improved by 1.49% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd slowed down by 0.11% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd improved by 1.77% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd improved by 1.75% compared to the last run.
- For 32MiB files with flags '', og_xxd improved by 1.88% compared to the last run.
- For 32MiB files with flags '-r', og_xxd slowed down by 0.09% compared to the last run.
- For 32MiB files with flags '', og_xxd improved by 0.31% compared to the last run.
- For 32MiB files with flags '-p', og_xxd improved by 3.74% compared to the last run.
- For 32MiB files with flags '-i', og_xxd improved by 0.56% compared to the last run.
- For 32MiB files with flags '-e', og_xxd improved by 1.13% compared to the last run.
- For 32MiB files with flags '-b', og_xxd slowed down by 1.81% compared to the last run.
- For 32MiB files with flags '-u', og_xxd improved by 4.46% compared to the last run.
- For 32MiB files with flags '-E', og_xxd improved by 0.66% compared to the last run.
- For 16MiB files with flags '', og_xxd improved by 0.03% compared to the last run.
- For 16MiB files with flags '-r', og_xxd improved by 3.00% compared to the last run.
- For 16MiB files with flags '', og_xxd improved by 2.24% compared to the last run.
- For 16MiB files with flags '-p', og_xxd improved by 0.14% compared to the last run.
- For 16MiB files with flags '-i', og_xxd slowed down by 0.14% compared to the last run.
- For 16MiB files with flags '-e', og_xxd improved by 0.42% compared to the last run.
- For 16MiB files with flags '-b', og_xxd slowed down by 1.75% compared to the last run.
- For 16MiB files with flags '-u', og_xxd improved by 2.02% compared to the last run.
- For 16MiB files with flags '-E', og_xxd slowed down by 0.74% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 10.19% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd slowed down by 3.54% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 0.57% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd slowed down by 0.13% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd improved by 0.12% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd slowed down by 2.22% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd improved by 2.14% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd improved by 5.46% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd improved by 1.32% compared to the last run.
- For 8MiB files with flags '', og_xxd slowed down by 2.29% compared to the last run.
- For 8MiB files with flags '-r', og_xxd improved by 3.33% compared to the last run.
- For 8MiB files with flags '', og_xxd improved by 0.29% compared to the last run.
- For 8MiB files with flags '-p', og_xxd improved by 0.06% compared to the last run.
- For 8MiB files with flags '-i', og_xxd improved by 0.94% compared to the last run.
- For 8MiB files with flags '-e', og_xxd slowed down by 0.16% compared to the last run.
- For 8MiB files with flags '-b', og_xxd improved by 0.48% compared to the last run.
- For 8MiB files with flags '-u', og_xxd slowed down by 0.18% compared to the last run.
- For 8MiB files with flags '-E', og_xxd improved by 0.06% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 0.45% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd slowed down by 0.03% compared to the last run.
- For 8MiB files with flags '', tinyxxd improved by 2.08% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd improved by 0.28% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd improved by 0.15% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd improved by 1.42% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd improved by 0.13% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd improved by 3.28% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd improved by 0.19% compared to the last run.

## Graphs

### Graph by Size
![Graph by Size](img/graph_by_size.svg)

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
![Graph Flag E](img/graph_flag_E.svg)


Report generated on: 2024-02-11T20:23:15.131105
