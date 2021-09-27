//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_STUDENT_H
#define GB_OOP_STUDENT_H

#include <cstdint>
#include <vector>
#include "Person.h"

class Student: public Person {
public:
    Student(Person::GENDER gender=MAN, std::uint8_t pYear=1): Person(gender), year(pYear), id(Student::CountCreated) {
        Student::CountCreated++;
    }

    ~Student() { }

    inline void setYear(std::uint8_t pYear) { year = pYear; }
    inline void incYear() { year++; }

    static size_t getCount() { return Student::CountCreated; }

private:

    std::uint8_t year;
    std::uint8_t id;

    static size_t CountCreated;
};



#endif //GB_OOP_STUDENT_H
