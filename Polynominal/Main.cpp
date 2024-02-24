#include "ZeroDenominatorException.h"
#include "Fraction.h"
#include <iostream>
#include <fstream>
#include <string>
#include "ArrayList.h"


int main() {
	ArrayList<__int64> arr = ArrayList<__int64>(10, __int64(20));
	for (int i = 0; i < 10; i++) {
		std::cout << *(arr.get(i)) << std::endl;
	}
}