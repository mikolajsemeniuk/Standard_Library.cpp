//
//  str.hpp
//  Test
//
//  Created by Mikołaj Semeniuk on 03/08/2020.
//  Copyright © 2020 Mikołaj Semeniuk. All rights reserved.
//

#ifndef str_hpp
#define str_hpp

#include <stdio.h>
#include <string>

// String
std::string str(std::string v);
std::string str(std::vector<std::string> v);

// Integers
std::string str(int v);
std::string str(std::vector<int> v);

// Long
std::string str(long v);
std::string str(std::vector<long> v);

// Float
std::string str(float v);
std::string str(std::vector<float> v);

// Double
std::string str(double v);
std::string str(std::vector<double> v);

#endif /* str_hpp */
