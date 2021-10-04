//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_CAR_H
#define GB_OOP_CAR_H

#include<iostream>
#include<string>

namespace Cars
{
    class Car {
    public:
        Car(std::string pCompany, std::string pModel);
        virtual ~Car();
        inline void print() const { std::cout << company << ' ' << model << '\n'; }

    private:
        std::string company;
        std::string model;
    };
}

#endif //GB_OOP_CAR_H
