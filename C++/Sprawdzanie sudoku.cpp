#include <iostream>

bool is_valid_sudoku(int sudoku[9][9])
{
    int temp[9];
    int row, col, i, j, blockRow, blockCol;
    for (row = 0; row < 9; ++row)
        for (col = 0; col < 9; ++col)
            if (sudoku[row][col] > 9 || sudoku[row][col] < 0)
                return false;
    for (row = 0; row < 9; ++row)
        for (col = 0; col < 9; ++col)
            for (i = col + 1; i < 9; ++i)
                if (sudoku[row][col] == sudoku[row][i])
                    return false;
    for (col = 0; col < 9; ++col)
        for (row = 0; row < 9; ++row)
            for (i = row + 1; i < 9; ++i)
                if (sudoku[row][col] == sudoku[i][col])
                    return false;
    for (blockRow = 0; blockRow < 9; blockRow += 3)
        for (blockCol = 0; blockCol < 9; blockCol += 3)
        {
            int index = 0;
            for (row = 0; row < 3; ++row)
                for (col = 0; col < 3; ++col)
                    temp[index++] = sudoku[blockRow + row][blockCol + col];
            for (i = 0; i < 9; ++i)
                for (j = i + 1; j < 9; ++j)
                    if (temp[i] == temp[j])
                        return false;
        }
    return true;
}

int main()
{
    int n;
    int sudoku[9][9];
    std::cin >> n;
    while (n--)
    {
        for (int row = 0; row < 9; ++row)
            for (int col = 0; col < 9; ++col)
                std::cin >> sudoku[row][col];
        bool isCorrect = is_valid_sudoku(sudoku);
        if (isCorrect)
            std::cout << "TAK" << '\n';
        else
            std::cout << "NIE" << '\n';
    }
    return 0;
}
