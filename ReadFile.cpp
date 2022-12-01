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
