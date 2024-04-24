#include <iostream>

int find_n(int s) 
{
    int n = 0;
    while (s != 1) 
    {
        if (s % 2 == 0)
            s /= 2;
        else
            s = 3 * s + 1;
        n++;
    }
    return n;
}

int main() 
{
    int t, s;
    std::cin >> t;
    for (int i = 0; i < t; i++) 
    {
        std::cin >> s;
        std::cout << find_n(s) << '\n';
    }
    return 0;
}
