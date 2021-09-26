//
// Created by azhukov on 27.09.2021.
//

#include "Stack.h"

Stack::Stack() {
    reset();
}

void Stack::reset() {
    size = 0;
    for(size_t i=0; i<StackSize; ++i) {
        data[i] = 0;
    }
}

bool Stack::push(int value) {
    if (size >= StackSize) return false;
    data[size++] = value;
    return true;
}

int Stack::pop() {
    assert(size > 0 && "Can't pop from empty stack");
    return data[--size];
}

void Stack::print() {
    std::cout << "( " ;
    for(size_t i=0; i<size; ++i) {
        std::cout << data[i] << ' ';
    }
    std::cout << ')' << std::endl;
}