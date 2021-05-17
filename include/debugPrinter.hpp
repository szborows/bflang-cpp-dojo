#pragma once
#include <iostream>

int covertToUInt(char value)
{
    int result = static_cast<int>(value);
    if (result < 0)
    {
        result = 256 + result;
    }
    return result;
}

void debugPrinter(const std::string& str)
{
    std::cout << "DEBUG PRINTING WITH CASTING TO INT" << std::endl;
    for (const auto& chr : str)
    {
        std::cout << covertToUInt(chr) << " ";
    } 
    std::cout << std::endl;
}
