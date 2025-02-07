#include <vector>
#include <iostream>
#include <algorithm>

int main() 
{
    std::vector<int> times(3);
    for (int &t : times) 
        std::cin >> t;
    int min_time = *std::min_element(times.begin(), times.end());
    if (std::count(times.begin(), times.end(), min_time) == 1)
        std::cout << "TAK " << (std::find(times.begin(), times.end(), min_time) - times.begin() + 1);
    else
        std::cout << "NIE";
    return 0;
}