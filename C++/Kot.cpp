#include <string>
#include <iostream>

int main() 
{
    int i = 0, count = 0;
    std::string s;
    std::cin >> s;
    while (i < s.length()) 
    {
        int k_index = -1, o_index = -1, t_index = -1;
        for (int j = i; j < s.length(); ++j) 
        {
            if (s[j] == 'k' && k_index == -1)
                k_index = j;
            else if (s[j] == 'o' && k_index != -1 && o_index == -1)
                o_index = j;
            else if (s[j] == 't' && o_index != -1 && t_index == -1)
            {
                t_index = j;
                break;
            }
        }
        if (k_index != -1 && o_index != -1 && t_index != -1) 
        {
            ++count;
            i = t_index + 1;
        } 
        else
            break;
    }
    std::cout << (count == 0 ? "NIE" : std::to_string(count));
    return 0;
}