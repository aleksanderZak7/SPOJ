#include <iostream>

int main()
{
	int input;
	int charTab[256] = {};
	while ((input = getchar()) != EOF)
	{
		charTab[input]++;
	}
	for (int i = 0; i < 256; ++i)
		if (charTab[i] != 0)
			std::cout << i << ' ' << charTab[i] << "\n";
	return 0;
}