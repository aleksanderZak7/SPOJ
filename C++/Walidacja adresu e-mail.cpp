#include <string>
#include <cctype>
#include <iostream>

bool isValidEmail(const std::string& email) 
{
    size_t atPos = email.find('@');
    if (atPos == std::string::npos || email.find('@', atPos + 1) != std::string::npos)
        return false;
    std::string part1 = email.substr(0, atPos);
    if (part1.length() < 1 || part1.length() > 20)
        return false;
    if (part1.front() == '.' || part1.back() == '.')
        return false;
    for (size_t i = 0; i < part1.length(); ++i) 
    {
        char c = part1[i];
        if (!std::isalnum(c) && c != '.' && c != '_')
            return false;
        if (i > 0 && part1[i] == '.' && part1[i - 1] == '.')
            return false;
    }
    std::string domain = email.substr(atPos + 1);
    size_t lastDot = domain.rfind('.');
    if (lastDot == std::string::npos || lastDot == 0 || lastDot == domain.length() - 1)
        return false;
    std::string part3 = domain.substr(lastDot + 1);
    if (part3.length() < 2 || part3.length() > 3)
        return false;
    for (char c : part3) 
    {
        if (!std::isalpha(c))
            return false;
    }
    std::string part2 = domain.substr(0, lastDot);
    if (part2.length() < 1 || part2.length() > 20)
        return false;
    if (part2.front() == '.' || part2.back() == '.')
        return false;
    for (size_t i = 0; i < part2.length(); ++i) 
    {
        char c = part2[i];
        if (!std::isalnum(c) && c != '.' && c != '_')
            return false;
        if (i > 0 && part2[i] == '.' && part2[i - 1] == '.')
            return false;
    }
    return true;
}

int main() 
{
    int t;
    std::string email;
    std::cin >> t;
    std::cin.ignore();
    for (int i = 0; i < t; ++i) 
    {
        std::getline(std::cin, email);
        std::cout << (isValidEmail(email) ? "Tak\n" : "Nie\n");
    }
    return 0;
}