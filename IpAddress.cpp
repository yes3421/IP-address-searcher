/*
 * Actividad Integral sobre el uso de códigos hash
 *
 * Actividad 5.2
 *
 * Fernando Gabriel Gutiérrez Madrigal A01424790
 * Omar Adalid Macías Mayorquín A01635795
 * Paul Enrique Alonso Ramírez A01634608
 * Programación de estructuras de datos y algoritmos fundamentales
 * Grupo 614
 * Equipo 5
 * Tecnológico de Monterrey, Campus Guadalajara
 * 30 de noviembre de 2022
 */
 
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
