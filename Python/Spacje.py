import sys
SMS = ''
New_word = False
try:
    for line in sys.stdin:
        for letter in line:
            if letter != ' ':
                if New_word:
                    SMS += letter.upper()
                    New_word = False
                else:
                    SMS += letter
            elif letter == ' ':
                New_word = True
    print(SMS)
except:
    exit(0)