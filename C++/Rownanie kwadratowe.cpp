#include <cmath>
#include <iostream>

int main() 
{
    double A, B, C;
    while (std::cin >> A >> B >> C) 
    {
        double delta = B * B - 4 * A * C;
        if (delta < 0)
            std::cout << "0\n";
        else if (delta == 0)
            std::cout << "1\n";
        else
            std::cout << "2\n";
    }
    return 0;
}