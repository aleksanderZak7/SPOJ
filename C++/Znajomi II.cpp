#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

int main() 
{
    int n;
    std::cin >> n;
    std::vector<std::string> indices(n);
    std::unordered_map<std::string, int> firstOccurrence;
    std::unordered_map<std::string, std::vector<std::string>> anagramGroups;
    for (int i = 0; i < n; i++) 
    {
        std::cin >> indices[i];
        std::string sortedIndex = indices[i];
        std::sort(sortedIndex.begin(), sortedIndex.end());
        if (anagramGroups[sortedIndex].empty())
            firstOccurrence[sortedIndex] = i;
        anagramGroups[sortedIndex].push_back(indices[i]);
    }
    std::string bestGroup;
    int maxSize = 0, earliestIndex = n;
    for (const auto &group : anagramGroups) 
    {
        int size = group.second.size();
        int firstIndex = firstOccurrence[group.first];
        if (size > maxSize || (size == maxSize && firstIndex < earliestIndex)) 
        {
            maxSize = size;
            earliestIndex = firstIndex;
            bestGroup = group.first;
        }
    }
    for (const std::string &index : anagramGroups[bestGroup]) 
        std::cout << index << '\n';
    return 0;
}