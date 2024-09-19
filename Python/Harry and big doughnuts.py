t = int(input()) 
for _ in range(t):
    c, k, w = map(int, input().split())
    if c * w <= k:
        print("yes")
    else:
        print("no")