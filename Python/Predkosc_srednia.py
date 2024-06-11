def average_speed(v1, v2):
    return round((2 * v1 * v2) / (v1 + v2))

t = int(input())
for _ in range(t):
    speed = input().split()
    v1, v2 = map(int, speed)
    print(average_speed(v1, v2))
