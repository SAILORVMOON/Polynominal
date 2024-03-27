#pragma once
#include <fstream>
#include "ArrayList.h"
#include "Fraction.h"
#include "Polynominal.h"
class Parser {
public:
	Parse(std::string InputString);
	FeelCoefficients(std::string InputString, Polynominal polynom);
private:
	ParseBracket(std::string InputString);
	In(std::string InputString, std::string Strings[]);
	ArrayList<Fraction> coefficients;
	std::ifstream ifs;
};