#include <vector>
#include <cstdio>
#include <iostream>

void calculateBellTimes(int currentHour, int currentMinute, const std::vector<int>& breaks)
{
    const int lessonDuration = 45;
    bool first = true;
    for (int i = 0; i <= breaks.size(); i++)
    {
        if (!first) 
            std::cout << ',';
        printf("%i:%0i", currentHour, currentMinute);
        first = false;
        currentMinute += lessonDuration;
        currentHour += currentMinute / 60;
        currentMinute %= 60;
        if (i < breaks.size()) 
        {
            std::cout << ',';
            printf("%i:%i", currentHour, currentMinute);
            currentMinute += breaks[i];
            currentHour += currentMinute / 60;
            currentMinute %= 60;
        }
    }
    std::cout << '\n';
}

int main() 
{
    int breakDuration;
    std::string startTime;
    std::vector<int> breaks;
    std::cin >> startTime;
    int startHour = std::stoi(startTime.substr(0, 2));
    int startMinute = std::stoi(startTime.substr(3, 2));
    while (std::cin >> breakDuration) 
    {
        breaks.push_back(breakDuration);
    }
    calculateBellTimes(startHour, startMinute, breaks);
    return 0;
}