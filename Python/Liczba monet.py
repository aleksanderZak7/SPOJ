def minimal_coins(amount):
    COINS = [500, 200, 100, 50, 20, 10, 5, 2, 1]
    amount_in_gr = int(round(amount * 100))
    count = 0
    for coin in COINS:
        count += amount_in_gr // coin
        amount_in_gr %= coin
    return count
print(minimal_coins(float(input())))