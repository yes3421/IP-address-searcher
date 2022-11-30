#include "IpAddress.h"

IpAddress::IpAddress(std::string& ipAddress)
{
    int dot = ipAddress.find('.');
    octet1_ = std::stoi(ipAddress.substr(0, dot));
    ipAddress.erase(0, dot + 1);

    dot = ipAddress.find('.');
    octet2_ = std::stoi(ipAddress.substr(0, dot));
    ipAddress.erase(0, dot + 1);
    
    dot = ipAddress.find('.');
    octet3_ = std::stoi(ipAddress.substr(0, dot));
    ipAddress.erase(0, dot + 1);

    dot = ipAddress.find(':');
    octet4_ = std::stoi(ipAddress.substr(0, dot));
    ipAddress.erase();
}

bool IpAddress::operator<(const IpAddress& ip)
{
    if (octet1_ < ip.octet1_) {
        return true;
    }
    else if (octet1_ == ip.octet1_) {
        if (octet2_ < ip.octet2_) {
            return true;
        }
        else if (octet2_ == ip.octet2_) {
            if (octet3_ < ip.octet3_) {
                return true;
            }
            else if (octet3_ == ip.octet3_) {
                if (octet4_ < ip.octet4_) {
                    return true;
                }
                else {
                    return false;
                }
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

std::string IpAddress::ipAddress() const
{
    return
    std::to_string(octet1_) + "." +
    std::to_string(octet2_) + "." +
    std::to_string(octet3_) + "." +
    std::to_string(octet4_);
}
