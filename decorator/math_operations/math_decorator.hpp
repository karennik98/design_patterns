#pragma once

#include "simple_math_operations.hpp"

#include <chrono>

class MathDecorator : public MathOperation
{
public:
    MathDecorator(MathOperation* operation)
        : m_operation(operation)
    {}
    virtual int64_t doOperation() override
    {
        return m_operation->doOperation();
    }
protected:
    MathOperation* m_operation;
};

class Timer : public MathDecorator
{
public:
    Timer(MathOperation* operation)
        : MathDecorator(operation)
    {}
    virtual int64_t doOperation() override
    {
        std::chrono::time_point<std::chrono::system_clock> start, end;
        start = std::chrono::system_clock::now();

        int64_t result = MathDecorator::doOperation();

        end = std::chrono::system_clock::now();
        m_executionTime = std::chrono::duration_cast<std::chrono::seconds>(end-start).count();
        
        return result;
    }

    uint64_t getExecutionTime() const 
    {
        return m_executionTime;
    }
private:
    uint64_t m_executionTime;
};