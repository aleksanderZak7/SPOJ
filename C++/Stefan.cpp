#include <iostream>

int main() 
{
    int n, money;
    long int sum = 0, profit = 0;
    std::cin >> n;
    while(n--)
    {
        std::cin >> money;
        sum += money;
        if (sum > profit)
            profit = sum;
        if (sum < 0)
            sum = 0;
    }
    std::cout << profit << '\n';
    return 0;
}
