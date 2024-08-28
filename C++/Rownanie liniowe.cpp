#include <iomanip>
#include <iostream>

int main() 
{
    double a, b, c;
    std::cin >> a >> b >> c;
    if (b == c && a == 0)
        std::cout << "NWR\n";
    else if (a == 0)
        std::cout << "BR\n";
    else 
    {
        double result = (c - b) / a;
        std::cout << std::fixed << std::setprecision(2);
        std::cout << result << '\n';
    }
    return 0;
}
