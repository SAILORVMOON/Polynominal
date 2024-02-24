#pragma once
class Fraction {
public:
    Fraction();
    Fraction(long long numerator);
    Fraction(long long numerator, long long denominator);
    Fraction operator + (const Fraction& fraction);
    Fraction operator - (const Fraction& fraction);
    Fraction operator * (const Fraction& fraction);
    Fraction operator / (const Fraction& fraction);
    long long getDenominator() const;
    long long getNumerator() const;
    void reduce();
    


private:
    long long NOD(long long a, long long b);
    long long numerator, denominator;
};