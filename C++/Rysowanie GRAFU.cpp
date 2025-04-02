#include <vector>
#include <string>
#include <sstream>
#include <iostream>

struct Edge 
{
    bool weighted;
    std::string from, to, weight;
};

std::string convertToDot(const std::string &graphType, const std::vector<Edge> &edges) 
{
    std::ostringstream result;
    std::string connector = (graphType == "d" || graphType == "dw") ? "->" : "--";
    std::string dotType = (graphType == "d" || graphType == "dw") ? "digraph" : "graph";
    result << dotType << " {\n";
    for (const auto &edge : edges) 
    {
        result << "    " << edge.from << ' ' << connector << ' ' << edge.to;
        if (edge.weighted)
            result << " [label = " << edge.weight << ']';
        result << ";\n";
    }
    result << '}';
    return result.str();
}

int main() 
{
    int t;
    std::cin >> t;
    std::vector<std::string> results;
    while (t--) 
    {
        std::string graphType;
        int n;
        std::cin >> graphType >> n;
        std::vector<Edge> edges;
        for (int i = 0; i < n; ++i) 
        {
            std::string from, to, weight;
            std::cin >> from >> to;
            if (graphType == "gw" || graphType == "dw") 
            {
                std::cin >> weight;
                edges.push_back(Edge{true, from, to, weight});
            } 
            else
                edges.push_back(Edge{false, from, to, ""});
        }
        results.push_back(convertToDot(graphType, edges));
    }
    for (const auto &res : results)
        std::cout << res << "\n\n";
    return 0;
}