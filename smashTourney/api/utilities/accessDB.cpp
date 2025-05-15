#include "../libs/sqlite/sqlite3.h"
#include "../libs/pch.h"

class AccessDB
{
    sqlite3 *db;

    int exit = 0;

public:
    AccessDB(const std::string &url)
    {
        const char *urlPtr = url.c_str();

        try
        {
            exit = sqlite3_open(urlPtr, &db);
            if (exit)
            {
                throw;
            }
            else
            {
                std::cout << "Opened Database Successfully!" << std::endl;
            }
        }
        catch (...)
        {
            std::cout << sqlite3_errmsg(db) << std::endl;
        }
    }
    ~AccessDB()
    {
        sqlite3_close(db);
        db = NULL;
    }
};