#include "store.h"

void Store::update(std::vector<Product*>& products)
{
    setProducts(products);
}

void Store::setProducts(std::vector<Product*>& products)
{
    for(int i=0;i<products.size(); ++i)
    {
        m_products.push_back(products[i]);
    }   
}

std::vector<Product*> Store::getProducts()
{
    return m_products;
}
