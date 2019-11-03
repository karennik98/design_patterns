#include <list>
#include <iostream>

class Stack
{
public:
    Stack()
    {
    }
    Stack(const Stack& rhs)
    {
        m_list = rhs.m_list;
    }
public:
    int top(); 
    void push(int val);
    int pop();
    bool empty();
    void clear();
    size_t size();
public:
    friend std::ostream& operator << (std::ostream& out, const Stack& data)
    {
        Stack stack(data);
        for(int i=0;i<stack.size();++i)
        {
            out<<stack.pop()<<" ";   
        }
        std::cout<<std::endl;
        return out;
    }
private:
    std::list<int> m_list;
};
