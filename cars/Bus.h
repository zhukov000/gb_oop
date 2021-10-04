//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_BUS_H
#define GB_OOP_BUS_H

#include "Car.h"

namespace Cars{
    class Bus: public virtual Car {
    public:
        Bus(std::string pCompany);
        ~Bus();
    };
}



#endif //GB_OOP_BUS_H
