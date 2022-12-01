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
 
#include "WriteFile.h"

void writeFile(std::vector<Record>& records)
{
    std::ofstream file("bitacoraOrdenadaIP-Eq5.txt");

    for (std::vector<Record>::size_type i = 0; i != records.size(); ++i) {
        file
        << records[i].date() << " "
        << records[i].hour() << " "
        << records[i].ipAddress() << '\n';
    }
}
