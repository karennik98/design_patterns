#include "stack.h"

#include <iostream>

int main()
{
    Stack stack;
    stack.push(2);
    stack.push(3);
    stack.push(6);
    stack.push(0);
    std::cout<<stack;
    return 0;
}

