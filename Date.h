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
 
#ifndef DATE_H
#define DATE_H

#include <map>

class Date {
public:
    Date(std::string& month, int day);

    bool operator<(const Date& date);

    std::string month() const;
    int day() const;

private:
    int month_;
    int day_;

};

#endif
