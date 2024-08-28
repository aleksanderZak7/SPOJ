n = int(input())
numbers = [int(input()) for _ in range(n)]
condition, main_number = input().split()
main_number = int(main_number)
if condition == '>':
    output = [number for number in numbers if number > main_number]
else:
    output = [number for number in numbers if number < main_number]
for number in output:
    print(number)
