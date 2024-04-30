#include <string>
#include <iostream>
#include <unordered_map>

int main()
{
    std::string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    std::cin >> n;
    std::cin.ignore();
    std::string line, input;
    std::unordered_map<char, int> letterCount;
    for (int i = 0; i < n; i++)
    {
        std::getline(std::cin, line);
        input += line;
    }
    for (char& c : input)
    {
        if (isalpha(c))
            letterCount[c]++;
    }
    for (char c : alphabet)
    {
        if (letterCount.count(c) > 0 && letterCount[c] > 0)
            std::cout << c << ' ' << letterCount[c] << '\n';
    }
    return 0;
}
