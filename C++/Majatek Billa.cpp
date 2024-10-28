#include <iostream>

int fasterModulo(int& u, int& s, int& d) 
{
    int result = 1;
    int x = u % d;
    while (s > 0) 
    {
        if (s % 2 == 1)
            result = (result * x) % d; 
        x = (x * x) % d;
        s /= 2;
    }
    return result;
}

int main() 
{
    int u, s, d;
    while (true) 
    {
        std::cin >> u >> s >> d;
        if (u == 0 && s == 0 && d == 0)
            break;
        std::cout << fasterModulo(u, s, d) << "\n";
    }
    return 0;
}