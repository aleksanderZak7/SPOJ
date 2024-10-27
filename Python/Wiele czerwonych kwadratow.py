def countRed(x, y):
    if x < y:
        x, y = y, x 
    if x < 2 or y == 0:
        return 0
    if y < 2:
        return x // 2
    else:
        return ((6 + (y // 2 - 1) * 4) // 2) * (y // 2) + ((x - y + (y % 2)) // 2) * y

xld, yld, xpg, ypg = map(int, input().split())
print(countRed(xpg, ypg) + countRed(xld, yld) - countRed(xpg, yld) - countRed(xld, ypg))