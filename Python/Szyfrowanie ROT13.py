def rot13(text):
    result = []
    for c in text:
        if 'a' <= c <= 'z':
            result.append(chr((ord(c) - ord('a') + 13) % 26 + ord('a')))
        elif 'A' <= c <= 'Z':
            result.append(chr((ord(c) - ord('A') + 13) % 26 + ord('A')))
        elif '0' <= c <= '9':
            result.append(chr((ord(c) - ord('0') + 5) % 10 + ord('0')))
        else:
            result.append(c)
    return ''.join(result)

try:
    while True:
        print(rot13(input()))
except EOFError:
    pass