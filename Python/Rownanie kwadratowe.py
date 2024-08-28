while True: 
    try:
        coefficients = input().strip().split()
        A, B, C = map(float, coefficients)
        delta = B ** 2 - 4 * A * C
        if delta > 0:
            print(2)
        elif delta == 0:
            print(1)
        else:
            print(0)
    except:
        break
