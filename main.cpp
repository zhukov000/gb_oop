//
// Created by azhukov on 03.10.2021.
//

#include <iostream>
#include"Vector.h"

void task1() {
    using namespace SelfMade;

    IntVector a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
    a.push_back(150);
    a.push_back(60);
    a.push_back(70);
    a.pop_front();
    a.pop_front();
    a.push_back(80);
    a.push_back(90);
    a.pop_back();
    a.pop_back();

    std::cout << "Vector a size = " << a.size()
              << " capacity = " << a.capacity() << std::endl;

    IntVector b = a;

    b.pop_front();
    b.push_back(-10);
    b.push_back(100);
    b.push_back(-20);
    b.push_back(20);
    b.push_back(90);
    b.push_back(30);
    b.sort();
    b.pop_back();

    std::cout << "Vector a: " << a << std::endl;
    std::cout << "a[1] = " << a[1] << std::endl;

    std::cout << "Vector b: " << b << std::endl;
    std::cout << "Vector b size = " << b.size()
              << " capacity = " << b.capacity() << std::endl;
}

void task2() {
    using namespace SelfMade;

    IntVector a {1,1,2,2,3,1,2,1,2,3,2,3};
    std::cout << "Count unique elements = " << a.count_unique() << std::endl;
    std::cout << "Vector: " << a << std::endl;;
}

int main () {
    task1();
    task2();

    return 0;
}
