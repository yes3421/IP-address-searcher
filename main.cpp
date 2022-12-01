#include <vector>
#include <cstdlib>
#include <algorithm>

#include "Record.h"
#include "ReadFile.h"
#include "WriteFile.h"

bool compareIp(const Record& record1, const Record& record2)
{
    return record1.ipAddress() < record2.ipAddress();
}

bool compareDate(const Record& record1, const Record& record2)
{
    return record1.date() < record2.date();
}

int main()
{
    std::vector<Record> records;

    readFile(records);

    std::sort(records.begin(), records.end(), compareDate);

    writeFile(records);

    return EXIT_SUCCESS;
}
