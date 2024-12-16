#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <unordered_set>

void remove_emoticons(int& n) 
{
    int m;
    std::string sentence, word;
    std::unordered_set<std::string> emotes = {":)", ":(", ";)", ":D", ":P", "xD", ":>", "<3"};
    while(n--)
    {
        std::cin >> m;
        std::cin.ignore();
        std::getline(std::cin, sentence);
        std::istringstream iss(sentence);
        std::vector<std::string> filtered;
        while (iss >> word) 
        {
            if (emotes.find(word) == emotes.end())
                filtered.push_back(word);
        }
        for (size_t j = 0; j < filtered.size(); j++) 
            std::cout << filtered[j] << ' ';
        std::cout << '\n';
    }
}

int main() 
{
    int n;
    std::cin >> n;
    remove_emoticons(n);
    return 0;
}