#include <string>
#include <cstdlib>
#include <iostream>

int validate_form(const std::string& line)
{
    std::string name, surname, date;
    int index = 6;
    while (line[index] != ';')
    {
        name += line[index];
        index++;
    }
    index += 12;
    while (line[index] != ';')
    {
        surname += line[index];
        index++;
    }
    index += 12;
    date = line.substr(index);
    if (name.empty() || name[0] < 'A' || name[0] > 'Z')
        return 0;
    for (int i = 1; i < name.length(); i++)
    {
        if (name[i] < 'a' || name[i] > 'z')
            return 0;
    }
    if (surname.empty() || surname[0] < 'A' || surname[0] > 'Z')
        return 1;
    for (int i = 1; i < surname.length(); i++)
    {
        if (surname[i] < 'a' || surname[i] > 'z')
            return 1;
    }
    for (int i = 0; i < date.length(); i++)
    {
        if (i == 4 || i == 7)
            continue;
        if (date[i] < '0' || date[i] > '9')
            return 2;
    }
    std::string year_str = date.substr(0, 4);
    std::string month_str = date.substr(5, 2);
    std::string day_str = date.substr(8, 2);
    int year = std::atoi(year_str.c_str());
    int month = std::atoi(month_str.c_str());
    int day = std::atoi(day_str.c_str());
    if (year < 1900 || year > 2000 || month < 1 || month > 12 || day < 1 || day > 31)
        return 2;
    return 3;
}

int main()
{
    std::string line;
    while (std::getline(std::cin, line))
    {
        std::cout << validate_form(line) << '\n';
    }
    return 0;
}