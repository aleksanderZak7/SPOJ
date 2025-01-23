#include <vector>
#include <string>
#include <iostream>

int main() 
{
    int k, n;
    std::cin >> k >> n;
    long long a_dec = 0;
    long long b_dec = 0;
    std::vector<int> a(k);
    std::vector<int> b(n);
    for (int i = 0; i < k; ++i)
        std::cin >> a[i];
    for (int i = 0; i < n; ++i)
        std::cin >> b[i];
    for (int bit : a)
        a_dec = (a_dec << 1) | bit;
    for (int bit : b)
        b_dec = (b_dec << 1) | bit;
    long long sum_dec = a_dec + b_dec;
    if (sum_dec == 0)
        std::cout << 0;
    else 
    {
        std::string sum_bin = "";
        while (sum_dec > 0) 
        {
            sum_bin = std::to_string(sum_dec % 2) + sum_bin;
            sum_dec /= 2;
        }
        std::cout << sum_bin;
    }
    return 0;
}