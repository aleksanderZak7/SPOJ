#include <cctype>
#include <iostream>

int main() 
{
    std::string text;
    while (std::getline(std::cin, text))
    {
        bool capitalizeNext = false;
        for (char& c : text)
        {
            if (std::isspace(c))
            {
                capitalizeNext = true;
                c = '0';
            }
            else if (capitalizeNext)
            {
                c = std::toupper(c);
                capitalizeNext = false;
            }
        }
        for (char& c : text)
            if (c != '0')
                std::cout << c;
        std::cout << '\n';
    }
    return 0;
}
