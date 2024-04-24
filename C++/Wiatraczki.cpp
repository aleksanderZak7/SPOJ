#include <iostream>

std::string generateWindmill(int& r) 
{
    std::string Windmill = "";
    if (r > 0) 
    {
        for (int i = 0; i < r; i++) 
        {
            for (int j = 0; j < r * 2; j++) 
            {
                if (j < r && j > i)
                    Windmill += '.';
                else if (j - r * 2 + i >= 0)
                    Windmill += '.';
                else
                    Windmill += '*';
            }
            Windmill += '\n';
        }
        for (int i = 0; i < r; i++) 
        {
            for (int j = 0; j < r * 2; j++) 
            {
                if (j < r && j > i)
                    Windmill += '.';
                else if (j >= r && -1 * (r - j) < i)
                    Windmill += '.';
                else
                    Windmill += '*';
            }
            Windmill += '\n';
        }
    }
    else 
    {
        r *= -1;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < r * 2; j++)
            {
                if (j < i)
                    Windmill += '.';
                else if (j >= r && j + i + 1 < r * 2)
                    Windmill += '.';
                else
                    Windmill += '*';
            }
            Windmill += '\n';
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < r * 2; j++) 
            {
                if (j >= r - i && j < r)
                    Windmill += '.';
                else if (j >= r && j > r + i)
                    Windmill += '.';
                else
                    Windmill += '*';
            }
            Windmill += '\n';
        }
    }
    return Windmill;
}

int main() 
{
    int r;
    while (true) 
    {
        std::cin >> r;
        if (r == 0)
            break;
        std::cout << generateWindmill(r);
    }
    return 0;
}