#include <string>
#include <numeric>
#include <iostream>
#include <unordered_map>

int main() 
{
    std::string jasio, stasio;
    std::cin >> jasio >> stasio;
    std::unordered_map<char, int> card_values{ {'2', 2}, {'3', 3}, {'4', 4}, {'5', 5}, {'6', 6}, {'7', 7}, {'8', 8}, {'9', 9}, {'T', 10}, {'J', 11}, {'Q', 12}, {'K', 13}, {'A', 14} };
    auto calculate_score = [&](const std::string& cards) 
    {
        return std::accumulate(cards.begin(), cards.end(), 0, [&](int sum, char card) { return sum + card_values[card]; });
    };
    int jasio_score = calculate_score(jasio);
    int stasio_score = calculate_score(stasio);
    if (jasio_score > stasio_score)
        std::cout << "JASIO";
    else if (stasio_score > jasio_score)
        std::cout << "STASIO";
    else
        std::cout << "REMIS";
    return 0;
}