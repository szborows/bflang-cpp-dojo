#pragma once
#include <string>

template <typename T, std::size_t N>
auto convertToString(const T(&str)[N])
{
    std::string result;
    for (std::size_t i = 0; i < N - 1; ++i)
    {
        result += str[i];
    }
    return result;
}
