#include "Parser.h"

Parser::Parse(std::string InputString, Polynominal* polynom) {
	std::string Bufer, DegreeBufer;
	int LastDegree = -1000000000000000000;
	std::string AllOperands[]{ "+", "-", "*", "/", "^", "(", ")" };
	for (int i = 0; i < InputString.length - 1; i++) {
		if (InputString[i] == '(') {
			while (InputString[i] != ')') {
				Bufer += InputString[i];
				i++;
			}
		}
		else if (InputString[i] == 'x') {
			int degree;
			if (InputString[i + 1] == "^") {
				int a = 0;
				while (!In(InputString[i + a], AllOperands)) {
					DegreeBufer += InputString[i+a];
					a++;
				}
				degree = (int)(DegreeBufer);
			}
			else {
				degree = 1;
			}

			if (LastDegree < degree) {
				LastDegree = degree;
			}
			
			else if (LastDegree == degree + 1) {
				if (Bufer != "") {
					polynom.AddElement(ParseBracket(Bufer));
					Bufer = "";
				}
				else {
					Fraction fr = new Fraction(1, 1);
					polynom.AddElement(fr);
				}
			}

			else {
				while (LastDegree != degree + 1) {
					Fraction fr = new Fraction(0, 1);
					polynom.AddElement(fr);
					LastDegree--;
				}
			}
		}
		else {
			continue;
		}
	}

	return 0;
}

Parser::ParseBracket(std::string InputString) {
	int numer = 0, denumer = 0;
	std::string Bufer;

	for (int i = 0; i < InputString.length; i++) {
		if (InputString[i] != "/") {
			Bufer += InputString[i];
		}
		if (InputString[i] == "/") {
			numer = (int)(Bufer);
			Bufer = "";
		}
	}

	if (Bufer != "") {
		if (numer != 0) {
			denumer = (int)(Bufer);
		}
		else {
			numer = (int)(Bufer);
			denumer = 1;
		}
	}

	return new Fraction(numer, denumer);
}

Parser::In(std::string InputString, std::string Strings[]) {
	bool flag = false;
	for (int i = 0; i < Strings->length; i++) {
		if (InputString == Strings[i]) {
			flag = true;
			break;
		}
	}
	return flag;
}