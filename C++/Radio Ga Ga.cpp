#include <vector>
#include <string>
#include <iostream>

int main() 
{
    int n;
    std::cin >> n;
    std::vector<std::string> syllables(n);
    for (int i = 0; i < n; i++)
        std::cin >> syllables[i];
    for (int i = 0; i < n - 1; i++) 
    {
        if (syllables[i] == "ma" && syllables[i + 1] == "ma")
        {
            std::cout << "mama";
            break;
        }
        else if (syllables[i] == "ta" && syllables[i + 1] == "ta")
        {
            std::cout << "tata";
            break;
        }
    }
    return 0;
}