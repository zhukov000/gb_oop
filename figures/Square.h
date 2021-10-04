//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_SQUARE_H
#define GB_OOP_SQUARE_H

#include "Parallelogram.h"

namespace Figures {

    class Square : public Parallelogram {
    public:
        Square(double pA) : Parallelogram(pA, pA, PI/2.f) {}
        // double area() const override;
    };

}

#endif //GB_OOP_SQUARE_H
