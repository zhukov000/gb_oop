//
// Created by azhukov on 27.09.2021.
//

#include <iostream>

#include "Person.h"
#include "Student.h"
#include "Fruits.h"

void task1() {
    Student *students = new Student[3] { Person::GENDER::WOMAN, Person::GENDER::MAN, Person::GENDER::MAN };

    students[0].setName("Alice");
    students[1].setName("Bob");
    students[2].setName("Clever");

    std::cout << Student::getCount() << " students were created. Type number for select:";

    size_t n;
    std::cin >> n;

    if (n < Student::getCount()) {
        std::cout << "You selected " << students[n].getName();
    } else {
        std::cout << "error indexing";
    }
    std::cout << std::endl;
}

void task2() {
    Apple a("red");
    Banana b;
    GrannySmith c;

    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
}

int main() {
    task1();
    task2();
    // task3 in UML
    return 0;
}