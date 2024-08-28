#include <vector>
#include <iostream>

void rotateLeft(std::vector<int>& array) 
{
    int first = array[0];
    for (int i = 0; i < array.size() - 1; i++)
        array[i] = array[i + 1];
    array[array.size() - 1] = first;
}

int main() 
{
    int t, n;
    std::cin >> t;
    for (int i = 0; i < t; i++) 
    {
        std::cin >> n;
        std::vector<int> array(n);
        for (int j = 0; j < n; j++)
            std::cin >> array[j];
        rotateLeft(array);
        for (int& number : array)
            std::cout << number << ' ';
        std::cout << '\n';
    }
    return 0;
}
