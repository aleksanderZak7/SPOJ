#include <iostream>
#include <string>

const std::string units[] = {"", "jeden", "dwa", "trzy", "cztery", "piec", "szesc", "siedem", "osiem", "dziewiec"};
const std::string teens[] = {"dziesiec", "jedenascie", "dwanascie", "trzynascie", "czternascie", "pietnascie", "szesnascie", "siedemnascie", "osiemnascie", "dziewietnascie"};
const std::string tens[] = {"", "", "dwadziescia", "trzydziesci", "czterdziesci", "piecdziesiat", "szescdziesiat", "siedemdziesiat", "osiemdziesiat", "dziewiecdziesiat"};
const std::string hundreds[] = {"", "sto", "dwiescie", "trzysta", "czterysta", "piecset", "szescset", "siedemset", "osiemset", "dziewiecset"};
const std::string scales[] = { "", "tys.", "mln.", "mld.", "bln." };

std::string numberToText(std::string& number) 
{
    int length_number = number.length();
    std::string text = "";
    int i = 0;
    while (i < length_number) 
    {
        if ((length_number - i) % 3 == 0 && i != 0) 
        {
            if (((i > 0) && number[i - 1] != '0') || ((i > 1) && number[i - 2] != '0') || ((i > 2) && number[i - 3] != '0')) 
            {
                if (!text.empty())
                    text += " ";
                text += scales[(length_number - i) / 3];
            }
        }
        if ((length_number - i) % 3 == 0) 
        {
            if (i != 0 && number[i] != '0')
                text += " ";
            text += hundreds[number[i] - '0'];
        }
        else if ((length_number - i) % 3 == 2) 
        {
            if (number[i] != '1') 
            {
                if (i != 0 && number[i] != '0')
                    text += " ";
                text += tens[number[i] - '0'];
            }
            else 
            {
                if (i != 0)
                    text += " ";
                text += teens[number[i + 1] - '0'];
                ++i;
            }
        }
        else if ((length_number - i) % 3 == 1) 
        {
            if (i != 0 && number[i] != '0')
                text += " ";
            text += units[number[i] - '0'];
        }
        ++i;
    }
    return text;
}

int main() 
{
    int t;
    std::string number;
    std::cin >> t;
    while(t--)
    {
        std::cin >> number;
        std::cout << numberToText(number) << '\n';
    }
    return 0;
}
