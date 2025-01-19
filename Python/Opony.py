tires = set()
try:
    while True:
        line: str = input().strip()
        if line in tires:
            tires.remove(line)
        else:
            tires.add(line)
except EOFError:
    print(tires.pop())