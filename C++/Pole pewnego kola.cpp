#include <cmath>
#include <iostream>

int main()
{
    const double PI = 3.141592654;
    double R, d;
    std::cin >> R >> d;
    double area = PI * (R * R - (d / 2) * (d / 2)); 
    std::cout.precision(2);
    std::cout << std::fixed << area << '\n';
    return 0;
}