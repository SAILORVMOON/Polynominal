#include "Fraction.h" 
#include <iostream>

Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}
Fraction::Fraction(long long num) {
    numerator = num;
    denominator = 1;
}
Fraction::Fraction(long long num, long long den) {
    if (den < 0) {
        numerator = -num;
        denominator = -den;
    } else {
        numerator = num;
        denominator = den;
    }
    
}
Fraction Fraction::operator+ (const Fraction& fraction) {
    if (denominator == fraction.denominator) {
        return Fraction(numerator + fraction.numerator, denominator);
    } else {
        return Fraction(numerator * fraction.denominator + fraction.numerator * denominator,
                        denominator * fraction.denominator);
    }
}
Fraction Fraction::operator- (const Fraction& fraction) {
    if (denominator == fraction.denominator) {
        return Fraction(numerator - fraction.numerator, denominator);
    } else {
        return Fraction(numerator * fraction.denominator - fraction.numerator * denominator,
                        denominator * fraction.denominator);
    }
}
Fraction Fraction::operator* (const Fraction& fraction) {
    return Fraction(numerator * fraction.numerator, denominator * fraction.denominator);
}
Fraction Fraction::operator/ (const Fraction& fraction) {
    return Fraction(numerator * fraction.denominator, denominator * fraction.numerator);
}
void Fraction::print() const {
    std::cout << numerator << std::endl << '-' << std::endl << denominator << std::endl << std::endl;
}
void Fraction::reduce() {
    long long reducer = NOD((*this).numerator, (*this).denominator);
    (*this).numerator /= reducer;
    (*this).denominator /= reducer;
}

long long Fraction::NOD(long long a, long long b) {
    long long t;
    if (a < b) {
        t = a;
        a = b;
        b = t;
    }
    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}