ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

def letter_difference(word):
    max_index = 0
    min_index = len(ALPHABET) - 1
    for letter in word:
        current_index = ALPHABET.index(letter)
        if current_index > max_index:
            max_index = current_index
        if current_index < min_index:
            min_index = current_index
    return max_index - min_index

number_of_words = int(input())
for _ in range(number_of_words):
    word = input()
    print(letter_difference(word))