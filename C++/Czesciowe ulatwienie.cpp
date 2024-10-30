#include <iostream>

int main() 
{
    int Z, n, count;
    std::cin >> Z;
    while (Z--) 
    {
        std::cin >> n;
        int nimSum = 0;
        for (int i = 0; i < n; i++) 
        {
            std::cin >> count;
            nimSum ^= count;
        }
        if (nimSum == 0)
            std::cout << 2 << '\n'; 
        else
           std::cout << 1 << '\n';
    }
    return 0;
}
