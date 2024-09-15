def is_valid_sudoku(sudoku):
    for row in sudoku:
        if any(value < 0 or value > 9 for value in row):
            return False
    for row in sudoku:
        if len(set(row)) != 9:
            return False
    for col in range(9):
        if len(set(sudoku[row][col] for row in range(9))) != 9:
            return False
    for block_row in range(0, 9, 3):
        for block_col in range(0, 9, 3):
            values = [sudoku[block_row + i][block_col + j] for i in range(3) for j in range(3)]
            if len(set(values)) != 9:
                return False
    return True

n = int(input())
for i in range(n):
    sudoku = []
    for _ in range(9):
        row = list(map(int, input().split()))
        sudoku.append(row)
    if is_valid_sudoku(sudoku):
        print("TAK")
    else:
        print("NIE")
    if i < n - 1:
        input()