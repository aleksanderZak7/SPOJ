#include <cmath>
#include <iostream>

int main()
{
    int D;
    double X, Y, Z;
    std::cin >> D;
    while (D--)
    {
        std::cin >> X >> Y >> Z;
        std::cout << abs(round(12 * (((X + Y) - (Z * Y)) / (Z - 1)))) << '\n';
    }
    return 0;
}