t = int(input())
for _ in range(t):
    n, x, y = map(int, input().split())
    for i in range(n):
        if i % x == 0 and i % y != 0:
            print(i, end=' ')
    print('')
