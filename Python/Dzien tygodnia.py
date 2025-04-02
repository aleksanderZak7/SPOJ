days = ('Pn', 'Wt', 'Sr', 'Cz', 'Pt', 'So', 'Nd')
d = int(input())
for _ in range(d):    
    day, next_day = map(str, input().split())
    print(days[(days.index(day) + int(next_day)) % 7])