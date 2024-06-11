L = []
while True:
    try:
        char = input()
        if char == '+':
            number = input()
            if len(L) < 10:
                L.append(number)
                print(':)')
            else:
                print(':(')
        else:
            if len(L) > 0:
                print(L.pop())
            else:
                print(':(')
    except EOFError:
        break
