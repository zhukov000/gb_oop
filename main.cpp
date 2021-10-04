//
// Created by azhukov on 27.09.2021.
//

#include<iostream>
#include<vector>
#include<iomanip>

#include "figures/Figure.h"
#include "figures/Circle.h"
#include "figures/Parallelogram.h"
#include "figures/Rectangle.h"
#include "figures/Rhombus.h"
#include "figures/Square.h"

#include "cars/Car.h"
#include "cars/Bus.h"
#include "cars/PassengerCar.h"
#include "cars/Minivan.h"

#include "Fraction.h"

#include "Card.h"

void task1() {
    using namespace Figures;
    std::vector<Figure *> figures(5);

    figures[0] = new Parallelogram(5, 10, PI/6.f);
    figures[1] = new Circle(0,0, 5);
    figures[2] = new Rectangle(3, 5);
    figures[3] = new Square(4);
    figures[4] = new Rhombus(5, 10, PI*5.f/6.f);

    for(Figure * ptrFigure: figures) {
        std::cout << std::fixed << ptrFigure->area() << std::endl;
        delete ptrFigure;
    }
}

void task2() {
    using namespace Cars;

    Car c("lada", "sedan");
    c.print();

    PassengerCar pc("skoda");
    pc.print();

    Bus b("mercedes");
    b.print();

    Minivan m("toyota");
    m.print();
}

void task3() {
    using namespace MathFractions;

    Fraction f1(1,2);
    Fraction f2(1,3);
    Fraction f3(4,15);
    Fraction f4(3,8);
    Fraction f5(3,9);

    std::cout << f1 << " + " << f2 << " = " << f1 + f2 << std::endl;
    std::cout << f1 << " - " << f3 << " = " << f1 - f3 << std::endl;
    std::cout << f3 << " * " << f4 << " = " << f3 * f4 << std::endl;
    std::cout << f2 << " / " << f3 << " = " << f2 / f3 << std::endl;

    std::cout << f2 << " == " << f5 << " = " << (f2 == f5) << std::endl;
    std::cout << f1 << " != " << f5 << " = " << (f1 != f5) << std::endl;
    std::cout << f2 << " > " << f5 << " = " << (f2 > f5) << std::endl;
    std::cout << f2 << " >= " << f5 << " = " << (f2 >= f5) << std::endl;
}

void task4() {
    using namespace Blackjack;

    std::vector<Card> deck;

    for(CardSuits suit: {Clubs, Hearts, Diamonds, Spades} ) {
        for(unsigned value=1; value<=CardsInSuit; ++value) {
            deck.push_back({static_cast<CardValues>(value), suit});
        }
    }

    for(unsigned i = 0; i < deck.size(); ++i) {
        unsigned j = (i % 4) * CardsInSuit + i / 4;
        std::cout << std::setw(17) << deck[j].getName();
        std::cout << '=' << deck[j].getValue();
        if (i % 4 == 3) {
            std::cout << '\n';
        } else {
            std::cout << '\t';
        }
    }
}

int main() {
    task1();
    task2();
    task3();
    task4();

    return 0;
}