#include <vector>
#include <iostream>

int main() 
{
    const std::vector<std::string> coordinators = {"DAWID", "GRZESIEK", "MACIEK", "MARCIN", "MARIUSZ", "RAFAL"};
    int t, n;
    std::cin >> t; 
    while(t--) 
    {
        std::cin >> n;
        std::cout << coordinators[(n - 1) / 7 % coordinators.size()] << '\n';
    }
    return 0;
}