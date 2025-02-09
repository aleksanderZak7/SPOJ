def running_shoes_decision(k):
    miles = k / 1.609344
    if miles < 300:
        return "NIE"
    elif miles < 500:
        return "SPRAWDZIMY TWOJE OBECNE BUTY"
    return "TAK"

print(running_shoes_decision(int(input())))