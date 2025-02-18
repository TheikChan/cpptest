#include <iostream>

std::string SafeCracker(int SafeID)
{
    if (SafeID == 12)
        return "13-26-26";
    else
        return "Safe Combination Unknown";
}