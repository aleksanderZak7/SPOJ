z = int(input())
for _ in range(z):
    n = int(input())
    frequency_map = {}
    for _ in range(n):
        word = ''.join(sorted(input()))
        frequency_map[word] = frequency_map.get(word, 0) + 1
    print(max(frequency_map.values()))