#include <string>
#include <iostream>

int main() 
{
    int n;
    std::cin >> n;
    std::cin.ignore();
    while(n--)
    {
        std::string binary, decoded;
        std::cin >> binary;
        for (size_t i = 0; i + 4 < binary.length(); i += 5) 
        {
            std::string group = binary.substr(i, 5);
            int num = std::stoi(group, nullptr, 2);
            char decoded_char = 'A' + (num % 26);
            decoded += decoded_char;
        }
        std::cout << decoded << '\n';
    }
    return 0;
}