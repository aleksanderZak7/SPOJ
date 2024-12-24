#include <string>
#include <vector>
#include <iostream>

std::string encodeToDisk(const std::string& data) 
{
    std::string disk = "DDDD";
    for (char bit : data) 
    {
        char prev = disk.back();
        if (bit == '1')
            disk += (prev == 'D') ? 'G' : 'D';
        else
            disk += prev;
    }
    return disk;
}

std::string decodeFromDisk(const std::string& disk) 
{
    std::string data;
    for (size_t i = 4; i < disk.size(); ++i) 
    {
        char prev = disk[i - 1];
        char current = disk[i];
        if (prev != current)
            data += '1';
        else
            data += '0';
    }
    return data;
}

int main() 
{
    std::string data;
    std::cin >> data;
    if (data.find_first_not_of("01") == std::string::npos)
        std::cout << encodeToDisk(data) << '\n';
    else
        std::cout << decodeFromDisk(data) << '\n';
    return 0;
}