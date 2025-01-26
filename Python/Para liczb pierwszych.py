def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def find_prime_sum(s):
    for x in range(2, s):
        if is_prime(x) and is_prime(s - x):
            return f'TAK {x} {s - x}'
    return 'NIE'

t = int(input())
for _ in range(t):
    print(find_prime_sum(int(input())))