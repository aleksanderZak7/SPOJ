a_dec = 0
b_dec = 0
k, n = map(int, input().split())
a = [int(input()) for _ in range(k)]
b = [int(input()) for _ in range(n)]
for bit in a:
    a_dec = (a_dec << 1) | bit
for bit in b:
    b_dec = (b_dec << 1) | bit
sum_dec = a_dec + b_dec
if sum_dec == 0:
    print(0)
else:
    sum_bin = ''
    while sum_dec > 0:
        sum_bin = str(sum_dec % 2) + sum_bin
        sum_dec //= 2
    print(sum_bin)