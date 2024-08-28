t = int(input())
weights = [1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1]
for _ in range(t):
    pesel = input().strip()
    result = sum(int(pesel[i]) * weights[i] for i in range(11))
    if result % 10 == 0:
        print('D')
    else:
        print('N')
