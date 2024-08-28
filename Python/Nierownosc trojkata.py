while True:
    try:
        a, b, c = map(float, input().split())
        if a + b > c and a + c > b and b + c > a and a > 0 and b > 0 and c > 0:
            print(1)
        else:
            print(0)
    except:
        break