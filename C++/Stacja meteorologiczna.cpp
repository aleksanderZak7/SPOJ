#include <iostream>
#include <unordered_set>

int main() 
{
    int n, temperature;
    std::cin >> n;
    std::unordered_set<int> uniqueTemperatures(n);
    for (int i = 0; i < n; ++i) 
    {
        std::cin >> temperature;
        uniqueTemperatures.insert(temperature);
    }
    std::cout << uniqueTemperatures.size();
    return 0;
}