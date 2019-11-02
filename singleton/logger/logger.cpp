#include "Logger.hpp"

Logger* Logger::m_singleObject = nullptr;
std::mutex mtx;

Logger::Logger()
    : m_fileWriteStream(new std::ofstream)
    , m_fileReadStream(new std::ifstream)
    , m_name(std::move(std::string()))
{
}

Logger* Logger::getSingleLoggerObject()
{
    mtx.lock();

    if(m_singleObject == nullptr)
    {
        m_singleObject = new Logger;
    }

    mtx.unlock();

    return m_singleObject;
}

void Logger::writeData(const std::string& data)
{
    m_fileWriteStream->open("./data/data.txt", std::ios::out | std::ios::app);
    if(m_fileWriteStream->is_open())
    {
        *m_fileWriteStream << data;
        m_fileWriteStream->close();
        return;
    }
    std::runtime_error("File data.txt did not open");
}
std::string Logger::readData()
{
    m_fileReadStream->open("./data/data.txt");
    std::string line;
    std::string outData;
    if(m_fileReadStream->is_open())
    {
        while(std::getline(*m_fileReadStream, line))
        {
            outData += line;
            line.clear();
        }
        return outData;
    }
    std::runtime_error("File data.txt did not open!");
}

void Logger::setLoggerName(const std::string& name)
{
    m_name = name;
}
std::string Logger::getLoggerName() const
{
    return m_name;
}