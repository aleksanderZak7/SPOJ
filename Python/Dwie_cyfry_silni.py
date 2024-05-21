def factorial_last_two_digits(number):
    factorial = 1
    for x in range(2, number + 1):
        factorial *= x
    return f"{factorial:02d}"[-2] + ' ' + f"{factorial:02d}"[-1]

D = int(input())
for _ in range(D):
    number = int(input())
    if number > 9:
        print('0 0') 
    else:
        print(factorial_last_two_digits(number))