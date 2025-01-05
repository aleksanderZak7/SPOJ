coordinators = ("DAWID", "GRZESIEK", "MACIEK", "MARCIN", "MARIUSZ", "RAFAL")
t = int(input())
for _ in range(t):
    n = int(input())
    print(coordinators[(n - 1) // 7 % len(coordinators)])