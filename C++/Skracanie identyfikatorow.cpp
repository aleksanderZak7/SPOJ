#include <string>
#include <cctype>
#include <iostream>

bool isVowel(char c) 
{
    c = std::tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() 
{
    int n;
    std::string variable_name;
    std::cin >> n;
    std::cin >> variable_name;
    if (variable_name.size() <= n)
        std::cout << variable_name << '\n';
    std::string filtered_name;
    for (char c : variable_name)
        if (std::isalnum(c) || c == '$')
            filtered_name += c;
    if (filtered_name.size() <= n)
        std::cout << filtered_name << '\n';
    std::string no_digits;
    for (char c : filtered_name)
        if (!std::isdigit(c))
            no_digits += c;
    if (no_digits.size() <= n)
        std::cout << no_digits << '\n';
    std::string final_name;
    bool first_vowel_found = false;
    for (char c : no_digits) 
    {
        if (isVowel(c)) 
        {
            if (!first_vowel_found) 
            {
                first_vowel_found = true;
                final_name += c;
            }
        }
        else
            final_name += c;
    }
    if (final_name.size() <= n)
        std::cout << final_name << '\n';
    std::cout << final_name.substr(0, n) << '\n';
    return 0;
}
