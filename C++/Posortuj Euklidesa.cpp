#include <vector>
#include <iostream>
#include <algorithm>

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool sortKey(int a, int b) 
{
    int gcdA = gcd(a, 1260);
    int gcdB = gcd(b, 1260);
    if (gcdA == gcdB)
        return a < b;
    return gcdA > gcdB;
}

int main() 
{
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
        std::cin >> numbers[i];
    sort(numbers.begin(), numbers.end(), sortKey);
    for (int i = 0; i < n; ++i) 
        std::cout << numbers[i] << ' ';
    return 0;
}