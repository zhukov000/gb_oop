//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_RGBA_H
#define GB_OOP_RGBA_H

#include<cstdint>
#include<iostream>

class RGBA {
public:
    RGBA(std::uint8_t red=0, std::uint8_t green=0, std::uint8_t blue=0, std::uint8_t alpha=255):
            m_red(red), m_green(green), m_blue(blue), m_alpha(alpha) { }

    void print();

private:
    std::uint8_t m_red;
    std::uint8_t m_green;
    std::uint8_t m_blue;
    std::uint8_t m_alpha;
};


#endif //GB_OOP_RGBA_H
