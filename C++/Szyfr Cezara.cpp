#include <string>
#include <iostream>

int main() 
{
    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string sentence;
    while (std::cin >> sentence) 
    {
            std::string output = "";
            for (char letter : sentence) 
            {
                if (letter != ' ') 
                {
                    int index = alphabet.find(letter);
                    output += alphabet[(index + 3) % alphabet.length()];
                }
                else
                    output += letter;
            }
            std::cout << output << '\n';
    }
    return 0;
}
