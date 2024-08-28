#include <iostream>

int main() 
{
    char character;
    int lineCount = 1;
    while ((character = std::cin.get()) != EOF) 
    {
        if (character == '\n')
            ++lineCount;
    }
    std:: cout << lineCount << '\n';
    return 0;
}
