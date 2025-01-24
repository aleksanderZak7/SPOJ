def check_for_pattern(word, pattern):
    index_in_pattern = 1
    for i in range(2, len(pattern) * 2, 2):
        if word[i] == pattern[index_in_pattern]:
            index_in_pattern += 1
        else:
            return False
    return True

index = -1
word = input()
pattern = input()
for i in range(len(word)):
    if word[i] == pattern[0]:
        if check_for_pattern(word[i:], pattern):
            index = i + 1 
            break
print('brak' if index == -1 else index)