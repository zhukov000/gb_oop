//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_FIGURE_H
#define GB_OOP_FIGURE_H

#include <cmath>

namespace Figures
{
    const long double PI = acos(-1.f);

    struct Figure {
        virtual double area() const = 0;
        virtual ~Figure() = default;
    };
}



#endif //GB_OOP_FIGURE_H
