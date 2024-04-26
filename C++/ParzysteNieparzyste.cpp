#include <vector>
#include <iostream>

int main() 
{
    int t, n, number;
    std::cin >> t;
    while (t--) 
    { 
        std::cin >> n;
        std::vector<int> even_indices, odd_indices;
        for (int i = 1; i <= n; i++) 
        {
            std::cin >> number;
            if (i % 2 == 0) 
                even_indices.push_back(number);
            else
                odd_indices.push_back(number);
        }
        for (int& num : even_indices)
            std::cout << num << ' ';
        for (int& num : odd_indices)
            std::cout << num << ' ';
        std::cout << '\n';
    }
    return 0;
}