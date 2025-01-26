from math import gcd

def sort_numbers(numbers):
    def sort_key(x):
        return (-gcd(x, 1260), x)
    return sorted(numbers, key=sort_key)

n = input()
numbers= list(map(int, input().split()))
print(' '.join(map(str, sort_numbers(numbers))))