#include <vector>
#include <iostream>

int main() 
{
    int t, n, x, y;
    std::cin >> t;
    while(t--)
    {
        std::cin >> n >> x >> y;
        std::vector<int> result;
        for (int i = 2; i < n; i++) 
        {
            if (i % x == 0 && i % y != 0)
                result.push_back(i);
        }
        for (int& number : result)
            std::cout << number << ' ';
        std::cout << '\n';
    }
    return 0;
}
