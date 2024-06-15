n = int(input())
if n <= 2:
    if n == 0:
        print(0)
    else:
        print('NIE')
else:
    half = n // 2
    result = [str(n - half)]
    for i in range(half):
        result.append(f"{i} {n - i}")
    if n % 2 != 0:
        result.append(str(n - half - 1))
    print(' '.join(result))
