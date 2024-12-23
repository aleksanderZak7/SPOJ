#include <string>
#include <vector>
#include <iostream>

std::pair<int, int> chessPositionToCoordinates(const std::string& pos) 
{
    int x = pos[0] - 'a' + 1;
    int y = pos[1] - '0';
    return {x, y};
}

std::string isValidMove(const std::string& pos1, const std::string& pos2) 
{
    std::vector<std::pair<int, int>> knight_moves = { {2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2} };
    auto [x1, y1] = chessPositionToCoordinates(pos1);
    auto [x2, y2] = chessPositionToCoordinates(pos2);
    for (const auto& [dx, dy] : knight_moves)
        if (x1 + dx == x2 && y1 + dy == y2)
            return "TAK";
    return "NIE";
}

int main() 
{
    std::string knight1, knight2;
    std::cin >> knight1 >> knight2;
    std::cout << isValidMove(knight1, knight2) << '\n';
    return 0;
}