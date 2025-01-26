def print_pyramid(n, s):
    mid = n // 2
    for i in range(mid, -1, -1):
        left = '.' * i
        middle = s[i:n - i]
        right = '.' * i
        print(left + middle + right)

n = int(input())
s = input()
print_pyramid(n, s)