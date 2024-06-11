def perform_operation(operation, a, b):
    if operation == '+':
        return a + b
    elif operation == '-':
        return a - b
    elif operation == '*':
        return a * b
    elif operation == '/':
        return a // b
    else:
        return a % b

while True:
    try:
        symbols = input().split()  
        operation = symbols[0]
        a, b = map(int, symbols[1:3])
        print(perform_operation(operation, a, b))
    except:
        break