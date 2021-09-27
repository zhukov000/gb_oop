//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_FRACTION_H
#define GB_OOP_FRACTION_H

#include <cassert>
#include <algorithm>
#include <iostream>

namespace MathFractions {
    using LL = long long;
    using LD = long double;

    class Fraction {
    public:
        Fraction(LL pNumerator = 1LL, LL pDenominator = 1LL);
        LD value() const;
        Fraction operator-() const;
        static Fraction reduce(LL pNumerator, LL pDenominator);

    private:
        LL numerator;
        LL denominator;

        friend Fraction operator+(const Fraction &lhs, const Fraction &rhs);
        friend Fraction operator-(const Fraction &lhs, const Fraction &rhs);
        friend Fraction operator*(const Fraction &lhs, const Fraction &rhs);
        friend Fraction operator/(const Fraction &lhs, const Fraction &rhs);
        friend bool operator==(const Fraction &lhs, const Fraction &rhs);
        friend bool operator!=(const Fraction &lhs, const Fraction &rhs);
        friend bool operator<(const Fraction &lhs, const Fraction &rhs);
        friend bool operator>(const Fraction &lhs, const Fraction &rhs);
        friend bool operator<=(const Fraction &lhs, const Fraction &rhs);
        friend bool operator>=(const Fraction &lhs, const Fraction &rhs);

        friend std::ostream & operator<<(std::ostream & o, const Fraction & frac);
    };
}



#endif //GB_OOP_FRACTION_H
