//
// Created by azhukov on 06.10.2021.
//

#include<iostream>
#include"Pair.h"

void task1 () {
    using namespace SelfMade;

    Pair1<int> p1(6, 9);
    std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair1<double> p2(3.4, 7.8);
    std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
}

void task2() {
    using namespace SelfMade;

    Pair<int, double> p1(6, 7.8);
    std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair<double, int> p2(3.4, 5);
    std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
}

void task3 () {
    using namespace SelfMade;

    StringValuePair<int> svp("Amazing", 7);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
}

int main() {
    task1();
    task2();
    task3();
}