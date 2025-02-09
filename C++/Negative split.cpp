#include <vector>
#include <sstream>
#include <iostream>

int timeToSeconds(const std::string& time) 
{
    int h, m, s;
    sscanf(time.c_str(), "%d:%d:%d", &h, &m, &s);
    return h * 3600 + m * 60 + s;
}

void analyzeResults(int n, std::vector<std::string>& results) 
{
    int a = 0, b = 0, c = 0, d = 0;
    for (const std::string& result : results) 
    {
        std::stringstream ss(result);
        std::vector<int> times(6);
        for (int i = 0; i < 6; ++i) 
        {
            std::string time;
            ss >> time;
            times[i] = timeToSeconds(time);
        }
        if (times[0] > (times[3] - times[2]) && times[1] >= times[0] && times[2] >= times[1] && times[3] >= times[2]) 
        {
            ++b;
            if (times[4] <= times[5]) 
                ++a;
        } 
        else 
        {
            ++d;
            if (times[4] <= times[5])
                ++c;
        }
    }
    std::cout << a << '/' << b << ' ' << c << '/' << d;
}

int main() 
{
    int n;
    std::cin >> n;
    std::cin.ignore();
    std::vector<std::string> results(n);
    for (int i = 0; i < n; ++i)
        std::getline(std::cin, results[i]);
    analyzeResults(n, results);
    return 0;
}