#include <string>
#include <iostream>

int main() 
{
    std::string gesture;
    std::cin >> gesture;
    if (gesture == "kamien")
        std::cout << "papier\n";
    else if (gesture == "nozyce")
        std::cout << "kamien\n";
    else if (gesture == "papier")
        std::cout << "nozyce";
    else
        std::cout << "przegrales\n";
    return 0;
}
