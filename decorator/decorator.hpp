#pragma once
#include "burger.hpp"

class Decorator : public Burger
{
protected:
    inline Decorator(Burger* component) { m_ptr_comp = component; }
public:
    virtual int price() override        { return m_ptr_comp->price(); }
protected: 
    Burger* m_ptr_comp;        
};

class Angus : public Decorator
{
public:
    Angus(Burger* component, int price)
        : Decorator(component)
    {
        m_price = price;
    }
    int price() override 
    {
        return Decorator::price() + m_price;
    }
};

class Cheese : public Decorator
{
public:
    Cheese(Burger* component, int price)
        : Decorator(component)
    {
        m_price = price;
    }
    int price() override 
    {
        return Decorator::price() + m_price;
    }
};

class Avocado : public Decorator
{
public:
    Avocado(Burger* component, int price)
        : Decorator(component)
    {
        m_price = price;
    }
    int price() override 
    {
        return Decorator::price() + m_price;
    }
};
