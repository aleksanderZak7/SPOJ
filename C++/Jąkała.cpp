#include <string>
#include <iostream>
#include <unordered_set>

int main() 
{
    int k;
    std::cin >> k;
    char letter;
    std::unordered_set<char> doubled_letters;
    while(k--)
    {
        std::cin >> letter;
        doubled_letters.insert(letter);
    }
    std::string word, result;
    std::cin >> word;
    for (char c : word)
    {
        result += c;
        if (doubled_letters.count(c))
            result += c;
    }
    std::cout << result;
    return 0;
}