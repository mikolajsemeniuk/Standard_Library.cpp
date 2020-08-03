//
//  replace.cpp
//  Test
//
//  Created by Mikołaj Semeniuk on 03/08/2020.
//  Copyright © 2020 Mikołaj Semeniuk. All rights reserved.
//

#include "replace.hpp"
#include <iostream>
#include <string>
#include <regex>

std::string replace (std::string stringToReplace, std::string substringToReplace, std::string substringToReplaceFor)
{
    std::string result = std::regex_replace(stringToReplace, std::regex(substringToReplace), substringToReplaceFor);
    return result;
}
