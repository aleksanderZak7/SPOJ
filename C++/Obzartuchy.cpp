#include <cmath>
#include <iostream>

int main() 
{
    const int Day = 86400;
    int n, Quantity, CookieBox, CookieTime;
    std::cin >> n;
    for (int i = 0; i < n; i++) 
    {
        std::cin >> Quantity >> CookieBox;
        int Result = 0;
        for (int j = 0; j < Quantity; j++) 
        {
            std::cin >> CookieTime;
            Result += Day / CookieTime;
        }
        std::cout << std::ceil(static_cast<double>(Result) / CookieBox) << '\n';
    }
    return 0;
}
