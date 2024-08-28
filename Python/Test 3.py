output = True 
forty_two = False 
lifes = 3 
while True:
    try: 
        number = int(input())
        if output:
            print(number)
        if number != 42:
            forty_two = True
        else:
            if forty_two:
                forty_two = False
                lifes -= 1
                if lifes == 0:
                    output = False
    except:
        break
