#include <cmath>
#include <vector>
#include <iostream>

int main()
{
    int t, n;
    std::cin >> t;
    while (t--)
    {
        std::cin >> n;
        std::vector<int> numbers(n);
        for (int i = 0; i < n; i++)
            std::cin >> numbers[i];
        double sum = 0;
        for (int& number : numbers)
            sum += number;
        double avg = sum / n;
        int closestValue = numbers[0];
        double minDiff = std::abs(numbers[0] - avg);
        for (int& number : numbers)
        {
            double diff = std::abs(number - avg);
            if (diff < minDiff)
            {
                minDiff = diff;
                closestValue = number;
            }
        }
        std::cout << closestValue << '\n';
    }
    return 0;
}
