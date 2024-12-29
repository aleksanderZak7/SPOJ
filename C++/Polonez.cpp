#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

int main() 
{
    int a, b, c, woman = 0, man = 0;
    std::cin >> a >> b >> c;
    std::vector<std::string> class3a(a), class3b(b), class4j(c);
    for (std::string &name : class3a) 
        std::cin >> name;
    for (std::string &name : class3b) 
        std::cin >> name;
    for (std::string &name : class4j) 
        std::cin >> name;
    auto count_gender = [&](const std::vector<std::string> &names)
    {
        for (const std::string &name : names) 
        {
            if (name.back() == 'a') 
                woman++;
            else 
                man++;
        }
    };
    count_gender(class3a);
    count_gender(class3b);
    count_gender(class4j);
    std::cout << std::min(woman, man) << '\n';
    return 0;
}