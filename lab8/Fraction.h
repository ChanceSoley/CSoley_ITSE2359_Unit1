#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <numeric>

class Fraction {
private:
    int numerator;
    int denominator;
    void reduce();

public:
    // Constructors
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {
        if (denominator == 0) {
            throw std::invalid_argument("Denominator cannot be zero.");
        }
        reduce();
    }

    // Getter functions
    int getNumerator() const { return numerator; }
    int getDenominator() const { return denominator; }

    // Overloaded operators
    Fraction operator+(const Fraction& other) const;
    bool operator==(const Fraction& other) const;
    friend std::ostream& operator<<(std::ostream& out, const Fraction& f);
    friend std::istream& operator>>(std::istream& in, Fraction& f);
};

#endif
