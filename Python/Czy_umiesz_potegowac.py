def last_digit_of_power(base, exponent):
    if exponent == 0:
        return 1
    exponent %= 4
    if exponent == 0:
        exponent = 4
    output = (base ** exponent) % 10
    return output

D = int(input())
for _ in range(D):
    numbers = input().split()
    base = int(numbers[0])
    exponent = int(numbers[1])
    print(last_digit_of_power(base, exponent))