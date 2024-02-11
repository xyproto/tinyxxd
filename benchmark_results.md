# Benchmark Results

| Program | Size (MiB) | Conversion Time (s) | Flags |
|---------|------------|----------------------|-------|
| og_xxd | 64 | 1.57 |  |
| og_xxd | 64 | 2.20 | -r |
| og_xxd | 64 | 1.55 |  |
| og_xxd | 64 | 0.98 | -p |
| og_xxd | 64 | 4.98 | -i |
| og_xxd | 64 | 1.53 | -e |
| og_xxd | 64 | 3.54 | -b |
| og_xxd | 64 | 1.56 | -u |
| og_xxd | 64 | 1.70 | -E |
| tinyxxd | 64 | 1.31 |  |
| tinyxxd | 64 | 2.21 | -r |
| tinyxxd | 64 | 1.27 |  |
| tinyxxd | 64 | 0.82 | -p |
| tinyxxd | 64 | 4.82 | -i |
| tinyxxd | 64 | 1.30 | -e |
| tinyxxd | 64 | 3.06 | -b |
| tinyxxd | 64 | 1.25 | -u |
| tinyxxd | 64 | 1.41 | -E |
| tinyxxd | 32 | 0.65 |  |
| tinyxxd | 32 | 1.08 | -r |
| tinyxxd | 32 | 0.64 |  |
| tinyxxd | 32 | 0.41 | -p |
| tinyxxd | 32 | 2.43 | -i |
| tinyxxd | 32 | 0.65 | -e |
| tinyxxd | 32 | 1.54 | -b |
| tinyxxd | 32 | 0.64 | -u |
| tinyxxd | 32 | 0.70 | -E |
| og_xxd | 32 | 0.76 |  |
| og_xxd | 32 | 1.13 | -r |
| og_xxd | 32 | 0.75 |  |
| og_xxd | 32 | 0.48 | -p |
| og_xxd | 32 | 2.43 | -i |
| og_xxd | 32 | 0.78 | -e |
| og_xxd | 32 | 1.77 | -b |
| og_xxd | 32 | 0.78 | -u |
| og_xxd | 32 | 0.84 | -E |
| og_xxd | 16 | 0.38 |  |
| og_xxd | 16 | 0.55 | -r |
| og_xxd | 16 | 0.37 |  |
| og_xxd | 16 | 0.24 | -p |
| og_xxd | 16 | 1.21 | -i |
| og_xxd | 16 | 0.38 | -e |
| og_xxd | 16 | 0.89 | -b |
| og_xxd | 16 | 0.37 | -u |
| og_xxd | 16 | 0.43 | -E |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.57 | -r |
| tinyxxd | 16 | 0.33 |  |
| tinyxxd | 16 | 0.24 | -p |
| tinyxxd | 16 | 1.24 | -i |
| tinyxxd | 16 | 0.32 | -e |
| tinyxxd | 16 | 0.77 | -b |
| tinyxxd | 16 | 0.31 | -u |
| tinyxxd | 16 | 0.35 | -E |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.27 | -r |
| tinyxxd | 8 | 0.16 |  |
| tinyxxd | 8 | 0.11 | -p |
| tinyxxd | 8 | 0.62 | -i |
| tinyxxd | 8 | 0.16 | -e |
| tinyxxd | 8 | 0.38 | -b |
| tinyxxd | 8 | 0.16 | -u |
| tinyxxd | 8 | 0.18 | -E |
| og_xxd | 8 | 0.20 |  |
| og_xxd | 8 | 0.28 | -r |
| og_xxd | 8 | 0.19 |  |
| og_xxd | 8 | 0.12 | -p |
| og_xxd | 8 | 0.61 | -i |
| og_xxd | 8 | 0.19 | -e |
| og_xxd | 8 | 0.44 | -b |
| og_xxd | 8 | 0.19 | -u |
| og_xxd | 8 | 0.21 | -E |

