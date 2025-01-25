#include <iomanip>
#include <iostream>

int main() 
{
    double n, v1, v2;
    std::cin >> n >> v1 >> v2;
    std::cout << std::fixed << std::setprecision(2) << (n / (v1 * 1000.0)) * v2 * 1000.0;
    return 0;
}