#include <string>
#include <vector>
#include <sstream>
#include <iostream>

int main() 
{
	std::string line;
	while (std::getline(std::cin, line))
	{
		std::string word;
		std::istringstream iss(line);
		std::vector<std::string> decoded_message;
		while (iss >> word) 
		{
			if (word.back() == '.')
				decoded_message.push_back(word.substr(0, 1) + ' ');
			else
				decoded_message.push_back(word.substr(0, 1)); 
		}
		for (const auto& w : decoded_message)
			std::cout << w;
		std::cout << '\n';
	}
	return 0;
}