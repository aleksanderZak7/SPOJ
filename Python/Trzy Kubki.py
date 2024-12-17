n = int(input())
q = int(input())
cups = [number + 1 for number in range(n)]
for _ in range(q):
    i, j = map(int, input().split())
    cups[i -1 ], cups[j - 1] = cups[j -1], cups[i - 1]
print(' '.join(map(str, cups)))