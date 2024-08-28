#include <iostream>

int main() 
{
    bool output = true;
    bool fortyTwo = false; 
    int lifes = 3, number;
    while (std::cin >> number)
    {
        if (output)
            std::cout << number << '\n';
        else
            break;
        if (number != 42)
            fortyTwo = true;
        else
        {
            if (fortyTwo) 
            {
                fortyTwo = false;
                lifes--;
                if (lifes == 0) 
                    output = false;
            }
        }
    }
    return 0;
}
