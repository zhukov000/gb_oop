//
// Created by azhukov on 27.09.2021.
//
#include<iostream>
#include "Power.h"
#include "RGBA.h"
#include "Stack.h"

#define endl '\n'

void task1() {
    Power p;
    std::cout << std::fixed << p.calculate() << endl;
    p.set(2, 10);
    std::cout << std::fixed << p.calculate() << endl;
}

void task2() {
    RGBA color(0xa0,0xb0, 0xc0, 0x80);
    color.print();
}

void task3() {
    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();
}

int main() {
    task1();
    task2();
    task3();
    return 0;
}
