//
// Created by azhukov on 09.10.2021.
//

#include "ReadInteger.h"
#include "Endll.h"

/**
 * Первый вариант ввода целого числа - не сработает если в строке несколько чисел через пробел
 */
void task1Variant1() {
    using namespace ReadInput;

    int num = 0;
    bool first = true;
    do {
        if (!first) std::cout << "Wrong input\n";
        std::cout << "Please, enter one integer and press enter:";
        first = false;
    } while(!getInteger(std::cin, num));
    std::cout << "Your number is " << num << '\n';
}

/**
 * Второй вариант ввода целого числа - считает первое число из строки, остальное оставит в потоке
 */
void task1Variant2() {
    using namespace ReadInput;

    std::cout << "Please, enter one integer and press enter:";
    int n = getInteger(std::cin, std::cerr);
    std::cout << "Your number is " << n << '\n';
}

void task2() {
    std::cout << "Hello, World!" << NotStd::endll;
    std::cout << "Goodbye, World!" << std::endl;
}

int main() {
    task1Variant1();
    task1Variant2();
    task2();
}