t = int(input())
for _ in range(t):
    numbers = input().split()[1:] 
    print(' '.join(numbers[::-1]))
