#pragma once

#include "household_product.hpp"
#include "grocery_item.hpp"

class GroceryItemAdapter : public HouseholdProduct
{
public:
    GroceryItemAdapter(GroceryItem* item)
        : m_item(item)
    {}

    virtual uint32_t getPrice() const override   { return m_item->getPrice(); }
    virtual std::string getName() const override { return m_item->getName(); }

    ~GroceryItemAdapter()
    {
        delete m_item;
    }
private:
    GroceryItem* m_item;
};