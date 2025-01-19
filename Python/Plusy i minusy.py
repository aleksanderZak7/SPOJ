def calculate_grades(activity):
    pluses = activity.count('+')
    minuses = activity.count('-')
    difference = pluses - minuses
    if difference > 0:
        fives = difference // 3
        return ' '.join(['5'] * fives) if fives > 0 else 'BRAK'
    elif difference < 0:
        ones = abs(difference) // 3
        return ' '.join(['1'] * ones) if ones > 0 else 'BRAK'
    else:
        return 'BRAK'

print(calculate_grades(input()))