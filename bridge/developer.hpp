#pragma once

#include <iostream>

class Developer
{
public:
    virtual void writeCode() = 0;
};

class JavaDeveloper : public Developer
{
public:
    virtual void writeCode() override
    {
        std::cout<<"I write code wuth Java...\n";
    }
};

class CppDeveloper : public Developer
{
public:
    virtual void writeCode() override
    {
        std::cout<<"I write code with C++...\n";
    }
};

