#include <string>
#include <iostream>

int main() 
{
    int t, k;
    std::string sequence;
    std::cin >> t;
    while(t--)
    {
        std::cin >> sequence;
        k = sequence.size() / 2;
        for (int j = 0; j < k; j++) 
            std::cout << sequence[j];
        std::cout << '\n';
    }
    return 0;
}
