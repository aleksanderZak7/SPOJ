input()
syllables = input().replace(' ', '')
if('mama' in syllables and 'tata' in syllables):
    print('mama' if syllables.index('mama') < syllables.index('tata') else 'tata')
else:
    print('mama' if 'mama' in syllables else 'tata')