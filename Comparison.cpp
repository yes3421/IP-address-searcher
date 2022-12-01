#include "Comparison.h"

bool compareIp(const Record& record1, const Record& record2)
{
    return record1.ipAddressType() < record2.ipAddressType();
}

bool compareDate(const Record& record1, const Record& record2)
{
    return record1.dateType() < record2.dateType();
}
