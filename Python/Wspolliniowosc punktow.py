t = int(input())
for _ in range(t):
    data = list(map(int, input().split('\t')))
    x = data[0::2]
    y = data[1::2]
    if x[0] == x[1] == x[2] or y[0] == y[1] == y[2]:
        print('TAK')
    else:
        determinant = (x[0] * (y[1] - y[2]) + x[1] * (y[2] - y[0]) + x[2] * (y[0] - y[1]))
        if determinant == 0:
            print('TAK')
        else:
            print('NIE')
