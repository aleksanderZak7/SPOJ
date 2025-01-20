#include <iostream>

int factorialInRange(const int& a,const int& b) 
{
    int n = 0;
    int count = 0;
    long long factorial = 1;
    while (factorial <= b) 
    {
        if (a <= factorial && factorial <= b)
            count++;
        ++n;
        if (n > 0)
            factorial *= n;
    }
    return count;
}

int main() 
{
    int a, b;
    std::cin >> a >> b;
    std::cout << factorialInRange(a, b); 
    return 0;
}