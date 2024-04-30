#include <cmath>
#include <iostream>

int main() 
{
    int n;
    std::cin >> n;
    if (n <= 2) 
    {
        if (n == 0)
            std::cout << 0 << '\n';
        else
            std::cout << "NIE" << '\n';
    }
    else 
    {
        std::cout << n - static_cast<int>(n / 2) << ' ';
        for (int i = 0; i < n / 2; ++i)
            std::cout << i << ' ' << n - i << ' ';
        if (n % 2 != 0)
            std::cout << n - std::floor(n / 2) - 1;
    }
    std::cout << '\n';
    return 0;
}
