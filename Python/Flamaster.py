def compress_string(inscription):
    compressed = inscription[0]
    count = 1
    for i in range(1, len(inscription)):
        if inscription[i] == inscription[i - 1]:
            count += 1
        else:
            if count > 2:
                compressed += str(count)
            elif count == 2:
                compressed += inscription[i - 1]
            compressed += inscription[i]
            count = 1
    if count > 2:
        compressed += str(count)
    elif count == 2:
        compressed += inscription[-1]
    return compressed

C = int(input())
for _ in range(C):
    inscription = input()
    print(compress_string(inscription))
