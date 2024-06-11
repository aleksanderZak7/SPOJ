def find_treasure(N):
    North_steps = 0 
    West_steps = 0
    well = 0 
    for _ in range(N):
        direction, steps = map(int, input().split())
        if direction == 0:
            North_steps += steps
        elif direction == 1:
            North_steps -= steps
        elif direction == 2:
            West_steps += steps
        elif direction == 3:
            West_steps -= steps
    if North_steps == 0:
        well += 1
    if West_steps == 0:
        well += 1
    if well == 2:
        return 'studnia'
    result = []
    if North_steps > 0:
        result.append(f'0 {North_steps}')
    elif North_steps < 0:
        result.append(f'1 {abs(North_steps)}')
    if West_steps > 0:
        result.append(f'2 {West_steps}')
    elif West_steps < 0:
        result.append(f'3 {abs(West_steps)}')
    return '\n'.join(result)

D = int(input())
for _ in range(D):
    N = int(input())
    print(find_treasure(N))
