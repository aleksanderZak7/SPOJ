#include <iostream>

int count_digits(long long n, int p) 
{
    if (n == 0) 
        return 1;
    int length = 0;
    while (n > 0) 
    {
        n /= p;
        length++;
    }
    return length;
}

int main() 
{
    int t, p;
    long long n;
    std::cin >> t;
    while (t--) 
    {
        std::cin >> n >> p;
        std::cout << count_digits(n, p) << '\n';
    }
}