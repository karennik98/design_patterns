#pragma once

#include <string>

struct Product
{
    Product(std::string nm, float pr)
        : name(nm)
        , price(pr)
    {}
    std::string name;
    float price;
};
