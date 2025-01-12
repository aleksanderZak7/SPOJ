import math
a, r = map(int, input().split())
n = int(input())
insects = []
for _ in range(n):
    x, y = map(int, input().split())
    insects.append((x, y))
notDeleted = 0
for x, y in insects:
    if math.sqrt((x - a)**2 + y**2) > r:
        notDeleted += 1
print(notDeleted)