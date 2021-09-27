//
// Created by azhukov on 27.09.2021.
//

#include "Person.h"

std::string Person::getName() const {
    std::stringstream ss;
    ss << this->name;

    if (this->gender == WOMAN) {
        ss << "(female)";
    } else if (this->gender == MAN) {
        ss << "(male)";
    } else {
        ss << "(not binary)";
    }
    return ss.str();
}