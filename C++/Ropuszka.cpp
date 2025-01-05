#include <iostream>

int main() 
{
    int a, b, n;
    std::cin >> a >> b >> n;
    std::cout << (n == 33 ? "WRACAJ" : (a < b ? "W LEWO" : "W PRAWO"));
    return 0;
}