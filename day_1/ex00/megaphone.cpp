#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else {
		for (int i = 1; i < argc; i++) {
			for (int j = 0; j < (int)strlen(argv[i]); j++) {
				argv[i][j] = toupper(argv[i][j]);
			}
			std::cout << argv[i];
		}
		std::cout << "\n";
	}
	return 0;
}
