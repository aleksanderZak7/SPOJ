while True:
    try:
        data = input().split()
        main_number = data[0]
        list_of_numbers = data[2:]
        print(list_of_numbers.count(main_number))
    except:
        break