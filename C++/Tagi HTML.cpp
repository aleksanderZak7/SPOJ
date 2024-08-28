#include <cctype>
#include <string>
#include <iostream>

int main() 
{
    std::string line;
    bool insideTag = false;
    while (std::getline(std::cin, line)) 
    {
        for (char& c : line) 
        {
            if (c == '<')
                insideTag = true;
            else if (c == '>')
                insideTag = false;
            if (insideTag)
                c = std::toupper(c);
        }
        std::cout << line << '\n';
    }
    return 0;
}
