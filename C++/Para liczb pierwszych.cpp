#include <cmath>
#include <vector>
#include <string>
#include <iostream>

bool isPrime(int n) 
{
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i)
        if (n % i == 0) return false;
    return true;
}

std::string findPrimeSum(int& s) 
{
    for (int x = 2; x < s; ++x)
        if (isPrime(x) && isPrime(s - x))
            return "TAK " + std::to_string(x) + ' ' + std::to_string(s - x);
    return "NIE";
}

int main() 
{
    int t, s;
    std::cin >> t;
    std::vector<std::string> results;
    while (t--) 
    {
        std::cin >> s;
        std::cout << (findPrimeSum(s)) << '\n';
    }
    return 0;
}