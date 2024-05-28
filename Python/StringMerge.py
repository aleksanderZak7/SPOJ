def string_merge(s1, s2):
    min_len = min(len(s1), len(s2))
    merged_string = ''.join(s1[i] + s2[i] for i in range(min_len))
    return merged_string

t = int(input())
for _ in range(t):
    s1, s2 = input().strip().split()
    print(string_merge(s1, s2))