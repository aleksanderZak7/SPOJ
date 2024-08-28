#include <iostream>

int NWD(int& a, int& b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() 
{
    int t, a, b;
    std::cin >> t;
    for (int i = 0; i < t; i++) 
    {
        std::cin >> a >> b;
        int greatest_common_divisor = NWD(a, b);
        std::cout << greatest_common_divisor * 2 << '\n';
    }
    return 0;
}
