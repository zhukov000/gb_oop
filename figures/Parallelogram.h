//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_PARALLELOGRAM_H
#define GB_OOP_PARALLELOGRAM_H

#include "Figure.h"

namespace Figures
{
    class Parallelogram : public Figure {
    public:
        Parallelogram(double pA, double pB, double pABRad) :
                a(pA), b(pB), alpha(pABRad) {}

        double area() const override;

    protected:
        double a;
        double b;
        double alpha;
    };
}


#endif //GB_OOP_PARALLELOGRAM_H
