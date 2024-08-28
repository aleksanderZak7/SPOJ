def game(a, b):
    while b:
        x = a % b
        a = b
        b = x
    return a * 2

t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    print(game(a, b))
