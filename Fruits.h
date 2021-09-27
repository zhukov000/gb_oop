//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_FRUITS_H
#define GB_OOP_FRUITS_H

#include<string>

class Fruit {
public:
    Fruit(const std::string & pName, const std::string & pColor): name(pName), color(pColor) { }

    inline std::string getName() const { return name; }
    inline std::string getColor() const { return color; }
private:
    std::string name;
    std::string color;
};

class Apple: public Fruit{
public:
    Apple(const std::string & pColor = "red"): Fruit("apple", pColor) { }
    Apple(const std::string & pName, const std::string & pColor): Fruit(pName + " apple", pColor) { }
};

class Banana: public Fruit{
public:
    Banana(): Fruit("banana", "yellow") { }
};

class GrannySmith: public Apple {
public:
    GrannySmith(): Apple("Granny Smith", "green") { }
};

#endif //GB_OOP_FRUITS_H
