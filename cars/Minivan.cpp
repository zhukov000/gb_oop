//
// Created by azhukov on 27.09.2021.
//

#include "Minivan.h"

namespace Cars {
    Minivan::Minivan(std::string pCompany):
        Car(pCompany, "minivan"), Bus(pCompany), PassengerCar(pCompany)
    {
        std::cout << "constructor Minivan\n";
    }

    Minivan::~Minivan() {
        std::cout << "destructor Minivan\n";
    }
}