index = 1
line = input()
while index < len(line):
    sum_val = 0
    for _ in range(3):
        sum_val += int(line[index:index + 2], 16)
        index += 2
    index += 1
    print(chr(sum_val), end='')