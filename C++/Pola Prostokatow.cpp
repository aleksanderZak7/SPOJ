#include <iostream>
#include <algorithm>

int calculate_area(int x1, int y1, int x2, int y2) 
{
    return (x2 - x1) * (y2 - y1);
}

int intersection_area(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) 
{
    int ix1 = std::max(x1, x3);
    int iy1 = std::max(y1, y3);
    int ix2 = std::min(x2, x4);
    int iy2 = std::min(y2, y4);
    if (ix1 < ix2 && iy1 < iy2)
        return calculate_area(ix1, iy1, ix2, iy2);
    else
        return 0;
}

int main() 
{
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    std::cin >> x1 >> y1 >> x2 >> y2;
    std::cin >> x3 >> y3 >> x4 >> y4;
    int area1 = calculate_area(x1, y1, x2, y2);
    int area2 = calculate_area(x3, y3, x4, y4);
    int inter_area = intersection_area(x1, y1, x2, y2, x3, y3, x4, y4);
    std::cout << area1 + area2 - inter_area << '\n';
    return 0;
}