## Performance Summaries
- With flags '' and size 64MiB, tinyxxd was 21.24% faster.
- With flags '-p' and size 64MiB, tinyxxd was 19.70% faster.
- With flags '-e' and size 64MiB, tinyxxd was 17.85% faster.
- With flags '-b' and size 64MiB, tinyxxd was 15.78% faster.
- With flags '-u' and size 64MiB, tinyxxd was 24.97% faster.
- With flags '-E' and size 64MiB, tinyxxd was 20.34% faster.
- With flags '' and size 32MiB, tinyxxd was 17.97% faster.
- With flags '-r' and size 32MiB, tinyxxd was 5.35% faster.
- With flags '-p' and size 32MiB, tinyxxd was 16.54% faster.
- With flags '-e' and size 32MiB, tinyxxd was 19.43% faster.
- With flags '-b' and size 32MiB, tinyxxd was 14.70% faster.
- With flags '-u' and size 32MiB, tinyxxd was 22.40% faster.
- With flags '-E' and size 32MiB, tinyxxd was 20.54% faster.
- With flags '' and size 16MiB, tinyxxd was 14.92% faster.
- With flags '-e' and size 16MiB, tinyxxd was 15.69% faster.
- With flags '-b' and size 16MiB, tinyxxd was 15.88% faster.
- With flags '-u' and size 16MiB, tinyxxd was 19.10% faster.
- With flags '-E' and size 16MiB, tinyxxd was 20.55% faster.
- With flags '' and size 8MiB, tinyxxd was 20.78% faster.
- With flags '-p' and size 8MiB, tinyxxd was 14.98% faster.
- With flags '-e' and size 8MiB, tinyxxd was 15.15% faster.
- With flags '-b' and size 8MiB, tinyxxd was 16.46% faster.
- With flags '-u' and size 8MiB, tinyxxd was 19.05% faster.
- With flags '-E' and size 8MiB, tinyxxd was 16.46% faster.

### Performance by sample size
- For 64MiB files, tinyxxd was 12.47% faster than og_xxd.
- For 32MiB files, tinyxxd was 11.38% faster than og_xxd.
- For 16MiB files, tinyxxd was 8.10% faster than og_xxd.
- For 8MiB files, tinyxxd was 10.32% faster than og_xxd.

### Performance by flag
- With flag '', tinyxxd was 19.48% faster.
- With flag '-p', tinyxxd was 15.94% faster.
- With flag '-e', tinyxxd was 17.81% faster.
- With flag '-b', tinyxxd was 15.55% faster.
- With flag '-u', tinyxxd was 23.10% faster.
- With flag '-E', tinyxxd was 20.16% faster.

