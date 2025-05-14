#include "libs/pch.h";
#include "api/services/Logger.cpp";
#include "boost/uuid/uuid.hpp";
#include "boost/uuid/uuid_generators.hpp";

int main()
{
    std::cout << "Hello World!";
    std::cin.get();

    Logger logger = Logger::getInstance();

    return 0;
}