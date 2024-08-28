#include <algorithm>
#include <iostream>
#include <string>

bool isPalindrome(int number) 
{
    std::string strNumber = std::to_string(number);
    std::string reversedStrNumber = strNumber;
    std::reverse(reversedStrNumber.begin(), reversedStrNumber.end());
    return strNumber == reversedStrNumber;
}

void findPalindrome(int number, int& result, int& additions) 
{
    while (!isPalindrome(number)) 
    {
        std::string strNumber = std::to_string(number);
        std::string reversedStrNumber = strNumber;
        std::reverse(reversedStrNumber.begin(), reversedStrNumber.end());
        int reversedNum = std::stoi(reversedStrNumber);
        number += reversedNum;
        additions++;
    }
    result = number;
}

int main() 
{
    int t, n, result;
    std::cin >> t;
    for (int i = 0; i < t; i++) 
    {
        std::cin >> n;
        int additions{0};
        findPalindrome(n, result, additions);
        std::cout << result << " " << additions << '\n';
    }
    return 0;
}