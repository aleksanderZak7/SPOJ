D = int(input()) 
for _ in range(D):
    N = int(input())
    points = list(map(int, input().split()))  
    mx = max(points) 
    how_many = points.count(mx)  
    points = [point for point in points if point != mx]  
    points.sort() 
    output = ' '.join([str(mx)] * how_many + [str(point) for point in points])
    print(output)
