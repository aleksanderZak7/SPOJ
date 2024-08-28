#include <vector>
#include <string>
#include <iostream>

struct Person 
{
    std::string name;
    int weight;
    int height;
};

double calculateBMI(int weight, int height) 
{
    return static_cast<double>(weight) / ((height / 100.0) * (height / 100.0));
}

std::string classifyBMI(double bmi) 
{
    if (bmi < 18.5)
        return "niedowaga";
    else if (bmi < 25.0)
        return "wartosc prawidlowa";
    else
        return "nadwaga";
}

int main() 
{
    int t;
    std::cin >> t;
    std::vector<Person> people(t);
    for (int i = 0; i < t; i++)
        std::cin >> people[i].name >> people[i].weight >> people[i].height;
    std::vector<std::string> categories[3];
    for (const Person& person : people) 
    {
        double bmi = calculateBMI(person.weight, person.height);
        std::string category = classifyBMI(bmi);
        if (category == "niedowaga")
            categories[0].push_back(person.name);
        else if (category == "wartosc prawidlowa")
            categories[1].push_back(person.name);
        else
            categories[2].push_back(person.name);
    }
    std::cout << "niedowaga\n";
    for (const auto& name : categories[0])
        std::cout << name << '\n';
    std::cout << "wartosc prawidlowa\n";
    for (const auto& name : categories[1])
        std::cout << name << '\n';
    std::cout << "nadwaga\n";
    for (const auto& name : categories[2])
        std::cout << name << '\n';
    return 0;
}
