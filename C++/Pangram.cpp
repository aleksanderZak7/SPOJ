#include <string>
#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>

std::string isPangram(const std::string& word) 
{
    std::vector<int> letter_counts(26, 0);
    for (char letter : word) 
    {
        int index = letter - 'a';
        letter_counts[index]++;
    }
    bool is_nonperfect_pangram = std::all_of(letter_counts.begin(), letter_counts.end(), [](int count){ return count > 0; });
    if (!is_nonperfect_pangram)
        return "NIE";
    int first_count = -1;
    for(int count : letter_counts)
    {
        if(count > 0)
        {
            first_count = count;
            break;
        }
    }
    bool is_perfect_pangram = std::all_of(letter_counts.begin(), letter_counts.end(), [first_count](int count){ return count == first_count; });
    if (is_perfect_pangram)
        return "PANGRAM PERFEKCYJNY";
    else
        return "PANGRAM";
}

int main() 
{
    std::string word;
    std::cin >> word;
    std::cout << isPangram(word);
    return 0;
}