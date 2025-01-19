#include <cmath>
#include <string>
#include <iostream>
#include <algorithm>

std::string calculateGrades(const std::string& activity) 
{
    int pluses = std::count(activity.begin(), activity.end(), '+');
    int minuses = std::count(activity.begin(), activity.end(), '-');
    int difference = pluses - minuses;
    if (difference > 0) 
    {
        int fives = difference / 3;
        if (fives > 0) 
        {
            std::string result(fives, '5');
            for (int i = 1; i < result.size(); i += 2)
                result.insert(i, " ");
            return result;
        } 
        else
            return "BRAK";
    } 
    else if (difference < 0) 
    {
        int ones = std::abs(difference) / 3;
        if (ones > 0) 
        {
            std::string result(ones, '1');
            for (int i = 1; i < result.size(); i += 2)
                result.insert(i, " ");
            return result;
        } 
        else
            return "BRAK";
    } 
    else
        return "BRAK";
}

int main() 
{
    std::string activity;
    std::getline(std::cin, activity);
    std::cout << calculateGrades(activity);
    return 0;
}