#include <string>
#include <iostream>

int main() 
{
    std::string darek, jas, marek;
    std::cin >> darek >> jas >> marek;
    int possibleCorrectAnswers = 0;
    for (size_t i = 0; i < darek.size(); ++i) 
    {
        if (jas[i] != darek[i] && marek[i] != darek[i])
            possibleCorrectAnswers += (jas[i] == marek[i]) ? 2 : 1;
        else if (jas[i] != darek[i] || marek[i] != darek[i])
            possibleCorrectAnswers += 1;
    }
    std::cout << possibleCorrectAnswers;
    return 0;
}