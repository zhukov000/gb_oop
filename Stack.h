//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_STACK_H
#define GB_OOP_STACK_H

#include<iostream>
#include<cassert>

class Stack {
    static const int StackSize = 10;

public:
    Stack();
    void reset();
    bool push(int);
    int pop();
    void print();

private:
    int data[StackSize];
    size_t size = 0;
};

#endif //GB_OOP_STACK_H
