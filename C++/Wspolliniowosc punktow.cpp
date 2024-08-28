#include <iostream>

bool areCollinear(int& x1, int& y1, int& x2, int& y2, int& x3, int& y3) 
{
    int area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    return area == 0;
}

int main() 
{
    int t, x1, y1, x2, y2, x3, y3;
    std::cin >> t;
    while (t--) 
    {
        std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if (areCollinear(x1, y1, x2, y2, x3, y3))
            std::cout << "TAK\n";
        else
            std::cout << "NIE\n";
    }
    return 0;
}