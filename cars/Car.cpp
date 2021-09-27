//
// Created by azhukov on 27.09.2021.
//

#include "Car.h"

namespace Cars {
    Car::Car(std::string pCompany, std::string pModel): company(pCompany), model(pModel) {
        std::cout << "constructor Car\n";
    }

    Car::~Car() {
        std::cout << "destructor Car\n";
    }
}