#include <string>
#include <vector>
#include <iostream>

std::pair<int, int> parse_side(const std::string &side)
{
    int coeff_x = 0, constant = 0;
    int sign = 1;
    std::string term;
    for (char ch : side + "+")
    {
        if (ch == '+' || ch == '-')
        {
            if (!term.empty())
            {
                if (term.back() == 'x')
                {
                    term.pop_back();
                    coeff_x += sign * (term.empty() ? 1 : stoi(term));
                }
                else
                    constant += sign * stoi(term);
                term.clear();
            }
            sign = (ch == '+' ? 1 : -1);
        }
        else
            term += ch;
    }
    return {coeff_x, constant};
}

void solve_equation(const std::string &eq)
{
    size_t eq_pos = eq.find('=');
    std::string left = eq.substr(0, eq_pos);
    std::string right = eq.substr(eq_pos + 1);
    auto [left_coeff_x, left_constant] = parse_side(left);
    auto [right_coeff_x, right_constant] = parse_side(right);
    int total_coeff_x = left_coeff_x - right_coeff_x;
    int total_constant = right_constant - left_constant;
    if (total_coeff_x == 0 || total_constant % total_coeff_x != 0)
        std::cout << "NIE\n";
    else
        std::cout << total_constant / total_coeff_x << '\n';
}

int main()
{
    int Z;
    std::string eq;
    std::cin >> Z;
    for (int i = 0; i < Z; i++)
    {
        std::cin >> eq;
        solve_equation(eq);
    }
    return 0;
}