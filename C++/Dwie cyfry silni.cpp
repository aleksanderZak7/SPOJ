#include <iostream>

int factorial(int n)
{
    if (n == 0) 
        return 1;
    else 
        return n * factorial(n-1);
}

int main()
{
    int D;
    int n;
    std::cin >> D;
    for(int i = 0; i < D; i++)
    {
        std::cin >>n;
        if (n < 10)
            std::cout << factorial(n) % 100 / 10 << ' ' << factorial(n) % 10 << '\n';
        else 
            std::cout << "0 0\n";
    }
    return 0;
}