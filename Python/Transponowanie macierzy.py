def transpose_matrix(matrix, m, n):
    transposed = [[0] * m for _ in range(n)]
    for i in range(m):
        for j in range(n):
            transposed[j][i] = matrix[i][j]
    return transposed

m, n = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(m)]
transposed = transpose_matrix(matrix, m, n)
for row in transposed:
    print(" ".join(map(str, row)))