k = input()
doubled_letters = set(input().split())
word = input()
result = ''
for char in word:
    result += char
    if char in doubled_letters:
        result += char
print(result)