#include <string>
#include <iostream>

void printPyramid(int n, const std::string& s) 
{
    int mid = n / 2;
    for (int i = mid; i >= 0; --i) 
    {
        std::string left(i, '.');
        std::string middle = s.substr(i, n - 2 * i);
        std::cout << left << middle << left << '\n';
    }
}

int main() 
{
    int n;
    std::string s;
    std::cin >> n >> s;
    printPyramid(n, s);
    return 0;
}