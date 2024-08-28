def closest_to_mean(lista):
    closest_number = min(lista, key=lambda x: abs(x - (sum(lista) / len(lista))))
    return closest_number

t = int(input())
for _ in range(t):
    numbers = input().split()[1:]
    L = [int(num) for num in numbers]
    print(closest_to_mean(L))
