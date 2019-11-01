#include "developer.hpp"

class Program
{
public:
    Program(Developer* developer)
        : m_developer( developer )
    {
    }
    
    virtual void developProgram() = 0;
protected:
    Developer* m_developer;
};

class BankSysteam : public Program
{
public:
    BankSysteam(Developer* developer)
        : Program(developer)
    {
    }
    virtual void developProgram() override
    {
        std::cout<<"Start to develop bank systeam\n";
        m_developer->writeCode();       
    }
};

class StockExchange : public Program
{
public:
    StockExchange(Developer* developer)
        : Program(developer)
    {
    }

    virtual void developProgram() override
    {
        std::cout<<"Strat develop stock exchange\n";
        m_developer->writeCode();
    }
};