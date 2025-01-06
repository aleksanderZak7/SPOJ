import math

SPEED_UNITS = { "b": 1, "Kb": 1024, "Mb": 1024**2 }
DATA_UNITS = { "B": 8, "KB": 8 * 1024, "MB": 8 * 1024**2, "GB": 8 * 1024**3 }
t = int(input())
for _ in range(t):
    size, size_unit, speed, speed_unit = input().split()
    size_bits = int(size) * DATA_UNITS[size_unit]
    speed_bits = int(speed) * SPEED_UNITS[speed_unit]
    if speed_bits == 0:
        print('w mgnieniu oka')
        continue
    total_seconds: int = math.floor(size_bits / speed_bits)
    if total_seconds < 1:
        print('w mgnieniu oka')
        continue
    days = total_seconds // (24 * 3600)
    total_seconds %= 24 * 3600
    hours = total_seconds // 3600
    total_seconds %= 3600
    minutes = total_seconds // 60
    seconds = total_seconds % 60
    output = ''
    if days > 0:
        output += f'dni: {days}\n'
    if hours > 0:
        output += f'godziny: {hours}\n'
    if minutes > 0:
        output += f'minuty: {minutes}\n'
    if seconds > 0:
        output += f'sekundy: {seconds}\n'
    print(f'{output}\n')