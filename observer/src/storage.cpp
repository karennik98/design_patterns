#include "storage.h"
#include <algorithm>

void Storage::attach(Observer* observer)
{
    m_observers.push_back(observer);
}

void Storage::detach(Observer* observer)
{
    const auto iter = std::find(m_observers.begin(), m_observers.end(), observer);
    if(iter != m_observers.end())
    {
        m_observers.erase(iter);
    }
}

void Storage::setState(std::vector<Product*>& products)
{
    for(int i=0;i<products.size();++i)
    {
        setProduct(products[i]);
    }   
    notify();
}

void Storage::setProduct(Product* product)
{
    m_products.push_back(product);
}

void Storage::notify()
{
    for(int i=0; i<m_observers.size(); ++i)
    {
        m_observers[i]->update(m_products);
    }
}
