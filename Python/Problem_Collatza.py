def collatz(x, n = 0):
    if x == 1:
        print(n)
    elif x % 2 == 0:
        collatz(x // 2, n + 1)
    else:
        collatz(3 * x + 1, n + 1)

t = int(input())
for _ in range(t):
    s = int(input())
    collatz(s)
