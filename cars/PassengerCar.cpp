//
// Created by azhukov on 27.09.2021.
//

#include "PassengerCar.h"

namespace Cars {
    PassengerCar::PassengerCar(std::string pCompany) : Car(pCompany, "motorcar") {
        std::cout << "constructor PassengerCar\n";
    }

    PassengerCar::~PassengerCar() {
        std::cout << "destructor PassengerCar\n";
    }
}