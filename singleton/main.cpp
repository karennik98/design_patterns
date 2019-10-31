#include <iostream>

#include "singleton.hpp"


int main()
{
    Singleton* single = Singleton::getInstance();
    single->setData("Viktor");

    std::cout<<single->getData()<<std::endl;

    Singleton* single2 = Singleton::getInstance();
    std::cout<<single2->getData()<<std::endl;

    return 0;
}