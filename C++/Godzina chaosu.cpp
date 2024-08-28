#include <string>
#include <iomanip>
#include <sstream>
#include <iostream>

std::string toString(const int& hours, const int& minutes)
{
    std::ostringstream stream;
    if (hours == 0)
        stream << minutes;
    else if (minutes < 10)
        stream << hours << "0" << minutes;
    else
        stream << hours << minutes;
    return stream.str();
}

bool isPalindromic(int hours, int minutes)
{
    std::string str = toString(hours, minutes);
    int length = str.length();
    for (int i = 0; i < length / 2; ++i)
    {
        if (str[i] != str[length - 1 - i])
            return false;
    }
    return true;
}

void incrementTime(int& hours, int& minutes)
{
    if (minutes < 59)
        ++minutes;
    else
    {
        minutes = 0;
        if (hours < 23)
            ++hours;
        else
            hours = 0;
    }
}

int main()
{
    char colon;
    std::string time_str;
    int t, hours, minutes;
    std::cin >> t;
    while (t--)
    {
        std::cin >> time_str;
        std::istringstream iss(time_str);
        iss >> hours >> colon >> minutes;
        do
        {
            incrementTime(hours, minutes);
        } while (!isPalindromic(hours, minutes));
        std::cout << std::setw(2) << std::setfill('0') << hours << ':' << std::setw(2) << std::setfill('0') << minutes << '\n';
    }
    return 0;
}
