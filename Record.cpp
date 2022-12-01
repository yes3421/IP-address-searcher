#include "Record.h"

Record::Record(
    std::string& month,
    int day,
    std::string hour,
    std::string& ipAddress
) : date_(month, day), ipAddress_(ipAddress)
{
    hour_ = hour;
}

std::string Record::date() const
{
    return date_.month() + " " + std::to_string(date_.day());
}

std::string Record::hour() const
{
    return hour_;
}

std::string Record::ipAddress() const
{
    return ipAddress_.ipAddress();
}
