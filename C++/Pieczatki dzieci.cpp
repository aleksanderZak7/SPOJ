#include <string>
#include <vector>
#include <iostream>

void increment(std::string& number, short targetOfFives, short& numberOfFives, std::vector<bool>& modifiedDigits, std::string::reverse_iterator current)
{
    if (*current == '9' || (*current >= '5' && modifiedDigits.at(current - number.rbegin())))
    {
        if (current == --number.rend())
        {
            number = "0" + number;
            modifiedDigits[modifiedDigits.size() - number.length() + 1] = true;
            current = ----number.rend();
        }
        increment(number, targetOfFives, numberOfFives, modifiedDigits, ++current);
    }
    else
    {
        if (!modifiedDigits.at(current - number.rbegin()))
        {
            modifiedDigits.at(current - number.rbegin()) = true;
            ++*current;
            if (*current == '6')
                --numberOfFives;
            else if (*current == '5')
                ++numberOfFives;
            for (std::string::reverse_iterator rit = number.rbegin(); rit != current; ++rit)
            {
                if (*rit != '5')
                    ++numberOfFives;
                *rit = '5';
            }
            for (std::string::iterator it = (current.base()); it != number.end() && numberOfFives > targetOfFives; ++it)
            {
                --numberOfFives;
                *it = '0';
            }
        }
        else
        {
            if (*current < '5')
            {
                *current = '5';
                ++numberOfFives;
            }
        }
    }
}

int main()
{
    std::string number;
    short targetOfFives, numberOfFives = 0;
    std::vector<bool> modifiedDigits(20);
    std::fill(modifiedDigits.begin(), modifiedDigits.end(), false);
    std::vector<bool>::reverse_iterator touchedRit = modifiedDigits.rbegin();
    std::cin >> number >> targetOfFives;
    for (std::string::iterator it = number.begin(); it != number.end(); ++it)
        if (*it == '5')
            ++numberOfFives;
    increment(number, targetOfFives, numberOfFives, modifiedDigits, number.rbegin());
    while (numberOfFives != targetOfFives)
    {
        std::string::reverse_iterator rit = number.rbegin();
        touchedRit = modifiedDigits.rbegin();
        increment(number, targetOfFives, numberOfFives, modifiedDigits, rit);
    }
    std::cout << number << '\n';
    return 0;
}