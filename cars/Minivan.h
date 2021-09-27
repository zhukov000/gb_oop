//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_MINIVAN_H
#define GB_OOP_MINIVAN_H

#include "PassengerCar.h"
#include "Bus.h"

namespace Cars{
    class Minivan: public PassengerCar, public Bus {
    public:
        Minivan(std::string pCompany);
        ~Minivan();
    };
}



#endif //GB_OOP_MINIVAN_H
