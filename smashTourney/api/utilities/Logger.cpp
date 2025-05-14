#include "api/libs/pch.h";
#include "boost/log/trivial.hpp";

class Logger
{
    void traceLog(const std::string &message)
    {
        BOOST_LOG_TRIVIAL(trace) << message;
    }
    void debugLog(const std::string &message)
    {
        BOOST_LOG_TRIVIAL(debug) << message;
    }
    void errorLog(const std::string &message)
    {
        BOOST_LOG_TRIVIAL(error) << message;
    }
};