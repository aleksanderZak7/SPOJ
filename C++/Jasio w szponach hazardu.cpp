#include <string>
#include <iostream>
#include <unordered_map>

void validate_score(const std::unordered_map<std::string, std::string>& bets, const std::unordered_map<std::string, int>& goal_count) 
{
    int correct_predictions = 0;
    for (const auto& bet : bets) 
    {
        const std::string& match = bet.first;
        const std::string& prediction = bet.second;
        size_t separator = match.find(" - ");
        std::string home = match.substr(0, separator);
        std::string away = match.substr(separator + 3);
        int home_goals = goal_count.count(home) ? goal_count.at(home) : 0;
        int away_goals = goal_count.count(away) ? goal_count.at(away) : 0;
        std::string result;
        if (home_goals > away_goals) 
            result = "1";
        else if (home_goals < away_goals) 
            result = "2";
        else 
            result = "0";
        if (prediction.find(result) != std::string::npos)
            ++correct_predictions;
    }
    if (correct_predictions == bets.size())
        std::cout << "TAK\n";
    else
        std::cout << "NIE " << correct_predictions << '/' << bets.size() << '\n';
}

int main() 
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) 
    {
        int m;
        std::cin >> m;
        std::cin.ignore();
        std::unordered_map<std::string, std::string> bets;
        for (int j = 0; j < m; ++j) 
        {
            std::string line;
            getline(std::cin, line);
            size_t last_space = line.rfind(' ');
            std::string match = line.substr(0, last_space);
            std::string bet = line.substr(last_space + 1);
            bets[match] = bet;
        }
        int q;
        std::cin >> q;
        std::cin.ignore();
        std::unordered_map<std::string, int> goal_count;
        for (int j = 0; j < q; ++j) 
        {
            std::string team;
            getline(std::cin, team);
            ++goal_count[team];
        }
        validate_score(bets, goal_count);
    }
    return 0;
}