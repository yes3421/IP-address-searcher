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
