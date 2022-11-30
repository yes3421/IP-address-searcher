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

Date::Date(std::string& month, int day)
{
    month_ = monthToInt[month];
    day_ = day;
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
