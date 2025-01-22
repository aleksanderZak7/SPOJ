#include <cmath>
#include <vector>
#include <iostream>

int minimal_coins(double amount) 
{
    const std::vector<int> coins = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int amount_in_gr = static_cast<int>(std::round(amount * 100));
    int count = 0;
    for (int coin : coins) 
    {
        count += amount_in_gr / coin;
        amount_in_gr %= coin;
    }
    return count;
}

int main() 
{
    double amount;
    std::cin >> amount;
    std::cout << minimal_coins(amount);
    return 0;
}