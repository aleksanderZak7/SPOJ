#include <iostream>
#include <algorithm>

long long int newtonAlgorithm(int n, int k) 
{
    if (k == 0 || k == n)
        return 1;
    long long int result = 1;
    int minK = std::min(k, n - k);
    for (int i = 0; i < minK; i++) 
    {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main() 
{
    int T, n, k;
    std::cin >> T;
    while(T--)
    {
        std::cin >> n >> k;
        std::cout << newtonAlgorithm(n, k) << '\n';
    }
    return 0;
}
