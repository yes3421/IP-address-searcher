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
#include "MyHashTable.h"


using namespace std;

// Constructor
MyHashTable::MyHashTable(){
    /*
     * Constructor de la clase MyHashTable
     * Inicializa el arreglo de listas con un tamaño de 11
     * 
     * Complejidad: O(1)
    */
    this->size = 0;
    this->sizeA = 11;
    this->tabla = new list<tuple<string, vector<Record>>>*[this->sizeA];
}

// Destructor
MyHashTable::~MyHashTable(){
    /*
     * Destructor de la clase MyHashTable
     * 
     * Complejidad: O(1)
    */
    for (int i = 0; i < this->sizeA; i++){
        this->tabla[i].clear();
    }
    delete[] this->tabla;
}

// Devuelve si esta vacio
bool MyHashTable::isEmpty(){
    /*
     * Devuelve si la tabla hash esta vacia
     * 
     * Complejidad: O(1)
    */
    return this->size == 0;
}

// Devuelve la posicion donde deberia estar la llave
int MyHashTable::getPos(std::string key){
    /*
     * Devuelve la posicion donde deberia estar la llave
     * 
     * Parámetros:
     * key: llave - string
     * 
     * Complejidad: O(1)
    */
    size_t hashC = hash<std::string>{}(key);
    int hashCode = static_cast<int>(hashC);
    return std::abs(hashCode % this->sizeA);
}

// Rehashing
void MyHashTable::rehashing(){
    /*
     * Realiza el rehashing de la tabla hash
     * 
     * Complejidad: O(n)
    */
    list<tuple<string, vector<Record>>> *temp = new list<tuple<string, vector<Record>>>[this->sizeA * 2 + 1];
    this->sizeA = this->sizeA * 2 + 1;
    for (int i=0; i < this->sizeA / 2; i++){
        for (auto j = this->tabla[i].begin(); j != this->tabla[i].end(); j++){
            int pos = this->getPos(std::get<0>(*j));
            temp[pos].push_back(*j);
        }
    }
    delete[] this->tabla;
    this->tabla = temp;
}
// Agrega un elemento
void MyHashTable::put(Record record){
    /*
     * Agrega un elemento a la tabla hash
     * 
     * Parámetros:
     * key: llave - string
     * value: valor - int
     * 
     * Complejidad: O(n) en caso de que se realice rehashing y O(1) en caso contrario
    */
    int pos = this->getPos(record.IPAddress);
    for (auto i = this->tabla[pos].begin(); i != this->tabla[pos].end(); i++){
        if (std::get<0>(*i) == record.IPAddress){
            std::get<1>(*i).push_back(record);
            return;
        }
    }
    tuple<string, vector<Record>> newTup = make_tuple(record.IPAddress, vector<Record>{record});
    this->tabla[pos].push_back(newTup);
    this->size++;
    if (this->size > this->sizeA * 0.75){
        this->rehashing();
    }
}

// Devuelve el valor de la llave
string MyHashTable::get(string key){
    /*
     * Devuelve el valor de la key y llave ordenada
     * 
     * Parámetros:
     * key
     * Complejidad: O(n)
    */
    int pos = this->getPos(key);
    for (auto j = this->tabla[pos].begin(); j != this->tabla[pos].end(); j++){
        if (std::get<0>(*j) == key){
            std::sort(std::get<1>(*j).begin(), std::get<1>(*j).end(), compareDate);
            std::cout << std::get<0>(*j) << std::endl;
            for (int i = 0; i < std::get<1>(*j).size(); i++){
                std::cout << std::get<1>(*j)[i].date() + "\n";
            }
        }
    }
    return "";
}


// Interfaz de usuario
void MyHashTable::userInterface(){

}