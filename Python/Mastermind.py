import sys
from itertools import product

def evaluate_guess(guess, actual_code):
    feedback = [-1] * 4
    used_in_actual = [False] * 4
    used_in_guess = [False] * 4
    for i in range(4):
        if guess[i] == actual_code[i]:
            feedback[i] = 1
            used_in_actual[i] = True
            used_in_guess[i] = True
    for i in range(4):
        if feedback[i] == -1:
            for j in range(4):
                if not used_in_actual[j] and not used_in_guess[i] and guess[i] == actual_code[j]:
                    feedback[i] = 0
                    used_in_actual[j] = True
                    used_in_guess[i] = True
                    break
    return feedback

sys.stdout.reconfigure(line_buffering=True)
possible_codes = list(product(range(1, 7), repeat=4))
attempts = 0
while attempts < 10:
    guess = possible_codes[0]
    print(*guess)
    sys.stdout.flush()
    feedback = list(map(int, input().strip().split()))
    if feedback == [1, 1, 1, 1]:
        break
    possible_codes = [code for code in possible_codes if evaluate_guess(guess, code) == feedback]
    attempts += 1