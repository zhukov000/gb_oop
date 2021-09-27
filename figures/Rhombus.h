//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_RHOMBUS_H
#define GB_OOP_RHOMBUS_H

#include "Figure.h"

namespace Figures {

    class Rhombus: public Parallelogram {
    public:
        Rhombus(double pA, double pB, double pABRad): Parallelogram(pA, pB, pABRad) {}
        // double area() const override;
    };
}

#endif //GB_OOP_RHOMBUS_H
