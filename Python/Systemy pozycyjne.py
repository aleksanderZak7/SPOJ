def change_system(n, system):
    symbols = '0123456789ABCDEF'
    results = []
    while n != 0:
        results.append(symbols[n % system])
        n //= system
    results.reverse()
    return ''.join(results)
t = int(input())
for _ in range(t):
    n = int(input())
    print(change_system(n, 16).upper() + ' ' + change_system(n, 11).upper())
