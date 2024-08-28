t = int(input())
for _ in range(t):
    n = int(input())
    numbers = input().split()
    output = 0
    for i in range(n):
        output += (int(numbers[i])) 
    print(output)