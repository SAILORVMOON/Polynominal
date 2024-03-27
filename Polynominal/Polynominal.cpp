#include "Polynominal.h"

//Polynominal::Polynominal() {
//
//}
//Polynominal::Polynominal(std::string* pol) {
//
//}
//Fraction* Polynominal::getCoeffs(std::string* pol) {
//
//}
Polynominal::Polynominal(int len) {
	coefficients = new ArrayList<Fraction>(len);
}