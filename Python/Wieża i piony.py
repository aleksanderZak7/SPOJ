M, N = map(int, input().split())
board = [input() for _ in range(M)]
row_counts = [0] * M
col_counts = [0] * N
for i in range(M):
    for j in range(N):
        if board[i][j] == '#':
            row_counts[i] += 1
            col_counts[j] += 1
max_attacked = 0
for i in range(M):
    for j in range(N):
        if board[i][j] == '.':
            max_attacked = max(max_attacked, row_counts[i] + col_counts[j])
print(max_attacked)