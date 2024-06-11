t = int(input())
for _ in range(t):
    n = input().split()
    n = n[2:] + n[1:2]
    print(' '.join(n))
