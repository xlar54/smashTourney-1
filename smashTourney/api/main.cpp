#include "libs/pch.h"
#include "services/Logger.cpp"
#include "utilities/accessDB.cpp"
#include "models/Character.cpp"
#include "models/Player.cpp"
#include "models/User.cpp"


int main()
{
    std::cout << "Hello World!";
    std::cin.get();

    //  Logger &logger = Logger::getInstance();

    AccessDB *accessDB  = new AccessDB("assets/tourneyDB");

    Character *character = new Character(); 

    Player *player = new Player();

    User *user = new User(); 

    return 0;
}