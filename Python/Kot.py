i = 0
count = 0
s = input()
while i < len(s):
    k_index = -1
    o_index = -1
    t_index = -1
    for j in range(i, len(s)):
        if s[j] == 'k' and k_index == -1:
            k_index = j
        elif s[j] == 'o' and k_index != -1 and o_index == -1:
            o_index = j
        elif s[j] == 't' and o_index != -1 and t_index == -1:
            t_index = j
            break
    if k_index != -1 and o_index != -1 and t_index != -1:
        count += 1
        i = t_index + 1
    else:
        break
print('NIE' if count == 0 else count)