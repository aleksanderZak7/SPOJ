#include <string>
#include <iostream>

int main() 
{
    int n;
    std::string number;
    const long long mod = 1000000007;
    std::cin >> n;
    while (n--) 
    {
        std::cin >> number;
        long long combination = (number[0] == 'p') ? (number.length() > 1 ? 4 : 5) : 5;
        for (int i = 1; i < number.length(); ++i)
            combination = (combination * 5) % mod;
        std::cout << combination << '\n';
    }
    return 0;
}