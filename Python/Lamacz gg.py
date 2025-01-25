try:
    while True:
        decoded_password = ''
        encoded_password = input()
        first_letter_value = {chr(i): i - 65 for i in range(65, 81)}
        second_letter_value = {chr(i): (i - 65) * 16 for i in range(65, 81)}
        for i in range(0, len(encoded_password), 2):
            first = first_letter_value[encoded_password[i]]
            second = second_letter_value[encoded_password[i + 1]]
            ascii_code = first + second
            decoded_password += chr(ascii_code)
        print(decoded_password)
except EOFError:
    pass