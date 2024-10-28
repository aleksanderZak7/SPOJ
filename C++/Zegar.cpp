#include <vector>
#include <iostream>

int main() 
{
    int d;
    std::cin >> d;
    while (d--) 
    {
        int k;
        std::cin >> k;
        std::vector<int> clock(k);
        for (int i = 0; i < k; i++)
            std::cin >> clock[i];
        std::vector<int> bestArrangement(clock);
        int maxMatches = 0, bestShift = 0;
        for (int shift = 0; shift < k; shift++) 
        {
            int matches = 0;
            for (int i = 0; i < k; i++)
                if (clock[(i + shift) % k] == i + 1)
                    ++matches;
            if (matches > maxMatches || (matches == maxMatches && shift < bestShift)) 
            {
                maxMatches = matches;
                bestShift = shift;
            }
        }
        for (int i = 0; i < k; i++)
            std::cout << clock[(i + bestShift) % k] << (i == k - 1 ? '\n' : ' ');
    }
    return 0;
}