### Performance compared to last run
- For 64MiB files with flags '', og_xxd improved by 0.55% compared to the last run.
- For 64MiB files with flags '-r', og_xxd slowed down by 0.90% compared to the last run.
- For 64MiB files with flags '', og_xxd improved by 1.71% compared to the last run.
- For 64MiB files with flags '-p', og_xxd slowed down by 3.49% compared to the last run.
- For 64MiB files with flags '-i', og_xxd slowed down by 1.31% compared to the last run.
- For 64MiB files with flags '-e', og_xxd improved by 2.16% compared to the last run.
- For 64MiB files with flags '-b', og_xxd improved by 2.30% compared to the last run.
- For 64MiB files with flags '-u', og_xxd slowed down by 2.55% compared to the last run.
- For 64MiB files with flags '-E', og_xxd slowed down by 1.43% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 4.89% compared to the last run.
- For 64MiB files with flags '-r', tinyxxd slowed down by 1.33% compared to the last run.
- For 64MiB files with flags '', tinyxxd slowed down by 1.41% compared to the last run.
- For 64MiB files with flags '-p', tinyxxd improved by 1.45% compared to the last run.
- For 64MiB files with flags '-i', tinyxxd improved by 1.52% compared to the last run.
- For 64MiB files with flags '-e', tinyxxd slowed down by 1.20% compared to the last run.
- For 64MiB files with flags '-b', tinyxxd improved by 0.20% compared to the last run.
- For 64MiB files with flags '-u', tinyxxd improved by 6.64% compared to the last run.
- For 64MiB files with flags '-E', tinyxxd slowed down by 0.55% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 1.67% compared to the last run.
- For 32MiB files with flags '-r', tinyxxd improved by 1.10% compared to the last run.
- For 32MiB files with flags '', tinyxxd slowed down by 0.76% compared to the last run.
- For 32MiB files with flags '-p', tinyxxd improved by 0.47% compared to the last run.
- For 32MiB files with flags '-i', tinyxxd improved by 0.11% compared to the last run.
- For 32MiB files with flags '-e', tinyxxd slowed down by 1.72% compared to the last run.
- For 32MiB files with flags '-b', tinyxxd slowed down by 1.11% compared to the last run.
- For 32MiB files with flags '-u', tinyxxd improved by 2.76% compared to the last run.
- For 32MiB files with flags '-E', tinyxxd improved by 0.34% compared to the last run.
- For 32MiB files with flags '', og_xxd improved by 0.75% compared to the last run.
- For 32MiB files with flags '-r', og_xxd slowed down by 4.23% compared to the last run.
- For 32MiB files with flags '', og_xxd improved by 1.75% compared to the last run.
- For 32MiB files with flags '-p', og_xxd improved by 1.58% compared to the last run.
- For 32MiB files with flags '-i', og_xxd improved by 1.44% compared to the last run.
- For 32MiB files with flags '-e', og_xxd slowed down by 4.53% compared to the last run.
- For 32MiB files with flags '-b', og_xxd improved by 1.10% compared to the last run.
- For 32MiB files with flags '-u', og_xxd slowed down by 1.53% compared to the last run.
- For 32MiB files with flags '-E', og_xxd slowed down by 1.75% compared to the last run.
- For 16MiB files with flags '', og_xxd slowed down by 1.33% compared to the last run.
- For 16MiB files with flags '-r', og_xxd slowed down by 0.12% compared to the last run.
- For 16MiB files with flags '', og_xxd improved by 1.30% compared to the last run.
- For 16MiB files with flags '-p', og_xxd slowed down by 0.19% compared to the last run.
- For 16MiB files with flags '-i', og_xxd improved by 2.73% compared to the last run.
- For 16MiB files with flags '-e', og_xxd slowed down by 0.60% compared to the last run.
- For 16MiB files with flags '-b', og_xxd slowed down by 1.49% compared to the last run.
- For 16MiB files with flags '-u', og_xxd slowed down by 0.27% compared to the last run.
- For 16MiB files with flags '-E', og_xxd slowed down by 3.15% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 5.96% compared to the last run.
- For 16MiB files with flags '-r', tinyxxd slowed down by 4.14% compared to the last run.
- For 16MiB files with flags '', tinyxxd slowed down by 3.76% compared to the last run.
- For 16MiB files with flags '-p', tinyxxd slowed down by 13.08% compared to the last run.
- For 16MiB files with flags '-i', tinyxxd slowed down by 0.24% compared to the last run.
- For 16MiB files with flags '-e', tinyxxd improved by 0.01% compared to the last run.
- For 16MiB files with flags '-b', tinyxxd slowed down by 1.46% compared to the last run.
- For 16MiB files with flags '-u', tinyxxd improved by 6.05% compared to the last run.
- For 16MiB files with flags '-E', tinyxxd improved by 3.72% compared to the last run.
- For 8MiB files with flags '', tinyxxd slowed down by 2.29% compared to the last run.
- For 8MiB files with flags '-r', tinyxxd improved by 0.26% compared to the last run.
- For 8MiB files with flags '', tinyxxd improved by 0.09% compared to the last run.
- For 8MiB files with flags '-p', tinyxxd slowed down by 0.17% compared to the last run.
- For 8MiB files with flags '-i', tinyxxd slowed down by 1.91% compared to the last run.
- For 8MiB files with flags '-e', tinyxxd improved by 0.16% compared to the last run.
- For 8MiB files with flags '-b', tinyxxd improved by 0.09% compared to the last run.
- For 8MiB files with flags '-u', tinyxxd slowed down by 0.37% compared to the last run.
- For 8MiB files with flags '-E', tinyxxd slowed down by 0.48% compared to the last run.
- For 8MiB files with flags '', og_xxd slowed down by 0.85% compared to the last run.
- For 8MiB files with flags '-r', og_xxd improved by 0.73% compared to the last run.
- For 8MiB files with flags '', og_xxd improved by 0.58% compared to the last run.
- For 8MiB files with flags '-p', og_xxd slowed down by 0.16% compared to the last run.
- For 8MiB files with flags '-i', og_xxd improved by 3.93% compared to the last run.
- For 8MiB files with flags '-e', og_xxd improved by 2.41% compared to the last run.
- For 8MiB files with flags '-b', og_xxd slowed down by 0.06% compared to the last run.
- For 8MiB files with flags '-u', og_xxd improved by 1.96% compared to the last run.
- For 8MiB files with flags '-E', og_xxd improved by 1.64% compared to the last run.

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


Report generated on: 2024-02-11T22:04:09.723051
