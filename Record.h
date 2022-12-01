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
