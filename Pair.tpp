//
// Created by azhukov on 06.10.2021.
//

template<typename T1, typename T2>
SelfMade::Pair<T1, T2>::Pair(T1 pFirst, T2 pSecond): m_first(pFirst), m_second(pSecond) {

}

template<typename T>
SelfMade::Pair1<T>::Pair1(T pFirst, T pSecond): Pair<T, T>(pFirst, pSecond) {

}

template<typename T>
SelfMade::StringValuePair<T>::StringValuePair(std::string text, T value): Pair<std::string, T>(text, value) {

}