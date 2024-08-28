def calculate_distance(point_str):
    _, x_str, y_str = point_str.split()
    x, y = int(x_str), int(y_str)
    return x**2 + y**2

t = int(input())
for _ in range(t):
    n = int(input())
    points = []
    for _ in range(n):
        point_str = input()
        points.append(point_str)
    points.sort(key=calculate_distance)
    for point in points:
        print(point)
    input() 
