n = int(input())
numbers = sorted(list(map(int, input().split())))
print(numbers[n // 2] if n % 2 != 0 else numbers[(n + 1) // 2])