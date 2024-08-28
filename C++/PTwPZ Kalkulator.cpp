#include <iostream>

int evaluateExpression(const std::string& expression)
{
    int result = 0, number;
    char sign = '+';
    for (char c : expression)
    {
        if (isdigit(c))
        {
            number = (int)(c - '0');
        }
        else if (c == '+' || c == '-')
        {
            if (sign == '+')
                result += number;
            else
                result -= number;
            sign = c;
        }
    }
    if (sign == '+')
        result += number;
    else
        result -= number;
    return result;
}

int main()
{
    int N;
    std::cin >> N;
    std::cin.ignore();
    while (N--)
    {
        std::string expression;
        std::getline(std::cin, expression);
        std::cout << evaluateExpression(expression) << '\n';
    }
    return 0;
}
