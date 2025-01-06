#include <string>
#include <iostream>

int main() 
{
    int x, y;
    std::cin >> x >> y;
    for (int i = x; i <= y; i++) 
    {
        if (i % 6 == 0)
            std::cout << "ab";
        else if (i % 2 == 0)
            std::cout << 'a';
        else if (i % 3 == 0)
            std::cout << 'b';
    }
    return 0;
}