#include "Logger.hpp"

#include <iostream>

int main()
{
    Logger* logger = Logger::getSingleLoggerObject();
    char key;
    while (true)
    {
        std::cout<<"Put [w] for write data to file: \n";
        std::cout<<"Put [r] for read from file: \n";
        std::cout<<"Put [e] for exit program: \n";

        std::cin>>key;

        switch (key)
        {
            case 'w':
            {
                system("clear");
                std::string data;
                //std::getline(std::cin, data);
                std::cin>>data;
                logger->writeData(data);
                break;
            }
            case 'r':
            {
                system("clear");
                std::string readData;
                readData = logger->readData();
                std::cout<<"File data: "<<readData<<std::endl<<std::endl;
                break;
            }
            case 'e':
            {
                exit(0);
            }

            default:
            {
                std::cerr<<"Invalid symbol\n";
                exit(-1);
            }
        }   
    }
    
}