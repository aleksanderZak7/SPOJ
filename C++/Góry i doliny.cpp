#include <vector>
#include <iostream>

int main() 
{
    int n, increase = 0;
    std::cin >> n;
    std::vector<int> heights(n);
    for (int i = 0; i < n; i++)
        std::cin >> heights[i];
    for (int i = 1; i < n - 1; i++)
        if (heights[i - 1] < heights[i] && heights[i] > heights[i + 1])
            ++increase;
    std::cout << increase;
    return 0;
}