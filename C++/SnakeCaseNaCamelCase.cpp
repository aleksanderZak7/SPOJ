#include <string>
#include <iostream>

std::string snakeToCamel(const std::string& snake) 
{
    std::string camel;
    bool capitalizeNext = false;
    for (char c : snake) 
    {
        if (c == '_')
            capitalizeNext = true;
        else 
        {
            if (capitalizeNext) 
            {
                camel += std::toupper(c);
                capitalizeNext = false;
            }
            else
                camel += c;
        }
    }
    return camel;
}

int main() 
{
    std::string snakeCase;
    std::cin >> snakeCase;
    std::cout << snakeToCamel(snakeCase) << '\n';
    return 0;
}
