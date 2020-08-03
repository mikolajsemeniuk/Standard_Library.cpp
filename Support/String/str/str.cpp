//
//  str.cpp
//  Test
//
//  Created by Mikołaj Semeniuk on 03/08/2020.
//  Copyright © 2020 Mikołaj Semeniuk. All rights reserved.
//

#include "str.hpp"
#include <iostream>
#include <vector>
#include <string>

// String
std::string str(std::string v)
{
    return v;
}

std::string str(std::vector<std::string> v)
{
    std::string result = "";
    for (auto &i : v)
        result.append(i);
    return result;
}

// Int numbers
std::string str(int v)
{
    return std::to_string(v);
}

std::string str(std::vector<int> v)
{
    std::string result = "";
    for (auto &i : v)
        result.append(std::to_string(i));
    return result;
}

// Long numbers
std::string str(long v)
{
    return std::to_string(v);
}

std::string str(std::vector<long> v)
{
    std::string result = "";
    for (auto &i : v)
        result.append(std::to_string(i));
    return result;
}

// Float numbers
std::string str(float v)
{
    return std::to_string(v);
}

std::string str(std::vector<float> v)
{
    std::string result = "";
    for (auto &i : v)
        result.append(std::to_string(i));
    return result;
}

// Double numbers
std::string str(double v)
{
    return std::to_string(v);
}

std::string str(std::vector<double> v)
{
    std::string result = "";
    for (auto &i : v)
        result.append(std::to_string(i));
    return result;
}
