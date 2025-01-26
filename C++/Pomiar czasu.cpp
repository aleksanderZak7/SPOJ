#include <vector>
#include <string>
#include <iomanip>
#include <sstream>
#include <iostream>

int countSegments(const std::string& time) 
{
    static const std::vector<int> segments = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    return segments[time[0] - '0'] + segments[time[1] - '0'] + segments[time[3] - '0'] + segments[time[4] - '0'];
}

std::string findMinMaxTimes(const int& n) 
{
    std::vector<std::string> possible_times;
    for (int minutes = 15; minutes < 60; ++minutes) 
        for (int seconds = 0; seconds < 60; ++seconds) 
        {
            std::ostringstream time;
            time << std::setw(2) << std::setfill('0') << minutes << ':' << std::setw(2) << std::setfill('0') << seconds;
            if (countSegments(time.str()) == n)
                possible_times.push_back(time.str());
        }
    return possible_times.front() + ' ' + possible_times.back();
}

int main() 
{
    int t, n;
    std::cin >> t;
    while (t--) 
    {
        std::cin >> n;
        std::cout << findMinMaxTimes(n) << '\n';
    }
    return 0;
}