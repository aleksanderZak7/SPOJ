#include <cmath>
#include <vector>
#include <iostream>

int main()
{
    int a, r, n, notDeleted = 0;
    std::cin >> a >> r;
    std::cin >> n;
    std::vector<std::pair<int, int>> insects(n);
    for (int i = 0; i < n; ++i) 
       std::cin >> insects[i].first >> insects[i].second;
    for (const auto& insect : insects) 
        if (sqrt(pow(insect.first - a, 2) + pow(insect.second, 2)) > r) 
            notDeleted++;
    std::cout << notDeleted;
    return 0;
}