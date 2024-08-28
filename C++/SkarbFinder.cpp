#include <vector>
#include <cstdlib>
#include <iostream>

struct Instruction
{
    int direction;
    int steps;
};

int main()
{
    int D, N;
    std::cin >> D;
    for (int i = 0; i < D; i++)
    {
        std::cin >> N;
        std::vector<Instruction> instructions(N);
        int currentX = 0;
        int currentY = 0;
        for (int j = 0; j < N; j++)
        {
            std::cin >> instructions[j].direction >> instructions[j].steps;
            switch (instructions[j].direction)
            {
            case 0:
                currentY += instructions[j].steps;
                break;
            case 1:
                currentY -= instructions[j].steps;
                break;
            case 2:
                currentX -= instructions[j].steps;
                break;
            case 3:
                currentX += instructions[j].steps;
                break;
            }
        }
        if (currentX == 0 && currentY == 0)
        {
            std::cout << "studnia\n";
        }
        else
        {
            if (currentY != 0)
                std::cout << "0 " << abs(currentY) << '\n';
            if (currentX != 0)
                std::cout << (currentX > 0 ? "3 " : "2 ") << abs(currentX) << '\n';
        }
    }
    return 0;
}
