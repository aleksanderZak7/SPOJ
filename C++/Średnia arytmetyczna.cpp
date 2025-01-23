#include <vector>
#include <iostream>
#include <algorithm>

int main() 
{
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
        std::cin >> numbers[i];
    std::sort(numbers.begin(), numbers.end());
    int result = (n % 2 != 0) ? numbers[n / 2] : numbers[(n + 1) / 2];
    std::cout << result;
    return 0;
}