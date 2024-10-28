xo, yo, r = map(int, input().split())
n = int(input())
rSquared = r * r
for _ in range(n):
    xn, yn = map(int, input().split())
    dx = xn - xo
    dy = yn - yo
    dist_squared = dx * dx + dy * dy
    if dist_squared < rSquared:
        print("I")
    elif dist_squared > rSquared:
        print("O")
    else:
        print("E")