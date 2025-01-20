def factorial_in_range(a, b):
    n = 0
    count = 0
    factorial = 1
    while factorial <= b:
        if a <= factorial <= b:
            count += 1
        n += 1
        if n > 0:
            factorial *= n
    return count

a, b = map(int, input().split())
print(factorial_in_range(a, b))