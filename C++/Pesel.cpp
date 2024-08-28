#include <string>
#include <iostream>

bool isCorrectPesel(const std::string& pesel) 
{
    int weights[] = { 1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1 };
    int sum = 0;
    for (int i = 0; i < 11; i++)
        sum += (pesel[i] - '0') * weights[i];
    return (sum > 0 && sum % 10 == 0);
}

int main() 
{
    int t;
    std::cin >> t;
    std::string pesel;
    while(t--)
    {
        std::cin >> pesel;
        if (isCorrectPesel(pesel))
            std::cout << "D\n";
        else
            std::cout << "N\n";
    }
    return 0;
}
