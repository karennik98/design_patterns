#pragma once

#include <string>
#include <mutex>
#include <fstream>

class Logger
{
public:
    Logger(const Logger&) = delete;
    Logger(Logger&&) = delete;

    static Logger* getSingleLoggerObject();

    void writeData(const std::string& data);
    std::string readData();

    void setLoggerName(const std::string& name);
    std::string getLoggerName() const;
protected:
    Logger();
private:
    static Logger* m_singleObject;
private:
    std::string m_name;
    std::ofstream* m_fileWriteStream;
    std::ifstream* m_fileReadStream;
};