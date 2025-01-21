#include <cmath>
#include <string>
#include <iostream>

int main() 
{
    long long a1, a2, b1, b2;
    std::cin >> a1 >> a2 >> b1 >> b2;
    std::cout << static_cast<long long>(a1 * std::pow(10, std::to_string(a2).length()) + a2) + static_cast<long long>(b1 * std::pow(10, std::to_string(b2).length()) + b2);
    return 0;
}