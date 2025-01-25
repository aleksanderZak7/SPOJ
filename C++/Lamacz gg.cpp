#include <map>
#include <string>
#include <iostream>

int main() 
{
    std::string encoded_password;
    std::map<char, int> first_letter_value;
    std::map<char, int> second_letter_value;
    for (char c = 'A'; c <= 'P'; ++c) 
    {
        first_letter_value[c] = c - 'A';  
        second_letter_value[c] = (c - 'A') * 16; 
    }
    while (std::cin >> encoded_password)
    {
        std::string decoded_password = "";
        for (size_t i = 0; i < encoded_password.length(); i += 2) 
        {
            int first = first_letter_value[encoded_password[i]];
            int second = second_letter_value[encoded_password[i + 1]];
            char decoded_char = static_cast<char>(first + second);
            decoded_password += decoded_char;
        }
        std::cout << decoded_password << '\n';
    }
    return 0;
}