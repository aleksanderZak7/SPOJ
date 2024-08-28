#include <iostream>

bool isTriangle(double a, double b, double c) 
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() 
{
    double a, b, c;
    while (std::cin >> a >> b >> c) 
    {
        if (isTriangle(a, b, c))
            std::cout << "1\n";
        else
            std::cout << "0\n";
    }
    return 0;
}
