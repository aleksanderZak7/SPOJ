n = int(int(input()))
for _ in range(n):
    numbers = input().split()
    print(' '.join(numbers[2::2] + numbers[1::2]))