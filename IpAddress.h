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
