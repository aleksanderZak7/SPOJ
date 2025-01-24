#include <string>
#include <iostream>

bool checkForPattern(const std::string &word, const std::string &pattern) 
{
    int indexInPattern = 1;
    for (size_t i = 2; i < pattern.length() * 2; i += 2) 
    {
        if (word[i] == pattern[indexInPattern]) 
            indexInPattern++;
        else
            return false;
    }
    return true;
}

int main()
{
    int index = -1;
    std::string word, pattern;
    std::cin >> word >> pattern;
    for (size_t i = 0; i < word.length(); i++) 
        if (word[i] == pattern[0]) 
            if (checkForPattern(word.substr(i), pattern)) 
            {
                index = i + 1;
                break;
            }
    std::cout << (index == -1 ? "brak" : std::to_string(index));
    return 0;
}