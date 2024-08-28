#include <cstring>
#include <iostream>

char* string_merge(char* s1, char* s2) 
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int shorterLen = (len1 < len2) ? len1 : len2;
    char* merged = new char[shorterLen * 2 + 1];
    int index = 0;
    for (int i = 0; i < shorterLen; i++) 
    {
        merged[index++] = s1[i];
        merged[index++] = s2[i];
    }
    merged[index] = '\0';
    return merged;
}

int main() {
    int t;
    std::cin >> t;
    std::cin.ignore();
    for(int i = 0; i < t; i++)
    {
        char S1[1001], S2[1001];
        std::cin.getline(S1, 1001, ' ');
        std::cin.getline(S2, 1001);
        char* merged = string_merge(S1, S2);
        std::cout << merged << std::endl;
        delete[] merged;
    }
    return 0;
}