#include <vector>
#include <iostream>

void validate_train_connections(int& n, const std::vector<std::vector<int>>& adj_matrix, const std::vector<std::vector<int>>& jakub_matrix) 
{
    std::vector<std::vector<int>> calculated_matrix(n, std::vector<int>(n, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                calculated_matrix[i][j] += adj_matrix[i][k] * adj_matrix[k][j];
    bool is_correct = true;
    for (int i = 0; i < n && is_correct; i++)
        for (int j = 0; j < n; j++)
            if (calculated_matrix[i][j] != jakub_matrix[i][j]) 
            {
                is_correct = false;
                break;
            }
    if (is_correct)
        std::cout << "TAK\n";
    else
        std::cout << "NIE\n";
}

int main() 
{
    int T, n;
    std::cin >> T;
    while(T--)
    {
        std::cin >> n;
        std::vector<std::vector<int>> adj_matrix(n, std::vector<int>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                std::cin >> adj_matrix[i][j];
        std::vector<std::vector<int>> jakub_matrix(n, std::vector<int>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                std::cin >> jakub_matrix[i][j];
        validate_train_connections(n, adj_matrix, jakub_matrix);
    }
    return 0;
}