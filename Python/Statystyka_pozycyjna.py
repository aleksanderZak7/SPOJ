while True:
    try:
        data = input().split(' ')
        j = int(data[0]) - 1 
        unique_numbers = set(int(data[i]) for i in range(1, len(data)))
        sorted_numbers = sorted(unique_numbers, reverse=True)
        if j < len(sorted_numbers):
            print(sorted_numbers[j])
        else:
            print('-')
    except:
        break