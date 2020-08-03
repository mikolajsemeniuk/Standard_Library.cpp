//
//  join.cpp
//  Test
//
//  Created by Mikołaj Semeniuk on 03/08/2020.
//  Copyright © 2020 Mikołaj Semeniuk. All rights reserved.
//

#include "join.hpp"
#include <iostream>
#include <vector>
#include <string>

#include "../str/str.hpp"

template <class T>
std::string join (std::vector<T> vectorToJoin, std::string stringToJoin)
{
    std::string result = "";
    for (auto &i : vectorToJoin)
        result.append(str(i) + stringToJoin);
    return result;
}
