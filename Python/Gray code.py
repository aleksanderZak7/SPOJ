def gray(n, tab, k, direction):
    if k == n:
        print(''.join(map(str, tab)))
        return
    if direction:
        tab[k] = 0
        gray(n, tab, k + 1, True)
        tab[k] = 1
        gray(n, tab, k + 1, False)
    else:
        tab[k] = 1
        gray(n, tab, k + 1, True)
        tab[k] = 0
        gray(n, tab, k + 1, False)

t = int(input())
for i in range(t):
    n = int(input())
    tab = [0] * n
    gray(n, tab, 0, True)
    if i < t - 1:
        print()