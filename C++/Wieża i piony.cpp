#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

int main() 
{
    int M, N;
    std::cin >> M >> N;
    std::vector<std::string> board(M);
    for (int i = 0; i < M; i++)
        std::cin >> board[i];
    std::vector<int> row_counts(M, 0);
    std::vector<int> col_counts(N, 0);
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            if (board[i][j] == '#') 
            {
                row_counts[i]++;
                col_counts[j]++;
            }
    int max_attacked = 0;
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            if (board[i][j] == '.') 
                max_attacked = std::max(max_attacked, row_counts[i] + col_counts[j]);
    std::cout << max_attacked;
    return 0;
}