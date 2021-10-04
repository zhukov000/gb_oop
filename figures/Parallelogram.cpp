//
// Created by azhukov on 27.09.2021.
//

#include "Parallelogram.h"

double Figures::Parallelogram::area() const {
    return a * b * sin(alpha);
}