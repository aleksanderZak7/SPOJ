#include <string>
#include <iostream>

int main() 
{
    std::string input;
    std::cin >> input;
    std::cout << (input == "2023" ? "tak" : "nie");
    return 0;
}