times = list(map(int, input().split()))
min_time = min(times)
print(f'TAK {times.index(min_time) + 1}' if times.count(min_time) == 1 else 'NIE')