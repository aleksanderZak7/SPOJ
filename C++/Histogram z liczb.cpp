#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    int number;
    const int MIN = -10;
    const int MAX = 10;
    const int WIDTH = 30;
    std::vector<int> occurrences(MAX - MIN + 1, 0);
    while (std::cin >> number)
    {
        if (number >= MIN && number <= MAX)
            occurrences[number - MIN]++;
    }
    int max_occurrence = *std::max_element(occurrences.begin(), occurrences.end());
    if (max_occurrence > 0)
    {
        for (int i = MIN; i <= MAX; ++i)
        {
            std::cout << i << ":|";
            int stars_count = std::round(WIDTH * occurrences[i - MIN] / (double)max_occurrence);
            for (int j = 0; j < WIDTH; ++j)
            {
                if (j < stars_count)
                    std::cout << '*';
                else
                    std::cout << ' ';
            }
            std::cout << "|\n";
        }
    }
    return 0;
}
