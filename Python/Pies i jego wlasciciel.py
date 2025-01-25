n, v1, v2 = map(int, input().split())
print(f'{round((n / (v1 * 1000)) * v2 * 1000, 2):.2f}')