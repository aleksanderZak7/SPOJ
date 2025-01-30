try:
    while(True):
        message = input().split()
        decoded_message = [word[0] + ' ' if word[-1] == '.' else word[0] for word in message]
        print(''.join(decoded_message))

except EOFError:
    pass