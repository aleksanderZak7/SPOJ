a, b, c = map(float, input().split())

if b == c and a == 0: 
    print('NWR')
elif a == 0:
    print('BR')
else:
    result = (c - b) / a
    print(f"{result:.2f}")
