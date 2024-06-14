D = int(input())
for _ in range(D):
    L, C = map(int, input().split())
    if L == 1 or C % (L - 1) != 0:
        print('TAK')
    else:
        print('NIE')
