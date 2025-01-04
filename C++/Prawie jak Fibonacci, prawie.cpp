#include <vector>
#include <iostream>

int main() 
{
    int n, count = 0;
    std::cin >> n;
    std::vector<int> sequence(n);
    for (int i = 0; i < n; ++i)
        std::cin >> sequence[i];
    for (int i = 2; i < n; ++i) 
        if (sequence[i] == sequence[i - 1] + sequence[i - 2])
            ++count;
    std::cout << count;
    return 0;
}