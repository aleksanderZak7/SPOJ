#include <iostream>

int main() 
{
    int t, V1, V2;
    std::cin >> t;
    while(t--)
    {
        std::cin >> V1 >> V2;
        std::cout << (2 * V1 * V2) / (V1 + V2) << '\n';
    }
    return 0;
}
