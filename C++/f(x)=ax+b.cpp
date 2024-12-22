#include <iostream>

int main() 
{
    int a, b;
    std::cin >> a >> b;
    if (a == 0)
        std::cout << "f(x)=" << b << '\n';
    else if (a == 1) 
    {
        if (b != 0)
            std::cout << "f(x)=x" << (b > 0 ? "+" : "") << b << '\n';
        else
            std::cout << "f(x)=x\n";
    } 
    else if (a == -1) 
    {
        if (b != 0)
            std::cout << "f(x)=-x" << (b > 0 ? "+" : "") << b << '\n';
        else
            std::cout << "f(x)=-x\n";
    } 
    else if (b == 0)
        std::cout << "f(x)=" << a << "x\n";
    else
        std::cout << "f(x)=" << a << "x" << (b > 0 ? "+" : "") << b <<'\n';
    return 0;
}