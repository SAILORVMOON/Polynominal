#include "ZeroDenominatorException.h"
#include "Fraction.h"
#include <iostream>
#include <fstream>
#include <string>
#include "ArrayList.h"


int main() {
	ArrayList<Fraction> arr = ArrayList<Fraction>(10);
	for (int i = 0; i < 10; i++) {
		arr.put(Fraction(10 + i, 21 + i), i);
	}
	for (int i = 0; i < 10; i++) {
		std::cout << (*arr.get(i)).getNumerator() << '|' << (*arr.get(i)).getDenominator() << std::endl;
	}
	arr.put(245, 3);
	std::cout << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << (*arr.get(i)).getNumerator() << '|' << (*arr.get(i)).getDenominator() << std::endl;
	}
}