import math

def is_prime(number):
    if number <= 1:
        return False
    for i in range(2, int(math.sqrt(number)) + 1):
        if number % i == 0:
            return False
    return True

n = int(input())

for _ in range(n):
    number = int(input())
    if is_prime(number):
        print("TAK")
    else:
        print("NIE")