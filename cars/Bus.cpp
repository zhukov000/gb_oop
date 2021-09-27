//
// Created by azhukov on 27.09.2021.
//

#include "Bus.h"

namespace Cars {
    Bus::Bus(std::string pCompany) : Car(pCompany, "bus") {
        std::cout << "constructor Bus\n";
    }

    Bus::~Bus() {
        std::cout << "destructor Bus\n";
    }
}