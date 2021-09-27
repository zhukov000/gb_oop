//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_RECTANGLE_H
#define GB_OOP_RECTANGLE_H

#include "Figure.h"

namespace Figures {

    class Rectangle: public Parallelogram {
    public:
        Rectangle(double pA, double pB): Parallelogram(pA, pB, PI/2.f) {}
        // double area() const override;
    };
}



#endif //GB_OOP_RECTANGLE_H
