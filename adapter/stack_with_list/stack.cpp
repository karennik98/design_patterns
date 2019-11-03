#include "stack.h"

int Stack::top()
{
    return m_list.front();
}

void Stack::push(int val)
{
    m_list.push_front(val);
}

int Stack::pop()
{   
    int el = m_list.front();
    m_list.pop_front();
    return el;
}

bool Stack::empty()
{
    return m_list.empty();
}

void Stack::clear()
{
    m_list.clear();
}

size_t Stack::size()
{
    return m_list.size();
}

