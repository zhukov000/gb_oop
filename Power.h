//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_POWER_H
#define GB_OOP_POWER_H

#include<cmath>

class Power {
public:
    Power(double pValue=1, double pPower=0): value{pValue}, power(pPower) {}

    void set(double, double);
    double calculate();

private:
    double value;
    double power;
};


#endif //GB_OOP_POWER_H
