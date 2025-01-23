def is_pangram(word):
    letter_counts = [0] * 26
    for letter in word:
        index = ord(letter) - ord('a')
        letter_counts[index] += 1
    is_nonperfect_pangram = all(count > 0 for count in letter_counts)
    if not is_nonperfect_pangram:
        return "NIE"
    first_count = next((x for x in letter_counts if x > 0), None)
    if all(count == first_count for count in letter_counts):
        return "PANGRAM PERFEKCYJNY"
    else:
        return "PANGRAM"

word = input()
print(is_pangram(word))