#pragma once

#include "household_product.hpp"

#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <stdint.h>

class Shop
{
public:
    using basket_type  = std::unordered_map<HouseholdProduct*, uint16_t>;

    Shop() = delete;
    Shop(std::string name)
        : m_name(name)
    {}
    
    inline void addProduct(HouseholdProduct* product, uint16_t count)
    {
        m_basket.insert({product, count});
    }

    inline void removeProduct(HouseholdProduct* product)
    {
        auto item = m_basket.find(product);
        m_basket.erase(item);
    }

    void showProducts() const
    {
        for( auto&&[name,count] : m_basket )
        {
            std::cout<<"Product name: "<<name->getName()
                     <<"\nProduct price: "<<name->getPrice()
                     <<"\nProduct count: "<<count
                     <<std::endl<<std::endl;
        }
    }

    inline basket_type getProducts() const { return m_basket; }
private:
    basket_type m_basket;
    std::string m_name;
};