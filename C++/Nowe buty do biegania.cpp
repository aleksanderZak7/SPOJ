#include <iostream>

std::string runningShoesDecision(const int& k) 
{
    double miles = k / 1.609344;
    if (miles < 300) 
        return "NIE";
    else if (miles < 500) 
        return "SPRAWDZIMY TWOJE OBECNE BUTY";
    return "TAK";
}

int main() 
{
    int k;
    std::cin >> k;
    std::cout << runningShoesDecision(k);
    return 0;
}