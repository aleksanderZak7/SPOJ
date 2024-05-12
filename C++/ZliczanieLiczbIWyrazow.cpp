#include <cctype>
#include <string>
#include <sstream>
#include <iostream>

int main() 
{
    std::string line;
    while (std::getline(std::cin, line)) 
    {
        std::istringstream iss(line);
        int wordCount = 0;
        int numberCount = 0;
        std::string token;
        while (iss >> token) 
        {
            bool isNumber = true;
            for (char c : token) 
            {
                if (!std::isdigit(c)) 
                {
                    isNumber = false;
                    break;
                }
            }
            if (isNumber)
                numberCount++;
            else
                wordCount++;
        }
        std::cout << numberCount << " " << wordCount << '\n';
    }
    return 0;
}
