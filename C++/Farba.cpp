#include <cmath>
#include <iostream>

int main() 
{
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << ceil((2 * (a * c + b * c)) / 5.0) + ceil((a * b) / 3.0);
    return 0;
}