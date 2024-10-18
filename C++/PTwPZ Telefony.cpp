#include <string>
#include <iostream>

int main() 
{
    int N;
    std::string text;
    char letter_to_digit[26] = {'2', '2', '2', '3', '3', '3', '4', '4', '4', '5', '5', '5', '6', '6', '6', '7', '7', '7', '7', '8', '8', '8', '9', '9', '9', '9'};
    std::cin >> N;
    while(N--)
    {
        std::cin >> text;
        for (char c : text)
            std::cout << letter_to_digit[c - 'A'];
        std::cout << '\n';
    }
    return 0;
}
