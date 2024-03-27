#pragma once
#include <iostream>
#include "Fraction.h"
#include "ArrayList.h"
class Polynominal {
public:
	Polynominal();
	Polynominal(std::string* pol);
	Polynominal(int len);
	AddElement(Fraction elem);
private:
	char var;
	Fraction* getCoeffs(std::string* pol);
	ArrayList<Fraction> coefficients;
	ArrayList<Fraction> remain;
};