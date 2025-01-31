#include <string>
#include <iostream>

int hexToDec(char high, char low) 
{
    int value = 0;
    value += (low >= 'A') ? (low - 'A' + 10) : (low - '0');
    value += (high >= 'A') ? (high - 'A' + 10) * 16 : (high - '0') * 16;
    return value;
}

int main()
{
    int index = 1;
    std::string line;
    std::cin >> line;
    while(index < line.size())
    {
        int sum = 0;
        for (int i = 0; i < 3; ++i) 
        {
            char high = line[index++];
            char low = line[index++];
            sum += hexToDec(high, low);
        }
        ++index;
        std::cout << static_cast<char>(sum);
    }
}