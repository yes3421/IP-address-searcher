#ifndef RECORD_H
#define RECORD_H

#include "Date.h"
#include "IpAddress.h"

class Record {
public:
    Record(
        std::string& month,
        int day,
        std::string hour,
        std::string& ipAddress
    );

    std::string date() const;
    std::string hour() const;
    std::string ipAddress() const;

private:
    Date date_;
    IpAddress ipAddress_;
    std::string hour_;

};

#endif
