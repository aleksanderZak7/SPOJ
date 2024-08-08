#include <iostream>

int main() 
{
    int t, n, legs;
    std::cin >> t;
    while(t--) 
    {
        std::cin >> n;
        int total_legs = 0;
        for (int j = 0; j < n; ++j) 
        {
            std::cin >> legs;
            total_legs += legs;
        }
        std::cout << total_legs + (n - 1) << '\n';
    }
    return 0;
}
