#include <stack>
#include <regex>
#include <string>
#include <iostream>

void printIndent(const int& depth) 
{
    for (int i = 0; i < depth * 4; i++) std::cout << ' ';
}

int main() 
{
    std::string line;
    std::stack<std::string> elements;
    std::regex tagRegex("<(\\w+)([^>]*)>");
    std::regex attributeRegex("(\\w+)=\"([^\"]*)\"");
    std::smatch match;
    int depth = 0;
    while (std::getline(std::cin, line)) 
    {
        auto it = line.cbegin();
        while (std::regex_search(it, line.cend(), match, tagRegex)) 
        {
            std::string tagName = match[1];
            std::string attributes = match[2];
            printIndent(depth);
            std::cout << tagName << ":\n";
            depth++;
            std::smatch attrMatch;
            auto attrIt = attributes.cbegin();
            while (std::regex_search(attrIt, attributes.cend(), attrMatch, attributeRegex)) 
            {
                printIndent(depth);
                std::cout << attrMatch[1] << " = " << attrMatch[2] << '\n';
                attrIt = attrMatch.suffix().first;
            }
            it = match.suffix().first;
            if (line.find("</" + tagName + ">") != std::string::npos) depth--;
        }
    }
    return 0;
}
