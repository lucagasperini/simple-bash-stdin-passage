#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2) {
		return 2;
	}

	std::fstream fin;
	fin.open(argv[1], std::fstream::in);
	std::string trust_string;
	fin >> trust_string;
	fin.close();

	std::cout << "Inserisci una stringa da stdin: ";
	std::string test;
	std::cin >> test;
	std::cout << test << std::endl;

	if (test == trust_string) {
		return 0;
	} else {
		return 1;
	}
}