z = int(input())
for _ in range(z):
    n = int(input())
    line_counts = list(map(int, input().split()))
    nim_sum = 0
    for count in line_counts:
        nim_sum ^= count
    if nim_sum == 0:
        print(2)
    else:
        print(1)