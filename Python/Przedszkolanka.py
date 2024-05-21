import math

N = int(input())
for _ in range(N):
    line = input()
    a, b = map(int, line.split())
    print(a * b // math.gcd(a, b))
