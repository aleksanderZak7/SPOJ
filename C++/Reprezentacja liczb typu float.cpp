#include <sstream>
#include <iostream>

union FloatBytes 
{
    float value;
    struct Bytes 
    {
        int a : 8,
            b : 8,
            c : 8,
            d : 8;
    } bytes;
};

int main() 
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while (t--) 
    {
        FloatBytes number;
        std::cin >> number.value;
        std::ostringstream aa, bb, cc, dd;
        aa << std::hex << number.bytes.a;
        bb << std::hex << number.bytes.b;
        cc << std::hex << number.bytes.c;
        dd << std::hex << number.bytes.d;
        std::string tmp;
        tmp = dd.str();
        while (tmp[0] == 'f' && tmp.length() > 2)
            tmp.erase(0, 1);
        std::cout << tmp << ' ';
        tmp = cc.str();
        while (tmp[0] == 'f' && tmp.length() > 2)
            tmp.erase(0, 1);
        std::cout << tmp << ' ';
        tmp = bb.str();
        while (tmp[0] == 'f' && tmp.length() > 2)
            tmp.erase(0, 1);
        std::cout << tmp << ' ';
        tmp = aa.str();
        while (tmp[0] == 'f' && tmp.length() > 2)
            tmp.erase(0, 1);
        std::cout << tmp << '\n';
    }
    return 0;
}
