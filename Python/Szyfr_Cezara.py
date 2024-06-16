ALPHABET = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
while True:
    try:
        sentence = input()
        output = ''
        for letter in sentence:
            if letter != ' ':
                index = ALPHABET.index(letter)
                output += ALPHABET[((index + 3) % len(ALPHABET))]
            else:
                output += letter
        print(output)
    except:
        break