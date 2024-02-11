# Benchmark Results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| tinyxxd | 64 | 1.32 |  |
| tinyxxd | 64 | 2.24 | -r |
| tinyxxd | 64 | 1.26 |  |
| tinyxxd | 64 | 0.82 | -p |
| tinyxxd | 64 | 4.81 | -i |
| tinyxxd | 64 | 1.31 | -e |
| tinyxxd | 64 | 3.03 | -b |
| tinyxxd | 64 | 1.25 | -u |
| tinyxxd | 64 | 1.41 | -E |
| og_xxd | 64 | 1.64 |  |
| og_xxd | 64 | 2.23 | -r |
| og_xxd | 64 | 1.49 |  |
| og_xxd | 64 | 0.95 | -p |
| og_xxd | 64 | 4.85 | -i |
| og_xxd | 64 | 1.52 | -e |
| og_xxd | 64 | 3.59 | -b |
| og_xxd | 64 | 1.50 | -u |
| og_xxd | 64 | 1.67 | -E |
| tinyxxd | 32 | 0.66 |  |
| tinyxxd | 32 | 1.40 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.41 | -p |
| tinyxxd | 32 | 2.43 | -i |
| tinyxxd | 32 | 0.64 | -e |
| tinyxxd | 32 | 1.56 | -b |
| tinyxxd | 32 | 0.63 | -u |
| tinyxxd | 32 | 0.70 | -E |
| og_xxd | 32 | 0.78 |  |
| og_xxd | 32 | 1.10 | -r |
| og_xxd | 32 | 0.80 |  |
| og_xxd | 32 | 0.49 | -p |
| og_xxd | 32 | 2.47 | -i |
| og_xxd | 32 | 0.75 | -e |
| og_xxd | 32 | 1.77 | -b |
| og_xxd | 32 | 0.76 | -u |
| og_xxd | 32 | 0.84 | -E |
| tinyxxd | 16 | 0.32 |  |
| tinyxxd | 16 | 0.54 | -r |
| tinyxxd | 16 | 0.31 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.26 | -i |
| tinyxxd | 16 | 0.34 | -e |
| tinyxxd | 16 | 0.76 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.36 | -E |
| og_xxd | 16 | 0.39 |  |
| og_xxd | 16 | 0.55 | -r |
| og_xxd | 16 | 0.38 |  |
| og_xxd | 16 | 0.24 | -p |
| og_xxd | 16 | 1.22 | -i |
| og_xxd | 16 | 0.37 | -e |
| og_xxd | 16 | 0.89 | -b |
| og_xxd | 16 | 0.38 | -u |
| og_xxd | 16 | 0.42 | -E |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.27 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.61 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.19 | -E |
| og_xxd | 8 | 0.19 |  |
| og_xxd | 8 | 0.28 | -r |
| og_xxd | 8 | 0.19 |  |
| og_xxd | 8 | 0.12 | -p |
| og_xxd | 8 | 0.66 | -i |
| og_xxd | 8 | 0.19 | -e |
| og_xxd | 8 | 0.44 | -b |
| og_xxd | 8 | 0.19 | -u |
| og_xxd | 8 | 0.21 | -E |

## Performance Summaries
- With flags '' and size 64MiB, tinyxxd was 21.16% faster.
- With flags '-p' and size 64MiB, tinyxxd was 15.87% faster.
- With flags '-e' and size 64MiB, tinyxxd was 15.94% faster.
- With flags '-b' and size 64MiB, tinyxxd was 18.61% faster.
- With flags '-u' and size 64MiB, tinyxxd was 19.32% faster.
- With flags '-E' and size 64MiB, tinyxxd was 18.14% faster.
- With flags '' and size 32MiB, tinyxxd was 22.22% faster.
- With flags '-r' and size 32MiB, og_xxd was 27.94% faster.
- With flags '-p' and size 32MiB, tinyxxd was 17.33% faster.
- With flags '-e' and size 32MiB, tinyxxd was 15.95% faster.
- With flags '-b' and size 32MiB, tinyxxd was 13.71% faster.
- With flags '-u' and size 32MiB, tinyxxd was 20.58% faster.
- With flags '-E' and size 32MiB, tinyxxd was 18.62% faster.
- With flags '' and size 16MiB, tinyxxd was 19.57% faster.
- With flags '-p' and size 16MiB, tinyxxd was 15.30% faster.
- With flags '-e' and size 16MiB, tinyxxd was 11.54% faster.
- With flags '-b' and size 16MiB, tinyxxd was 17.05% faster.
- With flags '-u' and size 16MiB, tinyxxd was 20.93% faster.
- With flags '-E' and size 16MiB, tinyxxd was 17.16% faster.
- With flags '' and size 8MiB, tinyxxd was 17.98% faster.
- With flags '-p' and size 8MiB, tinyxxd was 15.21% faster.
- With flags '-i' and size 8MiB, tinyxxd was 8.11% faster.
- With flags '-e' and size 8MiB, tinyxxd was 18.90% faster.
- With flags '-b' and size 8MiB, tinyxxd was 15.76% faster.
- With flags '-u' and size 8MiB, tinyxxd was 15.67% faster.
- With flags '-E' and size 8MiB, tinyxxd was 7.26% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 11.38% faster than og_xxd.
- For 32MiB files, tinyxxd was 7.35% faster than og_xxd.
- For 16MiB files, tinyxxd was 9.49% faster than og_xxd.
- For 8MiB files, tinyxxd was 11.79% faster than og_xxd.

