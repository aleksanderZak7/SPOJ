#include <string>
#include <iostream>
#include <unordered_set>

int main() 
{
    std::string line;
    std::unordered_set<std::string> tires;
    while (std::getline(std::cin, line)) 
    {
        if (tires.count(line)) 
            tires.erase(line);
        else 
            tires.insert(line);
    }
    std::cout << *tires.begin();
    return 0;
}