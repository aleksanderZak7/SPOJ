#include <string>
#include <iostream>

int main() 
{
    int t;
    std::string word;
    std::cin >> t;
    while (t--) 
    {
        std::cin >> word;
        char first_digit = '\0', last_digit = '\0';
        for (char c : word) 
        {
            if (isdigit(c)) 
            {
                if (first_digit == '\0')
                    first_digit = c;
                else
                    last_digit = c;
            }
        }
        if (first_digit != '\0' && last_digit != '\0') 
            std::cout << first_digit << ' ' << last_digit << '\n';
        else 
            std::cout << "BRAK\n";
    }
    return 0;
}