#include "ZeroDenominatorException.h" 
#include <iostream>
ZeroDenominatorException::ZeroDenominatorException(std::string msg) {
	message = msg;
}
std::string ZeroDenominatorException::getMessage() const {
	return message;
}