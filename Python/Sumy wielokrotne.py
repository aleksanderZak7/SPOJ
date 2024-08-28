total_sum = 0
while True:
    try:
        sum = 0
        data = input().split()
        for number in data:
            sum += int(number)
        print(sum)
        total_sum += sum
    except:
        break
print(total_sum)