#include <vector>
#include <iostream>
#include <algorithm>

int main() 
{
    int t, n;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        std::cin >> n;
        std::vector<int> array(n);
        for (int j = 0; j < n; j++)
            std::cin >> array[j];
        std::reverse(array.begin(), array.end());
        for (int j = 0; j < n; j++)
            std::cout << array[j] << ' ';
        std::cout << '\n';
    }
    return 0;
}