import math

a, b, c = map(int, input().split())
print(math.ceil((2 * (a * c + b * c)) / 5) + math.ceil((a * b) / 3))