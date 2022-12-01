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

#include <vector>
#include <cstdlib>
#include <algorithm>

#include "Record.h"
#include "ReadFile.h"
#include "WriteFile.h"
#include "Comparison.h"
#include "MyHashTable.h"

int main()
{
    std::vector<Record> records;

    readFile(records);

    std::sort(records.begin(), records.end(), compareIp);

    writeFile(records);

    MyHashTable tabla;

    for (int i = 0; i < records.size(); i++){
        tabla.put(records[i]);
    }

    tabla.userInterface();

    return EXIT_SUCCESS;
}
