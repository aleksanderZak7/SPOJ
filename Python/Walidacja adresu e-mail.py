def is_valid_email(email):
    if email.count('@') != 1:
        return False
    part1, domain = email.split('@')
    if len(part1) < 1 or len(part1) > 20:
        return False
    if part1[0] == '.' or part1[-1] == '.':
        return False
    for i in range(len(part1)):
        if not part1[i].isalnum() and part1[i] not in {'.', '_'}:
            return False
        if i > 0 and part1[i] == '.' and part1[i - 1] == '.':
            return False
    if '.' not in domain:
        return False
    last_dot_index = domain.rfind('.')
    part2 = domain[:last_dot_index]
    part3 = domain[last_dot_index+1:]
    if len(part3) < 2 or len(part3) > 3:
        return False
    if not part3.isalpha():
        return False
    if len(part2) < 1 or len(part2) > 20:
        return False
    if part2[0] == '.' or part2[-1] == '.':
        return False
    for i in range(len(part2)):
        if not part2[i].isalnum() and part2[i] not in {'.', '_'}:
            return False
        if i > 0 and part2[i] == '.' and part2[i - 1] == '.':
            return False
    return True

t = int(input())
for _ in range(t):
    email = input().strip()
    print('Tak' if is_valid_email(email) else 'Nie')