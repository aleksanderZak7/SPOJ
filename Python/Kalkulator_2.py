def perform_operation(symbol, a, b):
    if symbol == '+':
        return Numbers[a] + Numbers[b]
    elif symbol == '-':
        return Numbers[a] - Numbers[b]
    elif symbol == '*':
        return Numbers[a] * Numbers[b]
    elif symbol == '/':
        return int(Numbers[a] / Numbers[b])
    else:
        return Numbers[a] % Numbers[b]

Numbers = [0] * 10
while True:
    try:
        data = input().split()
        symbol = data[0]
        a, b = map(int, data[1:3])
        if symbol == 'z': 
            Numbers[a] = b
        else:
            print(perform_operation(symbol, a, b))
    except:
        break
