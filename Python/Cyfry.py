t = int(input())
for _ in range(t):
    word = input()
    last_digit = None
    first_digit = None
    for c in word:
        if c.isdigit():
            if not first_digit:
                first_digit = c
            else:
                last_digit = c
    print(f'{first_digit} {last_digit}' if first_digit and last_digit else 'BRAK')