#include <string>
#include <cstdio>
#include <iostream>

int main() 
{
    char wynik[6];
    std::string bin1, bin2, bin3, bin4;
    std::cin >> bin1 >> bin2 >> bin3 >> bin4;
    std::printf("%02d:%02d\n", std::stoi(bin1, nullptr, 2) * 10 + std::stoi(bin2, nullptr, 2), std::stoi(bin3, nullptr, 2) * 10 + std::stoi(bin4, nullptr, 2));
    return 0;
}