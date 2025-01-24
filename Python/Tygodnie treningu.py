days_of_the_week = {'pon' : 0, 'wt' : 0, 'sr' : 0, 'czw' : 0, 'pt' : 0, 'sob' : 0, 'niedz' : 0}
n = int(input())
training_days = input().split()
for DAY in training_days:
    days_of_the_week[DAY] += 1
print(max(days_of_the_week.values()), n)