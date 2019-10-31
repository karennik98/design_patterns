#pragma once

#include "product.h"

#include <vector>

class Observer
{
public:
    virtual void update(std::vector<Product*>& products) = 0;
};
