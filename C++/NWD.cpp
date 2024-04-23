#include <iostream>

int nwd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() 
{
    int t, a, b;
    std::cin >> t;
    for (int i = 0; i < t; i++) 
    {
        std::cin >> a >> b;
        std::cout << nwd(a, b) << '\n';
    }
    return 0;
}