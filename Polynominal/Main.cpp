#include <iostream>
#include <fstream>
#include <direct.h>

int main() {
	std::ifstream ifs;
	ifs.open("input.txt");
	std::string a;
	ifs >> a;

	std::cout  << a;
	std::cin >> a;
}