#include <iostream>

int main() 
{
    char command;
    int stack[10], index = -1, number;
    while (std::cin >> command) 
    {
        if (command == '+') 
        {
            index++;
            if (index < 10) 
            {
                std::cin >> number;
                stack[index] = number;
                std::cout << ":)\n";
            }
            else 
            {
                std::cout << ":(\n";
                index = 9;
            }
        }
        else if (command == '-') 
        {
            if (index >= 0)
            {
                std::cout << stack[index] << '\n';
                index--; 
            }
            else
                std::cout << ":(\n";
        }
    }
    return 0;
}