### Performance by flag
- With flag '', tinyxxd was 21.02% faster.
- With flag '-r', og_xxd was 7.03% faster.
- With flag '-p', tinyxxd was 16.14% faster.
- With flag '-e', tinyxxd was 15.53% faster.
- With flag '-b', tinyxxd was 16.88% faster.
- With flag '-u', tinyxxd was 19.62% faster.
- With flag '-E', tinyxxd was 17.34% faster.

### Performance compared to last run
- For 64MiB files with flags '', tinyxxd slowed down by 5.87% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd improved by 0.56% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 0.57% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd improved by 0.26% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd improved by 1.01% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd slowed down by 1.23% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd improved by 3.49% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd improved by 1.91% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd improved by 0.96% compared to the last run.
- For 64MiB files with flags '', og_xxd slowed down by 0.82% compared to the last run.
- For 64MiB files with flags '-r', og_xxd improved by 0.28% compared to the last run.
- For 64MiB files with flags '', og_xxd improved by 7.83% compared to the last run.
- For 64MiB files with flags '-p', og_xxd improved by 2.22% compared to the last run.
- For 64MiB files with flags '-i', og_xxd improved by 0.16% compared to the last run.
- For 64MiB files with flags '-e', og_xxd improved by 0.26% compared to the last run.
- For 64MiB files with flags '-b', og_xxd slowed down by 0.61% compared to the last run.
- For 64MiB files with flags '-u', og_xxd improved by 5.45% compared to the last run.
- For 64MiB files with flags '-E', og_xxd improved by 0.85% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 2.74% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd slowed down by 29.23% compared to the last run.
- For 32MiB files with flags '', tinyxxd improved by 1.93% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd slowed down by 0.08% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd improved by 0.50% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd improved by 6.32% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd slowed down by 3.02% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd improved by 0.21% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd improved by 0.53% compared to the last run.
- For 32MiB files with flags '', og_xxd slowed down by 1.81% compared to the last run.
- For 32MiB files with flags '-r', og_xxd slowed down by 0.63% compared to the last run.
- For 32MiB files with flags '', og_xxd slowed down by 3.30% compared to the last run.
- For 32MiB files with flags '-p', og_xxd slowed down by 1.13% compared to the last run.
- For 32MiB files with flags '-i', og_xxd slowed down by 0.63% compared to the last run.
- For 32MiB files with flags '-e', og_xxd improved by 16.93% compared to the last run.
- For 32MiB files with flags '-b', og_xxd improved by 0.23% compared to the last run.
- For 32MiB files with flags '-u', og_xxd improved by 1.31% compared to the last run.
- For 32MiB files with flags '-E', og_xxd slowed down by 1.26% compared to the last run.
- For 16MiB files with flags '', tinyxxd improved by 0.74% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd improved by 1.32% compared to the last run.
- For 16MiB files with flags '', tinyxxd improved by 3.70% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd improved by 0.03% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd slowed down by 1.00% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd slowed down by 4.01% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd improved by 1.67% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd slowed down by 0.79% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd improved by 0.71% compared to the last run.
- For 16MiB files with flags '', og_xxd slowed down by 3.04% compared to the last run.
- For 16MiB files with flags '-r', og_xxd slowed down by 1.22% compared to the last run.
- For 16MiB files with flags '', og_xxd slowed down by 0.58% compared to the last run.
- For 16MiB files with flags '-p', og_xxd improved by 0.34% compared to the last run.
- For 16MiB files with flags '-i', og_xxd improved by 0.75% compared to the last run.
- For 16MiB files with flags '-e', og_xxd slowed down by 0.25% compared to the last run.
- For 16MiB files with flags '-b', og_xxd improved by 1.33% compared to the last run.
- For 16MiB files with flags '-u', og_xxd improved by 0.12% compared to the last run.
- For 16MiB files with flags '-E', og_xxd slowed down by 0.28% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 3.43% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd improved by 1.39% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 0.09% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd slowed down by 0.29% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd improved by 1.01% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd slowed down by 0.12% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd slowed down by 0.30% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd slowed down by 2.59% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd slowed down by 8.48% compared to the last run.
- For 8MiB files with flags '', og_xxd slowed down by 2.47% compared to the last run.
- For 8MiB files with flags '-r', og_xxd slowed down by 0.84% compared to the last run.
- For 8MiB files with flags '', og_xxd slowed down by 0.15% compared to the last run.
- For 8MiB files with flags '-p', og_xxd improved by 0.54% compared to the last run.
- For 8MiB files with flags '-i', og_xxd slowed down by 7.26% compared to the last run.
- For 8MiB files with flags '-e', og_xxd slowed down by 2.77% compared to the last run.
- For 8MiB files with flags '-b', og_xxd slowed down by 0.02% compared to the last run.
- For 8MiB files with flags '-u', og_xxd improved by 1.38% compared to the last run.
- For 8MiB files with flags '-E', og_xxd slowed down by 0.18% compared to the last run.

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


Report generated on: 2024-02-11T17:04:06.234396
