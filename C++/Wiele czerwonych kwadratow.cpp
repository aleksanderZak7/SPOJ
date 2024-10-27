#include <iostream>

long countRed(long x, long y)
{
    if (x < y)
        std::swap(x, y);
    if (x < 2 || y == 0)
        return 0;
    if (y < 2)
        return x / 2;
    else
        return ((6 + (y / 2 - 1) * 4) / 2) * (y / 2) + ((x - y + (y % 2)) / 2) * y;
}

int main() 
{
    long XLD, YLD, XPG, YPG;
    std::cin >> XLD >> YLD >> XPG >> YPG;
    std::cout << (countRed(XPG, YPG) + countRed(XLD, YLD) - countRed(XPG, YLD) - countRed(XLD, YPG)) << '\n';
    return 0;
}