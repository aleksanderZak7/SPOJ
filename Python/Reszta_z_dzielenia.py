d = int(input())
for _ in range(d):
    a, b = map(int, input().split())
    r = a % b
    if r < 0:
        r += abs(b)
    print(r)