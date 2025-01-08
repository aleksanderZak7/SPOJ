#include <cmath>
#include <iostream>

int largestDivisor(int& a) 
{
    int j = 2;
    while (j * j <= a) 
    {
        int k = a / j;
        if (k * j == a)
            return k;
        ++j;
    }
    return 1;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() 
{
    int Z;
    std::cin >> Z;
    while(Z--)
    {
        int a, b;
        std::cin >> a >> b;
        if (a == b)
            std::cout << largestDivisor(a) << '\n';
        else
             std::cout << gcd(a, b) << '\n';
    }
    return 0;
}