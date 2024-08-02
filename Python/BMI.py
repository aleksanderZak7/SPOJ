def bmi_status(people):
    for name in people:
        print(name)
    print()

def calculate_bmi(weight, height):
    return weight / (height ** 2)

t = int(input())
underweight = []
optimal = []
overweight = []
for _ in range(t):
    data = input()
    name, mass, height = data.split()
    mass = float(mass)
    height = float(height) / 100 
    bmi = calculate_bmi(mass, height)
    if bmi < 18.5:
        underweight.append(name)
    elif 18.5 <= bmi < 25:
        optimal.append(name)
    else:
        overweight.append(name)
print('niedowaga')
bmi_status(underweight)
print('wartosc prawidlowa')
bmi_status(optimal)
print('nadwaga')
bmi_status(overweight)