#include <iostream>

int main() 
{
    int xo, yo, r, n, xn, yn;
    std::cin >> xo >> yo >> r >> n;
    int rSquared = r * r;
    while(n--)
    {
        std::cin >> xn >> yn;
        int dx = xn - xo;
        int dy = yn - yo;
        int distSquared = dx * dx + dy * dy;
        if (distSquared < rSquared)
            std::cout << "I\n";
        else if (distSquared > rSquared)
            std::cout << "O\n";
        else
            std::cout << "E\n";
    }
    return 0;
}