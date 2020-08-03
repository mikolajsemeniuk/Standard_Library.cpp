#ifndef main_h
#define main_h

// str
#include "str/str.hpp"

// split
#include "split/split.hpp"

// replace
#include "replace/replace.hpp"

// join
#include "join/join.hpp"
#include "join/join.cpp" // only to avoid linker error with template<typename T> in header file

#endif /* main_h */
