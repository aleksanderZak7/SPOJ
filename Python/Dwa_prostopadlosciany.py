def can_fit(first, second):
    first.sort()
    second.sort()
    return ((first[0] <= second[0] and first[1] <= second[1] and first[2] <= second[2]) or (first[0] >= second[0] and first[1] >= second[1] and first[2] >= second[2]))

first = list(map(int, input().split()))
second = list(map(int, input().split()))
if can_fit(first, second):
    print('tak')
else:
    print('nie')