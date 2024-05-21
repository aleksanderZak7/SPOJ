import math

t = int(input()) 
for _ in range(t):
    numbers = input().split()
    x, y = map(int, numbers)
    print(math.gcd(x, y))