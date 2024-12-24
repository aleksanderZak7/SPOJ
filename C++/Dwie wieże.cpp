#include <string>
#include <iostream>

int main() 
{
    std::string rook1, rook2;
    std::cin >> rook1 >> rook2;
    std::cout << (rook1[0] == rook2[0] || rook1[1] == rook2[1] ? "TAK" : "NIE");
    return 0;
}