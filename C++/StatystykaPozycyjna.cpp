#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_set>

int main() 
{
    std::string line;
    int index, number;
    while (std::getline(std::cin, line)) 
    {
        std::istringstream iss(line);
        iss >> index;
        std::unordered_set<int> uniqueNumbers;
        while (iss >> number)
            uniqueNumbers.insert(number);
        std::vector<int> numbers(uniqueNumbers.begin(), uniqueNumbers.end());
        std::sort(numbers.begin(), numbers.end());
        std::reverse(numbers.begin(), numbers.end());
        if (index <= numbers.size())
            std::cout << numbers[index - 1] << '\n';
        else
            std::cout << '-' << '\n';
    }
    return 0;
}
