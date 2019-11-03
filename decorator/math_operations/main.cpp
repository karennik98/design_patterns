#include "simple_math_operations.hpp"
#include "math_decorator.hpp"

#include <iostream>

int main()
{
    Timer* timer_1 = new Timer(new Add(7,9));
    std::cout<<"Result of add is: "<< timer_1->doOperation()
             <<"\nDuration is: "<<timer_1->getExecutionTime()
             <<std::endl<<std::endl;

    Timer* timer_2 = new Timer(new Sub(7,9));
    std::cout<<"Result of sub is: "<< timer_2->doOperation()
             <<"\nDuration is: "<<timer_2->getExecutionTime()
             <<std::endl<<std::endl;

    Timer* timer_3 = new Timer(new Mul(7,9));
    std::cout<<"Result of mul is: "<< timer_3->doOperation()
             <<"\nDuration is: "<<timer_3->getExecutionTime()
             <<std::endl<<std::endl;

    Timer* timer_4 = new Timer(new Div(7,9));
    std::cout<<"Result of div is: "<< timer_4->doOperation()
             <<"\nDuration is: "<<timer_4->getExecutionTime()
             <<std::endl<<std::endl;

    return 0;
}