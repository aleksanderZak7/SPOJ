#include <iostream>
#include <cmath>

bool is_prime(const int& number) 
{
    if (number <= 1)
        return false;
    for (int i = 2; i <= sqrt(number); ++i) 
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main() 
{
    int n;
    int number;
    std::cin >> n;

    while (n--) 
    {
        std::cin >> number;
        if (is_prime(number))
            std::cout << "TAK\n";
        else
            std::cout << "NIE\n";
    }

    return 0;
}