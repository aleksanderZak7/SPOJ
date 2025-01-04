n = int(input())
sequence = list(map(int, input().split()))
count = 0
for i in range(2, n):
    if sequence[i] == sequence[i - 1] + sequence[i - 2]:
        count += 1
print(count)