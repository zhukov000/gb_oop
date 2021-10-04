//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_CIRCLE_H
#define GB_OOP_CIRCLE_H

#include "Figure.h"

namespace Figures
{
    class Circle: public Figure {
    public:
        Circle(double pX, double pY, double pR): x(pX), y(pY), r(pR) {}
        double area() const override;

    private:
        double x;
        double y;
        double r;
    };
}



#endif //GB_OOP_CIRCLE_H
