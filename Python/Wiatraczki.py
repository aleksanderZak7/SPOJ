while True:
    Windmill = ''
    r = int(input())
    if r == 0:
        break
    if r > 0:
        for i in range(r):
            for j in range(r * 2):
                if j < r and j > i:
                   Windmill += '.'
                elif j - r * 2 + i >= 0:
                    Windmill += '.'
                else:
                    Windmill += '*'
            Windmill += '\n'
        for i in range(r):
            for j in range(r * 2):
                if j < r and j > i:
                   Windmill += '.'
                elif j >= r and -1 * (r - j) < i:
                    Windmill += '.'
                else:
                    Windmill += '*'
            Windmill += '\n'
    else:
        r *= -1
        for i in range(r):
            for j in range(r * 2):
                if j < i:
                    Windmill += '.'
                elif j >= r and j + i + 1 < r * 2:
                    Windmill += '.'
                else:
                    Windmill += '*'
            Windmill += '\n'
        for i in range(r):
            for j in range(r * 2):
                if j >= r - i and j <r:
                    Windmill += '.' 
                elif j >= r and j > r + i:
                    Windmill += '.'
                else:
                    Windmill += '*'
            Windmill += '\n'
    print(Windmill)