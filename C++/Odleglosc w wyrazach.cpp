#include <cmath>
#include <string>
#include <iostream>

int main() 
{
    int numberOfTests;
    std::string word;
    std::cin >> numberOfTests;
    while(numberOfTests--)
    {
        std::cin >> word;
        int maxDistance = 0;
        for (int i = 0; i < word.length(); i++) 
            for (int j = i + 1; j < word.length(); j++) 
            {
                int distance = std::abs(word[i] - word[j]);
                if (distance > maxDistance)
                    maxDistance = distance;
            }
        std::cout << maxDistance << '\n';
    }
    return 0;
}
