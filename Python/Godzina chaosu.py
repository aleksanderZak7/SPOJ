def is_palindromic(hours, minutes):
    if hours == 0:
        hour_str = f"{minutes}"
    elif minutes < 10:
        hour_str = f"{hours}0{minutes}"
    else:
        hour_str = f"{hours}{minutes}"
    return hour_str == hour_str[::-1]

def increment_time(hours, minutes):
    if minutes < 59:
        minutes += 1
    else:
        minutes = 0
        if hours < 23:
            hours += 1
        else:
            hours = 0
    return hours, minutes

t = int(input())
for _ in range(t):
    hours, minutes = map(int, input().split(':'))
    while True:
        hours, minutes = increment_time(hours, minutes)
        if is_palindromic(hours, minutes):
            print(f"{hours:02}:{minutes:02}")
            break