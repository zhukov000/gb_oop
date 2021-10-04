//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_PASSENGERCAR_H
#define GB_OOP_PASSENGERCAR_H

#include "Car.h"

namespace Cars {
    class PassengerCar: public virtual Car {
    public:
        PassengerCar(std::string pCompany);
        ~PassengerCar();
    };
}


#endif //GB_OOP_PASSENGERCAR_H
