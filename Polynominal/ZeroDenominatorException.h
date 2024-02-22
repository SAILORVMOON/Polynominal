#pragma once
#include <iostream>
class ZeroDenominatorException {
public:
    ZeroDenominatorException(std::string message);
    std::string getMessage() const;
private:
    std::string message;
};