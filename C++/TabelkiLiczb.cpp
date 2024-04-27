#include <vector>
#include <iostream>

int main()
{
    int t, l, k;
    std::cin >> t;
    while (t--)
    {
        std::cin >> l >> k;
        std::vector<std::vector<int>> table(l, std::vector<int>(k));
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < k; j++)
                std::cin >> table[i][j];
        }
        std::vector<int> temp(4);
        temp[0] = table[0][0];
        temp[1] = table[l - 1][0];
        temp[2] = table[l - 1][k - 1];
        temp[3] = table[1][k - 1];
        for (int j = 0; j < k - 1; j++)
            table[0][j] = table[0][j + 1];
        for (int i = l - 1; i > 0; i--)
            table[i][0] = table[i - 1][0];
        for (int j = k - 1; j > 0; j--)
            table[l - 1][j] = table[l - 1][j - 1];
        for (int i = 0; i < l - 1; i++)
            table[i][k - 1] = table[i + 1][k - 1];
        table[1][0] = temp[0];
        table[l - 1][1] = temp[1];
        table[l - 2][k - 1] = temp[2];
        table[0][k - 1] = temp[3];
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < k; j++)
                std::cout << table[i][j] << ' ';
            std::cout << '\n';
        }
    }
    return 0;
}
