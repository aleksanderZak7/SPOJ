#include <string>
#include <iostream>

int main() 
{
    int k, maxDepth = 0, currentDepth = 0;
    std::cin >> k;
    while(k--)
    {
        std::string line;
        std::cin >> line;
        if (line == "for") 
        {
            currentDepth++;
            if (currentDepth > maxDepth) 
                maxDepth = currentDepth;
        } 
        else if (line == "end")
            currentDepth--;
    }
    if (maxDepth == 0)
       std::cout << "O(1)";
    else if (maxDepth == 1)
        std::cout << "O(n)";
    else
        std::cout << "O(n^" + std::to_string(maxDepth) + ")";
    return 0;
}