#include <cmath>
#include <iostream>

bool can_fit(double& A1, double& B1, double& A2, double& B2) 
{
    if (A1 < B1) 
        std::swap(A1, B1);
    if (A2 < B2) 
        std::swap(A2, B2);
    if (A1 > A2 && B1 > B2) 
        return true;
    else if (A1 <= A2 && B1 <= B2) 
        return false;
    double d1 = sqrt(A1 * A1 + B1 * B1);
    double d2 = sqrt(A2 * A2 + B2 * B2);
    if (d1 <= d2) 
        return false;
    double half_d2_squared = (0.5 * d2) * (0.5 * d2);
    double half_B1_squared = (0.5 * B1) * (0.5 * B1);
    double half_A1_squared = (0.5 * A1) * (0.5 * A1);
    if (half_d2_squared < half_B1_squared || half_d2_squared < half_A1_squared) 
        return false;
    double a = 0.5 * A1 - sqrt(half_d2_squared - half_B1_squared);
    double b = 0.5 * B1 - sqrt(half_d2_squared - half_A1_squared);
    double c = sqrt(a * a + b * b);
    return c > B2;
}

int main() 
{
    int t;
    std::cin >> t;
    while (t--) 
    {
        double A, B, C, D;
        std::cin >> A >> B >> C >> D;
        std::cout << (can_fit(A, B, C, D) ? "TAK\n" : "NIE\n");
    }
    return 0;
}