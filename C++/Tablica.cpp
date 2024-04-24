#include <vector>
#include <iostream>

int main() 
{
    int num;
    std::vector<int> numbers;
    while (std::cin >> num) 
    {
        numbers.push_back(num);
    }
    for (int i = numbers.size() - 1; i >= 0; i--) 
    {
        std::cout << numbers[i] << ' ';
    }
    std::cout << '\n';
    return 0;
}