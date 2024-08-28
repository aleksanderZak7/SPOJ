n, k = map(int, input().split())
numbers = input().split()
for i in range(n):
    new_index = (i + k) % n
    print(numbers[new_index], end=' ')
