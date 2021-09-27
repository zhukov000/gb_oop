cmake_minimum_required(VERSION 3.20)
project(gb_oop)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_HEADERS
        figures/Parallelogram.h
        figures/Figure.h
        figures/Circle.h
        figures/Rectangle.h
        figures/Rhombus.h
        figures/Square.h
        cars/Car.h
        cars/PassengerCar.h
        cars/Bus.h
        cars/Minivan.h
        Fraction.h
        Card.h
        )

set(PROJECT_SOURCES
        main.cpp
        figures/Parallelogram.cpp
        figures/Circle.cpp
        cars/Car.cpp
        cars/PassengerCar.cpp
        cars/Bus.cpp
        cars/Minivan.cpp
        Fraction.cpp
        Card.cpp
        )

add_executable(gb_oop ${PROJECT_SOURCES} ${PROJECT_HEADERS})