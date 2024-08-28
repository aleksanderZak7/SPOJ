#include <iostream>

int main()
{
    int D, L, C;
    std::cin >> D;
    while (D--)
    {
        std::cin >> L >> C;
        if (L == 1)
            std::cout << "TAK\n";
        else if (C % (L - 1) == 0)
            std::cout << "NIE\n";
        else
            std::cout << "TAK\n";
    }
    return 0;
}
