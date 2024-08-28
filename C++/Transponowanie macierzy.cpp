#include <vector>
#include <iostream>

int main() 
{
    int m, n;
    std::cin >> m >> n;
    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            std::cin >> matrix[i][j];
    std::vector<std::vector<int>> transposed(n, std::vector<int>(m));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            transposed[j][i] = matrix[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            std::cout << transposed[i][j] << ' ';
        std::cout << '\n';
    return 0;
}
