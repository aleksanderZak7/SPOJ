#include <vector>
#include <iostream>

int main() 
{
    int n, x;
    char condition;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; i++)
        std::cin >> numbers[i];
    std::cin >> condition >> x;
    if (condition == '>')
    {
        for (int i = 0; i < n; i++)
            if (numbers[i] > x)
                std::cout << numbers[i] << '\n';
    }
    else if (condition == '<')
    {
        for (int i = 0; i < n; i++)
            if (numbers[i] < x)
                std::cout << numbers[i] << '\n';
    }
    return 0;
}
