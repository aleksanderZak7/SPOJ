#include <vector>
#include <iostream>
#include <algorithm>

struct Point 
{
    std::string name;
    int x, y, distance;

    Point(std::string n, int xx, int yy) : name(n), x(xx), y(yy) { distance = x * x + y * y; }

    bool operator<(const Point& other) const { return distance < other.distance; }
};

int main() 
{
    std::string name;
    int t, x, y;
    std::cin >> t;
    while(t--)
    {
        int n;
        std::cin >> n;
        std::vector<Point> points;
        for (int i = 0; i < n; i++) 
        {
            std::cin >> name >> x >> y;
            points.emplace_back(name, x, y);
        }
        std::sort(points.begin(), points.end());
        for (Point& point : points)
            std::cout << point.name << ' ' << point.x << ' ' << point.y << '\n';
    }
    return 0;
}
