#include "api/libs/pch.h";
#include "boost/log/core.hpp";
#include "boost/log/trivial.hpp";
#include "boost/log/expressions.hpp";
#include "boost/log/sinks/text_file_backend.hpp";
#include "boost/log/utility/setup/file.hpp";
#include "boost/log/utility/setup/common_attributes.hpp";
#include "boost/log/sources/severity_logger.hpp";
#include "boost/log/sources/record_ostream.hpp";
#include "boost/log/sources/logger.hpp";

namespace logging = boost::log;
namespace src = boost::log::sources;
namespace sinks = boost::log::sinks;

class Logger
{
public:
    static Logger &getInstance()
    {
        std::call_once(initInstanceFlag, &Logger::initSingleton);
        return *instance;
    }

    Logger()
    {
        logging::add_file_log("sample.log");

        logging::core::get()->set_filter(
            logging::trivial::severity >= logging::trivial::info);
    }
    void log(const std::string &message)
    {
        const char *messagePtr = message.c_str();

        try
        {
            logging::record rec = lg.open_record();

            if (rec)
            {
                logging::record_ostream strm(rec);
                strm << messagePtr;
                strm.flush();
                lg.push_record(boost::move(rec));
            }
            else
            {
                throw "Unable to open logging record.";
            }
        }

        catch (std::string error)
        {
            std::cout << error << std::endl;
        }
    }

private:
    src::logger lg;
    Logger() = default;
    ~Logger() = default;
    Logger(const Logger &) = delete;
    Logger &operator=(const Logger &) = delete;
    static Logger *instance;
    static std::once_flag initInstanceFlag;
    static void initSingleton()
    {
        instance = new Logger;
    }
};