#include <string>
#include <iostream>
#include <algorithm>
#include <unordered_map>

int main() 
{
    int Z, n;
    std::string word;
    std::cin >> Z;
    while (Z--) 
    {
        std::cin >> n;
        std::unordered_map<std::string, int> frequencyMap;
        for (int i = 0; i < n; i++) 
        {
            std::cin >> word;
            sort(word.begin(), word.end());
            frequencyMap[word]++;
        }
        int maxCount = 0;
        for (const auto& entry : frequencyMap)
            maxCount = std::max(maxCount, entry.second);
        std::cout << maxCount << '\n';
    }
    return 0;
}