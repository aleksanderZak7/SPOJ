#include <string>
#include <iostream>
#include <unordered_map>

int main() 
{
    std::unordered_map<std::string, std::string> trigraphs =
    {
        {"??=", "#"},
        {"??/", "\\"},
        {"??'", "^"},
        {"??(", "["},
        {"??)", "]"},
        {"??!", "|"},
        {"??<", "{"},
        {"??>", "}"},
        {"??-", "~"}
    };
    std::string line;
    while (std::getline(std::cin, line)) 
    {
        for (const auto& trig : trigraphs) 
        {
            size_t pos = 0;
            while ((pos = line.find(trig.first, pos)) != std::string::npos) 
            {
                line.replace(pos, trig.first.length(), trig.second);
                pos += trig.second.length();
            }
        }
        std::cout << line << '\n;
    }
    return 0;
}
