snake_case = input()
print(''.join(word.capitalize() if i != 0 else word for i, word in enumerate(snake_case.split('_'))))