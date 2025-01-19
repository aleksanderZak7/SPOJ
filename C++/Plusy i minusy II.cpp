#include <vector>
#include <string>
#include <iostream>

std::string calculateGrades(const std::string& activity) 
{
    std::vector<char> stack;
    std::vector<std::string> grades;
    for (char c : activity) 
    {
        if (!stack.empty() && stack.back() != c) 
            stack.pop_back();
        else 
        {
            stack.push_back(c);
            if (stack.size() == 3) 
            {
                grades.push_back(c == '+' ? "5" : "1");
                stack.clear();
            }
        }
    }
    if (grades.empty())
        return "BRAK";
    else 
    {
        std::string result;
        for (const auto& grade : grades)
            result += grade + ' ';
        result.pop_back();
        return result;
    }
}

int main() 
{
    std::string activity;
    std::getline(std::cin, activity);
    std::cout << calculateGrades(activity);
    return 0;
}