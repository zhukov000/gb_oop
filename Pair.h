//
// Created by azhukov on 06.10.2021.
//

#ifndef GB_OOP_PAIR_H
#define GB_OOP_PAIR_H

#include<string>

namespace SelfMade {

    template<typename T1, typename T2>
    class Pair {
    public:
        Pair(T1 pFirst, T2 pSecond);

        T1 first() const { return m_first; }
        T2 second() const { return m_second; }

    private:
        T1 m_first;
        T2 m_second;
    };

    template<typename T>
    class Pair1: public Pair<T, T> {
    public:
        Pair1<T>(T pFirst, T pSecond);
    };

    template<typename T>
    class StringValuePair: public Pair<std::string, T> {
    public:
        StringValuePair(std::string text, T value);
    };
}

#include "Pair.tpp"

#endif //GB_OOP_PAIR_H
