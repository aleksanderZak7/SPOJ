from collections import defaultdict

def find_largest_group(indices):
    order_map = {}
    anagram_groups = defaultdict(list)
    for i, index in enumerate(indices):
        sorted_index = ''.join(sorted(index))
        anagram_groups[sorted_index].append(index)
        if sorted_index not in order_map:
            order_map[sorted_index] = i
    largest_group_key = max(anagram_groups.keys(), key=lambda k: (len(anagram_groups[k]), -order_map[k]))
    return anagram_groups[largest_group_key]

n = int(input())
indices = [input() for _ in range(n)]
largest_group = find_largest_group(indices)
print('\n'.join(largest_group))