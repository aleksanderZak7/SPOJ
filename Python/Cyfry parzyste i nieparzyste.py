n = int(input())
for _ in range(n):
    number = input()
    combination = 4 if (number[0] == 'p' and len(number) > 1) else 5
    print((combination * 5 ** len(number[1:])) % 1000000007)