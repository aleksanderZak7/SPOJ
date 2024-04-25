#include <vector>
#include <iostream>

int main() 
{
    char operation;
    int number1, number2, value;
    std::vector<int> registers(10, 0);
    while (std::cin >> operation) 
    {
        if (operation == 'z') 
        {
            std::cin >> number1 >> value;
            registers[number1] = value;
        }
        else 
        {
            std::cin >> number1 >> number2;
            int result;
            switch (operation) 
            {
            case '+':
                result = registers[number1] + registers[number2];
                break;
            case '-':
                result = registers[number1] - registers[number2];
                break;
            case '*':
                result = registers[number1] * registers[number2];
                break;
            case '/':
                result = registers[number1] / registers[number2];
                break;
            case '%':
                result = registers[number1] % registers[number2];
                break;
            }
            std::cout << result << '\n';
        }
    }
    return 0;
}
