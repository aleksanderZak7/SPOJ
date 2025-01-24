#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

int main() 
{
    std::unordered_map<std::string, int> days_of_the_week = { {"pon", 0}, {"wt", 0}, {"sr", 0}, {"czw", 0}, {"pt", 0}, {"sob", 0}, {"niedz", 0} };
    int n;
    std::cin >> n;
    std::vector<std::string> training_days(n);
    for (int i = 0; i < n; ++i)
        std::cin >> training_days[i];
    for (const auto& day : training_days)
        ++days_of_the_week[day];
    int max_value = 0;
    for (const auto& [key, value] : days_of_the_week)
        if (value > max_value)
            max_value = value;
    std::cout << max_value << ' ' << n;
    return 0;
}