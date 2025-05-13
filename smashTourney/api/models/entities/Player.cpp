#include "libs/pch.h";
#include "boost/date_time/local_time/local_date_time.hpp";
#include "boost/uuid/uuid.hpp";




class Player
{
    public:
    private:
          boost::uuids::uuid userId; 
          std::string playerName; 
          std::string passwordHash; 
          std::string passwordSalt; 
          boost::local_time::local_date_time created; 
          boost::local_time::local_date_time lastPlayed;
          boost::local_time::local_date_time lastUpdate; 
          std::vector<boost::local_time::local_date_time> matchWins; 
          std::vector<boost::local_time::local_date_time> gameWins;
          std::vector<boost::local_time::local_date_time> gamesPlayed;
          std::vector<boost::local_time::local_date_time> matchesPlayed; 
        
};