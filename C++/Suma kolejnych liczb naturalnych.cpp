#include <vector>
#include <iostream>

int main() 
{
    int k, n;
    std::cin >> k >> n;
    int x = (n - (k * (k - 1)) / 2) / k;
    std::vector<int> result;
    for (int i = 0; i < k; ++i)
        result.push_back(x + i);
    for (const int& num : result)
        std::cout << num << ' ';
    return 0;
}