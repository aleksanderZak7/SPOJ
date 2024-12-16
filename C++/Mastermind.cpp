#include <array>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>

std::vector<std::array<int, 4>> generate_combinations() 
{
    std::vector<std::array<int, 4>> combinations;
    for (int a = 1; a <= 6; ++a)
        for (int b = 1; b <= 6; ++b)
            for (int c = 1; c <= 6; ++c)
                for (int d = 1; d <= 6; ++d)
                    combinations.push_back({a, b, c, d});
    return combinations;
}

std::array<int, 4> evaluate_guess(const std::array<int, 4> &guess, const std::array<int, 4> &code) 
{
    std::array<int, 4> feedback = {-1, -1, -1, -1};
    std::vector<bool> used_code(4, false), used_guess(4, false);
    for (int i = 0; i < 4; i++) 
    {
        if (guess[i] == code[i]) 
        {
            feedback[i] = 1;
            used_code[i] = true;
            used_guess[i] = true;
        }
    }

    for (int i = 0; i < 4; i++) 
    {
        if (feedback[i] == -1) 
        {
            for (int j = 0; j < 4; j++) 
            {
                if (!used_code[j] && !used_guess[i] && guess[i] == code[j]) 
                {
                    feedback[i] = 0;
                    used_code[j] = true;
                    break;
                }
            }
        }
    }
    return feedback;
}

int main() 
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout.precision(2);
    auto possible_codes = generate_combinations();
    int attempts = 0;
    std::array<int, 4> feedback;
    while (attempts < 10) 
    {
        auto guess = possible_codes[0];
        for (int i = 0; i < 4; i++)
            std::cout << guess[i] << ' ';
        std::cout << '\n';
        std::cout.flush();
        for (int i = 0; i < 4; ++i)
            std::cin >> feedback[i];
        if (feedback == std::array<int, 4>{1, 1, 1, 1})
            break;
        std::vector<std::array<int, 4>> new_possible_codes;
        for (const auto &code : possible_codes) 
        {
            if (evaluate_guess(guess, code) == feedback)
                new_possible_codes.push_back(code);
        }
        possible_codes = std::move(new_possible_codes);
        ++attempts;
    }
    return 0;
}