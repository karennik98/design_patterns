#include "singleton.hpp"

#include <mutex>

std::mutex mtx;

Singleton* Singleton::instance = nullptr;

Singleton* Singleton::getInstance()
{
    mtx.lock();
    if( instance = nullptr )
    {  
        instance = new Singleton;
    }
    mtx.unlock();
    return instance;
}