n, k = map(int, input().split())
numbers = input().split()
for i in range(n):
    print(numbers[(i + k) % n], end=' ')
