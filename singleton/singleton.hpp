#pragma once
#include <string>

class Singleton
{
public:
    static Singleton* getInstance();
    inline std::string getData() { return m_data; }
    inline void setData(std::string data) { m_data = data; }
    
    Singleton(const Singleton& rhs) = delete;
    Singleton(Singleton&& rhs) = delete;
protected:
    Singleton() {}
private:
    static Singleton* instance;
    std::string m_data;
};