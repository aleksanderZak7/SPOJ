import math

def can_fit(A1, B1, A2, B2):
    if A1 < B1:
        A1, B1 = B1, A1
    if A2 < B2:
        A2, B2 = B2, A2
    if A1 > A2 and B1 > B2:
        return 'TAK'
    elif A1 <= A2 and B1 <= B2:
        return 'NIE'
    else:
        d1 = math.sqrt(A1 * A1 + B1 * B1)
        d2 = math.sqrt(A2 * A2 + B2 * B2)
        if d1 <= d2:
            return 'NIE'
        half_d2_squared = (0.5 * d2) ** 2
        half_B1_squared = (0.5 * B1) ** 2
        half_A1_squared = (0.5 * A1) ** 2
        if half_d2_squared < half_B1_squared or half_d2_squared < half_A1_squared:
            return 'NIE'
        a = 0.5 * A1 - math.sqrt(half_d2_squared - half_B1_squared)
        b = 0.5 * B1 - math.sqrt(half_d2_squared - half_A1_squared)
        c = math.sqrt(a * a + b * b)
        return 'TAK' if c > B2 else 'NIE'

t = int(input())
for _ in range(t):
    a, b, c, d = map(int, input().split())
    print(can_fit(a, b, c, d))