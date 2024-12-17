#include <vector>
#include <iostream>
#include <algorithm>

int main() 
{
    int temp;
    std::vector<int> boards;
    for (int i = 0; i < 4; ++i) 
    {
        std::cin >> temp;
        boards.push_back(temp);
    }
    std::sort(boards.begin(), boards.end());
    std::cout << boards[0] * boards[2] << '\n';
    return 0;
}