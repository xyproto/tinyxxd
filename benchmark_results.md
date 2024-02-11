# Benchmark Results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| tinyxxd | 64 | 1.35 |  |
| tinyxxd | 64 | 2.15 | -r |
| tinyxxd | 64 | 1.27 |  |
| tinyxxd | 64 | 0.85 | -p |
| tinyxxd | 64 | 4.83 | -i |
| tinyxxd | 64 | 1.32 | -e |
| tinyxxd | 64 | 3.23 | -b |
| tinyxxd | 64 | 1.29 | -u |
| tinyxxd | 64 | 1.40 | -E |
| og_xxd | 64 | 1.58 |  |
| og_xxd | 64 | 2.24 | -r |
| og_xxd | 64 | 1.52 |  |
| og_xxd | 64 | 0.97 | -p |
| og_xxd | 64 | 4.93 | -i |
| og_xxd | 64 | 1.49 | -e |
| og_xxd | 64 | 3.56 | -b |
| og_xxd | 64 | 1.57 | -u |
| og_xxd | 64 | 1.66 | -E |
| tinyxxd | 32 | 0.66 |  |
| tinyxxd | 32 | 1.26 | -r |
| tinyxxd | 32 | 0.63 |  |
| tinyxxd | 32 | 0.41 | -p |
| tinyxxd | 32 | 2.42 | -i |
| tinyxxd | 32 | 0.65 | -e |
| tinyxxd | 32 | 1.52 | -b |
| tinyxxd | 32 | 0.66 | -u |
| tinyxxd | 32 | 0.71 | -E |
| og_xxd | 32 | 0.79 |  |
| og_xxd | 32 | 1.10 | -r |
| og_xxd | 32 | 0.77 |  |
| og_xxd | 32 | 0.52 | -p |
| og_xxd | 32 | 2.49 | -i |
| og_xxd | 32 | 0.74 | -e |
| og_xxd | 32 | 1.79 | -b |
| og_xxd | 32 | 0.76 | -u |
| og_xxd | 32 | 0.85 | -E |
| og_xxd | 16 | 0.38 |  |
| og_xxd | 16 | 0.56 | -r |
| og_xxd | 16 | 0.38 |  |
| og_xxd | 16 | 0.24 | -p |
| og_xxd | 16 | 1.24 | -i |
| og_xxd | 16 | 0.37 | -e |
| og_xxd | 16 | 0.90 | -b |
| og_xxd | 16 | 0.39 | -u |
| og_xxd | 16 | 0.45 | -E |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.55 | -r |
| tinyxxd | 16 | 0.34 |  |
| tinyxxd | 16 | 0.21 | -p |
| tinyxxd | 16 | 1.21 | -i |
| tinyxxd | 16 | 0.33 | -e |
| tinyxxd | 16 | 0.77 | -b |
| tinyxxd | 16 | 0.32 | -u |
| tinyxxd | 16 | 0.39 | -E |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.27 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.61 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| og_xxd | 8 | 0.20 |  |
| og_xxd | 8 | 0.30 | -r |
| og_xxd | 8 | 0.19 |  |
| og_xxd | 8 | 0.12 | -p |
| og_xxd | 8 | 0.61 | -i |
| og_xxd | 8 | 0.20 | -e |
| og_xxd | 8 | 0.44 | -b |
| og_xxd | 8 | 0.19 | -u |
| og_xxd | 8 | 0.21 | -E |

## Performance Summaries
- With flags '' and size 64MiB, tinyxxd was 18.77% faster.
- With flags '-p' and size 64MiB, tinyxxd was 14.64% faster.
- With flags '-e' and size 64MiB, tinyxxd was 12.67% faster.
- With flags '-b' and size 64MiB, tinyxxd was 10.13% faster.
- With flags '-u' and size 64MiB, tinyxxd was 21.21% faster.
- With flags '-E' and size 64MiB, tinyxxd was 18.63% faster.
- With flags '' and size 32MiB, tinyxxd was 20.95% faster.
- With flags '-r' and size 32MiB, og_xxd was 14.53% faster.
- With flags '-p' and size 32MiB, tinyxxd was 25.92% faster.
- With flags '-e' and size 32MiB, tinyxxd was 14.94% faster.
- With flags '-b' and size 32MiB, tinyxxd was 17.91% faster.
- With flags '-u' and size 32MiB, tinyxxd was 13.99% faster.
- With flags '-E' and size 32MiB, tinyxxd was 19.34% faster.
- With flags '' and size 16MiB, tinyxxd was 13.22% faster.
- With flags '-p' and size 16MiB, tinyxxd was 15.48% faster.
- With flags '-e' and size 16MiB, tinyxxd was 14.54% faster.
- With flags '-b' and size 16MiB, tinyxxd was 17.51% faster.
- With flags '-u' and size 16MiB, tinyxxd was 23.94% faster.
- With flags '-E' and size 16MiB, tinyxxd was 13.72% faster.
- With flags '' and size 8MiB, tinyxxd was 18.47% faster.
- With flags '-r' and size 8MiB, tinyxxd was 9.71% faster.
- With flags '-p' and size 8MiB, tinyxxd was 15.74% faster.
- With flags '-e' and size 8MiB, tinyxxd was 20.29% faster.
- With flags '-b' and size 8MiB, tinyxxd was 14.41% faster.
- With flags '-u' and size 8MiB, tinyxxd was 20.14% faster.
- With flags '-E' and size 8MiB, tinyxxd was 15.21% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 10.32% faster than og_xxd.
- For 32MiB files, tinyxxd was 9.93% faster than og_xxd.
- For 16MiB files, tinyxxd was 10.57% faster than og_xxd.
- For 8MiB files, tinyxxd was 11.64% faster than og_xxd.

