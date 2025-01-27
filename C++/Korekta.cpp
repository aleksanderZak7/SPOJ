#include <iostream>

int main() 
{
    int d, stas_win, stas_loss, wies_win, wies_loss, grz_win, grz_loss;
    std::cin >> d;
    while (d--) 
    {
        std::cin >> stas_win >> stas_loss >> wies_win >> wies_loss >> grz_win >> grz_loss;
        int total_games = stas_win + stas_loss;
        std::cout << (stas_loss + wies_loss + grz_loss) - total_games << ' ' << (stas_win + wies_win + grz_win) - total_games << '\n';
    }
    return 0;
}