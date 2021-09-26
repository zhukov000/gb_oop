//
// Created by azhukov on 27.09.2021.
//

#include "RGBA.h"

void RGBA::print() {
    std::cout << std::hex << static_cast<int>(m_red) << static_cast<int>(m_green) << static_cast<int>(m_blue) << static_cast<int>(m_alpha) << std::endl;
}