### Performance by flag
- With flag '', tinyxxd was 18.56% faster.
- With flag '-p', tinyxxd was 17.79% faster.
- With flag '-e', tinyxxd was 14.02% faster.
- With flag '-b', tinyxxd was 13.37% faster.
- With flag '-u', tinyxxd was 19.52% faster.
- With flag '-E', tinyxxd was 17.87% faster.

### Performance compared to last run
- For 64MiB files with flags '', tinyxxd slowed down by 3.62% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd improved by 2.52% compared to the last run.
- For 64MiB files with flags '', tinyxxd improved by 2.78% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd slowed down by 2.87% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd improved by 0.54% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd slowed down by 2.68% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd slowed down by 5.26% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd slowed down by 1.87% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd improved by 1.41% compared to the last run.
- For 64MiB files with flags '', og_xxd slowed down by 3.18% compared to the last run.
- For 64MiB files with flags '-r', og_xxd slowed down by 2.28% compared to the last run.
- For 64MiB files with flags '', og_xxd improved by 0.66% compared to the last run.
- For 64MiB files with flags '-p', og_xxd slowed down by 2.11% compared to the last run.
- For 64MiB files with flags '-i', og_xxd slowed down by 1.99% compared to the last run.
- For 64MiB files with flags '-e', og_xxd improved by 1.13% compared to the last run.
- For 64MiB files with flags '-b', og_xxd improved by 8.40% compared to the last run.
- For 64MiB files with flags '-u', og_xxd slowed down by 3.26% compared to the last run.
- For 64MiB files with flags '-E', og_xxd slowed down by 0.23% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 4.61% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd slowed down by 17.00% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 0.66% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd improved by 0.42% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd improved by 1.66% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd slowed down by 1.70% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd improved by 0.04% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd slowed down by 7.64% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd slowed down by 2.89% compared to the last run.
- For 32MiB files with flags '', og_xxd slowed down by 1.70% compared to the last run.
- For 32MiB files with flags '-r', og_xxd improved by 1.67% compared to the last run.
- For 32MiB files with flags '', og_xxd improved by 0.91% compared to the last run.
- For 32MiB files with flags '-p', og_xxd slowed down by 9.23% compared to the last run.
- For 32MiB files with flags '-i', og_xxd slowed down by 2.39% compared to the last run.
- For 32MiB files with flags '-e', og_xxd improved by 1.20% compared to the last run.
- For 32MiB files with flags '-b', og_xxd slowed down by 0.02% compared to the last run.
- For 32MiB files with flags '-u', og_xxd slowed down by 1.52% compared to the last run.
- For 32MiB files with flags '-E', og_xxd slowed down by 3.18% compared to the last run.
- For 16MiB files with flags '', og_xxd slowed down by 2.29% compared to the last run.
- For 16MiB files with flags '-r', og_xxd slowed down by 2.16% compared to the last run.
- For 16MiB files with flags '', og_xxd slowed down by 2.53% compared to the last run.
- For 16MiB files with flags '-p', og_xxd slowed down by 0.19% compared to the last run.
- For 16MiB files with flags '-i', og_xxd slowed down by 1.16% compared to the last run.
- For 16MiB files with flags '-e', og_xxd slowed down by 0.51% compared to the last run.
- For 16MiB files with flags '-b', og_xxd slowed down by 0.57% compared to the last run.
- For 16MiB files with flags '-u', og_xxd slowed down by 3.45% compared to the last run.
- For 16MiB files with flags '-E', og_xxd slowed down by 7.42% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 6.07% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd improved by 2.14% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 8.27% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd improved by 0.05% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd improved by 0.14% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd improved by 1.55% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd slowed down by 0.16% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd improved by 2.45% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd slowed down by 11.24% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 2.79% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd improved by 1.12% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 2.58% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd slowed down by 0.17% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd slowed down by 0.16% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd improved by 13.98% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd slowed down by 1.10% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd slowed down by 0.08% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd slowed down by 1.83% compared to the last run.
- For 8MiB files with flags '', og_xxd slowed down by 0.98% compared to the last run.
- For 8MiB files with flags '-r', og_xxd slowed down by 8.32% compared to the last run.
- For 8MiB files with flags '', og_xxd improved by 2.37% compared to the last run.
- For 8MiB files with flags '-p', og_xxd slowed down by 0.40% compared to the last run.
- For 8MiB files with flags '-i', og_xxd slowed down by 0.39% compared to the last run.
- For 8MiB files with flags '-e', og_xxd slowed down by 3.84% compared to the last run.
- For 8MiB files with flags '-b', og_xxd improved by 0.19% compared to the last run.
- For 8MiB files with flags '-u', og_xxd slowed down by 1.81% compared to the last run.
- For 8MiB files with flags '-E', og_xxd slowed down by 0.32% compared to the last run.

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


Report generated on: 2024-02-11T20:57:58.228965
