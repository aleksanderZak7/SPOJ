#include <iostream>

int main() 
{
    int t, c, k, w;;
    std::cin >> t;
    while(t--) 
    {
        std::cin >> c >> k >> w;
        if (c * w <= k)
            std::cout << "yes\n";
        else
            std::cout << "no\n";
    }
    return 0;
}
