#pragma once

#include <string>

class GroceryItem
{
public:
    GroceryItem() = default;
    GroceryItem(std::string name, uint32_t price)
        : m_name(name)
        , m_price(price)
    {}
    virtual uint32_t getPrice() const   { return m_price; }
    virtual std::string getName() const { return m_name; }
private:
    std::string m_name;
    uint32_t m_price;
};