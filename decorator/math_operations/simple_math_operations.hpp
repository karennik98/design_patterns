#pragma once

#include "mat_operations.hpp"

class Add : public MathOperation
{
public:
    Add(int64_t num_1, int64_t num_2)
        : MathOperation(num_1, num_2)
    {}
    virtual int64_t doOperation() override
    {
        return m_num_1 + m_num_2;
    }
};

class Sub : public MathOperation
{
public:
    Sub(int64_t num_1, int64_t num_2)
        : MathOperation(num_1, num_2)
    {}
    virtual int64_t doOperation() override
    {
        return m_num_1 - m_num_2;
    }
};

class Mul : public MathOperation
{
public:
    Mul(int64_t num_1, int64_t num_2)
        : MathOperation(num_1, num_2)
    {}
    virtual int64_t doOperation() override
    {
        return m_num_1 * m_num_2;
    }
};

class Div : public MathOperation
{
public:
    Div(int64_t num_1, int64_t num_2)
        : MathOperation(num_1, num_2)
    {}
    virtual int64_t doOperation() override
    {
        return m_num_1 / m_num_2;
    }
};