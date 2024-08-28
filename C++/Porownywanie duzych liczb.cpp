#include <string>
#include <sstream>
#include <iostream>

int main() 
{
    std::string line;
    int result;
    while (std::getline(std::cin, line)) 
    {
        std::istringstream iss(line);
        std::string data[3];
        for (int i = 0; i < 3; i++)
            iss >> data[i];
        if (data[1] == "==") 
        {
            if (data[0] == data[2])
                result = 1;
            else
                result = 0;
        }
        else if (data[1] == "!=") 
        {
            if (data[0] != data[2])
                result = 1;
            else
                result = 0;
        }
        else if (data[1] == ">=") 
        {
            if (data[0].length() > data[2].length())
                result = 1;
            else if (data[0].length() == data[2].length()) 
            {
                bool greater = false;
                for (size_t i = 0; i < data[0].length(); i++) 
                {
                    if (data[0][i] > data[2][i]) 
                    {
                        greater = true;
                        break;
                    }
                    else if (data[0][i] < data[2][i])
                        break;
                }
                result = (greater ? 1 : 0);
            }
            else
                result = 0;
        }
        else if (data[1] == "<=") 
        {
            if (data[0].length() < data[2].length())
                result = 1;
            else if (data[0].length() == data[2].length()) 
            {
                bool lesser = false;
                for (size_t i = 0; i < data[0].length(); i++) 
                {
                    if (data[0][i] < data[2][i]) 
                    {
                        lesser = true;
                        break;
                    }
                    else if (data[0][i] > data[2][i])
                        break;
                }
                result = (lesser ? 1 : 0);
            }
            else
                result = 0;
        }
        std::cout << result << '\n';
    }
    return 0;
}
