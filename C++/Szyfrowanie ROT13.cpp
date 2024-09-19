#include <string>
#include <iostream>

const char rot13(char& c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 'a' + 13) % 26 + 'a';
    else if (c >= 'A' && c <= 'Z')
        return (c - 'A' + 13) % 26 + 'A';
    else if (c >= '0' && c <= '9')
        return (c - '0' + 5) % 10 + '0';
    else
        return c;
}

int main()
{
    std::string line;
    while (std::cin >> line)
    {
        for (char& c : line)
            std::cout << rot13(c);
        std::cout << '\n';
    }
    return 0;
}
