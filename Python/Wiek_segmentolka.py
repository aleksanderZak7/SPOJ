t = int(input())
for _ in range(t):
    data = list(map(int, input().split()))
    n = data[0]
    legs = data[1:]
    print(sum(legs) + (n - 1))