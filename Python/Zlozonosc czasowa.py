k = int(input())
max_depth = 0
current_depth = 0
for _ in range(k):
    line = input()
    if line == 'for':
        current_depth += 1
        max_depth = max(max_depth, current_depth)
    elif line == 'end':
        current_depth -= 1
if max_depth == 0:
    print('O(1)')
elif max_depth == 1:
    print('O(n)')
else:
    print(f'O(n^{max_depth})')