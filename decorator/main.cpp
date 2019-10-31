#include <iostream>

#include "decorator.hpp"
#include "black_bread.hpp"



int main()
{

    Burger* brduch = new Angus(new Cheese(new Avocado(new BlackBread(100),200),300),400);
    std::cout<<brduch->price()<<std::endl; 
    return 0;
}