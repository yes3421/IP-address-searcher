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

Date Record::dateType() const
{
    return date_;
}

IpAddress Record::ipAddressType() const
{
    return ipAddress_;
}
