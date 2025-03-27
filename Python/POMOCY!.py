t = int(input())
for _ in range(t):
    n, p = map(int, input().split())
    length = 1 if n == 0 else 0
    while n > 0:
        n //= p
        length += 1
    print(length)