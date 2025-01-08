#include <vector>
#include <iostream>

void gray(int n, std::vector<int>& tab, int k, bool direction) 
{
    if (k == n)
    {
        for (int bit : tab)
            std::cout << bit;
        std::cout << '\n';
        return;
    }
    if (direction) 
    {
        tab[k] = 0;
        gray(n, tab, k + 1, true);
        tab[k] = 1;
        gray(n, tab, k + 1, false);
    } 
    else 
    {
        tab[k] = 1;
        gray(n, tab, k + 1, true);
        tab[k] = 0;
        gray(n, tab, k + 1, false);
    }
}

int main() 
{
    int t, n;
    std::cin >> t;
    while (t--) 
    {
        std::cin >> n;
        std::vector<int> tab(n);
        gray(n, tab, 0, true);
        if (t > 0)
            std::cout << '\n';
    }
    return 0;
}