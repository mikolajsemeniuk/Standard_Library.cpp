//
//  main.cpp
//
//  Created by Mikołaj Semeniuk on 04/04/2020.
//  Copyright © 2020 Mikołaj Semeniuk. All rights reserved.
//


#include <iostream>
#include <map>

using namespace std;

template <class T>
void display (std::map<T, T> &m)
{
    for (auto& i : m)
        cout << i.first << " " << i.second << endl;
}

template <class T>
void init (std::map<T, T> &m)
{
    m.insert(pair<int, int>(5, 100)); // insert into map
    
    m.count(2) // returns 1 if key already exists and false if key doesn't exist
    
    map<int, int> m2(m.begin(), m.end()); // assing elements of m to newly declared map m2
    
    m.erase(m.begin(), m.find(3)); // remove all elements lower than 3
    m.erase(3); // remove elements which key is equal 3
    m.erase(m.begin(), m.end()); // remove all elements
}

int main ()
{
    map<int, int> m = { { 1, 20 }, { 2, 40 }, { 3, 60 }, { 4, 80 } };
    init(m);
    cout << "\nm: " << endl;
    display(m);
    return 0;
}
