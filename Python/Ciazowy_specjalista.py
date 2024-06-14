D = int(input())
for _ in range(D):
    X, Y, Z = map(float, input().split())
    print(round(abs(12 / (Z - 1) * ((X + Y) - (Z * Y)))))
