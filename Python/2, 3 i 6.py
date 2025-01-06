x, y = map(int, input().split())
for num in range(x, y + 1):
    if num % 6 == 0:
        print('ab', end='')
    elif num % 2 == 0:
        print('a', end='')
    elif num % 3 == 0:
        print('b', end='')