def compare_numbers(num1, operator, num2):
    if operator == '==':
        return int(num1 == num2)
    elif operator == '!=':
        return int(num1 != num2)
    elif operator == '>=':
        if len(num1) > len(num2):
            return 1
        elif len(num1) < len(num2):
            return 0
        else:
            for digit1, digit2 in zip(num1, num2):
                if digit1 > digit2:
                    return 1
                elif digit1 < digit2:
                    return 0
            return 1 
    else:
        if len(num1) < len(num2):
            return 1
        elif len(num1) > len(num2):
            return 0
        else:
            for digit1, digit2 in zip(num1, num2):
                if digit1 < digit2:
                    return 1
                elif digit1 > digit2:
                    return 0
            return 1
    return 0

while True:
    try:
        data = input().split()
        print(compare_numbers(data[0], data[1], data[2]))
    except:
        break  