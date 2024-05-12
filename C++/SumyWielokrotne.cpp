#include <iostream>

int main() 
{
    long long int sumOfTests = 0, sum = 0;
    int number;
    while (std::cin >> number)
    {
        if (number != 0)
            sum += number;
        else
        {
            std::cout << sum << '\n';
            sumOfTests += sum;
            sum = 0;
        }
    }
    std::cout << sumOfTests << '\n';
    return 0;
}
