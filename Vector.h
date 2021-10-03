//
// Created by azhukov on 03.10.2021.
//

#ifndef GB_OOP_VECTOR_H
#define GB_OOP_VECTOR_H

#include<cstdint>
#include<algorithm>
#include<vector>
#include<iostream>
#include<string>
#include<cassert>

namespace SelfMade{

    class IntVector {
        const static size_t DEFAULT_CAPACITY = 4u;
        const static size_t COUNTING_SORT_LOW_BOUND = 1<<10;
        const static size_t COUNTING_SORT_MAX_RANGE = 1<<20;

        static bool defaultLess(int left, int right);
        static bool defaultGreater(int left, int right);

    public:
        IntVector() = default;
        explicit IntVector(size_t size, int value=0);
        IntVector(const IntVector & orig);
        virtual ~IntVector();

        IntVector(std::initializer_list<int> lst) {
            m_capacity = 1;
            m_size = lst.size();
            while(m_capacity <= m_size) m_capacity <<= 1;

            m_arr = m_data = new int[m_capacity];
            std::copy(lst.begin(), lst.end(), m_arr);
        }

        IntVector& operator=(const IntVector& orig);
        int& operator[](size_t index) const;
        int& at(size_t index) const;
        void push_back(int value);
        void pop_back();
        void pop_front();
        void sort(bool bAscending=true);
        void sort(bool (&compare)(int, int));

        size_t count_unique() const;

        size_t size() const { return m_size; }
        size_t capacity() const { return m_capacity; }
        bool empty() const { return m_size == 0u; }

        static std::string sep;

    private:

        size_t m_size = 0;
        size_t m_capacity = 0;
        int * m_data = nullptr;     // allocated data
        int * m_arr = nullptr;      // real data

        friend std::ostream& operator<<(std::ostream& out, const IntVector & vector) {
            size_t n = vector.size();
            for(size_t i=0; i<n; ++i) {
                out << vector[i];
                if (i + 1u < vector.size()) {
                    out << SelfMade::IntVector::sep;
                }
            }
            return out;
        }
    };
}
#endif //GB_OOP_VECTOR_H
