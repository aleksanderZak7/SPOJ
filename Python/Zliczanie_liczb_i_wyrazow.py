while True:
    numbers = 0
    words = 0
    try:
        sentence = input().split()
        for word in sentence:
            try:
                int(word)
                numbers += 1
            except ValueError:
                words += 1
        print(f"{numbers} {words}")
    except:
        break
