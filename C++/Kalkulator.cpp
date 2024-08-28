#include <iostream>

int main() 
{
    char operation;
    int number1, number2;
    while (std::cin >> operation >> number1 >> number2)
    {
        int result;
        switch (operation) 
        {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            result = number1 / number2;
            break;
        case '%':
            result = number1 % number2;
            break;
        }
        std::cout << result << '\n';
    }
    return 0;
}