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

#include "Date.h"

std::map<std::string, int> monthToInt{
    {"Jan", 0}, {"Feb", 1},
    {"Mar", 2}, {"Apr", 3},
    {"May", 4}, {"Jun", 5},
    {"Jul", 6}, {"Aug", 7},
    {"Sep", 8}, {"Oct", 9},
    {"Nov", 10}, {"Dec", 11},
};

std::map<int, std::string> intToMonth{
    {0, "Jan"}, {1, "Feb"},
    {2, "Mar"}, {3, "Apr"},
    {4, "May"}, {5, "Jun"},
    {6, "Jul"}, {7, "Aug"},
    {8, "Sep"}, {9, "Oct"},
    {10, "Nov"}, {11, "Dec"},
};

Date::Date(std::string& month, int day, std::string& hour)
{
    month_ = monthToInt[month];
    day_ = day;

    int colon = hour.find(':');
    hour_ = std::stoi(hour.substr(0, colon));
    hour.erase(0, colon + 1);
    
    colon = hour.find(':');
    minute_ = std::stoi(hour.substr(0, colon));
    hour.erase(0, colon + 1);
    
    second_ = std::stoi(hour);
    hour.erase();
}

bool Date::operator<(const Date& date)
{
    if (month_ < date.month_) {
        return true;
    }
    else if (month_ == date.month_) {
        if (day_ < date.day_) {
            return true;
        }
        else if (day_ == date.day_) {
            if (hour_ < date.hour_) {
                return true;
            }
            else if (hour_ == date.hour_) {
                if (minute_ < date.minute_) {
                    return true;
                }
                else if (minute_ == date.minute_) {
                    if (second_ < date.second_) {
                        return true;
                    }
                    else {
                        return false;
                    }
                }
                else  {
                    return false;
                }
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

std::string Date::month() const
{
    return intToMonth[month_];
}

int Date::day() const
{
    return day_;
}

std::string Date::hour() const
{
    return
    std::to_string(hour_) + ":" +
    std::to_string(minute_) + ":" +
    std::to_string(second_);
}
