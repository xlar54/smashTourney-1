#include "libs/pch.h"
#include "services/Logger.cpp"

int main()
{
    std::cout << "Hello World!";
    std::cin.get();

    Logger &logger = Logger::getInstance();

    return 0;
}