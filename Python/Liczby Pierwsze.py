def is_prime(number):
    if number < 2:
        return 'NIE'
    for i in range(2, int(number ** 0.5) + 1):
        if number % i == 0:
            return 'NIE'
    return 'TAK'

n = int(input())
for _ in range(n):
    number = int(input())
    print(is_prime(number))