#include <string>
#include <iostream>

int main() 
{
    char letter;
    std::string word;
    while (std::cin >> letter >> word) 
    {
        for (char& c : word)
            if (c != letter)
                std::cout << c;
        std::cout << '\n';
    }
    return 0;
}
