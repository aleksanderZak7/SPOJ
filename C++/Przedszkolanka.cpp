#include <iostream>

int NWD(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int const NWW(int a, int b) 
{ 
    return (a * b) / NWD(a, b); 
}

int main() 
{
    int N, a, b;
    std::cin >> N;
    for (int i = 0; i < N; ++i) 
    {
        std::cin >> a >> b;
        std::cout << NWW(a, b) << '\n';
    }
    return 0;
}