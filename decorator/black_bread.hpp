#pragma once
#include "burger.hpp"

class BlackBread:public Burger
{
public:
    BlackBread(int price)
    {
        m_price = price;
    }
    int price() override { return m_price; }
};
