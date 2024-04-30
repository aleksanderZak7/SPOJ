#include <vector>
#include <iostream>
#include <algorithm>

int main() 
{
    int D, N;
    std::cin >> D;
    while(D--)
    {
        std::cin >> N;
        std::vector<int> points(N);
        for (int i = 0; i < N; i++)
        {
            std::cin >> points[i];
        }
        int maxValue = *std::max_element(points.begin(), points.end());
        int howMany = std::count(points.begin(), points.end(), maxValue);
        points.erase(std::remove(points.begin(), points.end(), maxValue), points.end());
        std::sort(points.begin(), points.end());
        for (int i = 0; i < howMany; i++)
            std::cout << maxValue << ' ';
        for (int& point : points)
            std::cout << point << ' ';
        std::cout << '\n';
    }
    return 0;
}
