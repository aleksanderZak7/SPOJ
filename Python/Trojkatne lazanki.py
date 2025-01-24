success = False
n = int(input())
triangle_sizes = set()
for _ in range(n):
    a, b, c = map(int, input().split())
    p = a + b + c
    s = (p * (p - a) * (p - b) * (p - c))
    if s in triangle_sizes:
        success = True
    triangle_sizes.add(s)
print('Tak' if success else 'Nie')