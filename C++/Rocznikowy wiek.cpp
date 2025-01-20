#include <iostream>

int main() 
{
    long long n, r;
    std::cin >> n >> r;
    std::cout << ((((n % 10) * 2 + 5) * 50 + 1771) - r) % 100;
    return 0;
}