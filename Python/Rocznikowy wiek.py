n, r = map(int, input().split())
print(((((n % 10) * 2 + 5) * 50 + 1771) - r) % 100)