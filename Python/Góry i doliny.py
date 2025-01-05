n = int(input())
heights = list(map(int, input().split()))
increase = 0
for i in range(1, n - 1):
    if heights[i - 1] < heights[i] > heights[i + 1]:
        increase += 1
print(increase)