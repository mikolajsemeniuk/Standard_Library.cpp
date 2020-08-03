//
//  split.cpp
//  Test
//
//  Created by Mikołaj Semeniuk on 03/08/2020.
//  Copyright © 2020 Mikołaj Semeniuk. All rights reserved.
//

#include "split.hpp"
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> split (std::string stringToSplit, std::string patternToSearchFor)
{
    std::vector<std::string> matches;

    size_t pos = 0;
    std::string match;
    
    while ((pos = stringToSplit.find(patternToSearchFor)) != std::string::npos) {
        match = stringToSplit.substr(0, pos);
        matches.push_back(match);
        stringToSplit.erase(0, pos + patternToSearchFor.length());
    }
    
    return matches;
}
