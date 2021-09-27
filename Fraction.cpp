//
// Created by azhukov on 27.09.2021.
//

#include "Fraction.h"

namespace MathFractions {

    Fraction Fraction::reduce(LL pNumerator, LL pDenominator) {
        LL d = std::__gcd(pNumerator, pDenominator);
        return {pNumerator / d, pDenominator / d};
    }

    Fraction::Fraction(LL pNumerator, LL pDenominator): numerator(pNumerator), denominator(pDenominator)
    {
        assert(denominator != 0 && "Denominator can't be zero");
    }

    LD Fraction::value() const {
        return static_cast<LD>(numerator) / static_cast<LD>(denominator);
    }

    Fraction Fraction::operator-() const {
        return {-numerator, denominator};
    }

    Fraction operator+(const Fraction &lhs, const Fraction &rhs) {
        return Fraction::reduce(
                lhs.numerator * rhs.denominator + rhs.numerator * lhs.denominator,
                lhs.denominator * rhs.denominator
        );
    }

    Fraction operator-(const Fraction &lhs, const Fraction &rhs) {
        return lhs + (-rhs);
    }

    Fraction operator*(const Fraction &lhs, const Fraction &rhs) {
        return Fraction::reduce(
                lhs.numerator * rhs.numerator,
                lhs.denominator * rhs.denominator
        );
    }

    Fraction operator/(const Fraction &lhs, const Fraction &rhs) {
        return Fraction::reduce(
                lhs.numerator * rhs.denominator,
                lhs.denominator * rhs.numerator
        );
    }

    bool operator==(const Fraction &lhs, const Fraction &rhs) {
        return lhs.numerator * rhs.denominator == lhs.denominator * rhs.numerator;
    }

    bool operator!=(const Fraction &lhs, const Fraction &rhs) {
        return !(lhs == rhs);
    }

    bool operator<(const Fraction &lhs, const Fraction &rhs) {
        return lhs.numerator * rhs.denominator < lhs.denominator * rhs.numerator;
    }

    bool operator>(const Fraction &lhs, const Fraction &rhs) {
        return lhs.numerator * rhs.denominator > lhs.denominator * rhs.numerator;
    }

    bool operator<=(const Fraction &lhs, const Fraction &rhs) {
        return (lhs < rhs) || (lhs == rhs);
    }

    bool operator>=(const Fraction &lhs, const Fraction &rhs) {
        return (lhs > rhs) || (lhs == rhs);
    }

    std::ostream & operator<<(std::ostream & o, const Fraction & frac) {
        o << frac.numerator << '/' << frac.denominator;
        return o;
    }
}