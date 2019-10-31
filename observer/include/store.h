#pragma once

#include "observer.h"
#include "product.h"

#include <vector>

class Store : public Observer
{
public:
    virtual void update(std::vector<Product*>& products);
    void setProducts(std::vector<Product*>& products);
    std::vector<Product*> getProducts();
private:
    std::vector<Product*> m_products;
};
