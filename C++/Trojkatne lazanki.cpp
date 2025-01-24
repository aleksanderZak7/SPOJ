#include <iostream>
#include <unordered_set>

int main() 
{
    int n, a, b, c;
    bool success = false;
    std::cin >> n;
    std::unordered_set<long long> triangleSizes;
    for (int i = 0; i < n; i++) 
    {
        std::cin >> a >> b >> c;
        int p = a + b + c;
        long long s = static_cast<long long>(p) * (p - a) * (p - b) * (p - c);
        if (triangleSizes.find(s) != triangleSizes.end()) 
            success = true;
        triangleSizes.insert(s);
    }
    std::cout << (success ? "Tak" : "Nie");
    return 0;
}