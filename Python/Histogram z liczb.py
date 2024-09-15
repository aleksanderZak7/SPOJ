MIN = -10
MAX = 10
WIDTH = 30
occurrences = [0] * (MAX - MIN + 1)
try:
    while True:
        number = int(input())
        if MIN <= number <= MAX:
            occurrences[number - MIN] += 1
except EOFError:
    pass
max_occurrence = max(occurrences)
if max_occurrence > 0:
    for i in range(MIN, MAX + 1):
        print(f"{i:4}:|", end="")
        stars_count = round(WIDTH * occurrences[i - MIN] / max_occurrence)
        for j in range(WIDTH):
            if j < stars_count:
                print("*", end="")
            else:
                print(" ", end="")
        print("|")