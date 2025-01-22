def evaluate_expression(numbers, operators):
    rpn = []
    stack = []
    calc_stack = []
    for i in range(len(operators)):
        rpn.append(str(numbers[i]))
        while stack and (operators[i] in "+-" and stack[-1] == "*"):
            rpn.append(stack.pop())
        stack.append(operators[i])
    rpn.append(str(numbers[-1]))
    rpn.extend(reversed(stack))
    for token in rpn:
        try:
            num = int(token)
            calc_stack.append(num)
        except ValueError:
            b, a = calc_stack.pop(), calc_stack.pop()
            if token == '+':
                calc_stack.append(a + b)
            elif token == '-':
                calc_stack.append(a - b)
            elif token == '*':
                calc_stack.append(a * b)
    return calc_stack[0]

n = input()
numbers = list(map(int, input().split()))
operators = input().split()
print(evaluate_expression(numbers, operators))