#include <string>
#include <iostream>

void gronsfeld(std::string& mode, std::string& k, std::string& text) 
{
    int keyLength = k.length();
    int n = text.length();
    for (int i = 0; i < n; i++) 
    {
        int shift = k[i % keyLength] - '0';
        if (mode == "SZYFRUJ")
            text[i] = 'A' + (text[i] - 'A' + shift) % 26;
        else
            text[i] = 'A' + (text[i] - 'A' - shift + 26) % 26;
    }
    std::cout << text << '\n';
}

int main() 
{
    std::string mode, k, text;
    std::cin >> mode >> k >> text;
    gronsfeld(mode, k, text);
    return 0;
}