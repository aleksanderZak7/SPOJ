t = int(input())
for _ in range(t):
    l, k = map(int, input().split())
    table = [list(map(int, input().split())) for _ in range(l)]
    temp = [0] * 4
    temp[0] = table[0][0]
    temp[1] = table[l - 1][0]
    temp[2] = table[l - 1][k - 1]
    temp[3] = table[1][k - 1]
    for i in range(k - 1):
        table[0][i] = table[0][i + 1]
    for i in range(l - 1, 0, -1):
        table[i][0] = table[i - 1][0]
    for i in range(k - 1, 0, -1):
        table[l - 1][i] = table[l - 1][i - 1]
    for i in range(l - 1):
        table[i][k - 1] = table[i + 1][k - 1]
    table[1][0] = temp[0]
    table[l - 1][1] = temp[1]
    table[l - 2][k - 1] = temp[2]
    table[0][k - 1] = temp[3]
    for row in table:
        print(*row)
