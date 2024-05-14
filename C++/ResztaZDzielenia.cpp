#include <iostream>

int main() 
{
    int d, a, b;
    std::cin >> d;
    while(d--)
    {
        std::cin >> a >> b;
        int r = a % b;
        if (r < 0) 
            r += (b < 0) ? -b : b;
        std::cout << r << '\n';
    }
    return 0;
}
