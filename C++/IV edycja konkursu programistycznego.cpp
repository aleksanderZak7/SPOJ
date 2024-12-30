#include <iostream>

int main() 
{
    int player, sum = 5;
    for (int i = 0; i < 5; ++i) 
    {
        std::cin >> player;
        sum += player;
    }
    std::cout << sum;
    return 0;
}