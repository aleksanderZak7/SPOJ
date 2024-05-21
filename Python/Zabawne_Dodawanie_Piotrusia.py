def palindrom(x, trials):
    if x == x[::-1]: 
        print(x, trials)
    else:
        x = str(int(x) + int(x[::-1]))
        trials += 1
        palindrom(x, trials)
        
t = int(input()) 
for _ in range(t):
    number = input()
    palindrom(number, 0)
    