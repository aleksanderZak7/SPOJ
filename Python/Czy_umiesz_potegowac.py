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
    base, exponent = map(int, input().split())
    print(last_digit_of_power(base, exponent))