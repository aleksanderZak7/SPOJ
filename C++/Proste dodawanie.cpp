#include <iostream>

int main() 
{
    int t, n, number;
    std::cin >> t;
    for (int i = 0; i < t; i++) 
    {
        std::cin >> n;
        int sum = 0;
        for (int j = 0; j < n; j++) 
        {
            std::cin >> number;
            sum += number;
        }
        std::cout << sum << '\n';
    }
    return 0;
}