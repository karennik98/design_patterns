#pragma once

#include <stdint.h>

class MathOperation
{
public:
    MathOperation(int64_t num_1, int64_t num_2)
        : m_num_1(num_1)
        , m_num_2(num_2)
    {}
    MathOperation() = default;

    virtual int64_t doOperation() = 0;
protected:
    int64_t m_num_1 = 0;
    int64_t m_num_2 = 0;
};

