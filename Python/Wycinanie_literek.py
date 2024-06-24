while True:
    try:
        data = input()
        print(data[2:].replace(data[0], ''))
    except:
        break