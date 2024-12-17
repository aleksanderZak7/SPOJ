sumOfStudents = 0
for _ in range(4):
    allStudents , onlineStudents = map(int, input().split())
    sumOfStudents += allStudents - onlineStudents
print(sumOfStudents)