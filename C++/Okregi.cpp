#include <cmath>
#include <iomanip>
#include <iostream>

int main() 
{
    int d;
    std::cin >> d;
    while (d--) 
    {
        int x1, y1, r1, x2, y2, r2;
        std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        double overlap;
        if (distance >= r1 + r2)
            overlap = 0.0;
        else if (distance <= abs(r1 - r2))
            overlap = 2 * std::min(r1, r2);
        else
            overlap = r1 + r2 - distance;
        std::cout << std::fixed << std::setprecision(2) << overlap << '\n';
    }
    return 0;
}