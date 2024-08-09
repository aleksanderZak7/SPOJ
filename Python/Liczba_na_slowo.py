UNITS = ("", "jeden", "dwa", "trzy", "cztery", "piec", "szesc", "siedem", "osiem", "dziewiec")
TEENS = ("dziesiec", "jedenascie", "dwanascie", "trzynascie", "czternascie", "pietnascie", "szesnascie", "siedemnascie", "osiemnascie", "dziewietnascie")
TENS = ("", "", "dwadziescia", "trzydziesci", "czterdziesci", "piecdziesiat", "szescdziesiat", "siedemdziesiat", "osiemdziesiat", "dziewiecdziesiat")
HUNDREDS = ("", "sto", "dwiescie", "trzysta", "czterysta", "piecset", "szescset", "siedemset", "osiemset", "dziewiecset")
SCALES = ("", "tys.", "mln.", "mld.", "bln.")

def number_to_text(number):
    length_number = len(number)
    text = ""
    i = 0
    while i < length_number:
        if (length_number - i) % 3 == 0 and i != 0:
            if (((i > 0) and number[i - 1] != "0") or ((i > 1) and number[i - 2] != "0") or ((i > 2) and number[i - 3] != "0")):
                if text:
                    text += " "
                text += SCALES[(length_number - i) // 3]
        if (length_number - i) % 3 == 0:
            if i != 0 and number[i] != "0":
                text += " "
            text += HUNDREDS[int(number[i])]
        elif (length_number - i) % 3 == 2:
            if number[i] != "1":
                if i != 0 and number[i] != "0":
                    text += " "
                text += TENS[int(number[i])]
            else:
                if i != 0:
                    text += " "
                text += TEENS[int(number[i + 1])]
                i += 1
        elif (length_number - i) % 3 == 1:
            if i != 0 and number[i] != "0":
                text += " "
            text += UNITS[int(number[i])]
        i += 1
    return text

t = int(input())
for _ in range(t):
    number = input()
    print(number_to_text(number))