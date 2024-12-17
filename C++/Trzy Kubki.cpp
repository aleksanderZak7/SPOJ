#include <vector>
#include <iostream>

int main() 
{
    int n, q;
    std::cin >> n >> q;
    std::vector<int> cups(n);
    for (int number = 0; number < n; ++number)
        cups[number] = number + 1;
    for (int i = 0; i < q; ++i) 
    {
        int j, k;
        std::cin >> j >> k;
        std::swap(cups[j - 1], cups[k - 1]);
    }
    for (int i = 0; i < n; ++i)
        std::cout << cups[i] << ' ';
    std::cout << '\n';
    return 0;
}