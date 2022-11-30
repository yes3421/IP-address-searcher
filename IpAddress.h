#ifndef IPADDRESS_H
#define IPADDRESS_H

#include <string>

class IpAddress {
public:
    IpAddress(std::string& ipAddress);

    bool operator<(const IpAddress& ip);

    std::string ipAddress() const;

private:
    int octet1_;
    int octet2_;
    int octet3_;
    int octet4_;

};

#endif
