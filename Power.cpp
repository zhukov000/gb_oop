//
// Created by azhukov on 27.09.2021.
//

#include "Power.h"

void Power::set(double pValue, double pPower) {
    value = pValue;
    power = pPower;
}

double Power::calculate() {
    return pow(value, power);
}