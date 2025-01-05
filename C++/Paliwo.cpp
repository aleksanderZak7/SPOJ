#include <iomanip>
#include <iostream>

int main() 
{
    double n, b;
    std::cin >> n >> b;
    std::cout << std::fixed << std::setprecision(2) << (b - n) / 2 << ' ' << n + ((b - n) / 2);
    return 0;
}