#include <iostream>

int main() 
{
    int sumOfStudents = 0;
    for (int i = 0; i < 4; ++i) 
    {
        int allStudents, onlineStudents;
        std::cin >> allStudents >> onlineStudents;
        sumOfStudents += allStudents - onlineStudents;
    }
    std::cout << sumOfStudents << '\n';
    return 0;
}