#include <string>
#include <iostream>
#include <algorithm>

int main() 
{
    std::string word;
    while (std::getline(std::cin, word)) 
    {
        std::reverse(word.begin(), word.end());
        std::cout << word << '\n';
    }
    return 0;
}
