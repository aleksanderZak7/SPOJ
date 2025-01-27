#include <tuple>
#include <vector>
#include <iostream>

int main() 
{
    int n, k, o, v, overtaken = 0, overtakes = 0;
    std::cin >> n;
    std::vector<std::tuple<int, double>> cars(n);
    for (int i = 0; i < n; ++i) 
    {
        std::cin >> o >> v;
        cars[i] = std::make_tuple(o, static_cast<double>(o) / v);
    }
    std::cin >> k;
    k--;
    double target_time = std::get<1>(cars[k]);
    int target_distance = std::get<0>(cars[k]);
    for (int i = 0; i < n; ++i) 
    {
        if (i == k)
            continue;
        int distance = std::get<0>(cars[i]);
        double time = std::get<1>(cars[i]);
        if (time > target_time && distance < target_distance)
            overtakes++;
        else if (time < target_time && distance > target_distance)
            overtaken++;
    }
    std::cout << overtakes << ' ' << overtaken << '\n';
    return 0;
}