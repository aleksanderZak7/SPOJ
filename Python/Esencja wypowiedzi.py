emotes = {':)', ':(', ';)', ':D', ':P', 'xD', ':>', '<3'}
n = int(input())
for _ in range(n):
    input()
    sentence = input().split()
    output = [word for word in sentence if word not in emotes]
    for word in output:
        print(word)