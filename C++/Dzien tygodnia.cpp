#include <string>
#include <algorithm>
#include <iostream>

int main() 
{
    int d, next_day;
    std::string day;
    const std::string days[] = { "Pn", "Wt", "Sr", "Cz", "Pt", "So", "Nd" };
    std::cin >> d;
    while (d--) 
    {
        std::cin >> day >> next_day;
        auto it = std::find(std::begin(days), std::end(days), day);
        int index = std::distance(std::begin(days), it);
        std::cout << days[(index + next_day) % 7] << '\n';
    }
}