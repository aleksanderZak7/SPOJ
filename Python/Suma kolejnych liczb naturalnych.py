k, n = map(int, input().split())
x = (n - (k * (k - 1)) // 2) // k
print(" ".join(map(str, [x + i for i in range(k)])))