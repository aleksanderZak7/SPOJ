#include <vector>
#include <iostream>

int main() 
{
    int n, k;
    std::cin >> n >> k;
    std::vector<int> numbers(n);
    std::vector<int> result(n);
    for (int i = 0; i < n; i++)
        std::cin >> numbers[i];
    for (int i = 0; i < n; i++)
        result[(i + n - k) % n] = numbers[i];
    for (int i = 0; i < n; i++)
        std::cout << result[i] << ' ';
    std::cout << '\n';
    return 0;
}
