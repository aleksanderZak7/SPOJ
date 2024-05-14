#include <iostream>

int main() 
{
    int a1, b1, c1, a2, b2, c2;
    std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if ((a1 <= a2 && b1 <= b2 && c1 <= c2) ||
        (a1 <= a2 && b1 <= c2 && c1 <= b2) ||
        (a1 <= b2 && b1 <= a2 && c1 <= c2) ||
        (a1 <= b2 && b1 <= c2 && c1 <= a2) ||
        (a1 <= c2 && b1 <= a2 && c1 <= b2) ||
        (a1 <= c2 && b1 <= b2 && c1 <= a2) ||
        (a1 >= a2 && b1 >= b2 && c1 >= c2) ||
        (a1 >= a2 && b1 >= c2 && c1 >= b2) ||
        (a1 >= b2 && b1 >= a2 && c1 >= c2) ||
        (a1 >= b2 && b1 >= c2 && c1 >= a2) ||
        (a1 >= c2 && b1 >= a2 && c1 >= b2) ||
        (a1 >= c2 && b1 >= b2 && c1 >= a2))
        std::cout << "tak\n";
    else
        std::cout << "nie\n";
    return 0;
}
