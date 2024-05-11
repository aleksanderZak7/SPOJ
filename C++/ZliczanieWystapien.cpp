#include <iostream>

int main() 
{
    int mainNumber, length, newNumber;
    while (std::cin >> mainNumber >> length)
    {
        int count = 0;
        for (int i = 0; i < length; i++) 
        {
            std::cin >> newNumber;
            if (newNumber == mainNumber)
                count++;
        }
        std::cout << count << '\n';
    }
    return 0;
}