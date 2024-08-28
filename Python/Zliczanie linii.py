import sys

def count_lines():
    line_count = 1
    while True:
        char = sys.stdin.read(1)
        if not char:
            break
        if char == '\n':
            line_count += 1
    return line_count

print(count_lines())