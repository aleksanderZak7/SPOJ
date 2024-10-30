#include <cmath>
#include <iostream>
#include <algorithm>

std::string triangleType(int &a, int &b, int &c)
{
    int sides[3] = {a, b, c};
    std::sort(sides, sides + 3);
    a = sides[0];
    b = sides[1];
    c = sides[2];
    if (a + b <= c)
        return "brak";
    int a2 = a * a, b2 = b * b, c2 = c * c;
    if (a2 + b2 == c2)
        return "prostokatny";
    else if (a2 + b2 < c2)
        return "rozwartokatny";
    return "ostrokatny";
}

int main()
{
    int a, b, c;
    while (std::cin >> a >> b >> c)
        std::cout << triangleType(a, b, c) << '\n';
    return 0;
}