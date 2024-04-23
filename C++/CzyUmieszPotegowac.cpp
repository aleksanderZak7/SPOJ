#include <iostream>

int powerMod(int base, int exponent, int modulo) 
{
    int result = 1;
    base %= modulo;
    while (exponent > 0) 
    {
        if (exponent % 2 != 0)
            result = (result * base) % modulo;
        exponent /= 2;
        base = (base * base) % modulo;
    }
    return result;
}

int main() 
{
    int D, a, b;
    std::cin >> D;
    for(int i = 0; i < D; i++)
    {
        std::cin >> a >> b;
        int last_digit = powerMod(a, b, 10);
        std::cout << last_digit << '\n';
    }
    return 0;
}