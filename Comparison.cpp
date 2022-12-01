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
#include "Comparison.h"

bool compareIp(const Record& record1, const Record& record2)
{
    return record1.ipAddressType() < record2.ipAddressType();
}

bool compareDate(const Record& record1, const Record& record2)
{
    return record1.dateType() < record2.dateType();
}
