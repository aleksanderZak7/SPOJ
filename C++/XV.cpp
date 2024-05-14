#include <string>
#include <iostream>

int main() 
{
    std::string digits;
    int digitSum = 0;
    while (std::cin >> digits && digits[0] != '0') 
    {
        int length = digits.size();
        digitSum = 0;
        for (char c : digits)
            digitSum += (int)(c - '0');
        if ((digits[length - 1] == '0' || digits[length - 1] == '5') && (digitSum % 3 == 0))
            std::cout << "TAK\n";
        else
            std::cout << "NIE\n";
    }
    return 0;
}