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
