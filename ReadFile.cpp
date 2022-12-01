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
 
#include "ReadFile.h"

void readFile(std::vector<Record>& records)
{
    std::ifstream input("bitacora3.txt");

    std::string line;
    std::string month;
    std::string hour;
    std::string ipAddressRead;

    int day;

    while (std::getline(input, line)) {
        std::istringstream log(line);

        log
        >> month
        >> day
        >> hour
        >> ipAddressRead;

        Record record(month, day, hour, ipAddressRead);

        records.push_back(record);
    }
}
