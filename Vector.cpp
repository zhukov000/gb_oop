//
// Created by azhukov on 03.10.2021.
//

#include "Vector.h"

std::string SelfMade::IntVector::sep = " ";

bool SelfMade::IntVector::defaultLess(int left, int right) {
    return left < right;
}

bool SelfMade::IntVector::defaultGreater(int left, int right) {
    return left > right;
}

SelfMade::IntVector::IntVector(size_t size, int value):
        m_size(size), m_capacity(m_size), m_data(new int[m_capacity]), m_arr(m_data)
{
    std::fill(m_data, m_data + m_size, value);
}

SelfMade::IntVector::IntVector(const IntVector & orig) {
    m_size = orig.m_size;
    m_capacity = orig.m_capacity;
    m_arr = m_data = new int[m_capacity];
    std::copy(orig.m_arr, orig.m_arr + orig.m_size, m_data);
}

SelfMade::IntVector::~IntVector() {
    delete [] m_data;
}

SelfMade::IntVector& SelfMade::IntVector::operator=(const IntVector& orig) {
    if (this != &orig) {
        delete [] m_data;

        m_size = orig.m_size;
        m_capacity = orig.m_capacity;
        m_data = m_data = new int[m_capacity];

        std::copy(orig.m_arr, orig.m_arr + orig.m_size, m_data);
    }
    return *this;
}

int& SelfMade::IntVector::operator[](size_t index) const { // unsafe
    return m_arr[index];
}

int& SelfMade::IntVector::at(size_t index) const {
    assert("Index out of bounds" && index + 1u > m_size);
    return m_arr[index];
}

void SelfMade::IntVector::push_back(int value) {
    if (m_data != nullptr) {
        if (m_arr - m_data + m_size + 1u > m_capacity) {
            m_capacity <<= 1;
            int * temp = new int[m_capacity];
            std::copy(m_arr, m_arr + m_size, temp);
            delete [] m_data;
            m_arr = m_data = temp;
        }
    } else {
        m_capacity = DEFAULT_CAPACITY;
        m_arr = m_data = new int[m_capacity];
    }
    m_arr[m_size++] = value;
}

void SelfMade::IntVector::pop_back() {
    assert("The array is empty" && !empty());
    m_size--;
}

void SelfMade::IntVector::pop_front() {
    assert("The array is empty" && !empty());
    m_arr++;
    m_size--;
}

void SelfMade::IntVector::sort(bool bAscending) {
    if (!empty()) {
        if (bAscending) {
            std::sort(m_arr, m_arr + m_size, defaultLess);
        } else {
            std::sort(m_arr, m_arr + m_size, defaultGreater);
        }
    }
}

void SelfMade::IntVector::sort(bool (&compare)(int, int)) {
    if (!empty()) {
        std::sort(m_arr, m_arr + m_size, compare);
    }
}

size_t SelfMade::IntVector::count_unique() const {
    if (empty()) return 0u;

    int mn = *std::min_element(m_arr, m_arr + m_size);
    int mx = *std::max_element(m_arr, m_arr + m_size);
    size_t range = (mx - mn) + 1u;
    size_t count = 0u;

    if (range <= COUNTING_SORT_MAX_RANGE && m_size >= COUNTING_SORT_LOW_BOUND) {
        std::vector<bool> temp(range);
        for(size_t i=0; i<m_size; ++i) {
            temp[ m_arr[i] - mn ] = true;
        }
        count = std::count_if(temp.begin(), temp.end(), [](bool v){return v;});
    } else {
        int* temp = new int[m_size];
        std::copy(m_arr, m_arr + m_size, temp);
        std::sort(temp, temp + m_size);

        ++count;
        for(size_t i=1u; i<m_size; ++i) {
            if (temp[i] != temp[i-1]) {
                ++count;
            }
        }
        delete [] temp;
    }
    return count;
}

