while True:
    try:
        big_letters = False
        output = ''
        line = input() 
        for symbol in line:
            if symbol == '<': 
                big_letters = True
                output += symbol
            elif symbol == '>':
                big_letters = False 
                output += symbol
            elif big_letters:
                output += symbol.upper()
            else:
                output += symbol 
        print(output)
    except:
        break
