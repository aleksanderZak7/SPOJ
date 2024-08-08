def calculate_segmentolek_age():
    data = list(map(int, input().split()))
    n = data[0]
    legs = data[1:]
    print(sum(legs) + (n - 1))

t = int(input())
for _ in range(t):
    calculate_segmentolek_age()