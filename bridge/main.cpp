#include "program.hpp"

#include <vector>

int main()
{
    std::vector<Program*> progs {   
        new BankSysteam(new CppDeveloper()),
        new StockExchange(new JavaDeveloper())
    };

    for(const auto& it : progs)
    {
        it->developProgram();
    }

    return 0;
}