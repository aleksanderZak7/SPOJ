#include <stack>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>

int evaluate_expression(const std::vector<int>& numbers, const std::vector<char>& operators)
{
    std::vector<std::string> rpn;
    std::stack<int> operand_stack;
    std::stack<char> operator_stack;
    for (int i = 0; i < operators.size(); ++i) 
    {
        rpn.push_back(std::to_string(numbers[i]));
        while (!operator_stack.empty() && (operators[i] == '+' || operators[i] == '-') && operator_stack.top() == '*') 
        {
            rpn.push_back(std::string(1, operator_stack.top()));
            operator_stack.pop();
        }
        operator_stack.push(operators[i]);
    }
    rpn.push_back(std::to_string(numbers.back()));
    while (!operator_stack.empty()) 
    {
        rpn.push_back(std::string(1, operator_stack.top()));
        operator_stack.pop();
    }
    for (const auto& token : rpn) 
    {
        if (isdigit(token[0]) || (token[0] == '-' && token.size() > 1)) 
            operand_stack.push(std::stoi(token));
        else 
        {
            int b = operand_stack.top(); operand_stack.pop();
            int a = operand_stack.top(); operand_stack.pop();
            if (token == "+") 
                operand_stack.push(a + b);
            else if (token == "-") 
                operand_stack.push(a - b);
            else if (token == "*") 
                operand_stack.push(a * b);
        }
    }
    return operand_stack.top();
}

int main() 
{
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    std::vector<char> operators(n - 1);
    for (int i = 0; i < n; ++i)
        std::cin >> numbers[i];
    for (int i = 0; i < n - 1; ++i)
        std::cin >> operators[i];
    std::cout << evaluate_expression(numbers, operators);
    return 0;
}