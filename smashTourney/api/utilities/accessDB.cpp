#include "api/libs/sqlite/sqlite3.h";
#include "api/libs/pch.h";

class accessDB
{
    sqlite3 *db;

    int exit = 0;

    accessDB(const std::string &url)
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
    ~accessDB()
    {
        sqlite3_close(db);
        db = NULL;
    }
};