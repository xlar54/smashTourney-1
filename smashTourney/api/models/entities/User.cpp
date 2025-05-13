#include "libs/pch.h";
#include "boost/date_time/local_time/local_date_time.hpp";
#include "boost/date_time/time_zone_base.hpp";
#include "boost/uuid/uuid.hpp";

class User
{
public:
    boost::uuids::uuid getUserId() const
    {
        return userId;
    }
    void setUserId(const boost::uuids::uuid &newUserId)
    {
        userId = newUserId;
    }
    const std::string &getUserName() const
    {
        return userName;
    }
    void setUserName(const std::string &newUserName)
    {
        userName = newUserName;
    }
    const std::string &getPasswordHash() const
    {
        return passwordHash;
    }
    void setPasswordHash(const std::string &newPasswordHash)
    {
        passwordHash = newPasswordHash;
    }
    const std::string &getPasswordSalt() const
    {
        return passwordSalt;
    }
    void setPasswordSalt(const std::string &newPasswordSalt)
    {
        passwordSalt = newPasswordSalt;
    }
    boost::local_time::local_date_time getCreated() const
    {
        return created;
    }
    void setCreated(const boost::local_time::local_date_time &newCreated)
    {
        created = newCreated;
    }
    boost::local_time::local_date_time getLastUpdate() const
    {
        return lastUpdate;
    }
    void setLastUpdate(const boost::local_time::local_date_time &newLastUpdate)
    {
        lastUpdate = newLastUpdate;
    }
    boost::local_time::local_date_time getLastLogin() const
    {
        return lastLogin;
    }
    void setLastLogin(const boost::local_time::local_date_time &newLastLogin)
    {
        lastLogin = newLastLogin;
    }

private:
    boost::uuids::uuid userId;
    std::string userName;
    std::string passwordHash;
    std::string passwordSalt;
    boost::local_time::local_date_time created;
    boost::local_time::local_date_time lastUpdate;
    boost::local_time::local_date_time lastLogin;
};