#include <string>
#include <iostream>

std::string changeSystem(int n, int system) 
{
    std::string result = "";
    const std::string symbols = "0123456789ABCDEF";
    while (n != 0) 
    {
        result = symbols[n % system] + result;
        n /= system;
    }
    return result;
}

int main() 
{
    int t, n;
    std::cin >> t;
    while(t--)
    {
        std::cin >> n;
        std::cout << changeSystem(n, 16) << ' ' << changeSystem(n, 11) << '\n';
    }
    return 0;
}