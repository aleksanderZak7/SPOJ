CARD_VALUES = {c: i + 2 for i, c in enumerate("23456789TJQKA")}
jasio_score = sum(CARD_VALUES[card] for card in input())
stasio_score = sum(CARD_VALUES[card] for card in input())
print('JASIO' if jasio_score > stasio_score else 'STASIO' if stasio_score > jasio_score else 'REMIS')