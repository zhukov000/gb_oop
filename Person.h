//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_PERSON_H
#define GB_OOP_PERSON_H

#include <cstdint>
#include <string>
#include <sstream>

class Person {
public:
    enum GENDER
    {
        WOMAN,
        MAN
    };

    Person(GENDER pGender = MAN): gender(pGender) {}

    inline void setName(const std::string & pName) {name = pName;}
    std::string getName() const;

    inline void setAge(std::uint8_t pAge) {age = pAge;}
    inline void setWeight(std::uint16_t pWeight) {weight = pWeight;}

private:
    std::string name;
    std::uint8_t age;
    Person::GENDER gender;
    std::uint16_t weight;
};


#endif //GB_OOP_PERSON_H
