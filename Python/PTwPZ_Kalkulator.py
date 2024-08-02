N = int(input())
for _ in range(N):
    data = input()
    result = 0
    add = False
    subtract = False
    for symbol in data:
        if symbol == '+':
            add = True
            subtract = False
        elif symbol == '-':
            subtract = True
            add = False
        else:
            if add:
                result += int(symbol)
                add = False
            elif subtract:
                result -= int(symbol)
                subtract = False
            else:
                result = int(symbol)
    print(result)