#pragma once
#include <fstream>
#include "ArrayList.h"
#include "Fraction.h"
class Parser {
public:
	Parser(std::string filePath);

private:
	ArrayList<Fraction> coefficients;
	std::ifstream ifs;
};