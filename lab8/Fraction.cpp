#include "Fraction.h"
#include <numeric> // For std::gcd

void Fraction::reduce() {
    int gcd = std::gcd(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
    // Ensure denominator is positive
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
}

// Overload addition operator
Fraction Fraction::operator+(const Fraction& other) const {
    int newNumerator = numerator * other.denominator + other.numerator * denominator;
    int newDenominator = denominator * other.denominator;
    return Fraction(newNumerator, newDenominator);
}

// Overload equality operator
bool Fraction::operator==(const Fraction& other) const {
    return numerator == other.numerator && denominator == other.denominator;
}

// Overload output stream operator
std::ostream& operator<<(std::ostream& out, const Fraction& f) {
    out << f.numerator << "/" << f.denominator;
    return out;
}

// Overload input stream operator
std::istream& operator>>(std::istream& in, Fraction& f) {
    char slash;
    in >> f.numerator >> slash >> f.denominator;
    if (f.denominator == 0) {
        throw std::invalid_argument("Denominator cannot be zero.");
    }
    f.reduce();
    return in;
}
