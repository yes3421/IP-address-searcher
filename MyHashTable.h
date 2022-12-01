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
#ifndef MYHASHTABLE_H
#define MYHASHTABLE_H   

#include <iostream>
#include <list>
#include <string>
#include <tuple>
#include <vector>
#include "Record.h"
#include "Comparison.h"

class MyHashTable{
    private:
        std::list<std::tuple<std::string, vector<Record>>> *tabla;
        int size; // Cantidad de valores que hay
        int sizeA; // Tamano del arreglo
        int getPos(std::string key);
        void rehashing();
    public:
        MyHashTable();
        ~MyHashTable();
        bool isEmpty();
        void put(Record record);
        void get(std::string key);
        void remove(std::string key);
        void userInterface();
};

#endif