import sys

def triangle_type(a, b, c):
    a, b, c = sorted([a, b, c])
    if a + b <= c:
        return "brak"
    a2, b2, c2 = a * a, b * b, c * c
    if a2 + b2 == c2:
        return "prostokatny"
    elif a2 + b2 < c2:
        return "rozwartokatny"
    return "ostrokatny"

for line in sys.stdin:
    a, b, c = map(int, line.split())
    print(triangle_type(a, b, c))