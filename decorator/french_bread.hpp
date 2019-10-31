#pragma once 
#include "burger.hpp"


class FrenchBread : Burger
{
public:
    inline FrenchBread(int price)
    {
        m_price = price;
    }
    virtual int price()
    {
        return m_price;
    }
};