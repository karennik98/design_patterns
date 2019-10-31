#pragma once

#include <iostream>
#include <vector>

#include "subject.h"
#include "observer.h"
#include "product.h"

class Storage : public Subject
{
public:
    virtual void attach(Observer* observer);
    virtual void detach(Observer* observer);
    virtual void notify();
    void setProduct(Product* product);
    void setState(std::vector<Product*>& products);
private:
    std::vector<Observer*> m_observers;
    std::vector<Product*> m_products;
};

