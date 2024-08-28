#include <iostream>
#include <string>

int main()
{
    int C;
    std::string word;
    std::cin >> C;
    for(int i = 0; i < C; i++)
    {
        std::cin >> word;
        int repeating = 1;
        for (int j = 1; j <= word.length(); j++)
        {
            if(word[j] != word[j-1])
            {
                if(repeating > 2)
                    std::cout << word[j-1] << repeating;
                else if (repeating == 2)
                    std::cout << word[j-1] << word[j-1];
                else
                    std::cout << word[j-1];
                repeating = 1;
            }
            else
                repeating++;
        }
        std::cout << '\n';
    }
    return 0;
}